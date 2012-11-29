/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "SBDeviceLockView.h"

@class UIKeyboard;

@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView {
	UIKeyboard *_keyboard;	// 104 = 0x68
	BOOL _isAnimating;	// 108 = 0x6c
	BOOL _wasMinimizedWhenAnimationStarted;	// 109 = 0x6d
	BOOL _triedToMinMaxWhileRotating;	// 110 = 0x6e
	BOOL _previousKeyboardShowedInlineCandidates;	// 111 = 0x6f
}
- (void)_acceptOrCancelReturnKeyPress;	// 0x303f6ae9
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x303f5d51
- (void)_layoutEntryView;	// 0x303f6a31
- (void)_layoutForCurrentOrientation;	// 0x303f6a2d
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x303f68f5
- (BOOL)becomeFirstResponder;	// 0x303f60e9
- (BOOL)canMinMaxKeyboard;	// 0x303f601d
- (void)dealloc;	// 0x303f606d
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303f6981
- (void)geometryChanged:(id)changed;	// 0x303f6a09
- (BOOL)isKeypadMinimized;	// 0x303f629d
- (CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x303f668d
- (id)keypadView;	// 0x303f628d
- (void)maximize;	// 0x303f6581
- (void)minimize;	// 0x303f6479
- (BOOL)resignFirstResponder;	// 0x303f6225
- (void)returnKeyPressed:(id)pressed;	// 0x303f6689
- (void)setInterfaceOrientation:(int)orientation;	// 0x303f676d
- (void)setMinimized:(BOOL)minimized;	// 0x303f62e9
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303f689d
@end
