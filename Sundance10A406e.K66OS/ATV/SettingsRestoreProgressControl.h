/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface SettingsRestoreProgressControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	BRProgressBarWidget *_progress;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
}
- (id)init;	// 0xb24ad
- (void).cxx_destruct;	// 0xb2ae9
- (void)layoutSubcontrols;	// 0xb2731
- (void)updatePercentComplete:(id)complete andTimeToComplete:(id)complete2;	// 0xb2a99
- (void)updateText:(id)text;	// 0xb29b9
@end

