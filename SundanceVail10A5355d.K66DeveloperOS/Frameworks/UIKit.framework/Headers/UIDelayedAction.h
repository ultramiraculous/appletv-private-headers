/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSTimer;

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
@property(readonly, assign) double delay;	// G=0x33ac8b35; converted property
@property(retain) id target;	// G=0x33bed3f5; S=0x33ad9e3d; converted property
@property(readonly, retain) id userInfo;	// G=0x33bed3a5; converted property
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay;	// 0x33ac86b9
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay mode:(id)mode;	// 0x33ac86fd
- (void)cancel;	// 0x33adca39
- (void)dealloc;	// 0x33adca95
// converted property getter: - (double)delay;	// 0x33ac8b35
- (BOOL)scheduled;	// 0x33bed3b5
// converted property setter: - (void)setTarget:(id)target;	// 0x33ad9e3d
// converted property getter: - (id)target;	// 0x33bed3f5
- (void)timerFired:(id)fired;	// 0x33adc2a9
- (void)touch;	// 0x33ac8b4d
- (void)touchWithDelay:(double)delay;	// 0x33ac87e5
- (void)unschedule;	// 0x33adca59
// converted property getter: - (id)userInfo;	// 0x33bed3a5
@end

