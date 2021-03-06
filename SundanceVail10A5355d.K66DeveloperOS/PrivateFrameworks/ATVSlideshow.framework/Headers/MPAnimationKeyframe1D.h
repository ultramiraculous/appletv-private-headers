/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationKeyframe.h"


@interface MPAnimationKeyframe1D : MPAnimationKeyframe {
	float _scalar;	// 44 = 0x2c
}
@property(assign, nonatomic) float scalar;	// G=0x32012531; S=0x32012541; @synthesize=_scalar
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time;	// 0x320121a5
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x320121f1
- (id)initKeyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x3201223d
- (id)initWithCoder:(id)coder;	// 0x32012349
- (id)copyWithZone:(NSZone *)zone;	// 0x320123d5
- (id)description;	// 0x32012429
- (void)encodeWithCoder:(id)coder;	// 0x320122ad
- (id)keyframe;	// 0x32014921
// declared property getter: - (float)scalar;	// 0x32012531
// declared property setter: - (void)setScalar:(float)scalar;	// 0x32012541
@end

