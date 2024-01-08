#include <grpc++/grpc++.h>
// #include "postprocess_gpu.h"
#include "yolov5_service.grpc.pb.h"
#include <opencv2/opencv.hpp>
#include <vector>

#include "InferenceManager.h"
// #include "ServerConfig.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using yolov5::ImageData;
using yolov5::InferenceResult;
using yolov5::ObjectDetection;
using yolov5::YOLOv5Service;

// 假设YOLOv5Model是一个能够处理图像并返回检测结果的类
class YOLOv5Model : public InferenceManager {
public:
    YOLOv5Model(size_t pool_size, size_t threads, const std::string& modelname):
        InferenceManager(pool_size, threads, modelname){}

    InferenceResult Infer(const cv::Mat& image) {
        InferenceResult result;
        // 这里添加YOLOv5的推理代码，并填充result
        auto yolo = yoloPool.acquire();

        void *cpuYoloMemory = cpuMemoryPool.allocate();
        void *gpuYoloMemory = gpuMemoryPool.allocate();

        std::shared_ptr<Data> data = std::make_shared<ImageData_t>();
        ImageData_t* imgdata = dynamic_cast<ImageData_t*>(data.get());
        yolo->setMemory(cpuYoloMemory, gpuYoloMemory, poolSize);
        yolo->make_imagedata(image, imgdata);
        yolo->inference(data.get());
        void *boxes_;
        int num_boxes = yolo->get_box(&boxes_);
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
        }

        // 推理完成后释放内存
        cpuMemoryPool.deallocate(cpuYoloMemory);
        gpuMemoryPool.deallocate(gpuYoloMemory);

        // 将Yolo实例返回到池中
        yoloPool.release(std::move(yolo));

        
        return result;
    }
};

// YOLOv5Model model(1<<25, 1, "yolov5s");
// static YOLOv5Model model(1<<25, 1, "yolov5s");
// 实现gRPC服务
class YOLOv5ServiceImpl final : public YOLOv5Service::Service {
    Status Infer(ServerContext* context, const ImageData* request, InferenceResult* reply) override {
        // 将ImageData转换为cv::Mat
        cv::Mat image(request->height(), request->width(), CV_8UC3, (void*)request->image().c_str());
        // 执行推理
        std::string name = "yolov5s";
        YOLOv5Model model(1<<25, 1, name);
        // YOLOv5Model model(1<<25, 1, "yolov5s");
        *reply = model.Infer(image);
        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    YOLOv5ServiceImpl service;

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
