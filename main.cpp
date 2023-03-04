#include "opencv2/opencv.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "daheng-img.h"
//using namespace cv;
//using namespace std;
GX_DEV_HANDLE hDevice = NULL;
GX_FRAME_DATA frameData = { 0 };
GX_STATUS status;
Mat image;
int main(int argc, char* argv[])
{

    DahengInit(hDevice, frameData,status);
    cout << "hDevice" << hDevice << endl;
    while (waitKey(1) != 27)
    {
        GetImage(hDevice,frameData,status,image);
    }

    StopGetImage(hDevice,frameData,status);

    return 0;
}
