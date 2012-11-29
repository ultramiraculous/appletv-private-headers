/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <UIProgressView.h> // Unknown library

@class UIImage, NSMutableArray;

@interface TLVibrationRecorderProgressView : UIProgressView {
	double _currentTimeInterval;	// 128 = 0x80
	double _maximumTimeInterval;	// 136 = 0x88
	UIImage *_resizableDotImage;	// 144 = 0x90
	CGSize _dotSize;	// 148 = 0x94
	CGSize _dotInsets;	// 156 = 0x9c
	NSMutableArray *_dots;	// 164 = 0xa4
	id _dotForCurrentVibrationComponent;	// 168 = 0xa8
	double _currentVibrationComponentDidBeginTimeInterval;	// 172 = 0xac
	double _previousPauseDidBeginTimeInterval;	// 180 = 0xb4
	int _roundedCornersCompensationDelayMode;	// 188 = 0xbc
}
@property(assign, nonatomic) double currentTimeInterval;	// G=0x34eaba09; S=0x34eab0e1; @synthesize=_currentTimeInterval
@property(assign, nonatomic) int roundedCornersCompensationDelayMode;	// G=0x34eaba21; S=0x34eaba31; @synthesize=_roundedCornersCompensationDelayMode
- (id)initWithProgressViewStyle:(int)progressViewStyle maximumTimeInterval:(double)interval;	// 0x34eaaec1
- (double)_cappedValueForTimeInterval:(double)timeInterval;	// 0x34eab7c9
- (CGRect)_frameForDotAtTimeInterval:(double)timeInterval duration:(double)duration;	// 0x34eab811
- (CGRect)accessibilityFrame;	// 0x34eab765
- (id)accessibilityLabel;	// 0x34eab6a5
- (id)accessibilityValue;	// 0x34eab6b5
- (void)clearAllVibrationComponents;	// 0x34eab56d
// declared property getter: - (double)currentTimeInterval;	// 0x34eaba09
- (void)dealloc;	// 0x34eab069
- (BOOL)isAccessibilityElement;	// 0x34eab675
// declared property getter: - (int)roundedCornersCompensationDelayMode;	// 0x34eaba21
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x34eab0e1
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(int)mode;	// 0x34eaba31
- (void)vibrationComponentDidEnd;	// 0x34eab4f1
- (void)vibrationComponentDidStart;	// 0x34eab319
@end
