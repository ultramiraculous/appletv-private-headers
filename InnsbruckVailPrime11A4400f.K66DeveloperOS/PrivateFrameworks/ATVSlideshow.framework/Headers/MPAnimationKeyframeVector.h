/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationKeyframe.h"

@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe {
	MPVector *_vector;	// 44 = 0x2c
}
@property(copy, nonatomic) MPVector *vector;	// G=0x2fb49b0d; S=0x2fb499a9; @synthesize=_vector
+ (id)keyframeVectorWithVector:(id)vector atTime:(double)time;	// 0x2fb495cd
+ (id)keyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(unsigned)type;	// 0x2fb49619
- (id)initKeyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(unsigned)type;	// 0x2fb49665
- (id)initWithCoder:(id)coder;	// 0x2fb49825
- (id)copyWithZone:(NSZone *)zone;	// 0x2fb496f9
- (void)dealloc;	// 0x2fb49771
- (id)description;	// 0x2fb4989d
- (void)encodeWithCoder:(id)coder;	// 0x2fb497bd
- (id)keyframe;	// 0x2fb4aa29
// declared property setter: - (void)setVector:(id)vector;	// 0x2fb499a9
// declared property getter: - (id)vector;	// 0x2fb49b0d
@end

