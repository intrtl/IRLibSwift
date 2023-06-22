//
//  OpenCVPanoramaStitcher.h
//  IrLibSwift
//
//  Created by Алексей Сулейманов on 05.10.2021.
//  Copyright © 2021 Smart Riteil. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenCVPanoramaStitcher: NSObject

- (instancetype)init;
- (nullable UIImage *)stitchedPanoramaWithNewPhoto:(UIImage *)image;
- (void)reset;

@end

NS_ASSUME_NONNULL_END
