/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"

@class NSDictionary, NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {
	double mDuration;	// 48 = 0x30
	NSString *mFunction;	// 56 = 0x38
	NSDictionary *mFunctionParameters;	// 60 = 0x3c
	double mFunctionTimeOffset;	// 64 = 0x40
	double mFunctionTimeFactor;	// 72 = 0x48
	double mInnerEaseInControl;	// 80 = 0x50
	double mInnerEaseOutControl;	// 88 = 0x58
}
@property(assign, nonatomic) double duration;	// G=0x33dab1b5; S=0x33daa95d; @synthesize=mDuration
@property(copy, nonatomic) NSString *function;	// G=0x33daa9e1; S=0x33daaad9; 
@property(retain, nonatomic) NSDictionary *functionParameters;	// G=0x33daac61; S=0x33daad59; @synthesize=mFunctionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x33dab1e5; S=0x33daaf65; @synthesize=mFunctionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x33dab1cd; S=0x33daaee1; @synthesize=mFunctionTimeOffset
@property(assign, nonatomic) double innerEaseInControl;	// G=0x33dab1fd; S=0x33daafe9; @synthesize=mInnerEaseInControl
@property(assign, nonatomic) double innerEaseOutControl;	// G=0x33dab215; S=0x33dab06d; @synthesize=mInnerEaseOutControl
- (id)init;	// 0x33daa501
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33daa561
- (void)demolish;	// 0x33daa701
- (id)description;	// 0x33dab0f1
// declared property getter: - (double)duration;	// 0x33dab1b5
// declared property getter: - (id)function;	// 0x33daa9e1
// declared property getter: - (id)functionParameters;	// 0x33daac61
// declared property getter: - (double)functionTimeFactor;	// 0x33dab1e5
// declared property getter: - (double)functionTimeOffset;	// 0x33dab1cd
- (id)imprint;	// 0x33daa779
// declared property getter: - (double)innerEaseInControl;	// 0x33dab1fd
// declared property getter: - (double)innerEaseOutControl;	// 0x33dab215
// declared property setter: - (void)setDuration:(double)duration;	// 0x33daa95d
// declared property setter: - (void)setFunction:(id)function;	// 0x33daaad9
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x33daad59
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x33daaf65
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x33daaee1
// declared property setter: - (void)setInnerEaseInControl:(double)control;	// 0x33daafe9
// declared property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x33dab06d
@end

