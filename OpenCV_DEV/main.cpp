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
    
//    /Users/guillemramisadesoto/Documents/BASE_IMAGES/CMS_512.jpeg
    
    string path = "/Users/guillemramisadesoto/Documents/BASE_IMAGES/CMS_512.exr";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);

    return 0;
    
}
