/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVCloudMusicIdleStopMonitor : XXUnknownSuperclass {
	NSTimer *_playerStopTimer;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x400859
- (id)init;	// 0x4008d5
- (void).cxx_destruct;	// 0x400c75
- (void)_cancelPlayerStopTimer;	// 0x400be9
- (void)_playerStateChanged:(id)changed;	// 0x400969
- (void)_playerStopTimerHandler:(id)handler;	// 0x400b71
- (void)_userActivityHandler:(id)handler;	// 0x400b09
@end

