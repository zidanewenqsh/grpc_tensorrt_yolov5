#include <grpc++/grpc++.h>
// #include "postprocess_gpu.h"
#include "InferenceManager.h"
#include "Yolov5.h"
#include "yolov5_service.grpc.pb.h"
#include <opencv2/opencv.hpp>
#include <vector>

// #include "InferenceManager.h"
// #include "ServerConfig.h"
// #include "Yolo.h"
#include "YoloPool.h"   // 假设YoloPool的定义在这个文件中
#include "MemoryPool.h" // 假设MemoryPool的定义在这个文件中
#include "MemoryPoolGpu.h" // 假设MemoryPool的定义在这个文件中
#include "YoloUtils.h"
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using yolov5::ImageData;
using yolov5::InferenceResult;
using yolov5::ObjectDetection;
using yolov5::YOLOv5Service;



// 实现gRPC服务
class YOLOv5ServiceImpl final : public YOLOv5Service::Service, public InferenceManager {
public:
    YOLOv5ServiceImpl(size_t pool_size, size_t threads, const std::string& modelname):
        InferenceManager(pool_size, threads, modelname){}
private:
    Status Infer(ServerContext* context, const ImageData* request, InferenceResult* reply) override {
        InferenceResult result;


        auto conn = dbPool.getConnection();
        // if (!conn) {
        //     // 使用 conn 进行数据库操作
        //     // ...
        //     LOG_FATAL("getConnection failed");
        //     exit(-1);
        // }
        // LOG_INFO("getConnection success");
        


        // 将ImageData转换为cv::Mat
        cv::Mat image(request->height(), request->width(), CV_8UC3, (void*)request->image().c_str());
        // 执行推理
        std::string name = "yolov5s";

        // 这里添加YOLOv5的推理代码，并填充result
        auto yolo = yoloPool.acquire();
        auto yolov5 = dynamic_cast<Yolov5*>(yolo.get());

        void *cpuYoloMemory = cpuMemoryPool.allocate();
        void *gpuYoloMemory = gpuMemoryPool.allocate();

        std::shared_ptr<Data> data = std::make_shared<ImageData_t>();
        ImageData_t* imgdata = dynamic_cast<ImageData_t*>(data.get());
        yolov5->setMemory(cpuYoloMemory, gpuYoloMemory, poolSize);
        yolov5->make_imagedata(image, imgdata);
        yolov5->inference(data.get());
        void *boxes_;
        int num_boxes = yolov5->get_box(&boxes_);
        // 执行YOLOv5推理
        // auto [boxes, num_boxes] = RunYOLOv5Inference(image);
        gBox *boxes = (gBox*)boxes_;
        // 遍历所有检测框并填充结果
        for (int i = 0; i < num_boxes; ++i) {
            gBox& box = boxes[i];
            if (box.remove == 1) continue; // 检查是否保留该检测框
            ObjectDetection* detection = result.add_detections();
            detection->set_xmin(box.x1);
            detection->set_ymin(box.y1);
            detection->set_xmax(box.x2);
            detection->set_ymax(box.y2);
            detection->set_score(box.prob);
            detection->set_label(box.label);
            // insertDetectionResult(conn, 1, "person", box.prob, box.x1, box.y1, box.x2, box.y2, getCurrentDateTime());
        }


        *reply = result;
        
        yolov5->reset();
        
        // 推理完成后释放内存
        cpuMemoryPool.deallocate(cpuYoloMemory);
        gpuMemoryPool.deallocate(gpuYoloMemory);

        // 将Yolo实例返回到池中
        yoloPool.release(std::move(yolo));
        dbPool.releaseConnection(conn);

        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    YOLOv5ServiceImpl service(1<<25, 1, "yolov5s");

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
    RunServer();
    return 0;
}
