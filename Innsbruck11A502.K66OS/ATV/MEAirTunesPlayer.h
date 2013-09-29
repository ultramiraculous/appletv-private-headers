/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaPlayer.h"
#import "AppleTV-Structs.h"

@class MEAirTunesMediaAsset, NSTimer, MEAirTunesMediaProvider;

__attribute__((visibility("hidden")))
@interface MEAirTunesPlayer : BRMediaPlayer {
	BOOL _enabled;	// 4 = 0x4
	double _position;	// 8 = 0x8
	int _state;	// 16 = 0x10
	int _stateBeforeSeek;	// 20 = 0x14
	MEAirTunesMediaProvider *_provider;	// 24 = 0x18
	MEAirTunesMediaAsset *_asset;	// 28 = 0x1c
	NSTimer *_progressNotificationTimer;	// 32 = 0x20
}
@property(assign) double elapsedTime;	// G=0x4ab105; S=0x4ab0d1; converted property
+ (BOOL)allowMultiplePlayers;	// 0x4aa861
+ (id)contentTypes;	// 0x4aa865
+ (BOOL)handlesVideoForType:(id)type;	// 0x4aa8c5
- (id)init;	// 0x4aa8c9
- (void).cxx_destruct;	// 0x4ab839
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x4ab881
- (BOOL)_handleRateChangeState:(int)state withError:(id *)error;	// 0x4ab8e1
- (void)_notificationDACPError:(id)error;	// 0x4abc35
- (void)_notificationOnOffToggleDidChange:(id)_notificationOnOffToggle;	// 0x4abcfd
- (void)_notificationTemporaryEnableStateChange:(id)change;	// 0x4abd85
- (void)_registerForNotifications;	// 0x4aba39
- (void)_sendProgressNotification:(id)notification;	// 0x4abbdd
- (void)_setNewState:(int)state;	// 0x4ab981
- (void)_startPlaybackProgressNotifications;	// 0x4abb29
- (void)_stopPlaybackProgressNotifications;	// 0x4abba1
- (void)dealloc;	// 0x4aabe9
- (void)disable;	// 0x4aad29
- (double)duration;	// 0x4ab0a1
// converted property getter: - (double)elapsedTime;	// 0x4ab105
- (void)enable;	// 0x4aac8d
- (id)media;	// 0x4aafc1
- (void)nextMedia;	// 0x4ab1b9
- (int)playerState;	// 0x4ab091
- (void)previousMedia;	// 0x4ab141
- (void)resetToBeginning;	// 0x4ab121
- (void)resume;	// 0x4aadd5
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x4ab0d1
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x4aae79
- (BOOL)setState:(int)state error:(id *)error;	// 0x4aafd5
- (void)started;	// 0x4ab231
- (void)stopped;	// 0x4ab245
- (void)updateMetaData:(id)data;	// 0x4ab26d
- (void)updateProgress:(double)progress duration:(double)duration;	// 0x4ab679
@end
