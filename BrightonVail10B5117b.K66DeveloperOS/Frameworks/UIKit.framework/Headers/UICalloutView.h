/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIImageView, NSTimer, UILabel, NSMutableArray;

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
@property(readonly, assign, nonatomic) float UICalloutViewButtonPadding;	// G=0x32ec6629; 
@property(readonly, assign, nonatomic) float UICalloutViewCapHeight;	// G=0x32ec65fd; 
@property(readonly, assign, nonatomic) float UICalloutViewCapPaddingTop;	// G=0x32ec6605; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalMargin;	// G=0x32ec6631; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalPadding;	// G=0x32ec6639; 
@property(readonly, assign, nonatomic) double UICalloutViewLayoutDuration;	// G=0x32ec6611; 
@property(readonly, assign, nonatomic) float UICalloutViewMinimumWidth;	// G=0x32ec6649; 
@property(readonly, assign, nonatomic) float UICalloutViewVerticalMargin;	// G=0x32ec6641; 
@property(assign, nonatomic) BOOL canAnchorFromBottom;	// G=0x32ec6c99; S=0x32e08ef1; 
@property(assign) id delegate;	// G=0x32ec6d69; S=0x32e08e99; converted property
@property(retain, nonatomic) UIView *leftView;	// G=0x32e0a441; S=0x32ec68b9; @synthesize=_leftView
@property(assign, nonatomic) float maximumWidth;	// G=0x32ec6e89; S=0x32ec6e99; @synthesize=_maximumWidth
@property(assign) CGPoint offset;	// G=0x32ec6bfd; S=0x32ec6be5; converted property
@property(retain, nonatomic) UIView *rightView;	// G=0x32e0a409; S=0x32ec68cd; @synthesize=_rightView
@property(retain) UILabel *subtitle;	// G=0x32ec6ae5; S=0x32ec6ad1; converted property
@property(assign, nonatomic) int subtitleLineBreakMode;	// G=0x32ec6b65; S=0x32e08ecd; 
@property(assign, nonatomic) int subtitleTextAlignment;	// G=0x32ec6bc5; S=0x32e0a4f5; 
@property(retain) id temporaryTitle;	// G=0x32ec6b25; S=0x32ec6b05; converted property
@property(retain) UILabel *title;	// G=0x32ec6ab1; S=0x32e08f0d; converted property
@property(assign, nonatomic) int titleLineBreakMode;	// G=0x32ec6b45; S=0x32e08ead; 
@property(assign, nonatomic) int titleTextAlignment;	// G=0x32ec6b85; S=0x32ec6ba5; 
+ (id)_backgroundImage;	// 0x32e08e85
+ (id)_bottomAnchorImage;	// 0x32e08e45
+ (id)_leftCapImage;	// 0x32e08e55
+ (id)_rightCapImage;	// 0x32e08e65
+ (id)_topAnchorImage;	// 0x32e08e75
+ (float)defaultHeight;	// 0x32e087cd
+ (id)sharedCalloutView;	// 0x32ec6a55
- (id)initWithFrame:(CGRect)frame;	// 0x32e087d9
// declared property getter: - (float)UICalloutViewButtonPadding;	// 0x32ec6629
// declared property getter: - (float)UICalloutViewCapHeight;	// 0x32ec65fd
// declared property getter: - (float)UICalloutViewCapPaddingTop;	// 0x32ec6605
// declared property getter: - (float)UICalloutViewHorizontalMargin;	// 0x32ec6631
// declared property getter: - (float)UICalloutViewHorizontalPadding;	// 0x32ec6639
// declared property getter: - (double)UICalloutViewLayoutDuration;	// 0x32ec6611
// declared property getter: - (float)UICalloutViewMinimumWidth;	// 0x32ec6649
// declared property getter: - (float)UICalloutViewVerticalMargin;	// 0x32ec6641
- (void)_fadeViewsIn:(BOOL)anIn;	// 0x32ec68e1
- (void)_layoutAnimation;	// 0x32ec67c1
- (void)_layoutSubviews:(BOOL)subviews;	// 0x32e09539
- (void)_markDidMoveCalled;	// 0x32e0a455
- (void)_scheduleLayoutAnimation;	// 0x32ec6831
- (void)_scheduleViewToFadeIn:(id)anIn;	// 0x32ec6651
- (void)_scheduleViewToFadeOut:(id)fadeOut;	// 0x32ec6709
- (void)_setLayoutAnimationTimer:(id)timer;	// 0x32e0f33d
- (void)_setLeftView:(id)view;	// 0x32e0a499
- (void)_setOriginForScale:(float)scale;	// 0x32e0a8d1
- (void)_setRightView:(id)view;	// 0x32e094e1
- (void)addTarget:(id)target action:(SEL)action;	// 0x32ec6cad
- (CGPoint)anchorPoint;	// 0x32ec6c15
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x32e0a9d1
// declared property getter: - (BOOL)canAnchorFromBottom;	// 0x32ec6c99
- (void)completeBounceAnimation;	// 0x32e0915d
- (void)dealloc;	// 0x32e0f1e9
// converted property getter: - (id)delegate;	// 0x32ec6d69
- (void)fadeOutWithDuration:(double)duration;	// 0x32e0f101
- (void)getActualAnchorPoint:(CGPoint *)point frame:(CGRect *)frame position:(int *)position forDesiredAnchorPoint:(CGPoint)desiredAnchorPoint boundaryRect:(CGRect)rect;	// 0x32e09fcd
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32ec6d79
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32e0bf7d
// declared property getter: - (id)leftView;	// 0x32e0a441
// declared property getter: - (float)maximumWidth;	// 0x32ec6e89
// converted property getter: - (CGPoint)offset;	// 0x32ec6bfd
- (void)removeTarget:(id)target;	// 0x32ec6d39
// declared property getter: - (id)rightView;	// 0x32e0a409
- (void)setAnchorPoint:(CGPoint)point boundaryRect:(CGRect)rect animate:(BOOL)animate;	// 0x32e0a519
// declared property setter: - (void)setCanAnchorFromBottom:(BOOL)bottom;	// 0x32e08ef1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32e08e99
// declared property setter: - (void)setLeftView:(id)view;	// 0x32ec68b9
- (void)setLeftView:(id)view animated:(BOOL)animated;	// 0x32e092d1
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x32ec6e99
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x32ec6be5
// declared property setter: - (void)setRightView:(id)view;	// 0x32ec68cd
- (void)setRightView:(id)view animated:(BOOL)animated;	// 0x32e093d9
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32ec6ad1
- (void)setSubtitle:(id)subtitle animated:(BOOL)animated;	// 0x32e09039
// declared property setter: - (void)setSubtitleLineBreakMode:(int)mode;	// 0x32e08ecd
// declared property setter: - (void)setSubtitleTextAlignment:(int)alignment;	// 0x32e0a4f5
// converted property setter: - (void)setTemporaryTitle:(id)title;	// 0x32ec6b05
// converted property setter: - (void)setTitle:(id)title;	// 0x32e08f0d
// declared property setter: - (void)setTitleLineBreakMode:(int)mode;	// 0x32e08ead
// declared property setter: - (void)setTitleTextAlignment:(int)alignment;	// 0x32ec6ba5
// converted property getter: - (id)subtitle;	// 0x32ec6ae5
// declared property getter: - (int)subtitleLineBreakMode;	// 0x32ec6b65
// declared property getter: - (int)subtitleTextAlignment;	// 0x32ec6bc5
// converted property getter: - (id)temporaryTitle;	// 0x32ec6b25
// converted property getter: - (id)title;	// 0x32ec6ab1
// declared property getter: - (int)titleLineBreakMode;	// 0x32ec6b45
// declared property getter: - (int)titleTextAlignment;	// 0x32ec6b85
@end
