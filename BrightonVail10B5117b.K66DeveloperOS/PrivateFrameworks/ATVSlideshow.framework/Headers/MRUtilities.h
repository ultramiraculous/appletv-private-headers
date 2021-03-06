/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MRUtilities : NSObject {
}
+ (id)executeScript:(id)script withHeader:(id)header andAttributes:(id)attributes;	// 0x333f203d
+ (void)initialize;	// 0x333f07e1
+ (CGColorSpaceRef)newColorSpaceForDevice;	// 0x333f2039
+ (int)operatingSystemMajorVersion;	// 0x333f254d
+ (int)operatingSystemMinorVersion;	// 0x333f247d
+ (int)operationQueueConcurrentOperationCount;	// 0x333f2435
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath inPlug:(id)plug;	// 0x333f1051
+ (CGPoint)valueForPointAnimationPath:(id)pointAnimationPath inPlug:(id)plug atTime:(double)time defaultsTo:(CGPoint)to previousKeyPoint:(CGPoint *)point nextKeyPoint:(CGPoint *)point6;	// 0x333f0d65
+ (float)valueForScalarAnimationPath:(id)scalarAnimationPath inPlug:(id)plug atTime:(double)time defaultsTo:(float)to previousKeyValue:(float *)value nextKeyValue:(float *)value6;	// 0x333f0afd
@end

