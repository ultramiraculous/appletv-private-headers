/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"
#import "NSCoding.h"

@class UIImageView, UIColor, UIImage;

@interface UISlider : UIControl <NSCoding> {
	float _value;	// 108 = 0x6c
	float _minValue;	// 112 = 0x70
	float _maxValue;	// 116 = 0x74
	float _alpha;	// 120 = 0x78
	CFDictionaryRef _contentLookup;	// 124 = 0x7c
	UIImageView *_minValueImageView;	// 128 = 0x80
	UIImageView *_maxValueImageView;	// 132 = 0x84
	UIImageView *_thumbView;	// 136 = 0x88
	UIImageView *_minTrackView;	// 140 = 0x8c
	UIImageView *_maxTrackView;	// 144 = 0x90
	UIView *_maxTrackClipView;	// 148 = 0x94
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	} _sliderFlags;	// 152 = 0x98
	float _hitOffset;	// 156 = 0x9c
	UIColor *_minTintColor;	// 160 = 0xa0
	UIColor *_maxTintColor;	// 164 = 0xa4
	UIColor *_thumbTintColor;	// 168 = 0xa8
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x34769e95; S=0x34769e79; 
@property(readonly, assign, nonatomic) UIImage *currentMaximumTrackImage;	// G=0x346b50d1; 
@property(readonly, assign, nonatomic) UIImage *currentMinimumTrackImage;	// G=0x346b5021; 
@property(readonly, assign, nonatomic) UIImage *currentThumbImage;	// G=0x346b4f71; 
@property(retain, nonatomic) UIColor *maximumTrackTintColor;	// G=0x3476a871; S=0x3476971d; @synthesize=_maxTintColor
@property(assign, nonatomic) float maximumValue;	// G=0x34706be5; S=0x34706c6d; @dynamic
@property(retain, nonatomic) UIImage *maximumValueImage;	// G=0x34769821; S=0x34706ce5; 
@property(retain, nonatomic) UIColor *minimumTrackTintColor;	// G=0x3476a861; S=0x3476955d; @synthesize=_minTintColor
@property(assign, nonatomic) float minimumValue;	// G=0x34706bd5; S=0x34706bf5; @dynamic
@property(retain, nonatomic) UIImage *minimumValueImage;	// G=0x347697d5; S=0x34706dd1; 
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x3476a881; S=0x34769235; @synthesize=_thumbTintColor
@property(assign, nonatomic) float value;	// G=0x346b4d9d; S=0x34706ebd; @dynamic
- (id)init;	// 0x3476881d
- (id)initWithCoder:(id)coder;	// 0x3476884d
- (id)initWithFrame:(CGRect)frame;	// 0x346b41c5
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x3476a891
- (id)_contentForState:(unsigned)state;	// 0x346b4d79
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x3476986d
- (void)_controlMouseDown:(GSEventRef)down;	// 0x3476a5f5
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x3476a5fd
- (void)_controlMouseUp:(GSEventRef)up;	// 0x3476a5f9
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x34708119
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x3476a7f1
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x3476a7ed
- (void)_initImages;	// 0x346b5f85
- (void)_initSubviews;	// 0x346b60cd
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x34769871
- (BOOL)_isThumbEnabled;	// 0x3476aa71
- (void)_layoutSubviewsForBoundsChange:(BOOL)boundsChange;	// 0x346b4379
- (id)_maximumTrackImageForState:(unsigned)state;	// 0x346b4d2d
- (id)_minimumTrackImageForState:(unsigned)state;	// 0x346b5085
- (void)_populateArchivedSubviews:(id)subviews;	// 0x34768b81
- (id)_scriptingInfo;	// 0x3476abad
- (void)_sendDelayedActions;	// 0x34769f49
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x346b5559
- (void)_setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x346b5789
- (void)_setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x346b5619
- (void)_setMinimumTrackVisible:(BOOL)visible withDuration:(double)duration;	// 0x346b6405
- (void)_setThumbEnabled:(BOOL)enabled;	// 0x3476a9d5
- (void)_setThumbImage:(id)image forStates:(unsigned)states;	// 0x346b5441
- (void)_setThumbTintColor:(id)color forStates:(unsigned)states;	// 0x3476aa89
- (void)_setTrackEnabled:(BOOL)enabled;	// 0x3476a9a1
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x346b5c39
- (void)_setValue:(float)value minValue:(float)value2 maxValue:(float)value3 andSendAction:(BOOL)action;	// 0x346b5c89
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x34769ecd
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x34769ead
- (UIEdgeInsets)_thumbHitEdgeInsets;	// 0x34708061
- (id)_thumbImageForState:(unsigned)state;	// 0x346b4fd5
- (BOOL)_trackEnabled;	// 0x3476a9c1
- (void)_updateAppearanceForEnabled:(BOOL)enabled;	// 0x346b52f5
- (UIEdgeInsets)alignmentRectInsets;	// 0x34769b19
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x34769fc1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x34707de1
- (BOOL)cancelMouseTracking;	// 0x3476a56d
- (BOOL)cancelTouchTracking;	// 0x3476a7f5
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x3476a3ad
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3476a601
- (id)createThumbView;	// 0x346b62cd
// declared property getter: - (id)currentMaximumTrackImage;	// 0x346b50d1
// declared property getter: - (id)currentMinimumTrackImage;	// 0x346b5021
// declared property getter: - (id)currentThumbImage;	// 0x346b4f71
- (void)dealloc;	// 0x346b8be9
- (id)description;	// 0x34768e6d
- (void)didMoveToWindow;	// 0x34706ed5
- (void)encodeWithCoder:(id)coder;	// 0x34768c55
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x3476a449
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3476a6cd
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x34768f09
- (BOOL)isAccessibilityElementByDefault;	// 0x347db189
- (BOOL)isAnimatingValueChange;	// 0x3476a8a9
// declared property getter: - (BOOL)isContinuous;	// 0x34769e95
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x347db18d
- (void)layoutSubviews;	// 0x346b5eed
- (id)maximumTrackImageForState:(unsigned)state;	// 0x346b4d19
// declared property getter: - (id)maximumTrackTintColor;	// 0x3476a871
// declared property getter: - (float)maximumValue;	// 0x34706be5
// declared property getter: - (id)maximumValueImage;	// 0x34769821
- (CGRect)maximumValueImageRectForBounds:(CGRect)bounds;	// 0x346b51fd
- (id)minimumTrackImageForState:(unsigned)state;	// 0x346b5071
// declared property getter: - (id)minimumTrackTintColor;	// 0x3476a861
// declared property getter: - (float)minimumValue;	// 0x34706bd5
// declared property getter: - (id)minimumValueImage;	// 0x347697d5
- (CGRect)minimumValueImageRectForBounds:(CGRect)bounds;	// 0x346b5121
- (id)scriptingInfoWithChildren;	// 0x3476ac6d
- (void)setAlpha:(float)alpha;	// 0x346b53c1
- (void)setBounds:(CGRect)bounds;	// 0x34769c7d
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x34769e79
- (void)setEnabled:(BOOL)enabled;	// 0x34769d59
- (void)setFrame:(CGRect)frame;	// 0x346b42c5
- (void)setHighlighted:(BOOL)highlighted;	// 0x34769db9
- (void)setMaximumTrackImage:(id)image forState:(unsigned)state;	// 0x34769611
- (void)setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x346b5749
// declared property setter: - (void)setMaximumTrackTintColor:(id)color;	// 0x3476971d
// declared property setter: - (void)setMaximumValue:(float)value;	// 0x34706c6d
// declared property setter: - (void)setMaximumValueImage:(id)image;	// 0x34706ce5
- (void)setMinimumTrackImage:(id)image forState:(unsigned)state;	// 0x34769451
- (void)setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x346b55d9
// declared property setter: - (void)setMinimumTrackTintColor:(id)color;	// 0x3476955d
// declared property setter: - (void)setMinimumValue:(float)value;	// 0x34706bf5
// declared property setter: - (void)setMinimumValueImage:(id)image;	// 0x34706dd1
- (void)setSelected:(BOOL)selected;	// 0x34769e19
- (void)setShowValue:(BOOL)value;	// 0x3476a8bd
- (void)setThumbImage:(id)image forState:(unsigned)state;	// 0x34769129
- (void)setThumbImage:(id)image forStates:(unsigned)states;	// 0x346b5401
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x34769235
// declared property setter: - (void)setValue:(float)value;	// 0x34706ebd
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x346b58b9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34769aed
- (id)thumbImageForState:(unsigned)state;	// 0x346b4fc1
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x346b4db1
// declared property getter: - (id)thumbTintColor;	// 0x3476a881
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x346b4b49
// declared property getter: - (float)value;	// 0x346b4d9d
- (CGRect)valueTextRectForBounds:(CGRect)bounds;	// 0x3476a911
@end

