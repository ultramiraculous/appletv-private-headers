/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <UIImageView.h> // Unknown library


@interface TLVibrationRecorderProgressViewDotImageView : UIImageView {
	double _timeInterval;	// 100 = 0x64
	double _duration;	// 108 = 0x6c
	double _previousPauseTimeInterval;	// 116 = 0x74
	double _previousPauseDuration;	// 124 = 0x7c
}
@property(assign, nonatomic) double duration;	// G=0x35a43db5; S=0x35a43dcd; @synthesize=_duration
@property(assign, nonatomic) double previousPauseDuration;	// G=0x35a43e0d; S=0x35a43e25; @synthesize=_previousPauseDuration
@property(assign, nonatomic) double previousPauseTimeInterval;	// G=0x35a43de1; S=0x35a43df9; @synthesize=_previousPauseTimeInterval
@property(assign, nonatomic) double timeInterval;	// G=0x35a43d89; S=0x35a43da1; @synthesize=_timeInterval
- (CGRect)accessibilityFrame;	// 0x35a43ce5
- (id)accessibilityLabel;	// 0x35a43a1d
- (unsigned long long)accessibilityTraits;	// 0x35a43d49
- (id)accessibilityValue;	// 0x35a43a9d
// declared property getter: - (double)duration;	// 0x35a43db5
- (BOOL)isAccessibilityElement;	// 0x35a43a01
// declared property getter: - (double)previousPauseDuration;	// 0x35a43e0d
// declared property getter: - (double)previousPauseTimeInterval;	// 0x35a43de1
// declared property setter: - (void)setDuration:(double)duration;	// 0x35a43dcd
// declared property setter: - (void)setPreviousPauseDuration:(double)duration;	// 0x35a43e25
// declared property setter: - (void)setPreviousPauseTimeInterval:(double)interval;	// 0x35a43df9
// declared property setter: - (void)setTimeInterval:(double)interval;	// 0x35a43da1
// declared property getter: - (double)timeInterval;	// 0x35a43d89
@end
