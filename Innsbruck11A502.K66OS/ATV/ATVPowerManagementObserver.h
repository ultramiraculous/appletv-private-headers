/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class LTThermalNoticeController, BRWindow, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVPowerManagementObserver : BRSingleton {
	BOOL _playbackPreventsIdleSleep;	// 4 = 0x4
	NSArray *_usageKeysArray;	// 8 = 0x8
	BRWindow *_window;	// 12 = 0xc
	NSTimer *_sleepActivityTimer;	// 16 = 0x10
	NSTimer *_serverDisconnectIdleTimer;	// 20 = 0x14
	LTThermalNoticeController *_thermalNoteController;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL playbackPreventsIdleSleep;	// G=0x4bcd15; S=0x4bcd25; @synthesize=_playbackPreventsIdleSleep
@property(retain, nonatomic) NSTimer *serverDisconnectIdleTimer;	// G=0x4bccdd; S=0x4bcced; @synthesize=_serverDisconnectIdleTimer
@property(retain, nonatomic) NSTimer *sleepActivityTimer;	// G=0x4bcca5; S=0x4bccb5; @synthesize=_sleepActivityTimer
@property(retain, nonatomic) LTThermalNoticeController *thermalNoteController;	// G=0x4bcd35; S=0x4bcd45; @synthesize=_thermalNoteController
@property(retain, nonatomic) NSArray *usageKeysArray;	// G=0x4bcc35; S=0x4bcc45; @synthesize=_usageKeysArray
@property(retain, nonatomic) BRWindow *window;	// G=0x4bcc6d; S=0x4bcc7d; @synthesize=_window
+ (void)setSingleton:(id)singleton;	// 0x4bb699
+ (id)singleton;	// 0x4bb689
- (id)init;	// 0x4bb6bd
- (void).cxx_destruct;	// 0x4bcd6d
- (void)_deviceWillSleep:(id)_device;	// 0x4bb8a5
- (void)_deviceWillWake:(id)_device;	// 0x4bbdbd
- (void)_disconnectFromServers:(id)servers;	// 0x4bcb55
- (void)_playerStateChanged:(id)changed;	// 0x4bc739
- (void)_serverPlaybackRequestReceived:(id)received;	// 0x4bca31
- (void)_sleepActivityTimerFired:(id)fired;	// 0x4bcae5
- (void)_thermalNotification:(id)notification;	// 0x4bc0d1
- (void)_turnAirPlayBackOn;	// 0x4bc6b5
- (id)_usageKeys;	// 0x4bc4f9
// declared property getter: - (BOOL)playbackPreventsIdleSleep;	// 0x4bcd15
// declared property getter: - (id)serverDisconnectIdleTimer;	// 0x4bccdd
// declared property setter: - (void)setPlaybackPreventsIdleSleep:(BOOL)sleep;	// 0x4bcd25
// declared property setter: - (void)setServerDisconnectIdleTimer:(id)timer;	// 0x4bcced
// declared property setter: - (void)setSleepActivityTimer:(id)timer;	// 0x4bccb5
// declared property setter: - (void)setThermalNoteController:(id)controller;	// 0x4bcd45
// declared property setter: - (void)setUsageKeysArray:(id)array;	// 0x4bcc45
// declared property setter: - (void)setWindow:(id)window;	// 0x4bcc7d
// declared property getter: - (id)sleepActivityTimer;	// 0x4bcca5
// declared property getter: - (id)thermalNoteController;	// 0x4bcd35
// declared property getter: - (id)usageKeysArray;	// 0x4bcc35
- (void)wakeDevice;	// 0x4bb809
// declared property getter: - (id)window;	// 0x4bcc6d
@end
