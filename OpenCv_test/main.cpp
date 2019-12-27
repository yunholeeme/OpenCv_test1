// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void MatOp3();

int main()
{
	MatOp3();

	return 0;
}

void MatOp3()
{
	Mat img1 = imread("marco-assmann-zUMk4bg8GFc-unsplash.jpg");

	cout << "Width: " << img1.cols << endl;
	cout << "Height: " << img1.rows << endl;
	Mat img2 = img1(Rect(700, 2000, 1920, 1080));
	Mat img3 = img1(Rect(700, 2000, 1920, 1080)).clone();

	Mat img4 = img1.rowRange(300, 500);
	Mat img5 = img1.row(700);
	Mat img6 = img1.row(800);

	img2 -= ~img2;
	namedWindow("img1", WINDOW_NORMAL);
	namedWindow("img2", WINDOW_NORMAL);
	namedWindow("img3", WINDOW_NORMAL);
	namedWindow("img4", WINDOW_NORMAL);
	namedWindow("img5", WINDOW_AUTOSIZE);
	namedWindow("img6", WINDOW_AUTOSIZE);

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);
	imshow("img4", img4);
	imshow("img5", img5);
	imshow("img6", img6);

	waitKey(0);
	destroyAllWindows();
}
