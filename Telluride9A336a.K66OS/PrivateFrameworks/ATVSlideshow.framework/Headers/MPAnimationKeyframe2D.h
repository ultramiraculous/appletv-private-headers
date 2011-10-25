/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MPAnimationKeyframe2D : MPAnimationKeyframe {
@private
	CGPoint _point;	// 20 = 0x14
}
@property(assign, nonatomic) CGPoint point;	// G=0x3425d9e5; S=0x3425da01; @synthesize=_point
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time;	// 0x3425d531
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x3425d581
- (id)initKeyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x3425d5d1
- (id)initWithCoder:(id)coder;	// 0x3425d779
- (id)copyWithZone:(NSZone *)zone;	// 0x3425d665
- (id)description;	// 0x3425d88d
- (void)encodeWithCoder:(id)coder;	// 0x3425d6bd
- (id)keyframe;	// 0x3425fb2d
// declared property getter: - (CGPoint)point;	// 0x3425d9e5
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x3425da01
@end

