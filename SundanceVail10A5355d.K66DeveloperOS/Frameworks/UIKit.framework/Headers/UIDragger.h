/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIImageView, UIView, NSArray;

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
- (id)init;	// 0x33bf0c65
- (void)_continueDrag:(id)drag;	// 0x33bf1201
- (double)_delayUntilNextEvent;	// 0x33bf10c1
- (void)_postMouseEvent:(int)event timestamp:(unsigned long long)timestamp location:(CGPoint)location;	// 0x33bf0f91
- (void)_smoothScrollingDidEnd:(id)_smoothScrolling;	// 0x33bf11cd
- (void)_smoothScrollingWillStart:(id)_smoothScrolling;	// 0x33bf11b9
- (void)_stopDrag:(id)drag;	// 0x33bf11dd
- (void)dealloc;	// 0x33bf0e61
- (void)dragDidEnd;	// 0x33bf1159
- (void)run;	// 0x33bf13f1
- (void)setAction:(SEL)action;	// 0x33bf0f31
- (void)setDelegate:(id)delegate;	// 0x33bf0f21
- (void)setDuration:(double)duration;	// 0x33bf0f69
- (void)setInterpolation:(/*function-pointer*/ void *)interpolation;	// 0x33bf0f01
- (void)setStartLocation:(CGPoint)location;	// 0x33bf0f41
- (void)setStopLocation:(CGPoint)location;	// 0x33bf0f55
- (void)setTarget:(id)target;	// 0x33bf0f11
- (void)showFinger;	// 0x33bf0f7d
@end

