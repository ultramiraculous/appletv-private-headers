/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIAnimation : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned reserved : 27;
	} _animationFlags;	// 20 = 0x14
@private
	double _startTime;	// 24 = 0x18
	double _duration;	// 32 = 0x20
	int _state;	// 40 = 0x28
}
@property(assign) SEL action;	// G=0x3300c72d; S=0x330501c1; converted property
@property(retain) id completion;	// G=0x3300c71d; S=0x3309e0a1; converted property
@property(assign) id delegate;	// G=0x3300bf41; S=0x3300bae5; converted property
@property(readonly, assign) int state;	// G=0x3300bc3d; converted property
@property(readonly, retain) id target;	// G=0x3305058d; converted property
- (id)initWithTarget:(id)target;	// 0x3300b9d9
// converted property getter: - (SEL)action;	// 0x3300c72d
// converted property getter: - (id)completion;	// 0x3300c71d
- (void)dealloc;	// 0x3300c73d
// converted property getter: - (id)delegate;	// 0x3300bf41
- (float)fractionForTime:(double)time;	// 0x3300c0c5
- (void)markStart:(double)start;	// 0x3300bf15
- (void)markStop;	// 0x3300c709
- (float)progressForFraction:(float)fraction;	// 0x3300c16d
// converted property setter: - (void)setAction:(SEL)action;	// 0x330501c1
- (void)setAnimationCurve:(int)curve;	// 0x330501a9
// converted property setter: - (void)setCompletion:(id)completion;	// 0x3309e0a1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3300bae5
- (void)setDuration:(double)duration;	// 0x3300bc4d
- (void)setProgress:(float)progress;	// 0x3309e0e1
// converted property getter: - (int)state;	// 0x3300bc3d
- (void)stopAnimation;	// 0x3309e069
// converted property getter: - (id)target;	// 0x3305058d
- (BOOL)tvOutput;	// 0x3300bf01
@end

