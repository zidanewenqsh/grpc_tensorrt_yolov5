#include <grpc++/grpc++.h>
#include "yolov5_service.grpc.pb.h"
#include <opencv2/opencv.hpp>

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
    return 0;
}
