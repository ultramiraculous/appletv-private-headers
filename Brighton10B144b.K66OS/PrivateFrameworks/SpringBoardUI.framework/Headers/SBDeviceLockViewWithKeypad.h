/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockView.h"

@class SBDeviceLockKeypad;

@interface SBDeviceLockViewWithKeypad : SBDeviceLockView {
	SBDeviceLockKeypad *_keypad;	// 104 = 0x68
	BOOL _cancelingTouches;	// 108 = 0x6c
}
@property(assign) BOOL playsKeyboardClicks;	// G=0x35477215; S=0x35477239; converted property
@property(assign) BOOL showsEmergencyCallButton;	// G=0x35477259; S=0x3547727d; converted property
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3547707d
- (void)dealloc;	// 0x35477131
- (void)deviceLockEntryFieldDidAcceptEntry:(id)deviceLockEntryField;	// 0x35477325
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;	// 0x3547729d
- (id)keypadView;	// 0x3547717d
- (void)phonePad:(id)pad keyDown:(BOOL)down;	// 0x35477389
- (void)phonePad:(id)pad keyUp:(BOOL)up;	// 0x354773cd
// converted property getter: - (BOOL)playsKeyboardClicks;	// 0x35477215
- (void)setPasscode:(id)passcode;	// 0x3547718d
// converted property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x35477239
// converted property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x3547727d
// converted property getter: - (BOOL)showsEmergencyCallButton;	// 0x35477259
@end

