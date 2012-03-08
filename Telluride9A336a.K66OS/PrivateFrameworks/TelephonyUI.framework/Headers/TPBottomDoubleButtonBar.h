/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomSingleButtonBar.h"

@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
	TPButton *_button2;	// 72 = 0x48
	UIView *_well2;	// 76 = 0x4c
	UIView *_wellContainer;	// 80 = 0x50
	unsigned _drawSeparator : 1;	// 84 = 0x54
}
@property(readonly, retain) TPButton *button2;	// G=0x31711f5d; converted property
+ (float)_wellPadding;	// 0x31712055
- (id)initForCallFailureWithFrame:(CGRect)frame;	// 0x31712bc5
- (id)initForEmergencyCallWithFrame:(CGRect)frame;	// 0x3171298d
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x31712e55
- (id)initForVideoChatWithFrame:(CGRect)frame;	// 0x3171268d
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x31713169
- (float)_buttonWidth;	// 0x31711f6d
- (void)_updateButtonSettings:(id)settings;	// 0x31712509
// converted property getter: - (id)button2;	// 0x31711f5d
- (void)dealloc;	// 0x31712619
- (void)drawRect:(CGRect)rect;	// 0x31712009
- (void)setButton2:(id)a2 andStyle:(BOOL)style;	// 0x31712175
- (void)setButton:(id)button andStyle:(BOOL)style;	// 0x3171233d
- (void)setDrawsSeparateWells:(BOOL)wells;	// 0x3171209d
@end
