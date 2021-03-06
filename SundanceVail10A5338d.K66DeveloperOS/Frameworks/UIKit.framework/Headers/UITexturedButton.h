/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIButton.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UITexturedButton : UIButton {
}
- (id)initWithFrame:(CGRect)frame;	// 0x30d735bd
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x30e5e311
- (id)backgroundImageForState:(unsigned)state;	// 0x30e5e37d
- (int)buttonType;	// 0x30e5e2cd
- (void)drawRect:(CGRect)rect;	// 0x30d73cbd
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x30e5e379
- (void)setHighlighted:(BOOL)highlighted;	// 0x30e5e2d1
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x30e5e369
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x30e5e371
- (id)titleColorForState:(unsigned)state;	// 0x30e5e36d
- (id)titleShadowColorForState:(unsigned)state;	// 0x30e5e375
@end

