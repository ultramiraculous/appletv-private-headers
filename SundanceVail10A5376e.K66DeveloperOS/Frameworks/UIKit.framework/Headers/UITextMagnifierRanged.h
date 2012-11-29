/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextMagnifier.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
	UIResponder<UITextInput> *_text;	// 84 = 0x54
	UIView *_target;	// 88 = 0x58
	CGPoint _magnificationPoint;	// 92 = 0x5c
	CGPoint _animationPoint;	// 100 = 0x64
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 108 = 0x6c
	UIView *_magnifierRenderer;	// 112 = 0x70
	UIView *_autoscrollRenderer;	// 116 = 0x74
	int _autoscrollDirections;	// 120 = 0x78
	float _touchOffsetFromMagnificationPoint;	// 124 = 0x7c
	float _magnifierOffsetFromTouch;	// 128 = 0x80
	BOOL _isHorizontal;	// 132 = 0x84
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x304f7761; S=0x304f7779; @synthesize=_animationPoint
@property(assign, nonatomic) BOOL isHorizontal;	// G=0x304f778d; S=0x304f779d; @synthesize=_isHorizontal
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x304f625d; S=0x304f6275; 
@property(retain, nonatomic) UIView *target;	// G=0x3035cb91; S=0x304f7751; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x304f6379; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x304f64e9; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x304f7731; S=0x304f7741; @synthesize=_text
+ (id)sharedRangedMagnifier;	// 0x3035c929
- (id)initWithDefaultFrame;	// 0x3035c971
- (void)animateToAutoscrollRenderer;	// 0x304f6661
- (void)animateToMagnifierRenderer;	// 0x304f6761
// declared property getter: - (CGPoint)animationPoint;	// 0x304f7761
- (void)autoscrollWillNotStart;	// 0x304f6955
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x304f71bd
- (CGPoint)clipPoint:(CGPoint)point inRect:(CGRect)rect;	// 0x304f743d
- (void)dealloc;	// 0x304f61e5
- (void)detectLostTouches:(id)touches;	// 0x304f7105
- (int)horizontalMovement;	// 0x304f6559
- (int)horizontalMovementAtTime:(double)time;	// 0x304f63a9
// declared property getter: - (BOOL)isHorizontal;	// 0x304f778d
// declared property getter: - (CGPoint)magnificationPoint;	// 0x304f625d
- (float)offsetFromMagnificationPoint;	// 0x304f6e05
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x304f6641
- (void)remove;	// 0x304f6dad
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x304f7779
- (void)setAutoscrollDirections:(int)directions;	// 0x304f67d9
- (void)setFrame:(CGRect)frame;	// 0x3035ca85
// declared property setter: - (void)setIsHorizontal:(BOOL)horizontal;	// 0x304f779d
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x304f6275
- (void)setNeedsDisplay;	// 0x3035cb49
// declared property setter: - (void)setTarget:(id)target;	// 0x304f7751
// declared property setter: - (void)setText:(id)text;	// 0x304f7741
- (void)setToMagnifierRenderer;	// 0x304f6709
- (CGPoint)snappedPoint:(CGPoint)point;	// 0x304f7531
- (void)stopMagnifying:(BOOL)magnifying;	// 0x304f7371
// declared property getter: - (id)target;	// 0x3035cb91
// declared property getter: - (CGPoint)terminalPoint;	// 0x304f6379
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x304f64e9
// declared property getter: - (id)text;	// 0x304f7731
- (void)updateFrame;	// 0x304f6e35
- (BOOL)wasPlacedCarefullyAtTime:(double)time;	// 0x304f6491
- (void)windowWillRotate:(id)window;	// 0x304f71a9
- (void)zoomDownAnimation;	// 0x304f6b39
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x304f6d79
- (void)zoomUpAnimation;	// 0x304f6979
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x304f6b29
@end
