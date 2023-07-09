#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    
    Mat image = imread("input.jpg", IMREAD_COLOR);
    
    if (image.empty())
    {
        cout << "Could not open or find the image!" << endl;
        return -1;
    }

    Mat grayImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    imwrite("output.jpg", grayImage);

    namedWindow("Original Image", WINDOW_AUTOSIZE);
    namedWindow("Grayscale Image", WINDOW_AUTOSIZE);
    imshow("Original Image", image);
    imshow("Grayscale Image", grayImage);
    waitKey(0);

    return 0;
}
