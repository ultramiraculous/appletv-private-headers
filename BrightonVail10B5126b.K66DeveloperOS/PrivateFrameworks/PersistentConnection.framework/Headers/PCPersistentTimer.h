/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PCLoggingDelegate.h"
#import "PersistentConnection-Structs.h"

@class NSDate, NSString, NSTimer;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate> {
	double _fireTime;	// 4 = 0x4
	double _startTime;	// 12 = 0xc
	double _lastUpdateTime;	// 20 = 0x14
	double _minimumEarlyFireProportion;	// 28 = 0x1c
	BOOL _triggerOnGMTChange;	// 36 = 0x24
	BOOL _disableSystemWaking;	// 37 = 0x25
	NSDate *_scheduledWakeDate;	// 40 = 0x28
	NSString *_serviceIdentifier;	// 44 = 0x2c
	id _target;	// 48 = 0x30
	SEL _selector;	// 52 = 0x34
	id _userInfo;	// 56 = 0x38
	NSTimer *_preventSleepRunLoopTimer;	// 60 = 0x3c
	NSTimer *_fireRunLoopTimer;	// 64 = 0x40
	unsigned _pmRootDomainConnect;	// 68 = 0x44
	unsigned _pmNotifier;	// 72 = 0x48
	IONotificationPortRef _pmNotificationPort;	// 76 = 0x4c
	CFRunLoopSourceRef _pmRunLoopSource;	// 80 = 0x50
	BOOL _sleepIsImminent;	// 84 = 0x54
	unsigned _powerAssertionID;	// 88 = 0x58
	id _timeChangeSource;	// 92 = 0x5c
	BOOL _disallowInterfaceManagerUsage;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL disableSystemWaking;	// G=0x352bf7a1; S=0x352bd339; @synthesize=_disableSystemWaking
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x352bf7b1; @synthesize=_serviceIdentifier
@property(assign, nonatomic) double minimumEarlyFireProportion;	// G=0x352bf789; S=0x352bd239; @synthesize=_minimumEarlyFireProportion
@property(readonly, retain) id userInfo;	// G=0x352bdd0d; converted property
+ (double)currentMachTimeInterval;	// 0x352bf6e1
+ (id)lastSystemWakeDate;	// 0x352bf641
- (id)initWithFireDate:(id)fireDate serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x352bcf49
- (id)initWithTimeInterval:(double)timeInterval serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x352bcf9d
- (id)initWithTimeInterval:(double)timeInterval serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info disallowInterfaceManagerUsage:(BOOL)usage;	// 0x352bcff5
- (id)_earlyFireDate;	// 0x352bdd31
- (void)_fireTimerFired;	// 0x352be961
- (id)_initWithAbsoluteTime:(double)absoluteTime serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info triggerOnGMTChange:(BOOL)change;	// 0x352bd03d
- (double)_nextForcedAlignmentAbsoluteTime;	// 0x352bf4a1
- (void)_powerChangedMessageType:(unsigned)type notificationID:(void *)anId;	// 0x352bed8d
- (void)_preventSleepFired;	// 0x352be6c9
- (void)_setPowerMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;	// 0x352beae5
- (void)_setSignificantTimeChangeMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;	// 0x352bf399
- (void)_significantTimeChange;	// 0x352bf2e1
- (void)_updateTimers;	// 0x352be271
- (void)dealloc;	// 0x352bd1c1
- (id)debugDescription;	// 0x352bf539
// declared property getter: - (BOOL)disableSystemWaking;	// 0x352bf7a1
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x352bf21d
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)state;	// 0x352bf159
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x352bf095
- (void)invalidate;	// 0x352bd901
- (BOOL)isValid;	// 0x352bdce5
// declared property getter: - (id)loggingIdentifier;	// 0x352bf7b1
// declared property getter: - (double)minimumEarlyFireProportion;	// 0x352bf789
- (void)scheduleInRunLoop:(id)runLoop;	// 0x352bd401
- (void)scheduleInRunLoop:(id)runLoop inMode:(id)mode;	// 0x352bd421
// declared property setter: - (void)setDisableSystemWaking:(BOOL)waking;	// 0x352bd339
// declared property setter: - (void)setMinimumEarlyFireProportion:(double)proportion;	// 0x352bd239
// converted property getter: - (id)userInfo;	// 0x352bdd0d
@end

