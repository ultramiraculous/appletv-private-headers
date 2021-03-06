/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSTimer, NSMutableArray;

@interface IMSystemMonitor : NSObject {
	NSMutableArray *_listeners;	// 4 = 0x4
	NSDate *_idleStart;	// 8 = 0x8
	NSTimer *_timer;	// 12 = 0xc
	NSString *_userID;	// 16 = 0x10
	BOOL _switchedOut;	// 20 = 0x14
	BOOL _screensaverActive;	// 21 = 0x15
	BOOL _screenLocked;	// 22 = 0x16
	BOOL _active;	// 23 = 0x17
	BOOL _backingUp;	// 24 = 0x18
	BOOL _willSleep;	// 25 = 0x19
	double _delayTime;	// 28 = 0x1c
}
@property(assign, setter=setActive:) BOOL isActive;	// G=0x31ae02a5; S=0x31ae02b5; @synthesize=_active
@property(readonly, assign, nonatomic) BOOL isBackingUp;	// G=0x31ae0295; @synthesize=_backingUp
@property(assign, nonatomic) BOOL isFastUserSwitched;	// G=0x31ae0275; S=0x31ae0285; @synthesize=_switchedOut
@property(readonly, assign, nonatomic) BOOL isScreenLocked;	// G=0x31ae02d5; @synthesize=_screenLocked
@property(readonly, assign, nonatomic) BOOL isScreenSaverActive;	// G=0x31ae02c5; @synthesize=_screensaverActive
@property(readonly, assign, nonatomic) BOOL isSystemIdle;	// G=0x31ae0245; 
@property(readonly, assign, nonatomic) double systemIdleTime;	// G=0x31ae03cd; 
@property(readonly, assign, nonatomic) BOOL systemIsShuttingDown;	// G=0x31ae0259; 
@property(readonly, assign, nonatomic) BOOL systemIsSleeping;	// G=0x31ae02e5; @synthesize=_willSleep
+ (id)sharedMonitor;	// 0x31ae1621
- (id)init;	// 0x31ae13a9
- (void)_applicationDidEnterBackground:(id)_application;	// 0x31ae11a1
- (void)_applicationWillEnterForeground:(id)_application;	// 0x31ae1381
- (void)_deliverNotificationSelector:(SEL)selector;	// 0x31ae0bad
- (void)_handleLoginWindowNotification:(id)notification;	// 0x31ae0269
- (void)_postScreenLocked;	// 0x31ae0611
- (void)_postScreenSaverStarted;	// 0x31ae04e5
- (void)_registerForLoginWindowNotifications;	// 0x31ae026d
- (void)_registerForRestoreNotifications;	// 0x31ae0781
- (void)_restoreDidStart;	// 0x31ae0321
- (void)_restoreDidStop;	// 0x31ae02f5
- (void)_resume:(id)resume;	// 0x31ae09bd
- (void)_screenLocked:(id)locked;	// 0x31ae05a9
- (void)_screenSaverStarted:(id)started;	// 0x31ae041d
- (void)_screenSaverStopped:(id)stopped;	// 0x31ae0485
- (void)_screenUnlocked:(id)unlocked;	// 0x31ae0549
- (void)_setIdleState:(BOOL)state;	// 0x31ae08cd
- (void)_suspend:(id)suspend;	// 0x31ae0a75
- (void)_systemDidWake;	// 0x31ae06a1
- (void)_systemWillShutdown;	// 0x31ae03ad
- (void)_systemWillSleep;	// 0x31ae0675
- (void)_unregisterForLoginWindowNotifications;	// 0x31ae0271
- (void)_unregisterForRestoreNotifications;	// 0x31ae0c99
- (void)addListener:(id)listener;	// 0x31ae036d
- (id)autorelease;	// 0x31ae0241
- (void)dealloc;	// 0x31ae11c9
// declared property getter: - (BOOL)isActive;	// 0x31ae02a5
// declared property getter: - (BOOL)isBackingUp;	// 0x31ae0295
// declared property getter: - (BOOL)isFastUserSwitched;	// 0x31ae0275
// declared property getter: - (BOOL)isScreenLocked;	// 0x31ae02d5
// declared property getter: - (BOOL)isScreenSaverActive;	// 0x31ae02c5
// declared property getter: - (BOOL)isSystemIdle;	// 0x31ae0245
- (oneway void)release;	// 0x31ae0235
- (void)removeListener:(id)listener;	// 0x31ae034d
- (unsigned)retainCount;	// 0x31ae0239
// declared property setter: - (void)setActive:(BOOL)active;	// 0x31ae02b5
// declared property setter: - (void)setIsFastUserSwitched:(BOOL)switched;	// 0x31ae0285
// declared property getter: - (double)systemIdleTime;	// 0x31ae03cd
// declared property getter: - (BOOL)systemIsShuttingDown;	// 0x31ae0259
// declared property getter: - (BOOL)systemIsSleeping;	// 0x31ae02e5
@end

