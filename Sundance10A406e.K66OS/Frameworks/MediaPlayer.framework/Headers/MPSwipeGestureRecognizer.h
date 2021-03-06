/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIGestureRecognizer.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer {
	CGPoint _startLocation;	// 56 = 0x38
	double _startTime;	// 64 = 0x40
	UITouch *_trackingTouch;	// 72 = 0x48
	int _swipeDirection;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) int swipeDirection;	// G=0x35cf7a35; @synthesize=_swipeDirection
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x35cf764d
- (void)dealloc;	// 0x35cf79e5
- (void)reset;	// 0x35cf7985
// declared property getter: - (int)swipeDirection;	// 0x35cf7a35
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35cf76a9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35cf7935
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35cf78e5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35cf7785
@end

