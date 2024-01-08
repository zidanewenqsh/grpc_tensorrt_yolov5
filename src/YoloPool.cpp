#include "YoloPool.h"
#include "Logger.h"

YoloPool::YoloPool(std::string modelname): modelName(modelname){
    // 构造函数内容（如果有的话）
}

std::unique_ptr<Yolov5> YoloPool::acquire() {
    std::lock_guard<std::mutex> lock(poolMutex);
    if (pool.empty()) {
        LOG_INFO("yolo pool acquire new");
        return std::make_unique<Yolov5>(modelName); // 创建新实例
    } else {
        LOG_INFO("yolo pool acquire");
        auto yolo = std::move(pool.front());
        pool.pop();
        return yolo;
    }
}

void YoloPool::release(std::unique_ptr<Yolov5> yolo) {
    std::lock_guard<std::mutex> lock(poolMutex);
    pool.push(std::move(yolo));
    LOG_INFO("yolo pool release");
}
