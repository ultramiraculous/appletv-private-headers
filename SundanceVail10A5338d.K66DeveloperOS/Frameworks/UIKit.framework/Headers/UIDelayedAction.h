/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSString;

__attribute__((visibility("hidden")))
@interface UIDelayedAction : NSObject {
	id m_target;	// 4 = 0x4
	SEL m_action;	// 8 = 0x8
	id m_userInfo;	// 12 = 0xc
	double m_delay;	// 16 = 0x10
	NSTimer *m_timer;	// 24 = 0x18
	BOOL m_canceled;	// 28 = 0x1c
	NSString *m_runLoopMode;	// 32 = 0x20
}
@property(readonly, assign) double delay;	// G=0x30ce61cd; converted property
@property(retain) id target;	// G=0x30e09221; S=0x30cf7415; converted property
@property(readonly, retain) id userInfo;	// G=0x30e091d1; converted property
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay;	// 0x30ce5d59
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay mode:(id)mode;	// 0x30ce5d9d
- (void)cancel;	// 0x30cfa019
- (void)dealloc;	// 0x30cfa075
// converted property getter: - (double)delay;	// 0x30ce61cd
- (BOOL)scheduled;	// 0x30e091e1
// converted property setter: - (void)setTarget:(id)target;	// 0x30cf7415
// converted property getter: - (id)target;	// 0x30e09221
- (void)timerFired:(id)fired;	// 0x30cf9881
- (void)touch;	// 0x30ce61e5
- (void)touchWithDelay:(double)delay;	// 0x30ce5e85
- (void)unschedule;	// 0x30cfa039
// converted property getter: - (id)userInfo;	// 0x30e091d1
@end

