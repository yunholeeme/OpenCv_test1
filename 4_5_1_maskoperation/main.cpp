// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void mask_copyTo()
{
	Mat src = imread("IMG_4119.JPG", IMREAD_COLOR);
	Mat mask = imread("back.bmp", IMREAD_GRAYSCALE);
	Mat dst = imread("field.jpg", IMREAD_COLOR);

	if (src.empty() || mask.empty() || dst.empty())
	{
		cerr << "Image load error" << endl;
		return;
	}

	src.copyTo(dst, mask);

	imshow("dst", dst);
	waitKey(0);
	destroyAllWindows();
}
void mask_setTo()
{
	Mat src = imread("hr.jpg", IMREAD_COLOR);
	Mat mask = imread("mask2.bmp", IMREAD_GRAYSCALE);

	if (src.empty() || mask.empty())
	{
		cerr << "Image load failed!" << endl;
		return;
	}

	src.setTo(Scalar(0, 0, 255), mask);

	imshow("src", src);
	imshow("mask", mask);

	waitKey(0);
	destroyAllWindows();
}

int main()
{
	//mask_setTo();
	mask_copyTo();

	return 0;
}

