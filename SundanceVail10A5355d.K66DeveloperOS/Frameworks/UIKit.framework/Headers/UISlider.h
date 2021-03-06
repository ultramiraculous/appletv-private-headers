/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"
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
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x33bf2edd; S=0x33bf2ec1; 
@property(readonly, assign, nonatomic) UIImage *currentMaximumTrackImage;	// G=0x33b44229; 
@property(readonly, assign, nonatomic) UIImage *currentMinimumTrackImage;	// G=0x33b44279; 
@property(readonly, assign, nonatomic) UIImage *currentThumbImage;	// G=0x33b44179; 
@property(retain, nonatomic) UIColor *maximumTrackTintColor;	// G=0x33bf3d79; S=0x33bf2765; @synthesize=_maxTintColor
@property(assign, nonatomic) float maximumValue;	// G=0x33b7b485; S=0x33b7b50d; @dynamic
@property(retain, nonatomic) UIImage *maximumValueImage;	// G=0x33bf2869; S=0x33b7b585; 
@property(retain, nonatomic) UIColor *minimumTrackTintColor;	// G=0x33bf3d69; S=0x33bf26ad; @synthesize=_minTintColor
@property(assign, nonatomic) float minimumValue;	// G=0x33b7b475; S=0x33b7b495; @dynamic
@property(retain, nonatomic) UIImage *minimumValueImage;	// G=0x33bf281d; S=0x33b7b671; 
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x33bf3d89; S=0x33bf248d; @synthesize=_thumbTintColor
@property(assign, nonatomic) float value;	// G=0x33b43fa5; S=0x33b7b75d; @dynamic
- (id)init;	// 0x33bf1b7d
- (id)initWithCoder:(id)coder;	// 0x33bf1bad
- (id)initWithFrame:(CGRect)frame;	// 0x33b433cd
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x33bf3d99
- (id)_contentForState:(unsigned)state;	// 0x33b43f81
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x33bf28b5
- (void)_controlMouseDown:(GSEventRef)down;	// 0x33bf389d
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x33bf38a5
- (void)_controlMouseUp:(GSEventRef)up;	// 0x33bf38a1
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x33bf3cf1
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x33bf3cf9
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x33bf3cf5
- (void)_initImages;	// 0x33b44ee5
- (void)_initSubviews;	// 0x33b4502d
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x33bf28b9
- (BOOL)_isThumbEnabled;	// 0x33bf4091
- (void)_layoutSubviewsForBoundsChange:(BOOL)boundsChange;	// 0x33b43581
- (id)_maximumTrackImageForState:(unsigned)state;	// 0x33b43f35
- (id)_minimumTrackImageForState:(unsigned)state;	// 0x33b442dd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33bf1ee1
- (id)_scriptingInfo;	// 0x33bf4285
- (void)_sendDelayedActions;	// 0x33bf31f1
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x33b44721
- (void)_setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x33b44951
- (void)_setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x33b447e1
- (void)_setMinimumTrackVisible:(BOOL)visible withDuration:(double)duration;	// 0x33bf3f75
- (void)_setThumbEnabled:(BOOL)enabled;	// 0x33bf3edd
- (void)_setThumbImage:(id)image forStates:(unsigned)states;	// 0x33b44609
- (void)_setThumbTintColor:(id)color forStates:(unsigned)states;	// 0x33bf4161
- (void)_setTrackEnabled:(BOOL)enabled;	// 0x33bf3ea9
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x33b44e01
- (void)_setValue:(float)value minValue:(float)value2 maxValue:(float)value3 andSendAction:(BOOL)action;	// 0x33bf2ef1
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x33bf3175
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x33bf3155
- (UIEdgeInsets)_thumbHitEdgeInsets;	// 0x33bf40a9
- (id)_thumbImageForState:(unsigned)state;	// 0x33b441dd
- (BOOL)_trackEnabled;	// 0x33bf3ec9
- (void)_updateAppearanceForEnabled:(BOOL)enabled;	// 0x33b444fd
- (UIEdgeInsets)alignmentRectInsets;	// 0x33bf2b61
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x33bf3269
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33bf38a9
- (BOOL)cancelMouseTracking;	// 0x33bf3815
- (BOOL)cancelTouchTracking;	// 0x33bf3cfd
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x33bf3655
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33bf3b29
- (id)createThumbView;	// 0x33b4522d
// declared property getter: - (id)currentMaximumTrackImage;	// 0x33b44229
// declared property getter: - (id)currentMinimumTrackImage;	// 0x33b44279
// declared property getter: - (id)currentThumbImage;	// 0x33b44179
- (void)dealloc;	// 0x33b47939
- (id)description;	// 0x33bf21cd
- (void)didMoveToWindow;	// 0x33b7b775
- (void)encodeWithCoder:(id)coder;	// 0x33bf1fb5
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x33bf36f1
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33bf3bf5
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33bf2269
- (BOOL)isAccessibilityElementByDefault;	// 0x33c62e61
- (BOOL)isAnimatingValueChange;	// 0x33bf3db1
// declared property getter: - (BOOL)isContinuous;	// 0x33bf2edd
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c62e65
- (void)layoutSubviews;	// 0x33b44e4d
- (id)maximumTrackImageForState:(unsigned)state;	// 0x33b43f21
// declared property getter: - (id)maximumTrackTintColor;	// 0x33bf3d79
// declared property getter: - (float)maximumValue;	// 0x33b7b485
// declared property getter: - (id)maximumValueImage;	// 0x33bf2869
- (CGRect)maximumValueImageRectForBounds:(CGRect)bounds;	// 0x33b44405
- (id)minimumTrackImageForState:(unsigned)state;	// 0x33b442c9
// declared property getter: - (id)minimumTrackTintColor;	// 0x33bf3d69
// declared property getter: - (float)minimumValue;	// 0x33b7b475
// declared property getter: - (id)minimumValueImage;	// 0x33bf281d
- (CGRect)minimumValueImageRectForBounds:(CGRect)bounds;	// 0x33b44329
- (id)scriptingInfoWithChildren;	// 0x33bf4345
- (void)setAlpha:(float)alpha;	// 0x33b45361
- (void)setBounds:(CGRect)bounds;	// 0x33bf2cc5
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x33bf2ec1
- (void)setEnabled:(BOOL)enabled;	// 0x33bf2da1
- (void)setFrame:(CGRect)frame;	// 0x33b434cd
- (void)setHighlighted:(BOOL)highlighted;	// 0x33bf2e01
- (void)setMaximumTrackImage:(id)image forState:(unsigned)state;	// 0x33b7d309
- (void)setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x33b44911
// declared property setter: - (void)setMaximumTrackTintColor:(id)color;	// 0x33bf2765
// declared property setter: - (void)setMaximumValue:(float)value;	// 0x33b7b50d
// declared property setter: - (void)setMaximumValueImage:(id)image;	// 0x33b7b585
- (void)setMinimumTrackImage:(id)image forState:(unsigned)state;	// 0x33b7d1f9
- (void)setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x33b447a1
// declared property setter: - (void)setMinimumTrackTintColor:(id)color;	// 0x33bf26ad
// declared property setter: - (void)setMinimumValue:(float)value;	// 0x33b7b495
// declared property setter: - (void)setMinimumValueImage:(id)image;	// 0x33b7b671
- (void)setSelected:(BOOL)selected;	// 0x33bf2e61
- (void)setShowValue:(BOOL)value;	// 0x33bf3dc5
- (void)setThumbImage:(id)image forState:(unsigned)state;	// 0x33b7d0e9
- (void)setThumbImage:(id)image forStates:(unsigned)states;	// 0x33b445c9
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x33bf248d
// declared property setter: - (void)setValue:(float)value;	// 0x33b7b75d
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x33b44a81
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33bf2b35
- (id)thumbImageForState:(unsigned)state;	// 0x33b441c9
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x33b43fb9
// declared property getter: - (id)thumbTintColor;	// 0x33bf3d89
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x33b43d51
// declared property getter: - (float)value;	// 0x33b43fa5
- (CGRect)valueTextRectForBounds:(CGRect)bounds;	// 0x33bf3e19
@end

