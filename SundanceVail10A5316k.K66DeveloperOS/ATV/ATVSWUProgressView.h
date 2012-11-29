/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class NSString, BRImageControl, BRTextControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface ATVSWUProgressView : BRControl {
	BRImageControl *_image;	// 80 = 0x50
	BRProgressBarWidget *_progress;	// 84 = 0x54
	BRTextControl *_text;	// 88 = 0x58
	NSString *_secondaryProgressImagePath;	// 92 = 0x5c
	float _lastProgressPercentage;	// 96 = 0x60
	float _lastAXProgressPercentage;	// 100 = 0x64
}
@property(readonly, retain) NSString *secondaryProgressImagePath;	// G=0x22d209; converted property
- (id)init;	// 0x22c8a5
- (id)initForUpdateProgress;	// 0x22c9cd
- (id)accessibilityLabel;	// 0x22d219
- (void)controlWasActivated;	// 0x22cbd9
- (void)dealloc;	// 0x22cb4d
- (void)layoutSubcontrols;	// 0x22cc0d
// converted property getter: - (id)secondaryProgressImagePath;	// 0x22d209
- (void)setUpdatePercentage:(float)percentage;	// 0x22d181
@end
