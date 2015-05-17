#ifndef IMAGEDISPLAYER_HPP
#define IMAGEDISPLAYER_HPP

class ImageDisplayer {
public:
    ImageDisplayer();
    ImageDisplayer(std::string widowName);
    Display();
private:
    std::shared_ptr<cv::Mat> image_;
    const std::string windowName_;
}

#endif
