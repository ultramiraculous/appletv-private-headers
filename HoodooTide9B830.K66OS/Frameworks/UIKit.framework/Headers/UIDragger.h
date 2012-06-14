/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, UIView, UIImageView;

@interface UIDragger : NSObject {
	/*function-pointer*/ void *_interpolator;	// 4 = 0x4
	UIView *_target;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	CGPoint _startLocation;	// 20 = 0x14
	CGPoint _stopLocation;	// 28 = 0x1c
	double _duration;	// 36 = 0x24
	BOOL _showFinger;	// 44 = 0x2c
	unsigned _port;	// 48 = 0x30
	NSArray *_modes;	// 52 = 0x34
	unsigned long long _startTimestamp;	// 56 = 0x38
	unsigned long long _stopTimestamp;	// 64 = 0x40
	unsigned long long _lastTimestamp;	// 72 = 0x48
	BOOL _waitingForSmoothScrolling;	// 80 = 0x50
	UIImageView *_fingerView;	// 84 = 0x54
}
- (id)init;	// 0x3021f405
- (void)_continueDrag:(id)drag;	// 0x3021f949
- (double)_delayUntilNextEvent;	// 0x3021f809
- (void)_postMouseEvent:(int)event timestamp:(unsigned long long)timestamp location:(CGPoint)location;	// 0x3021f6f5
- (void)_smoothScrollingDidEnd:(id)_smoothScrolling;	// 0x3021f90d
- (void)_smoothScrollingWillStart:(id)_smoothScrolling;	// 0x3021f8f9
- (void)_stopDrag:(id)drag;	// 0x3021f91d
- (void)dealloc;	// 0x3021f5c5
- (void)dragDidEnd;	// 0x3021f89d
- (void)run;	// 0x3021fb39
- (void)setAction:(SEL)action;	// 0x3021f695
- (void)setDelegate:(id)delegate;	// 0x3021f685
- (void)setDuration:(double)duration;	// 0x3021f6cd
- (void)setInterpolation:(/*function-pointer*/ void *)interpolation;	// 0x3021f665
- (void)setStartLocation:(CGPoint)location;	// 0x3021f6a5
- (void)setStopLocation:(CGPoint)location;	// 0x3021f6b9
- (void)setTarget:(id)target;	// 0x3021f675
- (void)showFinger;	// 0x3021f6e1
@end
