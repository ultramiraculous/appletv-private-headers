/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"

@class NSString, NSDictionary;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {
	double mDuration;	// 32 = 0x20
	NSString *mFunction;	// 40 = 0x28
	NSDictionary *mFunctionParameters;	// 44 = 0x2c
	double mFunctionTimeOffset;	// 48 = 0x30
	double mFunctionTimeFactor;	// 56 = 0x38
	float mInnerEaseInControl;	// 64 = 0x40
	float mInnerEaseOutControl;	// 68 = 0x44
}
@property(assign, nonatomic) double duration;	// G=0x333f9c89; S=0x333f9295; @synthesize=mDuration
@property(copy, nonatomic) NSString *function;	// G=0x333f931d; S=0x333f9421; @synthesize=mFunction
@property(retain, nonatomic) NSDictionary *functionParameters;	// G=0x333f9579; S=0x333f967d; @synthesize=mFunctionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x333f9cb9; S=0x333f985d; @synthesize=mFunctionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x333f9ca1; S=0x333f97d5; @synthesize=mFunctionTimeOffset
@property(assign, nonatomic) float innerEaseInControl;	// G=0x333f9cd1; S=0x333f98e5; @synthesize=mInnerEaseInControl
@property(assign, nonatomic) float innerEaseOutControl;	// G=0x333f9ce1; S=0x333f996d; @synthesize=mInnerEaseOutControl
+ (id)keyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x333f8d5d
- (id)init;	// 0x333f8dfd
- (id)initWithImprint:(id)imprint;	// 0x333f8e59
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x333f9ae9
- (void)demolish;	// 0x333f9031
- (id)description;	// 0x333f99f5
// declared property getter: - (double)duration;	// 0x333f9c89
// declared property getter: - (id)function;	// 0x333f931d
// declared property getter: - (id)functionParameters;	// 0x333f9579
// declared property getter: - (double)functionTimeFactor;	// 0x333f9cb9
// declared property getter: - (double)functionTimeOffset;	// 0x333f9ca1
- (id)imprint;	// 0x333f90a9
// declared property getter: - (float)innerEaseInControl;	// 0x333f9cd1
// declared property getter: - (float)innerEaseOutControl;	// 0x333f9ce1
// declared property setter: - (void)setDuration:(double)duration;	// 0x333f9295
// declared property setter: - (void)setFunction:(id)function;	// 0x333f9421
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x333f967d
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x333f985d
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x333f97d5
// declared property setter: - (void)setInnerEaseInControl:(float)control;	// 0x333f98e5
// declared property setter: - (void)setInnerEaseOutControl:(float)control;	// 0x333f996d
@end
