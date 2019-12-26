// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat img1 = imread("marco-assmann-zUMk4bg8GFc-unsplash.jpg");
	Mat img2 = img1(Rect(700, 2000, 1920, 1080));

	img2 -= ~img2;
	namedWindow("img1", WINDOW_NORMAL);
	namedWindow("img2", WINDOW_NORMAL);
	imshow("img1", img1);
	imshow("img2", img2);
	waitKey(0);
	return 0;
}

