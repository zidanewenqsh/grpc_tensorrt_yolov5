#include <iostream>
#include <chrono>
#include <iomanip>
#include <sstream>

std::string getCurrentDateTime() {
    // 获取当前时间点
    auto now = std::chrono::system_clock::now();
    // 转换为时间_t类型
    auto now_c = std::chrono::system_clock::to_time_t(now);
    // 转换为tm结构
    std::tm now_tm = *std::localtime(&now_c);

    // 使用stringstream进行格式化
    std::stringstream ss;
    ss << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

int main() {
    // 获取当前日期和时间的字符串表示
    std::string currentDateTime = getCurrentDateTime();
    std::cout << "Current Date and Time: " << currentDateTime << std::endl;

    // 示例：使用当前日期和时间
    // auto conn = /* 获取数据库连接 */;
    // insertImageInfo(conn, "image.jpg", currentDateTime, "camera1");
    // insertDetectionResult(conn, 1, "person", 0.99, 100, 100, 200, 200, currentDateTime);

    return 0;
}
