/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MRUtilities : NSObject {
}
+ (id)executeScript:(id)script withHeader:(id)header andAttributes:(id)attributes;	// 0x3216da95
+ (void)initialize;	// 0x3216c239
+ (CGColorSpaceRef)newColorSpaceForDevice;	// 0x3216da91
+ (int)operatingSystemMajorVersion;	// 0x3216dfa5
+ (int)operatingSystemMinorVersion;	// 0x3216ded5
+ (int)operationQueueConcurrentOperationCount;	// 0x3216de8d
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath inPlug:(id)plug;	// 0x3216caa9
+ (CGPoint)valueForPointAnimationPath:(id)pointAnimationPath inPlug:(id)plug atTime:(double)time defaultsTo:(CGPoint)to previousKeyPoint:(CGPoint *)point nextKeyPoint:(CGPoint *)point6;	// 0x3216c7bd
+ (float)valueForScalarAnimationPath:(id)scalarAnimationPath inPlug:(id)plug atTime:(double)time defaultsTo:(float)to previousKeyValue:(float *)value nextKeyValue:(float *)value6;	// 0x3216c555
@end

