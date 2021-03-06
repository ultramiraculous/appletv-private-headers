/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"


__attribute__((visibility("hidden")))
@interface ATVSWUpdateCheckTask : BRBackgroundTask {
}
+ (BOOL)_shouldPerformCheck;	// 0x24f875
+ (double)checkAgainDelay;	// 0x24f739
+ (double)normalCheckInterval;	// 0x24f579
+ (void)scheduleCheckAgainSoonTask;	// 0x24f671
+ (void)scheduleNormalCheckTask;	// 0x24f4c1
+ (void)setCheckAgainDelay:(double)delay;	// 0x24f799
+ (void)setNormalCheckInterval:(double)interval;	// 0x24f5d9
- (BOOL)perform:(id)perform;	// 0x24f831
@end

