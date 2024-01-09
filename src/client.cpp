#include <grpc++/grpc++.h>
#include "yolov5_service.grpc.pb.h"
#include <opencv2/opencv.hpp>
#include "Logger.h"
#include "YoloUtils.h"
#include "ClientConfig.h"
#include "MySQLConnPool.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using yolov5::ImageData;
using yolov5::InferenceResult;
using yolov5::YOLOv5Service;
class YOLOv5Client {
public:
    YOLOv5Client(std::shared_ptr<Channel> channel) : stub_(YOLOv5Service::NewStub(channel)) {}

    // 向服务器发送图像并接收推理结果
    InferenceResult Infer(const cv::Mat& img) {
        ImageData request;
        request.set_image(img.data, img.total() * img.elemSize());
        request.set_width(img.cols);
        request.set_height(img.rows);
        request.set_channels(img.channels());

        InferenceResult reply;
        ClientContext context;

        Status status = stub_->Infer(&context, request, &reply);

        if (status.ok()) {
            return reply;
        } else {
            std::cout << "gRPC call failed." << std::endl;
            return InferenceResult();
        }
    }

private:
    std::unique_ptr<YOLOv5Service::Stub> stub_;
};

int main(int argc, char** argv) {
    YOLOv5Client client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
#if 0 
    std::cout << "treat image bus " << std::endl;
    cv::Mat img = cv::imread("bus.jpg");
    InferenceResult result = client.Infer(img);
    // 处理和打印结果
    for (const auto& detection : result.detections()) {
        std::cout << "Detection: ";
        std::cout << "xmin: " << detection.xmin() << ", ";
        std::cout << "ymin: " << detection.ymin() << ", ";
        std::cout << "xmax: " << detection.xmax() << ", ";
        std::cout << "ymax: " << detection.ymax() << ", ";
        std::cout << "label: " << detection.label() << ", "; // 注意：class_() 而不是 class()，因为 class 是 C++ 的保留关键字
        std::cout << "score: " << detection.score() << std::endl;
    }
    std::cout << "treat image zidane " << std::endl;
    img = cv::imread("zidane.jpg");
    result = client.Infer(img);
    // 处理和打印结果
    for (const auto& detection : result.detections()) {
        std::cout << "Detection: ";
        std::cout << "xmin: " << detection.xmin() << ", ";
        std::cout << "ymin: " << detection.ymin() << ", ";
        std::cout << "xmax: " << detection.xmax() << ", ";
        std::cout << "ymax: " << detection.ymax() << ", ";
        std::cout << "label: " << detection.label() << ", "; // 注意：class_() 而不是 class()，因为 class 是 C++ 的保留关键字
        std::cout << "score: " << detection.score() << std::endl;
    }
#endif
#if 1
    Logger logger;
    logger.SetLevel(LogLevel::INFO);
    // std::string name = "yolov5s";
    // InferenceManager infermagager(1<<25, 8, name);
    std::string txtfile = "coco128.txt";
    auto imgfiles = readLinesFromFile(txtfile);
    // std::vector<Image> images;
    // std::vector<cv::Mat> images;
    auto start = std::chrono::high_resolution_clock::now();
    for (auto imgfile:imgfiles) {
        // printf("imgpath:%s\n", imgfile.c_str());
        LOGINFO("imgpath:%s\n", imgfile.c_str());
    
        auto imgname = extractFilename(imgfile);
        // printf("imgname:%s\n", imgname.c_str());
        std::string savepath = "./output/result_" + imgname; 
        // printf("savepath:%s\n", savepath.c_str());
        
        // 处理一张图片
        cv::Mat img = cv::imread(imgfile);
        if (img.empty()) {
            // printf("cv::imread %s failed\n", imgfile.c_str());
            LOGERROR("cv::imread %s failed\n", imgfile.c_str());
            continue;
            // return -1;
        }
        // images.push_back(img);
        InferenceResult result = client.Infer(img);
        for (const auto& detection : result.detections()) {
            int x1 = detection.xmin(); 
            int y1 = detection.ymin(); 
            int x2 = detection.xmax();
            int y2 = detection.ymax();
            int label = detection.label();
            auto name = cocolabels[label];
            auto caption = cv::format("%s %.2f", name, detection.score());
            auto color = colors[label % 10];
            cv::rectangle(img, cv::Point(x1, y1), cv::Point(x2, y2), color, 2);
            cv::putText(img, caption, cv::Point(x1, y1), cv::FONT_HERSHEY_SIMPLEX, 1, color, 2);
        }
        cv::imwrite(savepath, img);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Total Elapsed time: " << elapsed.count() << " seconds" << std::endl;
#endif
    return 0;
}
