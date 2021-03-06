/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class TPButton;

@interface TPCallWaitingButton : UIImageView {
	TPButton *_innerButton;	// 52 = 0x34
	unsigned _type : 1;	// 56 = 0x38
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x348538e1; S=0x34853905; converted property
+ (CGSize)defaultSizeForType:(int)type;	// 0x34853845
+ (float)defaultVerticalCenteringOffset;	// 0x348537f1
- (id)initBottomForIncomingCallWaiting;	// 0x34853bb5
- (id)initBottomForSecondIncomingCallWaiting;	// 0x34853aa9
- (id)initBottomForTTYWithTitle:(id)title;	// 0x348539e1
- (id)initTopForIncomingCallWaiting;	// 0x34853d21
- (id)initTopForTTY;	// 0x34853c69
- (id)initWithFrame:(CGRect)frame type:(int)type;	// 0x34853dd9
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x348539b5
- (void)addTarget:(id)target action:(SEL)action forEvents:(int)events;	// 0x34853955
- (void)dealloc;	// 0x348537f9
// converted property getter: - (BOOL)isEnabled;	// 0x348538e1
- (void)removeTarget:(id)target forControlEvents:(unsigned)controlEvents;	// 0x34853981
- (void)removeTarget:(id)target forEvents:(int)events;	// 0x34853929
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x34853905
@end

