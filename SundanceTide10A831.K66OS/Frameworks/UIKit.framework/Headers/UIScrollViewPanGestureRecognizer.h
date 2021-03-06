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
	UIScrollView *_scrollView;	// 124 = 0x7c
	SEL _scrollViewAction;	// 128 = 0x80
	CGPoint _reconsideredLockingLocation;	// 132 = 0x84
	unsigned _lastLockingAxis : 2;	// 140 = 0x8c
	unsigned _lockingAxis : 2;	// 140 = 0x8c
	unsigned _hasChildScrollView : 1;	// 140 = 0x8c
	unsigned _hasParentScrollView : 1;	// 140 = 0x8c
	unsigned _caughtDeceleratingScrollView : 1;	// 140 = 0x8c
	unsigned _directionalLockEnabled : 1;	// 140 = 0x8c
	unsigned _waitingForParentScrollView : 1;	// 141 = 0x8d
}
@property(readonly, assign, nonatomic, getter=_caughtDeceleratingScrollView) BOOL caughtDeceleratingScrollView;	// G=0x31d0f2f9; 
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x31efa28d; S=0x31c3d209; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x31c3d1d5; S=0x31c3d12d; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31c3cf19
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x31d0ccc1
// declared property getter: - (BOOL)_caughtDeceleratingScrollView;	// 0x31d0f2f9
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x31d0c771
- (float)_hysteresis;	// 0x31d0daad
- (void)_resetGestureRecognizer;	// 0x31cf5a41
- (void)_scrollViewDidEndZooming;	// 0x31d654dd
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x31d0ce39
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x31cefb85
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x31efa28d
- (void)removeTarget:(id)target action:(SEL)action;	// 0x31d19229
// declared property getter: - (id)scrollView;	// 0x31c3d1d5
- (void)setDelegate:(id)delegate;	// 0x31c3d13d
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x31c3d209
// declared property setter: - (void)setScrollView:(id)view;	// 0x31c3d12d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31cec849
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31d7bad9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31d0c459
- (CGPoint)translationInView:(id)view;	// 0x31d0d889
- (CGPoint)velocityInView:(id)view;	// 0x31ca9321
@end

