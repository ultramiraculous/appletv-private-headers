/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIStatusBarAnimationParameters : NSObject {
	double _startTime;	// 4 = 0x4
	double _duration;	// 12 = 0xc
	int _curve;	// 20 = 0x14
}
@property(assign, nonatomic) int curve;	// G=0x30ce50ad; S=0x30f343ed; @synthesize=_curve
@property(assign, nonatomic) double duration;	// G=0x30ce5095; S=0x30d643d9; @synthesize=_duration
@property(assign, nonatomic) double startTime;	// G=0x30d643ed; S=0x30f343d9; @synthesize=_startTime
- (id)init;	// 0x30f3439d
- (id)initWithDefaultParameters;	// 0x30ce5045
- (id)initWithEmptyParameters;	// 0x30f343ad
// declared property getter: - (int)curve;	// 0x30ce50ad
// declared property getter: - (double)duration;	// 0x30ce5095
// declared property setter: - (void)setCurve:(int)curve;	// 0x30f343ed
// declared property setter: - (void)setDuration:(double)duration;	// 0x30d643d9
// declared property setter: - (void)setStartTime:(double)time;	// 0x30f343d9
// declared property getter: - (double)startTime;	// 0x30d643ed
@end

