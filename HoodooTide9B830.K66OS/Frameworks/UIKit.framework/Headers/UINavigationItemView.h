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
@private
	UIFont *_font;	// 48 = 0x30
	UINavigationItem *_item;	// 52 = 0x34
	float _titleWidth;	// 56 = 0x38
	BOOL _titleAutosizesToFit;	// 60 = 0x3c
	UIView *_topCrossView;	// 64 = 0x40
	UIView *_bottomCrossView;	// 68 = 0x44
	BOOL _isCrossFading;	// 72 = 0x48
	int _lineBreakMode;	// 76 = 0x4c
}
@property(retain) UIFont *font;	// G=0x301e9289; S=0x301e9245; converted property
@property(assign) BOOL titleAutoresizesToFit;	// G=0x301e9235; S=0x3005906d; converted property
- (id)initWithNavigationItem:(id)navigationItem;	// 0x30058e31
- (void)_cleanUpCrossView;	// 0x301e95fd
- (void)_crossFadeHiddingButton:(BOOL)button;	// 0x301e94fd
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x30087231
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x300870e9
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x30086fa5
- (id)_defaultFont;	// 0x30086f6d
- (void)_prepareCrossViewsForNewSize:(CGSize)newSize;	// 0x301e9299
- (void)_resetTitleWidth;	// 0x30072221
- (id)_scriptingInfo;	// 0x30162b41
- (void)_setLineBreakMode:(int)mode;	// 0x30072695
- (float)_titleWidth;	// 0x300a066d
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x30087069
- (void)drawRect:(CGRect)rect;	// 0x30086c81
- (void)drawText:(id)text inRect:(CGRect)rect barStyle:(int)style;	// 0x30086d65
// converted property getter: - (id)font;	// 0x301e9289
- (id)navigationItem;	// 0x301e9225
// converted property setter: - (void)setFont:(id)font;	// 0x301e9245
- (void)setFrame:(CGRect)frame;	// 0x30058eed
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x3005906d
- (id)title;	// 0x300f74d9
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x301e9235
@end
