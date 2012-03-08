/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITabBarButtonBadge, UITabBarButtonLabel, NSValue, UIImage, UITabBarSelectionIndicatorView;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl {
@private
	CGRect _hitRect;	// 72 = 0x48
	UIView *_info;	// 88 = 0x58
	UITabBarButtonLabel *_label;	// 92 = 0x5c
	UITabBarButtonBadge *_badge;	// 96 = 0x60
	UITabBarSelectionIndicatorView *_selectedIndicator;	// 100 = 0x64
	BOOL _selected;	// 104 = 0x68
	BOOL _barHeight;	// 105 = 0x69
	BOOL _badgeAnimated;	// 106 = 0x6a
	UIEdgeInsets _infoInsets;	// 108 = 0x6c
	UIOffset _selectedInfoOffset;	// 124 = 0x7c
	UIOffset _infoOffset;	// 132 = 0x84
	UIImage *_customSelectedIndicatorImage;	// 140 = 0x8c
	NSValue *_labelOffsetValue;	// 144 = 0x90
}
@property(retain, nonatomic) NSValue *labelOffsetValue;	// G=0x3532d41d; S=0x3532d42d; @synthesize=_labelOffsetValue
@property(readonly, assign, nonatomic) UITabBarButtonLabel *tabBarButtonLabel;	// G=0x3532d451; @synthesize=_label
+ (id)_defaultLabelColor;	// 0x3514d9c5
+ (id)_defaultLabelFont;	// 0x3514d855
+ (id)_donePushButton;	// 0x3532ca4d
- (id)initWithImage:(id)image selectedImage:(id)image2 label:(id)label withInsets:(UIEdgeInsets)insets;	// 0x3514d515
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x3532d2c5
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3532d2c1
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x3514e045
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x3532d0f5
- (void)_positionBadge;	// 0x3514daf9
- (id)_scriptingInfo;	// 0x35331a6d
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x3532d1b5
- (void)_setBadgeValue:(id)value;	// 0x3532ce89
- (void)_setBarHeight:(float)height;	// 0x3514dfd1
- (void)_setCustomSelectedIndicatorImage:(id)image;	// 0x3532d251
- (void)_setInfoOffset:(UIOffset)offset;	// 0x3532ce21
- (void)_setSelected:(BOOL)selected;	// 0x3514f25d
- (void)_setSelectedInfoOffset:(UIOffset)offset;	// 0x3532cdb9
- (void)_setTabBarHitRect:(CGRect)rect;	// 0x3514e8a9
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x3532d3d1
- (void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;	// 0x3514e1d5
- (id)_swappableImageView;	// 0x3532cda9
- (CGRect)_tabBarHitRect;	// 0x3532cd85
- (UIOffset)_titlePositionAdjustment;	// 0x3532d3e1
- (void)_updateInfoFrame;	// 0x35151c95
- (BOOL)_useBarHeight;	// 0x3532d241
- (void)dealloc;	// 0x3532cc99
// declared property getter: - (id)labelOffsetValue;	// 0x3532d41d
- (void)layoutSubviews;	// 0x351517b1
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x3532d211
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x351d656d
- (void)setEnabled:(BOOL)enabled;	// 0x3514e0f9
- (void)setFrame:(CGRect)frame;	// 0x3514dab1
- (void)setImage:(id)image;	// 0x3532cd65
// declared property setter: - (void)setLabelOffsetValue:(id)value;	// 0x3532d42d
// declared property getter: - (id)tabBarButtonLabel;	// 0x3532d451
@end
