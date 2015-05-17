#ifndef IMAGEHOLDER_HPP
#define IMAGEHOLDER_HPP

#include <opencv2/opencv.hpp>
#include <memory>
#include <string>

class ImageHolder {
public:
    ImageHolder();
    ImageHolder(std::string path);
    bool IsLoaded();
    void Load(std::string path);
    void Save(std::string path);
private:
    std::shared_ptr<cv::Mat> image_;
};

#endif
