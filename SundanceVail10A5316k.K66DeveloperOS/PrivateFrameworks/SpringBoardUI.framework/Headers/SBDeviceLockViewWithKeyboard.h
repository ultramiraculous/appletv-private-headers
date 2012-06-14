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
- (void)_acceptOrCancelReturnKeyPress;	// 0x349b8ea9
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x349b81d1
- (void)_layoutEntryView;	// 0x349b8df1
- (void)_layoutForCurrentOrientation;	// 0x349b8ded
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x349b8ca9
- (BOOL)becomeFirstResponder;	// 0x349b8519
- (void)dealloc;	// 0x349b849d
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x349b8d35
- (void)geometryChanged:(id)changed;	// 0x349b8dc9
- (BOOL)isKeypadMinimized;	// 0x349b86b5
- (CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x349b8a35
- (id)keypadView;	// 0x349b86a5
- (void)maximize;	// 0x349b8941
- (void)minimize;	// 0x349b8851
- (BOOL)resignFirstResponder;	// 0x349b863d
- (void)returnKeyPressed:(id)pressed;	// 0x349b8a31
- (void)setInterfaceOrientation:(int)orientation;	// 0x349b8b21
- (void)setMinimized:(BOOL)minimized;	// 0x349b86d9
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x349b8c51
@end
