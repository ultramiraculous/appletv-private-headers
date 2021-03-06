/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class _UINavigationBarAppearanceStorage, UIColor;

__attribute__((visibility("hidden")))
@interface _UINavigationBarBackground : UIImageView {
	UIColor *_tintColor;	// 96 = 0x60
	_UINavigationBarAppearanceStorage *_appearanceStorage;	// 100 = 0x64
	UIImageView *_shadowView;	// 104 = 0x68
	struct {
		unsigned isTranslucent : 1;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
	} _navbarFlags;	// 108 = 0x6c
}
@property(retain, nonatomic, setter=_setShadowView:) UIImageView *_shadowView;	// G=0x30972e8d; S=0x3090f175; @synthesize
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;	// G=0x30912505; S=0x30972aad; @synthesize=_appearanceStorage
@property(assign, nonatomic) int barStyle;	// G=0x30aa5361; S=0x3097a8f1; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30aa5351; S=0x30aa52f9; 
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x30aa5379; S=0x3097ac55; 
- (id)initWithFrame:(CGRect)frame barStyle:(int)style tintColor:(id)color appearance:(id)appearance isTranslucent:(BOOL)translucent;	// 0x3090e5d5
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x308da269
- (id)_customShadowImageForSearchBar;	// 0x30aa53ad
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x309138b9
- (void)_setFrame:(CGRect)frame forceUpdateBackgroundImage:(BOOL)image;	// 0x3090e6f5
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x30aa538d
// declared property setter: - (void)_setShadowView:(id)view;	// 0x3090f175
// declared property getter: - (id)_shadowView;	// 0x30972e8d
// declared property getter: - (id)appearanceStorage;	// 0x30912505
// declared property getter: - (int)barStyle;	// 0x30aa5361
- (void)dealloc;	// 0x309767fd
- (void)didMoveToSuperview;	// 0x3090edc9
// declared property getter: - (BOOL)isTranslucent;	// 0x30aa5379
// declared property setter: - (void)setAppearanceStorage:(id)storage;	// 0x30972aad
// declared property setter: - (void)setBarStyle:(int)style;	// 0x3097a8f1
- (void)setBounds:(CGRect)bounds;	// 0x30aa5439
- (void)setFrame:(CGRect)frame;	// 0x3090e6c5
// declared property setter: - (void)setTintColor:(id)color;	// 0x30aa52f9
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x3097ac55
// declared property getter: - (id)tintColor;	// 0x30aa5351
- (void)updateBackgroundImage;	// 0x3090e7ed
@end

