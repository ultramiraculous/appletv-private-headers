/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView {
@private
	int _style;	// 48 = 0x30
	UIImageView *_glowView;	// 52 = 0x34
	BOOL _glowEnabled;	// 56 = 0x38
	BOOL _suppressGlow;	// 57 = 0x39
}
@property(readonly, assign) int style;	// G=0x3004f261; converted property
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x3004eddd
- (id)_baseImageForStyle:(int)style;	// 0x3004ef55
- (id)_glowImageForStyle:(int)style;	// 0x30328861
- (id)_imageNameForStyle:(int)style;	// 0x3004efbd
- (void)_setGlowAnimationEnabled:(BOOL)enabled waitForNextCycle:(BOOL)nextCycle;	// 0x3003cce1
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)nextCycle;	// 0x30328485
- (void)_stopGlowAnimation;	// 0x3003cd31
- (BOOL)_styleCanGlow:(int)glow;	// 0x30328441
- (void)dealloc;	// 0x301856bd
- (void)setGlowAnimationEnabled:(BOOL)enabled;	// 0x30050c51
- (void)setSuppressesGlow:(BOOL)glow;	// 0x3003ccb1
// converted property getter: - (int)style;	// 0x3004f261
@end
