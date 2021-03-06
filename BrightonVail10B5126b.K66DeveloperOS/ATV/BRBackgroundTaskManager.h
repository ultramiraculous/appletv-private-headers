/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface BRBackgroundTaskManager : BRSingleton {
	int _numberOfCurrentBackgroundProcesses;	// 4 = 0x4
	double _lastUserActivity;	// 8 = 0x8
	NSTimer *_backgroundProcessSuppressionTimer;	// 16 = 0x10
	NSTimer *_heavyBackgroundProcessSuppresionTimer;	// 20 = 0x14
}
+ (BOOL)backgroundTasksRunning;	// 0x36ce21
+ (void)finishedBackgroundProcessing;	// 0x36cdf9
+ (void)holdOffBackgroundTasks;	// 0x36cd81
+ (BOOL)okToDoBackgroundProcessing;	// 0x36cda9
+ (void)setSingleton:(id)singleton;	// 0x36ce81
+ (id)singleton;	// 0x36ce71
+ (void)startingBackgroundProcessing;	// 0x36cdd1
+ (double)timeSinceLastUserAction;	// 0x36ce49
- (id)init;	// 0x36ce91
- (BOOL)_backgroundTasksRunning;	// 0x36d365
- (void)_finishedBackgroundProcessing;	// 0x36d351
- (void)_holdOffBackgroundTasks;	// 0x36cfa1
- (void)_holdOffHeavyBackgroundTasks;	// 0x36d079
- (BOOL)_okToDoBackgroundProcessing;	// 0x36d205
- (void)_sendResumeBackgroundProcessingNotification;	// 0x36d265
- (void)_sendResumeHeavyBackgroundProcessingNotification;	// 0x36d2f5
- (void)_sendStopBackgroundProcessingNotification;	// 0x36d21d
- (void)_sendStopHeavyBackgroundProcessingNotification;	// 0x36d2ad
- (void)_setOKToDoBackgroundProcessing:(id)doBackgroundProcessing;	// 0x36d151
- (void)_setOKToDoHeavyBackgroundProcessing:(id)doHeavyBackgroundProcessing;	// 0x36d18d
- (void)_startingBackgroundProcessing;	// 0x36d33d
- (double)_timeSinceLastUserAction;	// 0x36d37d
- (void)_updateActivity:(id)activity;	// 0x36d3c1
- (void)dealloc;	// 0x36cf45
@end

