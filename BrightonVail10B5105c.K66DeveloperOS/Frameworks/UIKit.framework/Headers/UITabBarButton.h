/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSValue, _UIBadgeView, UIImage, UITabBarSelectionIndicatorView, UITabBarButtonLabel;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl {
	CGRect _hitRect;	// 108 = 0x6c
	UIView *_info;	// 124 = 0x7c
	UITabBarButtonLabel *_label;	// 128 = 0x80
	_UIBadgeView *_badge;	// 132 = 0x84
	UITabBarSelectionIndicatorView *_selectedIndicator;	// 136 = 0x88
	BOOL _selected;	// 140 = 0x8c
	BOOL _barHeight;	// 141 = 0x8d
	BOOL _badgeAnimated;	// 142 = 0x8e
	UIEdgeInsets _infoInsets;	// 144 = 0x90
	UIOffset _selectedInfoOffset;	// 160 = 0xa0
	UIOffset _infoOffset;	// 168 = 0xa8
	UIImage *_customSelectedIndicatorImage;	// 176 = 0xb0
	NSValue *_labelOffsetValue;	// 180 = 0xb4
}
@property(retain, nonatomic) NSValue *labelOffsetValue;	// G=0x347c7c65; S=0x347c7c75; @synthesize=_labelOffsetValue
@property(readonly, assign, nonatomic) UITabBarButtonLabel *tabBarButtonLabel;	// G=0x3460273d; @synthesize=_label
+ (id)_defaultLabelColor;	// 0x345d4b99
+ (id)_defaultLabelFont;	// 0x345d4a4d
- (id)initWithImage:(id)image selectedImage:(id)image2 label:(id)label withInsets:(UIEdgeInsets)insets;	// 0x345d471d
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x347c7b19
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x347c7b15
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x345d5805
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x347c79b9
- (CGRect)_frameForSelectedIndicator;	// 0x345d98e9
- (BOOL)_isSelected;	// 0x347c78d9
- (void)_positionBadge;	// 0x3457fb41
- (id)_scriptingInfo;	// 0x347cce91
- (id)_selectedIndicatorView;	// 0x347c76f5
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x347c7a79
- (void)_setBadgeValue:(id)value;	// 0x345d7ff1
- (void)_setBarHeight:(float)height;	// 0x345d5791
- (void)_setCustomSelectedIndicatorImage:(id)image;	// 0x3460489d
- (void)_setInfoOffset:(UIOffset)offset;	// 0x347c7951
- (void)_setSelected:(BOOL)selected;	// 0x345d61b5
- (void)_setSelectedInfoOffset:(UIOffset)offset;	// 0x347c78e9
- (void)_setTabBarHitRect:(CGRect)rect;	// 0x3457fd21
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x347c7c19
- (void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;	// 0x345d5971
- (id)_swappableImageView;	// 0x347c78c9
- (CGRect)_tabBarHitRect;	// 0x347c78a5
- (UIOffset)_titlePositionAdjustment;	// 0x347c7c29
- (void)_updateInfoFrame;	// 0x345d9dcd
- (BOOL)_useBarHeight;	// 0x347c7b05
- (void)dealloc;	// 0x347c77b5
// declared property getter: - (id)labelOffsetValue;	// 0x347c7c65
- (void)layoutSubviews;	// 0x345d9659
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x347c7ad1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x346757e9
- (void)setEnabled:(BOOL)enabled;	// 0x345d5895
- (void)setFrame:(CGRect)frame;	// 0x3457faf9
- (void)setImage:(id)image;	// 0x347c7881
// declared property setter: - (void)setLabelOffsetValue:(id)value;	// 0x347c7c75
// declared property getter: - (id)tabBarButtonLabel;	// 0x3460273d
@end
