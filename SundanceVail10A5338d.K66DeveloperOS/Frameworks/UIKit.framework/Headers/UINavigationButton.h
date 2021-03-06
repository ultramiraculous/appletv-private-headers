/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIColor, UIImage, NSSet, NSString;

@interface UINavigationButton : UIButton {
	NSSet *_possibleTitles;	// 176 = 0xb0
	int _style;	// 180 = 0xb4
	int _barStyle;	// 184 = 0xb8
	UIColor *_navigationBarTintColor;	// 188 = 0xbc
	CGSize _boundsAdjustment;	// 192 = 0xc0
	id _appearanceStorage;	// 200 = 0xc8
	NSSet *_possibleSystemItems;	// 204 = 0xcc
	unsigned _size : 2;	// 208 = 0xd0
	unsigned _pad : 30;	// 208 = 0xd0
	float _minimumWidth;	// 212 = 0xd4
	float _maximumWidth;	// 216 = 0xd8
}
@property(assign, nonatomic) int barStyle;	// G=0x30dd0191; S=0x30c614e9; @synthesize=_barStyle
@property(assign, nonatomic) int controlSize;	// G=0x30dcfb45; S=0x30c614ad; 
@property(retain, nonatomic) UIImage *image;	// G=0x30c5edad; S=0x30d2a1c9; 
@property(assign, nonatomic) float maximumWidth;	// G=0x30dd01b1; S=0x30c60e7d; @synthesize=_maximumWidth
@property(assign, nonatomic) float minimumWidth;	// G=0x30dd01a1; S=0x30c60e39; @synthesize=_minimumWidth
@property(assign, nonatomic) int style;	// G=0x30c60669; S=0x30d2a215; @synthesize=_style
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30c61b61; S=0x30c61551; 
@property(retain, nonatomic) NSString *title;	// G=0x30c60a45; S=0x30d2a1b1; 
+ (id)defaultFont;	// 0x30c5edc1
- (id)initWithImage:(id)image;	// 0x30dcf4cd
- (id)initWithImage:(id)image style:(int)style;	// 0x30d6172d
- (id)initWithImage:(id)image width:(float)width style:(int)style;	// 0x30dcf499
- (id)initWithImage:(id)image width:(float)width style:(int)style applyBezel:(BOOL)bezel forBarStyle:(int)barStyle buttonItemStyle:(int)style6;	// 0x30c61b25
- (id)initWithTitle:(id)title;	// 0x30dcf46d
- (id)initWithTitle:(id)title possibleTitles:(id)titles style:(int)style;	// 0x30c5e9e9
- (id)initWithTitle:(id)title style:(int)style;	// 0x30d3e165
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles possibleSystemItems:(id)items tintColor:(id)color applyBezel:(BOOL)bezel forButtonItemStyle:(int)buttonItemStyle;	// 0x30dcf1b1
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color;	// 0x30c5ea21
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30dcfe1d
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30dd0189
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30dd0181
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30cd2481
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x30dcfb61
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30dcfe25
- (void)_UIAppearance_setTintColor:(id)color;	// 0x30cd2659
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30dcffa1
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x30cd24b9
- (void)_adjustBounds;	// 0x30c60b79
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x30c60f29
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x30dcfd6d
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x30c615b9
- (int)_barButtonItemStyle;	// 0x30dcf18d
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x30dcfb59
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x30dcf59d
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x30c60745
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x30dcf0d9
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x30dcf0fd
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x30dcf5a1
- (id)_scriptingInfo;	// 0x30d451d5
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30dcfe21
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30dd018d
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30dd0185
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30cd246d
- (void)_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x30dcfd5d
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30dcff91
- (void)_setBoundsAdjustment:(CGSize)adjustment;	// 0x30c60ec1
- (void)_setTintColor:(id)color;	// 0x30cd2645
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30dd010d
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x30cd24a9
- (id)_tintColor;	// 0x30c5ff55
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x30dd011d
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x30dcfdd1
- (void)_updateContentInsets;	// 0x30c60529
- (void)_updateShadowOffsetWithAttributes:(id)attributes forState:(unsigned)state;	// 0x30dcf10d
- (void)_updateStyle;	// 0x30c5f84d
- (void)_updateTitleColorsForState:(unsigned)state;	// 0x30c6089d
// declared property getter: - (int)barStyle;	// 0x30dd0191
- (BOOL)contentsEqualTo:(id)to withStyle:(int)style;	// 0x30dcf4f9
// declared property getter: - (int)controlSize;	// 0x30dcfb45
- (void)dealloc;	// 0x30c76b09
// declared property getter: - (id)image;	// 0x30c5edad
// declared property getter: - (float)maximumWidth;	// 0x30dd01b1
// declared property getter: - (float)minimumWidth;	// 0x30dd01a1
// declared property setter: - (void)setBarStyle:(int)style;	// 0x30c614e9
// declared property setter: - (void)setControlSize:(int)size;	// 0x30c614ad
- (void)setEnabled:(BOOL)enabled;	// 0x30dcfa91
- (void)setFrame:(CGRect)frame;	// 0x30c5eca1
- (void)setHighlighted:(BOOL)highlighted;	// 0x30ce0d75
// declared property setter: - (void)setImage:(id)image;	// 0x30d2a1c9
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x30c60e7d
// declared property setter: - (void)setMinimumWidth:(float)width;	// 0x30c60e39
- (void)setNavigationBarTintColor:(id)color;	// 0x30c61561
// declared property setter: - (void)setStyle:(int)style;	// 0x30d2a215
// declared property setter: - (void)setTintColor:(id)color;	// 0x30c61551
// declared property setter: - (void)setTitle:(id)title;	// 0x30d2a1b1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30c60a19
// declared property getter: - (int)style;	// 0x30c60669
// declared property getter: - (id)tintColor;	// 0x30c61b61
// declared property getter: - (id)title;	// 0x30c60a45
@end

