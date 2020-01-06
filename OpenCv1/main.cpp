// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat img1 = imread("rim.jpg", IMREAD_COLOR);
	
	Mat img2 = img1;
	
	Mat img3 = img1.clone();
	Mat img4;
	img1.copyTo(img4);
	img1.setTo(Scalar(0, 0, 255));
	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);
	imshow("img4", img4);


	waitKey(0);

	return 0;
}

