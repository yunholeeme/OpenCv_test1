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
	
	cout << img1.depth() << " " << img1.channels() << endl;
	cout << img1.elemSize() << endl;
	cout << img1.elemSize1() << endl;
	cout << img1.empty() << endl;			// 비어있는 행렬이면 true를 반환
	cout << img1.isContinuous() << endl;
	cout << img1.isSubmatrix() << endl;
	cout << "img1.size() " << img1.size() << endl;
	cout << "img1.total() " << img1.total() << endl;
	cout << "img1.type() " << img1.type() << endl;

	/* 그레이 스케일 영상인지 컬러 영상인지를 확인 */
	if (img1.type() == CV_8UC1)
		cout << "img1 is a grayscale image." << endl;
	else if (img1.type() == CV_8UC3)
		cout << "img1 is a truecolor image." << endl;

	float data[] = { 2.f, 1.414f, 3.f, 1.732f };
	Mat mat1(2, 2, CV_32FC1, data);
	std::cout << mat1 << std::endl;


	Mat img2 = img1(Rect(100, 200, 500, 100));

	cout << "img2 : " << img2.isSubmatrix() << endl;		// img1의 부분행렬

	Mat img3 = img1(Rect(100, 200, 500, 100)).clone();

	cout << "img3 : " << img3.isSubmatrix() << endl;		// img1의 부분행렬 아님

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
