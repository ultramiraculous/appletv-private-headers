/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRMenuView, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface SettingsComputersDiagnosticsView : BRControl {
	BRMenuView *_menuView;	// 84 = 0x54
	BRWaitSpinnerControl *_progressSpinner;	// 88 = 0x58
}
@property(readonly, retain) BRMenuView *menuView;	// G=0x30e0b9; converted property
@property(readonly, retain) BRWaitSpinnerControl *progressSpinner;	// G=0x30e0cd; converted property
- (id)init;	// 0x30de49
- (void).cxx_destruct;	// 0x30e0e1
- (void)layoutSubcontrols;	// 0x30df95
// converted property getter: - (id)menuView;	// 0x30e0b9
// converted property getter: - (id)progressSpinner;	// 0x30e0cd
@end

