/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPanGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
@private
	UIScrollView *_scrollView;	// 120 = 0x78
	SEL _scrollViewAction;	// 124 = 0x7c
	CGPoint _reconsideredLockingLocation;	// 128 = 0x80
	unsigned _lastLockingAxis : 2;	// 136 = 0x88
	unsigned _lockingAxis : 2;	// 136 = 0x88
	unsigned _hasChildScrollView : 1;	// 136 = 0x88
	unsigned _hasParentScrollView : 1;	// 136 = 0x88
	unsigned _caughtDeceleratingScrollView : 1;	// 136 = 0x88
	unsigned _directionalLockEnabled : 1;	// 136 = 0x88
	unsigned _waitingForParentScrollView : 1;	// 137 = 0x89
}
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x3033701d; S=0x300716f1; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x300716bd; S=0x30071619; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3007142d
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x3014cbe5
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x3014c679
- (float)_hysteresis;	// 0x3014d9d1
- (void)_resetGestureRecognizer;	// 0x301321b5
- (void)_scrollViewDidEndZooming;	// 0x301a7489
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x3014cd75
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x3012bd81
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x3033701d
- (void)removeTarget:(id)target action:(SEL)action;	// 0x30336ee9
// declared property getter: - (id)scrollView;	// 0x300716bd
- (void)setDelegate:(id)delegate;	// 0x30071629
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x300716f1
// declared property setter: - (void)setScrollView:(id)view;	// 0x30071619
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x301298f5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3016cca5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3014c3cd
- (CGPoint)translationInView:(id)view;	// 0x3014d7a9
- (CGPoint)velocityInView:(id)view;	// 0x3014f609
@end

