//
//  main.cpp
//  OpenCV_DEV
//
//  Created by Guillem Ramisa de Soto on 29/1/24.
//

#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;
using namespace std;



int main() {
    
    string path = "CMS_512.jpeg";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);

    return 0;
    
}
