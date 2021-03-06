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
@property(assign, nonatomic) int curve;	// G=0x31d1e469; S=0x31f1df09; @synthesize=_curve
@property(assign, nonatomic) double duration;	// G=0x31c7b291; S=0x31d3623d; @synthesize=_duration
@property(assign, nonatomic) double startTime;	// G=0x31d1e3dd; S=0x31f1def5; @synthesize=_startTime
- (id)init;	// 0x31f1dee5
- (id)initWithDefaultParameters;	// 0x31be151d
- (id)initWithEmptyParameters;	// 0x31c444e5
// declared property getter: - (int)curve;	// 0x31d1e469
// declared property getter: - (double)duration;	// 0x31c7b291
// declared property setter: - (void)setCurve:(int)curve;	// 0x31f1df09
// declared property setter: - (void)setDuration:(double)duration;	// 0x31d3623d
// declared property setter: - (void)setStartTime:(double)time;	// 0x31f1def5
// declared property getter: - (double)startTime;	// 0x31d1e3dd
@end

