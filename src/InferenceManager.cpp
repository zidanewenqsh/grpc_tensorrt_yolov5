#include "InferenceManager.h"

InferenceManager::InferenceManager(size_t pool_size, size_t threads, const std::string& modelname)
    : poolSize(pool_size), cpuMemoryPool(pool_size, threads), 
        gpuMemoryPool(pool_size, threads), 
        threadPool(threads), yoloPool(modelname, threads) {
    // YoloFactory::getInstance().setName(modelname);
    
    // 构造函数内容
    auto yolo = yoloPool.acquire();
    // 初始化
    if (yolo->build() < 0) {
        LOG_ERROR("build failed");
        // std::cout << "build failed" << std::endl;
        exit(-1);
    }
    yoloPool.release(std::move(yolo));
}

void InferenceManager::processImages(const std::vector<Image>& images) {
    std::vector<std::future<Result>> results;

    for (const auto& image : images) {
        results.emplace_back(
            threadPool.enqueue([this, &image]() {
                return processSingleImage(image);
            })
        );
    }

    // 收集结果...
    for (auto& result : results) {
        // 处理每个结果
        handleResult(result.get());
    }
}

Result InferenceManager::processSingleImage(const Image& image) {
    // 从YoloPool获取一个Yolo实例
    auto yolo = yoloPool.acquire();
    auto yolov5 = dynamic_cast<Yolov5*>(yolo.get());

    // 从内存池中分配内存给Yolo实例
    // void* yoloMemory = memoryPool.allocate();
    // size_t size = 1 << 25;
    // MemPool cpumem(size);
    // MemPoolGpu gpumem(size);

    // void *cpuptr = cpumem.allocate();
    // void *gpuptr = gpumem.allocate();

    cv::Mat img = image.img;
    std::string imgname = image.imgname;
    std::string srcpath = image.srcpath;
    std::string savepath = image.savepath;

    void *cpuYoloMemory = cpuMemoryPool.allocate();
    void *gpuYoloMemory = gpuMemoryPool.allocate();


    std::shared_ptr<Data> data = std::make_shared<ImageData_t>();
    ImageData_t* imgdata = dynamic_cast<ImageData_t*>(data.get());
    yolov5->setMemory(cpuYoloMemory, gpuYoloMemory, poolSize);
    yolov5->make_imagedata(img, imgdata);

    // 使用Yolo实例进行推理
    Result result = yolo->inference(data.get());
    // printf("Result:%d\n", result);
    yolov5->drawimg(img, savepath);
    // Result result = 0;

    // 推理完成后释放内存
    cpuMemoryPool.deallocate(cpuYoloMemory);
    gpuMemoryPool.deallocate(gpuYoloMemory);

    // 将Yolo实例返回到池中
    yoloPool.release(std::move(yolo));

    return result;
}

void InferenceManager::handleResult(const Result& result) {
    // 处理推理结果的逻辑
}