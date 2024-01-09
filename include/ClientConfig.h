#ifndef __SERVERCONFIG__
#define __SERVERCONFIG__

static const char* cocolabels[] = {
    "person", "bicycle", "car", "motorcycle", "airplane",
    "bus", "train", "truck", "boat", "traffic light", "fire hydrant",
    "stop sign", "parking meter", "bench", "bird", "cat", "dog", "horse",
    "sheep", "cow", "elephant", "bear", "zebra", "giraffe", "backpack",
    "umbrella", "handbag", "tie", "suitcase", "frisbee", "skis",
    "snowboard", "sports ball", "kite", "baseball bat", "baseball glove",
    "skateboard", "surfboard", "tennis racket", "bottle", "wine glass",
    "cup", "fork", "knife", "spoon", "bowl", "banana", "apple", "sandwich",
    "orange", "broccoli", "carrot", "hot dog", "pizza", "donut", "cake",
    "chair", "couch", "potted plant", "bed", "dining table", "toilet", "tv",
    "laptop", "mouse", "remote", "keyboard", "cell phone", "microwave",
    "oven", "toaster", "sink", "refrigerator", "book", "clock", "vase",
    "scissors", "teddy bear", "hair drier", "toothbrush"
};

static std::vector<cv::Scalar> colors = {
    cv::Scalar(255, 0, 0),      // 蓝色
    cv::Scalar(0, 255, 0),      // 绿色
    cv::Scalar(0, 0, 255),      // 红色
    cv::Scalar(0, 255, 255),    // 黄色
    cv::Scalar(255, 0, 255),    // 洋红色（品红）
    cv::Scalar(255, 255, 0),    // 青色
    cv::Scalar(0, 165, 255),    // 橙色
    cv::Scalar(128, 0, 128),    // 紫色
    cv::Scalar(255, 192, 203),  // 粉色
    cv::Scalar(128, 128, 128)   // 灰色
};


#endif