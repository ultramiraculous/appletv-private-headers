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
@property(assign, nonatomic) CGPoint point;	// G=0x320147b1; S=0x320147cd; @synthesize=_point
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time;	// 0x32014309
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x32014359
- (id)initKeyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x320143a9
- (id)initWithCoder:(id)coder;	// 0x3201454d
- (id)copyWithZone:(NSZone *)zone;	// 0x3201443d
- (id)description;	// 0x32014661
- (void)encodeWithCoder:(id)coder;	// 0x32014495
- (id)keyframe;	// 0x320168f9
// declared property getter: - (CGPoint)point;	// 0x320147b1
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x320147cd
@end

