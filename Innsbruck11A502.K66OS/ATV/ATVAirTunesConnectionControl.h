/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface ATVAirTunesConnectionControl : BRControl {
	BRControl *_background;	// 84 = 0x54
	BRWaitSpinnerControl *_spinner;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
}
- (id)init;	// 0xae925
- (void)dealloc;	// 0xaea7d
- (void)layoutSubcontrols;	// 0xaeb41
- (void)setStatus:(id)status;	// 0xaeaf5
@end

