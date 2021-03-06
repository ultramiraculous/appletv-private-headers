/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class NSString, BRTextControl, BRProgressBarWidget, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSWUProgressView : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	BRProgressBarWidget *_progress;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
	NSString *_secondaryProgressImagePath;	// 96 = 0x60
	float _lastProgressPercentage;	// 100 = 0x64
	float _lastAXProgressPercentage;	// 104 = 0x68
}
@property(readonly, retain) NSString *secondaryProgressImagePath;	// G=0x25bba9; converted property
- (id)init;	// 0x25b239
- (id)initForUpdateProgress;	// 0x25b361
- (id)accessibilityLabel;	// 0x25bbb9
- (void)controlWasActivated;	// 0x25b56d
- (void)dealloc;	// 0x25b4e1
- (void)layoutSubcontrols;	// 0x25b5a1
// converted property getter: - (id)secondaryProgressImagePath;	// 0x25bba9
- (void)setUpdatePercentage:(float)percentage;	// 0x25bb21
@end

