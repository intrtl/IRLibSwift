//
//  RealogramCoordinatesTransformer.h
//  IrLibSwift
//
//  Created by Alexander Shmakov on 01.09.2021.
//  Copyright © 2021 Smart Riteil. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RealogramCoordinatesTransformer : NSObject

@property (nonatomic) CGFloat offsetScaleX;
@property (nonatomic) CGFloat offsetScaleY;
@property (nonatomic) CGFloat offsetTranslationY;
@property (nonatomic) CGFloat offsetTranslationX;

- (void)updateBitmapParamsWithWidth:(CGFloat)width
                             heigth:(CGFloat)height
                       translationX:(CGFloat)translationX
                       translationY:(CGFloat)translationY;

- (void)updateMatrixFromImagePath:(NSString *)imagePath
                          inQueue:(dispatch_queue_t)countQueue
                        viewWidth:(CGFloat)viewWidth
                       viewHeight:(CGFloat)viewHeight
                      afterUpdate:(void (^)())updateHandler;

- (CGRect)transformedCoordinatesFromRect:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
