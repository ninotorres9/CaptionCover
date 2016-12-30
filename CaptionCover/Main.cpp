
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace cv;
using namespace std;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	string filename = "D:\\code\\CaptionCover\\CaptionCover\\black.jpg";
	string filename_0 = "D:\\code\\CaptionCover\\CaptionCover\\black_0.jpg";		// Ö»ÓÐ±ß¿ò

	Mat img = imread(filename_0);
	namedWindow("ÕÚµ²´°¿Ú");//, WINDOW_NORMAL);

	HWND hWnd = (HWND)cvGetWindowHandle("ÕÚµ²´°¿Ú");
	HWND hRawWnd = ::GetParent(hWnd);
	if (hRawWnd != NULL) {
		BOOL bRet = ::SetWindowPos(hRawWnd, HWND_TOPMOST, 0, 0, 0, 0, 0);
		assert(bRet);
	}

	imshow("ÕÚµ²´°¿Ú", img);

	while (true)
	{
		waitKey();
	}

}
