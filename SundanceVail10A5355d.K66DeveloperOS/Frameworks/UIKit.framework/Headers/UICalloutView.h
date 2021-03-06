/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIImageView, UILabel, NSMutableArray, NSTimer;

@interface UICalloutView : UIControl {
	UIImageView *_leftCap;	// 108 = 0x6c
	UIImageView *_rightCap;	// 112 = 0x70
	UIImageView *_topAnchor;	// 116 = 0x74
	UIImageView *_bottomAnchor;	// 120 = 0x78
	UIImageView *_leftBackground;	// 124 = 0x7c
	UIImageView *_rightBackground;	// 128 = 0x80
	UILabel *_title;	// 132 = 0x84
	UILabel *_subtitle;	// 136 = 0x88
	UILabel *_temporary;	// 140 = 0x8c
	UIView *_leftView;	// 144 = 0x90
	UIView *_rightView;	// 148 = 0x94
	struct {
		CGPoint origin;
		CGPoint offset;
		int position;
		CGPoint desiredPoint;
		CGRect desiredBounds;
	} _anchor;	// 152 = 0x98
	CGRect _frame;	// 196 = 0xc4
	id _delegate;	// 212 = 0xd4
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _flags;	// 216 = 0xd8
	NSMutableArray *_fadeInViews;	// 220 = 0xdc
	NSMutableArray *_fadeOutViews;	// 224 = 0xe0
	NSTimer *_layoutAnimationTimer;	// 228 = 0xe4
	float _maximumWidth;	// 232 = 0xe8
}
@property(readonly, assign, nonatomic) float UICalloutViewButtonPadding;	// G=0x33bff691; 
@property(readonly, assign, nonatomic) float UICalloutViewCapHeight;	// G=0x33bff665; 
@property(readonly, assign, nonatomic) float UICalloutViewCapPaddingTop;	// G=0x33bff66d; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalMargin;	// G=0x33bff699; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalPadding;	// G=0x33bff6a1; 
@property(readonly, assign, nonatomic) double UICalloutViewLayoutDuration;	// G=0x33bff679; 
@property(readonly, assign, nonatomic) float UICalloutViewMinimumWidth;	// G=0x33bff6b1; 
@property(readonly, assign, nonatomic) float UICalloutViewVerticalMargin;	// G=0x33bff6a9; 
@property(assign, nonatomic) BOOL canAnchorFromBottom;	// G=0x33bffae1; S=0x33b518c9; 
@property(assign) id delegate;	// G=0x33bffbb1; S=0x33b518b9; converted property
@property(retain, nonatomic) UIView *leftView;	// G=0x33b53549; S=0x33b523a9; @synthesize=_leftView
@property(assign, nonatomic) float maximumWidth;	// G=0x33bffcd1; S=0x33bffce1; @synthesize=_maximumWidth
@property(assign) CGPoint offset;	// G=0x33bffa45; S=0x33bffa2d; converted property
@property(retain, nonatomic) UIView *rightView;	// G=0x33b53511; S=0x33b524cd; @synthesize=_rightView
@property(retain) UILabel *subtitle;	// G=0x33b53bcd; S=0x33b52269; converted property
@property(assign, nonatomic) int subtitleLineBreakMode;	// G=0x33bff9ad; S=0x33b51895; 
@property(assign, nonatomic) int subtitleTextAlignment;	// G=0x33bffa0d; S=0x33b53bed; 
@property(retain) id temporaryTitle;	// G=0x33bff96d; S=0x33bff94d; converted property
@property(retain) UILabel *title;	// G=0x33bff929; S=0x33b5213d; converted property
@property(assign, nonatomic) int titleLineBreakMode;	// G=0x33bff98d; S=0x33b51875; 
@property(assign, nonatomic) int titleTextAlignment;	// G=0x33bff9cd; S=0x33bff9ed; 
+ (id)_backgroundImage;	// 0x33b51865
+ (id)_bottomAnchorImage;	// 0x33b51825
+ (id)_leftCapImage;	// 0x33b51835
+ (id)_rightCapImage;	// 0x33b51845
+ (id)_topAnchorImage;	// 0x33b51855
+ (float)defaultHeight;	// 0x33b5116d
+ (id)sharedCalloutView;	// 0x33bff775
- (id)initWithFrame:(CGRect)frame;	// 0x33b511b9
// declared property getter: - (float)UICalloutViewButtonPadding;	// 0x33bff691
// declared property getter: - (float)UICalloutViewCapHeight;	// 0x33bff665
// declared property getter: - (float)UICalloutViewCapPaddingTop;	// 0x33bff66d
// declared property getter: - (float)UICalloutViewHorizontalMargin;	// 0x33bff699
// declared property getter: - (float)UICalloutViewHorizontalPadding;	// 0x33bff6a1
// declared property getter: - (double)UICalloutViewLayoutDuration;	// 0x33bff679
// declared property getter: - (float)UICalloutViewMinimumWidth;	// 0x33bff6b1
// declared property getter: - (float)UICalloutViewVerticalMargin;	// 0x33bff6a9
- (void)_fadeViewsIn:(BOOL)anIn;	// 0x33b546e9
- (void)_layoutAnimation;	// 0x33b54679
- (void)_layoutSubviews:(BOOL)subviews;	// 0x33b52641
- (void)_markDidMoveCalled;	// 0x33b53a85
- (void)_scheduleLayoutAnimation;	// 0x33b54599
- (void)_scheduleViewToFadeIn:(id)anIn;	// 0x33b544e1
- (void)_scheduleViewToFadeOut:(id)fadeOut;	// 0x33bff6b9
- (void)_setLayoutAnimationTimer:(id)timer;	// 0x33b54625
- (void)_setLeftView:(id)view;	// 0x33b54489
- (void)_setOriginForScale:(float)scale;	// 0x33b53ac9
- (void)_setRightView:(id)view;	// 0x33b525e9
- (void)addTarget:(id)target action:(SEL)action;	// 0x33bffaf5
- (CGPoint)anchorPoint;	// 0x33bffa5d
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x33b519c9
// declared property getter: - (BOOL)canAnchorFromBottom;	// 0x33bffae1
- (void)completeBounceAnimation;	// 0x33b53915
- (void)dealloc;	// 0x33bff7d1
// converted property getter: - (id)delegate;	// 0x33bffbb1
- (void)fadeOutWithDuration:(double)duration;	// 0x33b518e1
- (void)getActualAnchorPoint:(CGPoint *)point frame:(CGRect *)frame position:(int *)position forDesiredAnchorPoint:(CGPoint)desiredAnchorPoint boundaryRect:(CGRect)rect;	// 0x33b530d5
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x33bffbc1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33b53eb5
// declared property getter: - (id)leftView;	// 0x33b53549
// declared property getter: - (float)maximumWidth;	// 0x33bffcd1
// converted property getter: - (CGPoint)offset;	// 0x33bffa45
- (void)removeTarget:(id)target;	// 0x33bffb81
// declared property getter: - (id)rightView;	// 0x33b53511
- (void)setAnchorPoint:(CGPoint)point boundaryRect:(CGRect)rect animate:(BOOL)animate;	// 0x33b53559
// declared property setter: - (void)setCanAnchorFromBottom:(BOOL)bottom;	// 0x33b518c9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33b518b9
// declared property setter: - (void)setLeftView:(id)view;	// 0x33b523a9
- (void)setLeftView:(id)view animated:(BOOL)animated;	// 0x33b523c1
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x33bffce1
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x33bffa2d
// declared property setter: - (void)setRightView:(id)view;	// 0x33b524cd
- (void)setRightView:(id)view animated:(BOOL)animated;	// 0x33b524e1
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x33b52269
- (void)setSubtitle:(id)subtitle animated:(BOOL)animated;	// 0x33b52281
// declared property setter: - (void)setSubtitleLineBreakMode:(int)mode;	// 0x33b51895
// declared property setter: - (void)setSubtitleTextAlignment:(int)alignment;	// 0x33b53bed
// converted property setter: - (void)setTemporaryTitle:(id)title;	// 0x33bff94d
// converted property setter: - (void)setTitle:(id)title;	// 0x33b5213d
// declared property setter: - (void)setTitleLineBreakMode:(int)mode;	// 0x33b51875
// declared property setter: - (void)setTitleTextAlignment:(int)alignment;	// 0x33bff9ed
// converted property getter: - (id)subtitle;	// 0x33b53bcd
// declared property getter: - (int)subtitleLineBreakMode;	// 0x33bff9ad
// declared property getter: - (int)subtitleTextAlignment;	// 0x33bffa0d
// converted property getter: - (id)temporaryTitle;	// 0x33bff96d
// converted property getter: - (id)title;	// 0x33bff929
// declared property getter: - (int)titleLineBreakMode;	// 0x33bff98d
// declared property getter: - (int)titleTextAlignment;	// 0x33bff9cd
@end

