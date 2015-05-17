#include <stdio.h>
#include "ImageHolder.hpp"

int main(int argc, char** argv ) {
    if ( argc != 2 ) {
        std::cout << "usage: DisplayImage.out <Image_Path>\n";
        return -1;
    }

    ImageHolder testImage(std::string("../image.jpg"));
    
    if (!testImage.IsLoaded()) {
        std::cout << "No image data\n";
        return -1;
    }

    /*Mat gray_image;
    cvtColor (image, gray_image, CV_BGR2GRAY);

    imwrite( "./Gray_Image.jpg", gray_image);

    namedWindow("Image", CV_WINDOW_AUTOSIZE );
    namedWindow("Gray Image", CV_WINDOW_AUTOSIZE);

    imshow("Image", image);
    imshow("Gray Image", gray_image);

    waitKey(0);*/

    return 0;
}
