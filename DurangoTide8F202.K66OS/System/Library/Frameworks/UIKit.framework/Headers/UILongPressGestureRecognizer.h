/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSArray, NSMutableSet;
@protocol UILongPressGestureRecognizerDelegate;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
@private
	NSArray *_touches;	// 60 = 0x3c
	NSMutableSet *_activeTouches;	// 64 = 0x40
	int _numberOfTouchesRequired;	// 68 = 0x44
	double _delay;	// 72 = 0x48
	float _allowableMovement;	// 80 = 0x50
	CGPoint _startPointScreen;	// 84 = 0x54
	id _enoughTimeElapsed;	// 92 = 0x5c
	id _tooMuchTimeElapsed;	// 96 = 0x60
	id _imp;	// 100 = 0x64
	unsigned _gotTouchEnd : 1;	// 104 = 0x68
	unsigned _gotTooMany : 1;	// 104 = 0x68
	unsigned _gotEnoughTaps : 1;	// 104 = 0x68
	unsigned _cancelPastAllowableMovement : 1;	// 104 = 0x68
}
@property(assign, nonatomic) float allowableMovement;	// G=0x307db1f5; S=0x306045c5; @synthesize=_allowableMovement
@property(assign, nonatomic) BOOL cancelPastAllowableMovement;	// G=0x307db1c5; S=0x307db1d9; 
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x30642a35; 
@property(assign, nonatomic) double delay;	// G=0x30642c95; S=0x3061407d; @synthesize=_delay
@property(assign, nonatomic) id<UILongPressGestureRecognizerDelegate> delegate;	// G=0x307db205; S=0x305f0a49; 
@property(assign, nonatomic) double minimumPressDuration;	// G=0x307db1b5; S=0x305f0a75; 
@property(assign, nonatomic) int numberOfTapsRequired;	// G=0x306e30fd; S=0x307db381; 
@property(assign, nonatomic) int numberOfTouchesRequired;	// G=0x306e30ed; S=0x30604595; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x307db3c5; 
@property(readonly, retain, nonatomic) NSArray *touches;	// G=0x30642b81; @synthesize=_touches
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x305f0819
- (void)_resetGestureRecognizer;	// 0x30642e9d
- (void)_startTapFinishedTimer;	// 0x307db2c9
// declared property getter: - (float)allowableMovement;	// 0x307db1f5
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x306e19d1
// declared property getter: - (BOOL)cancelPastAllowableMovement;	// 0x307db1c5
// declared property getter: - (CGPoint)centroid;	// 0x30642a35
- (CGPoint)centroidScreen;	// 0x306429d9
- (void)clearTimer;	// 0x305f3811
- (void)dealloc;	// 0x305f3781
// declared property getter: - (double)delay;	// 0x30642c95
// declared property getter: - (id)delegate;	// 0x307db205
- (void)enoughTimeElapsed:(id)elapsed;	// 0x306a6d65
- (void)invalidate;	// 0x306c6259
- (CGPoint)locationInView:(id)view;	// 0x306a6e31
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x307db411
// declared property getter: - (double)minimumPressDuration;	// 0x307db1b5
// declared property getter: - (int)numberOfTapsRequired;	// 0x306e30fd
- (unsigned)numberOfTouches;	// 0x307db231
// declared property getter: - (int)numberOfTouchesRequired;	// 0x306e30ed
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x306045c5
// declared property setter: - (void)setCancelPastAllowableMovement:(BOOL)movement;	// 0x307db1d9
// declared property setter: - (void)setDelay:(double)delay;	// 0x3061407d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305f0a49
// declared property setter: - (void)setMinimumPressDuration:(double)duration;	// 0x305f0a75
// declared property setter: - (void)setNumberOfTapsRequired:(int)tapsRequired;	// 0x307db381
// declared property setter: - (void)setNumberOfTouchesRequired:(int)touchesRequired;	// 0x30604595
- (void)setTouches:(id)touches;	// 0x305f3881
- (void)setView:(id)view;	// 0x306045d5
// declared property getter: - (CGPoint)startPoint;	// 0x307db3c5
- (void)startTimer;	// 0x30642c01
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x307db2ad
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x307db251
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x307db269
- (void)tooMuchElapsed:(id)elapsed;	// 0x307db369
// declared property getter: - (id)touches;	// 0x30642b81
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x306426dd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x306b1cc9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x306433d5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30642ca5
@end

