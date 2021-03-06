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
	double _lastUserActivity;	// 4 = 0x4
	NSTimer *_backgroundProcessSuppressionTimer;	// 12 = 0xc
	NSTimer *_heavyBackgroundProcessSuppresionTimer;	// 16 = 0x10
}
+ (void)holdOffBackgroundTasks;	// 0x4194c1
+ (BOOL)okToDoBackgroundProcessing;	// 0x4194e9
+ (void)setSingleton:(id)singleton;	// 0x419549
+ (id)singleton;	// 0x419539
+ (double)timeSinceLastUserAction;	// 0x419511
- (id)init;	// 0x419559
- (void)_holdOffBackgroundTasks;	// 0x4196a1
- (void)_holdOffHeavyBackgroundTasks;	// 0x419799
- (BOOL)_okToDoBackgroundProcessing;	// 0x419925
- (void)_sendResumeBackgroundProcessingNotification;	// 0x4199b5
- (void)_sendResumeHeavyBackgroundProcessingNotification;	// 0x419b15
- (void)_sendStopBackgroundProcessingNotification;	// 0x41993d
- (void)_sendStopHeavyBackgroundProcessingNotification;	// 0x419a9d
- (void)_setOKToDoBackgroundProcessing:(id)doBackgroundProcessing;	// 0x419871
- (void)_setOKToDoHeavyBackgroundProcessing:(id)doHeavyBackgroundProcessing;	// 0x4198ad
- (void)_timeOrTimeZoneChangeNotification:(id)notification;	// 0x419c1d
- (double)_timeSinceLastUserAction;	// 0x419b8d
- (void)_updateActivity:(id)activity;	// 0x419bd1
- (void)dealloc;	// 0x419645
@end

