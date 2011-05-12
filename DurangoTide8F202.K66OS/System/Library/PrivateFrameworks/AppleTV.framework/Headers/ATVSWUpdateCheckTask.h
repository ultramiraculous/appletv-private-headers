/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBackgroundTask.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVSWUpdateCheckTask : BRBackgroundTask {
}
+ (BOOL)_shouldPerformCheck;	// 0x336eb9b5
+ (double)checkAgainDelay;	// 0x336ebaf5
+ (double)normalCheckInterval;	// 0x336ebc9d
+ (void)scheduleCheckAgainSoonTask;	// 0x336ebb4d
+ (void)scheduleNormalCheckTask;	// 0x336ebcf5
+ (void)setCheckAgainDelay:(double)delay;	// 0x336eba59
+ (void)setNormalCheckInterval:(double)interval;	// 0x336ebc01
- (BOOL)perform:(id)perform;	// 0x336eba25
@end
