//
//  OpenCVImageOverwhiteAnalyzer.h
//  IrLibSwift
//
//  Created by Vsevolod Didkovskiy on 30.09.2021.
//  Copyright © 2021 Smart Riteil. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenCVImageOverwhiteAnalyzer : NSObject

- (int)analyzedValueWithPath:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
