/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"


__attribute__((visibility("hidden")))
@interface UITexturedButton : UIButton {
}
- (id)initWithFrame:(CGRect)frame;	// 0x301a4dbd
- (id)backgroundImageForState:(unsigned)state;	// 0x30295ae1
- (int)buttonType;	// 0x30295a21
- (void)drawRect:(CGRect)rect;	// 0x301a54d5
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x30295add
- (void)setHighlighted:(BOOL)highlighted;	// 0x30295a25
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x30295acd
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x30295ad5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30295a65
- (id)titleColorForState:(unsigned)state;	// 0x30295ad1
- (id)titleShadowColorForState:(unsigned)state;	// 0x30295ad9
@end
