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
@property(assign, nonatomic) double duration;	// G=0x35ccac4d; S=0x35ccac65; @synthesize=_duration
@property(assign, nonatomic) double previousPauseDuration;	// G=0x35ccaca5; S=0x35ccacbd; @synthesize=_previousPauseDuration
@property(assign, nonatomic) double previousPauseTimeInterval;	// G=0x35ccac79; S=0x35ccac91; @synthesize=_previousPauseTimeInterval
@property(assign, nonatomic) double timeInterval;	// G=0x35ccac21; S=0x35ccac39; @synthesize=_timeInterval
- (CGRect)accessibilityFrame;	// 0x35ccab7d
- (id)accessibilityLabel;	// 0x35cca8b5
- (unsigned long long)accessibilityTraits;	// 0x35ccabe1
- (id)accessibilityValue;	// 0x35cca935
// declared property getter: - (double)duration;	// 0x35ccac4d
- (BOOL)isAccessibilityElement;	// 0x35cca899
// declared property getter: - (double)previousPauseDuration;	// 0x35ccaca5
// declared property getter: - (double)previousPauseTimeInterval;	// 0x35ccac79
// declared property setter: - (void)setDuration:(double)duration;	// 0x35ccac65
// declared property setter: - (void)setPreviousPauseDuration:(double)duration;	// 0x35ccacbd
// declared property setter: - (void)setPreviousPauseTimeInterval:(double)interval;	// 0x35ccac91
// declared property setter: - (void)setTimeInterval:(double)interval;	// 0x35ccac39
// declared property getter: - (double)timeInterval;	// 0x35ccac21
@end

