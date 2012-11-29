/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface BRBackgroundTask : XXUnknownSuperclass {
	double _interval;	// 4 = 0x4
	double _delay;	// 12 = 0xc
	NSTimer *_initialDelayTimer;	// 20 = 0x14
	NSTimer *_reenableTimer;	// 24 = 0x18
	NSTimer *_intervalTimer;	// 28 = 0x1c
	BOOL _enabled;	// 32 = 0x20
	BOOL _firedWhileDisabled;	// 33 = 0x21
	int _taskType;	// 36 = 0x24
	NSDictionary *_userInfo;	// 40 = 0x28
}
@property(readonly, assign) BOOL enabled;	// G=0x38fd79; converted property
@property(readonly, assign) double interval;	// G=0x38fad9; converted property
+ (void)_resumeBackgroundProcessing:(id)processing;	// 0x390731
+ (void)_resumeHeavyBackgroundProcessing:(id)processing;	// 0x3907b1
+ (void)_suspendBackgroundProcessing:(id)processing;	// 0x3906dd
+ (void)_suspendHeavyBackgroundProcessing:(id)processing;	// 0x39075d
+ (void)_timeOrTimeZoneChangeNotification:(id)notification;	// 0x3907dd
+ (void)disableBackgroundTasks:(id)tasks ofType:(int)type;	// 0x38f1a1
+ (void)enableBackgroundTasksOfType:(int)type;	// 0x38ee31
+ (void)initialize;	// 0x38ec89
+ (void)performFinishedForTask:(id)task;	// 0x38f829
+ (void)registerBackgroundTask:(id)task;	// 0x38f41d
+ (id)taskForContext:(id)context ofType:(int)type;	// 0x38efd9
+ (void)unregisterBackgroundTask:(id)task;	// 0x38f621
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x38f9c9
- (void)_cancelTimers;	// 0x38ff55
- (void)_delayedPerform:(id)perform;	// 0x3903a5
- (void)_intervalPerform:(id)perform;	// 0x39057d
- (void)_setEnabled:(BOOL)enabled;	// 0x390381
- (void)_setupTimers;	// 0x38fd89
- (void)_updateTimersForTimeChange;	// 0x390089
- (id)_userInfo;	// 0x3906cd
- (void)dealloc;	// 0x38fa69
- (void)disable:(id)disable;	// 0x38fd41
- (void)enable;	// 0x38faf1
// converted property getter: - (BOOL)enabled;	// 0x38fd79
// converted property getter: - (double)interval;	// 0x38fad9
- (BOOL)perform:(id)perform;	// 0x38fd71
- (void)stop;	// 0x38fd75
- (int)type;	// 0x38fac9
@end
