//
//  OpenCVutils.hpp
//  IrLibSwift
//
//  Created by Vsevolod Didkovskiy on 30.09.2021.
//  Copyright © 2021 Smart Riteil. All rights reserved.
//

#ifndef OpenCVutils_hpp
#define OpenCVutils_hpp

#include <stdio.h>
#import <opencv2/highgui.hpp>
#import <opencv2/core.hpp>
#import <opencv2/imgproc.hpp>
#import <opencv2/calib3d.hpp>

#if __has_feature(objc_bool)
#define YES __objc_yes
#define NO  __objc_no
#else
#define YES ((BOOL)1)
#define NO  ((BOOL)0)
#endif

class OpenCVImageProcessing{
    
public:
    
    cv::Mat resizedMatWithPath(cv::String path);
    
    void findContours(const cv::Mat& mat,
                      std::vector<std::vector<cv::Point>>&,
                      std::vector<cv::Vec4i>&,
                      int retr,
                      int method,
                      cv::Point offset);
    
};

#endif

