/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PeriodicWorkerTaskDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSConditionLock, NSTimer, NSLock, NSMutableSet;

@interface PeriodicWorkerThread : XXUnknownSuperclass <PeriodicWorkerTaskDelegate> {
	BOOL running_;	// 52 = 0x34
	BOOL enabled_;	// 53 = 0x35
	NSConditionLock *workLock_;	// 56 = 0x38
	NSLock *taskLock_;	// 60 = 0x3c
	NSTimer *intervalTimer_;	// 64 = 0x40
	double interval_;	// 68 = 0x44
	NSMutableSet *tasks_;	// 76 = 0x4c
	NSMutableArray *inProcessTasks_;	// 80 = 0x50
}
@property(assign) BOOL enabled;	// G=0x4ad9c1; S=0x4ad9e5; @synthesize=enabled_
@property(retain) NSMutableArray *inProcessTasks;	// G=0x4adfc5; S=0x4adfd9; @synthesize=inProcessTasks_
@property(assign) double interval;	// G=0x4adb4d; S=0x4adb7d; @synthesize=interval_
@property(retain) NSTimer *intervalTimer;	// G=0x4adf7d; S=0x4adf91; @synthesize=intervalTimer_
@property(assign) BOOL running;	// G=0x4adf05; S=0x4adf1d; @synthesize=running_
@property(retain) NSLock *taskLock;	// G=0x4adf59; S=0x4adf6d; @synthesize=taskLock_
@property(retain) NSMutableSet *tasks;	// G=0x4adfa1; S=0x4adfb5; @synthesize=tasks_
@property(retain) NSConditionLock *workLock;	// G=0x4adf35; S=0x4adf49; @synthesize=workLock_
- (id)init;	// 0x4ad315
- (id)initWithInterval:(double)interval;	// 0x4ad32d
- (void)addPeriodicWorkerTask:(id)task;	// 0x4adce5
- (void)dealloc;	// 0x4ad449
// declared property getter: - (BOOL)enabled;	// 0x4ad9c1
// declared property getter: - (id)inProcessTasks;	// 0x4adfc5
- (void)installTimer;	// 0x4ad8a5
// declared property getter: - (double)interval;	// 0x4adb4d
// declared property getter: - (id)intervalTimer;	// 0x4adf7d
- (void)main;	// 0x4ad509
- (void)periodicWorkerTaskDidFinish:(id)periodicWorkerTask;	// 0x4ade9d
- (void)periodicWorkerTaskDidFinishWithCancel:(id)periodicWorkerTask;	// 0x4adef5
- (void)removePeriodicWorkerTask:(id)task;	// 0x4add69
- (void)removeTaskFromCollections:(id)collections;	// 0x4adddd
// declared property getter: - (BOOL)running;	// 0x4adf05
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x4ad9e5
// declared property setter: - (void)setInProcessTasks:(id)processTasks;	// 0x4adfd9
// declared property setter: - (void)setInterval:(double)interval;	// 0x4adb7d
// declared property setter: - (void)setIntervalTimer:(id)timer;	// 0x4adf91
// declared property setter: - (void)setRunning:(BOOL)running;	// 0x4adf1d
// declared property setter: - (void)setTaskLock:(id)lock;	// 0x4adf6d
// declared property setter: - (void)setTasks:(id)tasks;	// 0x4adfb5
// declared property setter: - (void)setWorkLock:(id)lock;	// 0x4adf49
// declared property getter: - (id)taskLock;	// 0x4adf59
// declared property getter: - (id)tasks;	// 0x4adfa1
- (void)trigger:(id)trigger;	// 0x4ad96d
// declared property getter: - (id)workLock;	// 0x4adf35
@end
