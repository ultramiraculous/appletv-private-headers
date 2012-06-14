/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray, NSConditionLock;

__attribute__((visibility("hidden")))
@interface BRTaskManager : BRSingleton {
	NSMutableArray *_taskQueue;	// 4 = 0x4
	NSConditionLock *_queueLock;	// 8 = 0x8
	int _numberOfTaskThreadsRunning;	// 12 = 0xc
	int _numberOfFinishingThreads;	// 16 = 0x10
}
+ (void)setSingleton:(id)singleton;	// 0x3574b5
+ (id)singleton;	// 0x3574a5
- (id)init;	// 0x3574c5
- (void)_processTasks;	// 0x3578c9
- (void)cancelTask:(id)task;	// 0x357755
- (void)dealloc;	// 0x35757d
- (void)scheduleTask:(id)task;	// 0x3575e1
@end

