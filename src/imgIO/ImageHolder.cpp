#include "ImageHolder.hpp"

using namespace std;
using namespace cv;

ImageHolder::ImageHolder() {
    image_.reset(new Mat());
}

ImageHolder::ImageHolder(std::string path) {
    image_.reset(new Mat());
    Load(path);
}

bool ImageHolder::IsLoaded() {
    return image_->data;
}

void ImageHolder::Load(string path) {
    *image_ = imread(path.c_str(), CV_LOAD_IMAGE_GRAYSCALE);
}

void ImageHolder::Save(string path) {
    imwrite(path, *image_);
}
