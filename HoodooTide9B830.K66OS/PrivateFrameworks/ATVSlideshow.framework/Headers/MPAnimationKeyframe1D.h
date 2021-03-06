/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MPAnimationKeyframe1D : MPAnimationKeyframe {
@private
	float _scalar;	// 20 = 0x14
}
@property(assign, nonatomic) float scalar;	// G=0x320140fd; S=0x3201410d; @synthesize=_scalar
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time;	// 0x32013d4d
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x32013d99
- (id)initKeyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x32013de5
- (id)initWithCoder:(id)coder;	// 0x32013f1d
- (id)copyWithZone:(NSZone *)zone;	// 0x32013fad
- (id)description;	// 0x32014001
- (void)encodeWithCoder:(id)coder;	// 0x32013e81
- (id)keyframe;	// 0x320168e9
// declared property getter: - (float)scalar;	// 0x320140fd
// declared property setter: - (void)setScalar:(float)scalar;	// 0x3201410d
@end

