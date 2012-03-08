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
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x353c201d; S=0x350fc6f1; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x350fc6bd; S=0x350fc619; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x350fc42d
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x351d7be5
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x351d7679
- (float)_hysteresis;	// 0x351d89d1
- (void)_resetGestureRecognizer;	// 0x351bd1b5
- (void)_scrollViewDidEndZooming;	// 0x35232489
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x351d7d75
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x351b6d81
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x353c201d
- (void)removeTarget:(id)target action:(SEL)action;	// 0x353c1ee9
// declared property getter: - (id)scrollView;	// 0x350fc6bd
- (void)setDelegate:(id)delegate;	// 0x350fc629
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x350fc6f1
// declared property setter: - (void)setScrollView:(id)view;	// 0x350fc619
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x351b48f5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x351f7ca5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x351d73cd
- (CGPoint)translationInView:(id)view;	// 0x351d87a9
- (CGPoint)velocityInView:(id)view;	// 0x351da609
@end
