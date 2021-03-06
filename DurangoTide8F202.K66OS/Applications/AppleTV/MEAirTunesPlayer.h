/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MEAirTunesPlayer.h"

@class NSTimer, MEAirTunesMediaProvider, MEAirTunesMediaAsset;

@interface MEAirTunesPlayer : XXUnknownSuperclass {
	float _position;	// 8 = 0x8
	int _state;	// 12 = 0xc
	int _stateBeforeSeek;	// 16 = 0x10
	MEAirTunesMediaProvider *_provider;	// 20 = 0x14
	MEAirTunesMediaAsset *_asset;	// 24 = 0x18
	NSTimer *_progressNotificationTimer;	// 28 = 0x1c
	BOOL _enabled;	// 32 = 0x20
	BOOL _waitingForIdleNotification;	// 33 = 0x21
	BOOL _waitingForArtwork;	// 34 = 0x22
	BOOL _waitingForMetaData;	// 35 = 0x23
	BOOL _waitingForProgress;	// 36 = 0x24
	SCDynamicStoreRef _dynStoreRef;	// 40 = 0x28
	CFRunLoopSourceRef _dynStoreRunLoopSource;	// 44 = 0x2c
	SCPreferencesRef _prefsRef;	// 48 = 0x30
}
@property(assign) double elapsedTime;	// G=0x33d99; S=0x34c69; converted property
+ (BOOL)allowMultiplePlayers;	// 0x33d75
+ (id)contentTypes;	// 0x342f5
+ (BOOL)handlesVideoForType:(id)type;	// 0x33d71
- (id)init;	// 0x346c1
- (void)dealloc;	// 0x3497d
- (void)disable;	// 0x34331
- (double)duration;	// 0x3414d
// converted property getter: - (double)elapsedTime;	// 0x33d99
- (void)enable;	// 0x3438d
- (id)media;	// 0x33d79
- (void)nextMedia;	// 0x34bb9
- (int)playerState;	// 0x33d89
- (void)previousMedia;	// 0x34c11
- (void)resetToBeginning;	// 0x34135
- (void)resume;	// 0x34c99
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x34c69
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x341ed
- (BOOL)setState:(int)state error:(id *)error;	// 0x34179
- (void)zeroPlayer;	// 0x33d6d
@end

@interface MEAirTunesPlayer (Notifications)
- (void)_daemonPostedDACPError;	// 0x356e5
- (void)_daemonUpdatedArtwork;	// 0x35345
- (void)_daemonUpdatedMetaData;	// 0x354bd
- (void)_daemonUpdatedProgress;	// 0x35199
- (void)_daemonUpdatedStatus;	// 0x35069
- (void)_notificationDACPError:(id)error;	// 0x33ec1
- (void)_notificationDeviceNamedChanged:(id)changed;	// 0x33e1d
- (void)_notificationOnOffToggleDidChange:(id)_notificationOnOffToggle;	// 0x33e45
- (void)_notificationOtherPlayers:(id)players;	// 0x33ddd
- (void)_notificationPasswordDidChange:(id)_notificationPassword;	// 0x33e31
- (void)_notificationSWUpdateApplyFailed:(id)failed;	// 0x33db5
- (void)_notificationSWUpdateApplyStarted:(id)started;	// 0x33dc9
- (void)_notificationTemporaryEnableStateChange:(id)change;	// 0x343d5
- (void)_registerForNotifications;	// 0x34d15
- (void)_sendProgressNotification:(id)notification;	// 0x3445d
- (void)_setAllowPlayback:(BOOL)playback;	// 0x34fc5
- (BOOL)_setDaemonPreference:(id)preference value:(id)value;	// 0x3578d
- (void)_setPreferences;	// 0x33ed5
- (void)_startPlaybackProgressNotifications;	// 0x34669
- (void)_stopPlaybackProgressNotifications;	// 0x34635
@end

@interface MEAirTunesPlayer (PlaybackControl)
- (BOOL)_handlePauseActionWithError:(id *)error;	// 0x34b75
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x34b11
- (BOOL)_handleRateChangeState:(int)state withError:(id *)error;	// 0x34a81
- (BOOL)_handleStopActionWithError:(id *)error;	// 0x34005
- (void)_setNewState:(int)state;	// 0x33f55
@end

@interface MEAirTunesPlayer (Rules)
- (BOOL)_isAllowedToPlay;	// 0x3401d
@end

