/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library
#import "ScreenReaderCore-Structs.h"

@class SCRCStackQueue, NSString, NSThread;

@interface SCRCThread : NSObject {
	SCRCStackQueue *_queue;	// 4 = 0x4
	id _queueLock;	// 8 = 0x8
	CFRunLoopSourceRef _source;	// 12 = 0xc
	CFRunLoopRef _runLoop;	// 16 = 0x10
	id _key;	// 20 = 0x14
	BOOL _isInvalid;	// 24 = 0x18
	BOOL _isRegistered;	// 25 = 0x19
	BOOL _isTimerSet;	// 26 = 0x1a
	double _lastStartTime;	// 28 = 0x1c
	NSString *_description;	// 36 = 0x24
	BOOL _descriptionChanged;	// 40 = 0x28
	NSThread *_nsThread;	// 44 = 0x2c
}
@property(assign) BOOL isInvalid;	// G=0x3121c8d5; S=0x3121d371; converted property
@property(readonly, assign) double lastStartTime;	// G=0x3121e8d5; converted property
+ (double)_performSelector:(SEL)selector withThreadKey:(id)threadKey onTarget:(id)target waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count firstObject:(id)object moreObjects:(void *)objects;	// 0x3121b95d
+ (int)activeThreadCount;	// 0x3121e7b1
+ (id)activity;	// 0x3121e725
+ (void)initialize;	// 0x3121e7f1
+ (void)invalidateForKey:(id)key;	// 0x3121d89d
+ (double)lastStartTimeForKey:(id)key;	// 0x3121da09
+ (void)postStopNotification;	// 0x3121e2e1
- (id)init;	// 0x3121e79d
- (void)_enqueueTask:(id)task cancelMask:(unsigned long)mask lastStartTime:(double *)time;	// 0x3121bf69
- (id)_initWithKey:(id)key task:(id)task;	// 0x3121ccc9
- (double)_performSelector:(SEL)selector onTarget:(id)target cancelMask:(unsigned long)mask count:(unsigned long)count firstObject:(id)object moreObjects:(void *)objects;	// 0x3121e9bd
- (void)_processQueue;	// 0x3121c1f1
- (void)_processQueueFromTimer;	// 0x3121c1d1
- (void)_runThread:(id)thread;	// 0x3121ce25
- (void)_setKey:(id)key;	// 0x3121bef9
- (void)_setName:(id)name;	// 0x3121ea5d
- (void)dealloc;	// 0x3121d7b9
// converted property getter: - (BOOL)isInvalid;	// 0x3121c8d5
// converted property getter: - (double)lastStartTime;	// 0x3121e8d5
- (double)performSelector:(SEL)selector onTarget:(id)target cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x3121e955
- (double)performSelector:(SEL)selector onTarget:(id)target count:(unsigned long)count objects:(id)objects;	// 0x3121e989
// converted property setter: - (void)setIsInvalid:(BOOL)invalid;	// 0x3121d371
- (void)setName:(id)name;	// 0x3121ea81
@end

