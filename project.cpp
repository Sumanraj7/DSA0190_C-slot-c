#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat kernel = cv::Mat::ones(5, 5, CV_8U);
    
    std::cout << "Kernel Matrix:" << std::endl;
    std::cout << kernel << std::endl;

    std::string path = "C:/Users/logesh/Downloads/pictures.jpg";
    cv::Mat img = cv::imread(path);

    if (!img.empty()) {
        cv::Mat imgGray;
        cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);

        cv::imshow("Original Image", img);
        cv::imshow("GrayScale Image", imgGray);
        cv::waitKey(0);
        cv::destroyAllWindows();
    } else {
        std::cout << "Error: Unable to load the image from the specified path." << std::endl;
    }

    return 0;
}
