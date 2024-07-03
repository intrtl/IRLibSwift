//
//  RealogramCoordinatesTransformer.h
//  IrLibSwift
//
//  Created by Alexander Shmakov on 18.03.2022.
//  Copyright © 2022 Smart Riteil. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef RealogramCoordinatesTransformer_h
#define RealogramCoordinatesTransformer_h

@protocol RecognitionResultsCoordinatesTransformer

@property (nonatomic) CGFloat offsetScaleX;
@property (nonatomic) CGFloat offsetScaleY;
@property (nonatomic) CGFloat offsetTranslationY;
@property (nonatomic) CGFloat offsetTranslationX;
@property (nonatomic) CGFloat resizeFactor;

- (void)updateBitmapParamsWithSourceWidth:(CGFloat)sourceWidth
                             sourceHeigth:(CGFloat)sourceHeight
                             inViewWidth:(CGFloat)scaledWidth
                             inViewHeight:(CGFloat)scaledHeight
                             translationX:(CGFloat)translationX
                             translationY:(CGFloat)translationY;

- (void)updateMatrixInQueue:(dispatch_queue_t)countQueue
                  viewWidth:(CGFloat)viewWidth
                 viewHeight:(CGFloat)viewHeight
                afterUpdate:(void (^)())updateHandler;

- (CGRect)transformedLineCoordinatesFromX1:(CGFloat)x1 y1:(CGFloat)y1 x2:(CGFloat)x2 y2:(CGFloat)y2;
- (CGRect)transformedCoordinatesFromRect:(CGRect)rect;

@end

#endif /* RealogramCoordinatesTransformer_h */
