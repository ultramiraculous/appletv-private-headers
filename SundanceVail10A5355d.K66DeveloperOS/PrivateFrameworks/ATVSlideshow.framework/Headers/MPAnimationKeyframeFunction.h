/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationKeyframe.h"

@class NSString, NSDictionary;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe {
	double _duration;	// 44 = 0x2c
	NSString *_function;	// 52 = 0x34
	NSDictionary *_functionParameters;	// 56 = 0x38
	double _functionTimeOffset;	// 60 = 0x3c
	double _functionTimeFactor;	// 68 = 0x44
	double _innerEaseInControl;	// 76 = 0x4c
	double _innerEaseOutControl;	// 84 = 0x54
}
@property(assign, nonatomic) double duration;	// G=0x320147bd; S=0x320141e1; @synthesize=_duration
@property(copy, nonatomic) NSString *function;	// G=0x320147d5; S=0x320145e5; @synthesize=_function
@property(copy, nonatomic) NSDictionary *functionParameters;	// G=0x320147e9; S=0x320146d1; @synthesize=_functionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x32014815; S=0x32014379; @synthesize=_functionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x320147fd; S=0x320142ad; @synthesize=_functionTimeOffset
@property(assign, nonatomic) double innerEaseInControl;	// G=0x3201482d; S=0x32014445; @synthesize=_innerEaseInControl
@property(assign, nonatomic) double innerEaseOutControl;	// G=0x32014845; S=0x32014515; @synthesize=_innerEaseOutControl
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x32013a8d
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time withDuration:(double)duration;	// 0x32013a39
- (id)initKeyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x32013ae1
- (id)initWithCoder:(id)coder;	// 0x32013da9
- (id)copyWithZone:(NSZone *)zone;	// 0x32013f39
- (void)dealloc;	// 0x32014095
- (id)description;	// 0x3201410d
// declared property getter: - (double)duration;	// 0x320147bd
- (void)encodeWithCoder:(id)coder;	// 0x32013bdd
// declared property getter: - (id)function;	// 0x320147d5
// declared property getter: - (id)functionParameters;	// 0x320147e9
// declared property getter: - (double)functionTimeFactor;	// 0x32014815
// declared property getter: - (double)functionTimeOffset;	// 0x320147fd
// declared property getter: - (double)innerEaseInControl;	// 0x3201482d
// declared property getter: - (double)innerEaseOutControl;	// 0x32014845
- (id)keyframe;	// 0x32014951
// declared property setter: - (void)setDuration:(double)duration;	// 0x320141e1
// declared property setter: - (void)setFunction:(id)function;	// 0x320145e5
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x320146d1
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x32014379
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x320142ad
// declared property setter: - (void)setInnerEaseInControl:(double)control;	// 0x32014445
// declared property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x32014515
@end
