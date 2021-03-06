/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl, BRProgressBarWidget, NSString;

__attribute__((visibility("hidden")))
@interface ATVSWUProgressView : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
	BRProgressBarWidget *_progress;	// 52 = 0x34
	BRTextControl *_text;	// 56 = 0x38
	NSString *_secondaryProgressImagePath;	// 60 = 0x3c
	float _lastProgressPercentage;	// 64 = 0x40
	float _lastAXProgressPercentage;	// 68 = 0x44
}
@property(readonly, retain) NSString *secondaryProgressImagePath;	// G=0x33137751; converted property
- (id)init;	// 0x33136dd5
- (id)initForUpdateProgress;	// 0x33136ee9
- (id)accessibilityLabel;	// 0x33137761
- (void)controlWasActivated;	// 0x331370e5
- (void)dealloc;	// 0x3313705d
- (void)layoutSubcontrols;	// 0x33137119
// converted property getter: - (id)secondaryProgressImagePath;	// 0x33137751
- (void)setUpdatePercentage:(float)percentage;	// 0x331376c9
@end

