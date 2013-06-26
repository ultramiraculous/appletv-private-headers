/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSTimer;

@interface ATVPowerManager : NSObject {
	BOOL _deviceAsleep;	// 4 = 0x4
	BOOL _idleSleepTimeSet;	// 5 = 0x5
	int _sleepTimeoutInMinutes;	// 8 = 0x8
	NSTimer *_powerAssertionTimer;	// 12 = 0xc
	unsigned _pmNoIdleSleepAssertionID;	// 16 = 0x10
	unsigned _ioNotifier;	// 20 = 0x14
	unsigned _ioConnection;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isDeviceAsleep) BOOL deviceAsleep;	// G=0x30089061; S=0x30089b71; @synthesize=_deviceAsleep
@property(assign, nonatomic, getter=isIdleSleepTimeSet) BOOL idleSleepTimeSet;	// G=0x30089bb9; S=0x30089bc9; @synthesize=_idleSleepTimeSet
@property(assign, nonatomic) unsigned ioConnection;	// G=0x30089c19; S=0x30089c29; @synthesize=_ioConnection
@property(assign, nonatomic) unsigned ioNotifier;	// G=0x30089bf9; S=0x30089c09; @synthesize=_ioNotifier
@property(readonly, assign, nonatomic) BOOL isDeviceAsleep;
@property(assign, nonatomic) unsigned pmNoIdleSleepAssertionID;	// G=0x30089bd9; S=0x30089be9; @synthesize=_pmNoIdleSleepAssertionID
@property(retain, nonatomic) NSTimer *powerAssertionTimer;	// G=0x30089b81; S=0x30089b91; @synthesize=_powerAssertionTimer
@property(assign, nonatomic) int sleepTimeoutInMinutes;	// G=0x30089b61; S=0x300890d9; @synthesize=_sleepTimeoutInMinutes
+ (void)checkInWithBackboardServices;	// 0x30088e85
+ (void)setupPowerManagement;	// 0x30088eb5
+ (id)sharedInstance;	// 0x30088d81
- (id)init;	// 0x30089021
- (void).cxx_destruct;	// 0x30089c39
- (void)_dropPowerAssertions:(id)assertions;	// 0x30089aed
- (void)_enableIdleSleepAndWatchdog;	// 0x30089205
- (void)_handleIOPMCallbackMessage:(unsigned)message argument:(void *)argument;	// 0x30089a05
- (void)_handleSleepTimeoutInvalidationNotification:(id)notification;	// 0x300891c5
- (void)_handleThermalNotification;	// 0x30089a99
- (void)_registerForPowerNotifications;	// 0x30089485
- (void)_registerForThermalNotifications;	// 0x30089615
- (void)_setAllowIdleSleep:(BOOL)sleep;	// 0x300898c1
- (void)_setMachineToLowPowerMode;	// 0x30089769
- (void)_setMachineToNormalPowerMode;	// 0x30089809
- (void)_updateSleepTimer;	// 0x30089729
- (void)invalidateSleepTimeoutWithReason:(id)reason;	// 0x3008918d
// declared property getter: - (unsigned)ioConnection;	// 0x30089c19
// declared property getter: - (unsigned)ioNotifier;	// 0x30089bf9
// declared property getter: - (BOOL)isDeviceAsleep;	// 0x30089061
// declared property getter: - (BOOL)isIdleSleepTimeSet;	// 0x30089bb9
// declared property getter: - (unsigned)pmNoIdleSleepAssertionID;	// 0x30089bd9
// declared property getter: - (id)powerAssertionTimer;	// 0x30089b81
- (void)registerSleepTimeoutInvalidationWithNotificationName:(id)notificationName;	// 0x300890f9
// declared property setter: - (void)setDeviceAsleep:(BOOL)asleep;	// 0x30089b71
// declared property setter: - (void)setIdleSleepTimeSet:(BOOL)set;	// 0x30089bc9
// declared property setter: - (void)setIoConnection:(unsigned)connection;	// 0x30089c29
// declared property setter: - (void)setIoNotifier:(unsigned)notifier;	// 0x30089c09
// declared property setter: - (void)setPmNoIdleSleepAssertionID:(unsigned)anId;	// 0x30089be9
// declared property setter: - (void)setPowerAssertionTimer:(id)timer;	// 0x30089b91
// declared property setter: - (void)setSleepTimeoutInMinutes:(int)minutes;	// 0x300890d9
- (void)sleepDevice;	// 0x30089071
// declared property getter: - (int)sleepTimeoutInMinutes;	// 0x30089b61
- (void)wakeDevice;	// 0x300890c9
@end
