/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UINavigationItem, UIFont;

__attribute__((visibility("hidden")))
@interface UINavigationItemView : UIView {
	UIFont *_font;	// 84 = 0x54
	UINavigationItem *_item;	// 88 = 0x58
	float _titleWidth;	// 92 = 0x5c
	BOOL _titleAutosizesToFit;	// 96 = 0x60
	UIView *_topCrossView;	// 100 = 0x64
	UIView *_bottomCrossView;	// 104 = 0x68
	BOOL _isCrossFading;	// 108 = 0x6c
	int _lineBreakMode;	// 112 = 0x70
}
@property(retain) UIFont *font;	// G=0x32e80ad9; S=0x32e80a95; converted property
@property(assign) BOOL titleAutoresizesToFit;	// G=0x32e80a85; S=0x32cee46d; converted property
- (id)initWithNavigationItem:(id)navigationItem;	// 0x32cee395
- (void)_cleanUpCrossView;	// 0x32e80ea1
- (void)_crossFadeHiddingButton:(BOOL)button;	// 0x32e80da1
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x32d09e15
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x32d09d15
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x32d09bed
- (id)_defaultFont;	// 0x32d09b59
- (void)_prepareCrossViewsForNewSize:(CGSize)newSize;	// 0x32e80b4d
- (void)_resetTitleWidth;	// 0x32cf1c35
- (id)_scriptingInfo;	// 0x32e80ae9
- (void)_setLineBreakMode:(int)mode;	// 0x32cf2221
- (float)_titleWidth;	// 0x32d0959d
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x32d09c99
- (void)drawRect:(CGRect)rect;	// 0x32d09a75
- (void)drawText:(id)text inRect:(CGRect)rect barStyle:(int)style;	// 0x32d09649
// converted property getter: - (id)font;	// 0x32e80ad9
- (id)navigationItem;	// 0x32e80a71
// converted property setter: - (void)setFont:(id)font;	// 0x32e80a95
- (void)setFrame:(CGRect)frame;	// 0x32cb7ed5
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x32cee46d
- (id)title;	// 0x32d6c0c5
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x32e80a85
@end
