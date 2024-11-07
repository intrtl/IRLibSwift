//
//  UIImage+OpenCV.h
//  IrLibSwift
//
//  Created by Алексей Сулейманов on 06.10.2021.
//  Copyright © 2021 Smart Riteil. All rights reserved.
//

#import "OpenCVImageProcessing.h"
#import <UIKit/UIKit.h>

@interface UIImage(convertToMat)
- (cv::Mat)CVMat;
@end

