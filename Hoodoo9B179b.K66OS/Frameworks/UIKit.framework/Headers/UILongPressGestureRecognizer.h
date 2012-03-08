/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableSet, NSArray;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
@private
	NSArray *_touches;	// 56 = 0x38
	NSMutableSet *_activeTouches;	// 60 = 0x3c
	int _numberOfTouchesRequired;	// 64 = 0x40
	double _minimumPressDuration;	// 68 = 0x44
	float _allowableMovement;	// 76 = 0x4c
	CGPoint _startPointScreen;	// 80 = 0x50
	id _enoughTimeElapsed;	// 88 = 0x58
	id _tooMuchTimeElapsed;	// 92 = 0x5c
	id _imp;	// 96 = 0x60
	unsigned _gotTouchEnd : 1;	// 100 = 0x64
	unsigned _gotTooMany : 1;	// 100 = 0x64
	unsigned _gotEnoughTaps : 1;	// 100 = 0x64
	unsigned _cancelPastAllowableMovement : 1;	// 100 = 0x64
}
@property(assign, nonatomic) float allowableMovement;	// G=0x331819cd; S=0x32f06cf5; @synthesize=_allowableMovement
@property(assign, nonatomic) BOOL cancelPastAllowableMovement;	// G=0x33181715; S=0x33181729; 
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x32fb9a49; 
@property(assign, nonatomic) double delay;	// G=0x32fb9ded; S=0x32f45a85; @synthesize=_minimumPressDuration
@property(assign, nonatomic) double minimumPressDuration;	// G=0x331816fd; S=0x32f1cea9; 
@property(assign, nonatomic) int numberOfTapsRequired;	// G=0x32fbc6d1; S=0x331816b5; 
@property(assign, nonatomic) int numberOfTouchesRequired;	// G=0x32fbc6c1; S=0x32f06cbd; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x3300fe75; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x32fb9bbd; @synthesize=_touches
- (id)initWithCoder:(id)coder;	// 0x33181435
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32f06b89
- (void)_resetGestureRecognizer;	// 0x32fc2951
- (void)_startTapFinishedTimer;	// 0x33181755
// declared property getter: - (float)allowableMovement;	// 0x331819cd
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x3300f631
// declared property getter: - (BOOL)cancelPastAllowableMovement;	// 0x33181715
// declared property getter: - (CGPoint)centroid;	// 0x32fb9a49
- (CGPoint)centroidScreen;	// 0x32fb99d1
- (void)clearTimer;	// 0x32ee4d99
- (void)dealloc;	// 0x32ee4cfd
// declared property getter: - (double)delay;	// 0x32fb9ded
- (void)encodeWithCoder:(id)coder;	// 0x331815a5
- (void)enoughTimeElapsed:(id)elapsed;	// 0x3300e641
- (void)invalidate;	// 0x33057899
- (CGPoint)locationInView:(id)view;	// 0x3300e7a9
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x331818a1
// declared property getter: - (double)minimumPressDuration;	// 0x331816fd
// declared property getter: - (int)numberOfTapsRequired;	// 0x32fbc6d1
- (unsigned)numberOfTouches;	// 0x33181881
// declared property getter: - (int)numberOfTouchesRequired;	// 0x32fbc6c1
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x32f06cf5
// declared property setter: - (void)setCancelPastAllowableMovement:(BOOL)movement;	// 0x33181729
// declared property setter: - (void)setDelay:(double)delay;	// 0x32f45a85
// declared property setter: - (void)setMinimumPressDuration:(double)duration;	// 0x32f1cea9
// declared property setter: - (void)setNumberOfTapsRequired:(int)tapsRequired;	// 0x331816b5
// declared property setter: - (void)setNumberOfTouchesRequired:(int)touchesRequired;	// 0x32f06cbd
- (void)setTouches:(id)touches;	// 0x32ee4e19
- (void)setView:(id)view;	// 0x32f06d05
// declared property getter: - (CGPoint)startPoint;	// 0x3300fe75
- (void)startTimer;	// 0x32fb9d51
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x331817fd
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x3318186d
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x3318181d
- (void)tooMuchElapsed:(id)elapsed;	// 0x33181741
// declared property getter: - (id)touches;	// 0x32fb9bbd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32fb96d5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33012215
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32fbbec9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32fec4c1
@end
