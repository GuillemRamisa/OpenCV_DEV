//
//  main.cpp
//  OpenCV_DEV
//
//  Created by Guillem Ramisa de Soto on 29/1/24.
//

// include libs
// the opencv.hpp loads the headers for the all other opencv libs, in case of error, individual headers for lib should be included
// #include <opencv2/imgcodecs.hpp> ...

#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdint.h>


// namespaces
using namespace cv;
using namespace std;


int main() {
    
//    /*      /////// /////// /////// /////// ACCESS DATA /////// /////// /////// ///////     */
    
//        // basic read image
//    string pathJPEG = "CMS_512.jpeg";
//    Mat img = imread(pathJPEG);
////    imshow("JPEG", img);
//
//    // image dimentions
//    cout << img.size() << endl;
//
//    // rows / columns
//    cout <<"rows: "<< img.rows <<", columns: "<< img.cols <<endl;
//
//    // dimensions of the image (width * height) = 2 dimensions
//    cout << "image dimensions: " <<img.dims << endl;
//
//    // channels RGB = 3 channels
//    cout << "image channels: " <<img.channels() << endl;
//

    
    
    
//    /*      /////// /////// /////// /////// IMAGES /////// /////// /////// ///////     */

//    // declare and init a string with the path to the image
//    string pathJPEG = "CMS_512.jpeg";
//    string pathEXR  = "CMS_512.exr";
//
//    // create a Mat object and declare is as img
//    //      Mat object is a Matrix data type from OpenCV designed to store/handle images
//    //      imread() is a cv "routine" to determine the file format of the image based on the extension
//    //      It resturns a Mat structure
//    //      FLAGS can be declared:
//    //          IMREAD_COLOR: default, reads as BGR 8-bit
//    //          IMREAD_UNCHANGED: reads as is, all chanels included
//    //          IMREAD_GRAYSCALE: reads image as intensity
//    Mat img1 = imread(pathJPEG);
//    imshow("JPEG", img1);
//
//    // EXR images will load blank if no openexr lib is loaded, so to display them the flag IMREAD_UNCHANGED can be used
//    // EXR files will be displayed without EOTF
//    Mat img2 = imread(pathEXR, IMREAD_UNCHANGED);
//    imshow("EXR", img2);
//
//    // The image object will be delated if no DELAY is defined, so a waitKey function has to be used
//    // The waitKey function waits for an amount of time in miliseconds, 0 = infinite, 5000 = 5 seconds
//    // when the wait is over, the program continues and exits with return 0
//    waitKey(0);
//
    
//    // Visualizing individual channels using the split method
//    // basic read image
//    string pathJPEG = "CMS_512.jpeg";
//
//    // src and dst mat
//    Mat img = imread(pathJPEG);
//    // define the mat dimentions
//    Mat splitChannels[3];
//    // split image using split function
//    split(img, splitChannels);
//
//    // show channel by access
//    imshow("JPEG", splitChannels[1]);
//    waitKey(0);
//
    
    
    /*      /////// /////// /////// /////// VIDEO /////// /////// /////// ///////     */

//     VIDEO can be loaded as well
//
//     declare and init a string with the path to the image
//    string pathVIDEO = "CMSrotation.mp4";
//    VideoCapture cap(pathVIDEO);

    // a direct stream throug video device can be stup, but 'com.apple.security.device.camera' entitlement has to be TRUE
    // to do so: in the project "Signing & Capabilities" ---> Resource Access --> Camera: True
    // no mneed to specify a path, but a Input device index should be provided:
    // 0: default "auto device"
    // CAP_ANY: default "auto device"
    // all info regarding this module on: videoio.h
    

//    VideoCapture cap(CAP_ANY);
//    Mat img;
//
//    while (true) {
//        cap.read(img);
//        imshow("VIDEO", img);
//        waitKey(1);
//    }

    

//    //And of course all image filtering can be used on the captured image
//    VideoCapture cap2(CAP_ANY);
//
//    Mat img2;
//    Mat img_BLUR;
//    Mat img_EDGE;
//
//    while (true) {
//        cap2.read(img2);
//
//        GaussianBlur(img2, img_BLUR, Size(71, 71), 0, 0);
//        Canny(img_BLUR, img_EDGE, 30, 30);
//
//        imshow("VIDEO", img_BLUR);
//
//        waitKey(1);
//    }
    

    
//    /*      /////// /////// /////// /////// improc FUNCTIONS /////// /////// /////// ///////     */

//    // basic read image
//    string pathJPEG = "CMS_512.jpeg";
//    Mat img = imread(pathJPEG);
//    imshow("JPEG", img);
//
//    // function to convert to grayscale
//    // this function needs a 'converted image' a new MAT needs to be defined
//    // the function cvtCOLOR() allows for a TON of color conversions, check: improc.h // enum = ColorConversionCodes
//
//    // ****** OPENCV HAS FOR CONVENTION BGR ****** //
//
//    Mat img_GRAYSCALE;
//    cvtColor(img, img_GRAYSCALE, COLOR_BGR2GRAY);
//    imshow("GRAY", img_GRAYSCALE);
//
//    // Blur can be applied
//    // A new Mat needs to be created as a dst
//    // needs a Size(x,y) only "odd numbers" can be used
//    // and a sigma X, sigma y
//    Mat img_BLUR;
//    GaussianBlur(img, img_BLUR, Size(39, 39), 0, 0);
//    imshow("BLUR", img_BLUR);
//
//    // many different types of blur can be applied to an
//    // blur(, , );
//    // boxFilter(, , , );
//    // medianBlur(, , );
//
//    // median filter
//    // same issue, the size needs to be an off number
//    Mat img_MEDIAN;
//    medianBlur(img, img_MEDIAN, 231);
//    imshow("MEDIAN", img_MEDIAN);
//
//
//    // Edge detect operatins can be performed as well
//    Mat img_EDGE;
//    Canny(img_BLUR, img_EDGE, 50, 50);
//    imshow("EDGE", img_EDGE);
//
//    // Erode and dilate are possible as well
//    // but dilation and erosion need a kernel to be used in every pixel, to do that we need a new Mat that vreates a structure
//    // dilate and erode work the same way
//
//    Mat img_DILATED;
//    // this Mat kernel is a n*n kernel to be used
//    Mat kernel = getStructuringElement(MORPH_RECT, Size(7,7));
//    dilate(img_EDGE, img_DILATED, kernel);
//    imshow("DILATE", img_DILATED);
//    imshow("KERNEL", kernel);
//
//    // COLORMAPS!!
//
//    Mat img_COLORMAP;
//    applyColorMap(img, img_COLORMAP, 16);
//    imshow("COLORMAP", img_COLORMAP);

    
    
//    /*      /////// /////// /////// /////// RESIZE and CROP /////// /////// /////// ///////     */

//    // basic read image
//    string pathJPEG = "CMS_512.jpeg";
//    Mat img = imread(pathJPEG);
//    imshow("JPEG", img);
//
//    Mat img_RESIZE;
//    // with img.size() we can print the dimentions of the image loaded in the Mat
//    cout << img.size() << endl;
//
//    // several interpolation methods can be used with flags
//    // see enum InterpolationFlags in the imgproc.h for more info
//    resize( img, img_RESIZE, Size(512/2,512/2), INTER_CUBIC);
//
//    // aditionally, the resize size() values can be specified with floats in the arguments
//    // resize( img, img_RESIZE, Size(), 0.5,0.5, INTER_CUBIC);
//    imshow("RESIZE", img_RESIZE);
//
//    // The croping is done with a ROI
//    // A rect object needs to be created to use it as a crop
//    // the rect object is defined by (TopLeft_X, TopLeft_Y, width, heigh)
//    Mat img_ROI;
//    Rect roi(0,0,128,128);
//
//    // Then we will init the img_ROI with the img(roi)
//    img_ROI = img(roi);
//    imshow("CROP", img_ROI);

    
    
//    /*      /////// /////// /////// /////// DRAW SHAPES AND TEXTS /////// /////// /////// ///////     */

//    // To create an empty "canvas" we can define a new Mat and assign some parameters to an img
//    // the Mat object can have: sizeX, sizeY, the data type, and a Scalar()
//    // the datatype informs what kind of buffer we are going to create
//    //      CV_8UC3: 8 bit image = 256 values,  Unsigned = 0 to 255, C3 = RGB channels
//    //      Many data types can be used, check: interface.h
//    //      0 to 255 for CV_8U images
//    //      0 to 65535 for CV_16U images
//    //      0 to 1 for CV_32F images
//    // the Scalar function is a <vector> data type like that can be used to create a structure, check: types.h
//    Mat img_BLANK(512, 512, CV_8UC3, Scalar(255,128,128));
//
//    // to crate a circle call circle function
//    // Neds a center, so we use the Point() datatype that defines an X and Y coordinates
//    // Flags can be used to specify linetypes, check enum LineTypes in imgproc.h
//    circle(img_BLANK, Point(128,128), 60, Scalar(128,128,255),5, LINE_AA);
//
//    // to crate a rectange call circle function
//    // as all the primitives, methods/flags can be used to define the apearence, the FILLED as an example
//    Rect ROI(100,100,200,200);
//    rectangle(img_BLANK, ROI, Scalar(128,255,128), FILLED);
//    // A 2 Point method can be used to define the size shape
//    rectangle(img_BLANK, Point(150,150), Point(250,250), Scalar(255,255,255), 2, LINE_AA);
//
//    // to crate a line call line function
//    line(img_BLANK, Point(0,0), Point(512,512), Scalar(0,0,0), 1, LINE_AA);
//
//    // to create a text call putText function
//    // check imgproc.h for more info on methods
//    putText(img_BLANK, "149LAB", Point(128,400), FONT_HERSHEY_PLAIN, 3, Scalar(0,255,255), 2, LINE_AA);
//
//
//    imshow("CANVAS", img_BLANK);
//
//    waitKey(0);
    
//    /*      /////// /////// /////// /////// DRAW PIXELS!! /////// /////// /////// ///////     */
//
//    // basic read image
//    string pathJPEG = "CMS_512.jpeg";
//    Mat img = imread(pathJPEG);
//    int V = 10;
//
//    // 2D iterator
//    for (int x = 0; x < img.cols; x++)
//    {
//        for (int y = 0; y < img.rows; y++)
//        {
//            // mat.at<Vec3b>(x,y)[c] = value;
//            img.at<Vec3b>(x, y)[0] = img.at<Vec3b>(x, y)[0] * 0.5f;
//            img.at<Vec3b>(x, y)[1] = 0;
//            img.at<Vec3b>(x, y)[2] = 0;
//        }
//    }
//
//    img.at<uchar>(10, 10) = 0;
//
//    img.at<Vec3b>(10, 10)[0] = 0;
//    img.at<Vec3b>(10, 15)[1] = 0;
//    img.at<Vec3b>(10, 20)[2] = 0;
//
//    imshow("JPEG", img);
//    waitKey(0);


    /*      /////// /////// /////// /////// REMAP IMAGES /////// /////// /////// ///////     */

    //RGB = 012
    //BGR = 210
    //Y Cb Cr
    
    // G->R
    // B->G
    // R->0
    
    // basic read image
    string pathJPEG = "CMS_512.jpeg";
//    string pathJPEG = "/Users/guillemramisadesoto/Desktop/FOTOS/FOTOS_IMPRIMIR/OUTPUT/DSC_0125.JPG";
//    string pathJPEG = "CMS_512.exr";
    Mat img = imread(pathJPEG, IMREAD_UNCHANGED);
//    string pathJPEG = "CMS_3x3.jpeg";

//    string pathYCbCr = "CMS_YCbCr_512.jpeg";
//    Mat imgYCbCr = imread(pathYCbCr);
    
    Mat img_REMAPED = cv::Mat::zeros(img.size(), img.type());

    Mat img_YCbCr;
    cvtColor(img, img_YCbCr, COLOR_RGB2YCrCb);
 
    Mat img_YCbCr_corrected;
    cvtColor(img_YCbCr, img_YCbCr_corrected, COLOR_BGR2RGB);

    for(int r = 0; r < img.rows; r++)
    {
        for(int c = 0; c < img.cols; c++)
        {
            Vec3b rgbColorUV = img_YCbCr_corrected.at<Vec3b>(r,c);
            Vec3b rgbColor = img.at<Vec3b>(r,c);
            img_REMAPED.at<Vec3b>(rgbColorUV[1],rgbColorUV[0]) = rgbColor;
        }
    }

//    Mat img_out;
//    rotate(img_REMAPED, img_out, ROTATE_90_COUNTERCLOCKWISE);
    
    imshow("rgb", img);
//    imshow("img_out", img_out);
    
    
    imshow("imgYCbCr", img_REMAPED);
//    imshow("img_YCbCr_corrected", img_YCbCr_corrected);


    waitKey(0);

    
    
//    /*      /////// /////// /////// /////// COLOR CONVERSIONS /////// /////// /////// ///////     */

//    // basic read image
//    string pathJPEG = "CMS_512.jpeg";
//    Mat img = imread(pathJPEG);
//    Mat img_YCbCr, img_RGB;
//    cvtColor(img, img_YCbCr, COLOR_RGB2YCrCb);
//
//    cvtColor(img_YCbCr, img_RGB, COLOR_YCrCb2RGB);
//
//    imshow("JPEG", img);
//    imshow("YCbCr", img_YCbCr);
//    imshow("RGB", img_RGB);
//
//
//
//    waitKey(0);
    
//    destroyAllWindows();
    return 0;
    
}
