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
	TPButton *_button2;	// 120 = 0x78
	UIView *_well1;	// 124 = 0x7c
	UIView *_well2;	// 128 = 0x80
	UIView *_wellContainer;	// 132 = 0x84
}
@property(readonly, retain) TPButton *button2;	// G=0x357b5c75; converted property
+ (float)_wellPadding;	// 0x357b4e45
- (id)initForCallFailureWithFrame:(CGRect)frame;	// 0x357b52d5
- (id)initForEmergencyCallWithFrame:(CGRect)frame;	// 0x357b554d
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x357b4ff9
- (id)initForVideoChatWithFrame:(CGRect)frame;	// 0x357b5735
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x357b4e4d
- (float)_buttonWidth;	// 0x357b4db1
- (void)_layoutButtons;	// 0x357b5ed5
- (void)_layoutWells;	// 0x357b5d3d
- (void)_updateButtonSettings:(id)settings;	// 0x357b5a85
// converted property getter: - (id)button2;	// 0x357b5c75
- (void)dealloc;	// 0x357b59f9
- (void)layoutSubviews;	// 0x357b61dd
- (void)setButton2:(id)a2 andStyle:(BOOL)style;	// 0x357b5bcd
- (void)setButton:(id)button andStyle:(BOOL)style;	// 0x357b5b21
- (void)setDrawsSeparateWells:(BOOL)wells;	// 0x357b5c85
- (void)setWellAlpha:(float)alpha;	// 0x357b6231
@end

