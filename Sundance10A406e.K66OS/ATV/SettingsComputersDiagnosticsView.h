/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRWaitSpinnerControl, BRMenuView;

__attribute__((visibility("hidden")))
@interface SettingsComputersDiagnosticsView : BRControl {
	BRMenuView *_menuView;	// 84 = 0x54
	BRWaitSpinnerControl *_progressSpinner;	// 88 = 0x58
}
@property(readonly, retain) BRMenuView *menuView;	// G=0xb4141; converted property
@property(readonly, retain) BRWaitSpinnerControl *progressSpinner;	// G=0xb4155; converted property
- (id)init;	// 0xb3ed1
- (void).cxx_destruct;	// 0xb4169
- (void)layoutSubcontrols;	// 0xb4025
// converted property getter: - (id)menuView;	// 0xb4141
// converted property getter: - (id)progressSpinner;	// 0xb4155
@end

