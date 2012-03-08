/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMusicPlayerControllerInternal, NSDictionary;

@protocol MPMusicPlayerController
@optional
@property(retain) id allowsRemoteUIAccess;	// converted property
@property(retain) id currentChapterIndex;	// converted property
@property(retain) id currentPlaybackTime;	// converted property
@property(retain) id nowPlayingItem;	// converted property
@property(retain) id playbackSpeed;	// converted property
@property(retain) id repeatMode;	// converted property
@property(retain) id shuffleMode;	// converted property
// converted property getter: - (id)allowsRemoteUIAccess;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
// converted property getter: - (id)currentChapterIndex;
// converted property getter: - (id)currentPlaybackTime;
- (void)endSeeking;
- (id)indexOfNowPlayingItem;
- (id)isGeniusAvailable;
- (id)isNowPlayingItemFromGeniusMix;
// converted property getter: - (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(id)index;
- (id)numberOfItems;
- (void)pause;
- (void)pauseWithFadeoutDuration:(id)fadeoutDuration;
- (void)play;
- (void)playItem:(id)item;
// converted property getter: - (id)playbackSpeed;
- (id)playbackState;
- (void)prepareQueueForPlayback;
- (id)queueAsQuery;
- (void)registerForServerDiedNotifications;
// converted property getter: - (id)repeatMode;
- (id)serverIsAlive;
// converted property setter: - (void)setAllowsRemoteUIAccess:(id)access;
// converted property setter: - (void)setCurrentChapterIndex:(id)index;
// converted property setter: - (void)setCurrentPlaybackTime:(id)time;
// converted property setter: - (void)setNowPlayingItem:(id)item;
// converted property setter: - (void)setPlaybackSpeed:(id)speed;
- (void)setQueueWithItemCollection:(id)itemCollection;
- (void)setQueueWithQuery:(id)query;
- (void)setQueueWithQuery:(id)query firstItem:(id)item;
- (id)setQueueWithSeedItems:(id)seedItems;
// converted property setter: - (void)setRepeatMode:(id)mode;
// converted property setter: - (void)setShuffleMode:(id)mode;
- (void)setUseApplicationSpecificQueue:(id)queue;
- (void)shuffle;
// converted property getter: - (id)shuffleMode;
- (void)skipToBeginning;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToNextItem;
- (void)skipToPreviousChapter;
- (void)skipToPreviousItem;
- (id)springboardNowPlayingInfo;
- (void)stop;
- (id)unshuffledIndexOfNowPlayingItem;
@end

@interface MPMusicPlayerController : NSObject {
	MPMusicPlayerControllerInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL allowsRemoteUIAccess;	// G=0x336129c9; S=0x3361295d; 
@property(assign, nonatomic) unsigned currentChapterIndex;	// G=0x336127fd; S=0x336127bd; 
@property(assign) double currentPlaybackTime;	// G=0x33612b51; S=0x33612b11; converted property
@property(readonly, assign, nonatomic) unsigned indexOfNowPlayingItem;	// G=0x336128bd; 
@property(readonly, assign, nonatomic) BOOL isNowPlayingItemFromGeniusMix;	// G=0x3361282d; 
@property(assign, nonatomic) int playbackSpeed;	// G=0x3361292d; S=0x336128ed; 
@property(assign) int repeatMode;	// G=0x33612c85; S=0x33612c45; converted property
@property(assign) int shuffleMode;	// G=0x33612c15; S=0x33612bd5; converted property
@property(readonly, assign, nonatomic) NSDictionary *springboardNowPlayingInfo;	// G=0x3361335d; 
@property(readonly, assign, nonatomic) unsigned unshuffledIndexOfNowPlayingItem;	// G=0x3361288d; 
@property(assign) float volume;	// G=0x33612b81; S=0x33613261; converted property
+ (id)applicationMusicPlayer;	// 0x33612f6d
+ (id)iPodMusicPlayer;	// 0x33612f19
+ (void)initialize;	// 0x33612671
+ (id)runLoopForNotifications;	// 0x33611f49
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x3361263d
- (id)init;	// 0x33612fc1
- (void)_clientCheckIn;	// 0x33613499
- (void)_itemPlaybackDidEnd:(unsigned long long)_itemPlayback;	// 0x336120f1
- (void)_musicPlayerDidLaunch;	// 0x3361249d
- (void)_nowPlayingItemDidChange:(unsigned long long)_nowPlayingItem;	// 0x33612281
- (void)_playbackStateDidChange:(int)_playbackState;	// 0x33612351
- (void)_registerForLaunchNotifications;	// 0x3361344d
- (void)_repeatModeDidChange:(int)_repeatMode;	// 0x336121c1
- (void)_runMigServerOnPort:(unsigned)port;	// 0x33613591
- (void)_serverDied:(id)died;	// 0x33612519
- (void)_setUseApplicationSpecificQueue:(BOOL)queue;	// 0x33612589
- (void)_shuffleModeDidChange:(int)_shuffleMode;	// 0x33612221
- (void)_stopMigServer;	// 0x33613635
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x33612e7d
- (void)_unregisterForLaunchNotifications;	// 0x3361347d
// declared property getter: - (BOOL)allowsRemoteUIAccess;	// 0x336129c9
- (void)beginGeneratingPlaybackNotifications;	// 0x33611ed9
// declared property getter: - (unsigned)currentChapterIndex;	// 0x336127fd
// converted property getter: - (double)currentPlaybackTime;	// 0x33612b51
- (void)dealloc;	// 0x33613105
- (void)endGeneratingPlaybackNotifications;	// 0x33611ef9
- (void)forwardInvocation:(id)invocation;	// 0x33612e59
// declared property getter: - (unsigned)indexOfNowPlayingItem;	// 0x336128bd
- (BOOL)isGeniusAvailable;	// 0x33612ae1
// declared property getter: - (BOOL)isNowPlayingItemFromGeniusMix;	// 0x3361282d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33612e39
- (id)nowPlayingItem;	// 0x33612e05
- (id)nowPlayingItemAtIndex:(unsigned)index;	// 0x33612a39
- (unsigned)numberOfItems;	// 0x3361285d
- (void)pauseWithFadeoutDuration:(double)fadeoutDuration;	// 0x336129f9
// declared property getter: - (int)playbackSpeed;	// 0x3361292d
- (int)playbackState;	// 0x33612cb5
// converted property getter: - (int)repeatMode;	// 0x33612c85
- (BOOL)serverIsAlive;	// 0x3361260d
// declared property setter: - (void)setAllowsRemoteUIAccess:(BOOL)access;	// 0x3361295d
// declared property setter: - (void)setCurrentChapterIndex:(unsigned)index;	// 0x336127bd
// converted property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x33612b11
// declared property setter: - (void)setPlaybackSpeed:(int)speed;	// 0x336128ed
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x33612d45
- (void)setQueueWithQuery:(id)query;	// 0x33612ded
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x336126c5
- (BOOL)setQueueWithSeedItems:(id)seedItems;	// 0x33612ab1
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x33612c45
// converted property setter: - (void)setShuffleMode:(int)mode;	// 0x33612bd5
- (void)setUseCachedPlaybackState:(BOOL)state;	// 0x33611f1d
// converted property setter: - (void)setVolume:(float)volume;	// 0x33613261
// converted property getter: - (int)shuffleMode;	// 0x33612c15
// declared property getter: - (id)springboardNowPlayingInfo;	// 0x3361335d
// declared property getter: - (unsigned)unshuffledIndexOfNowPlayingItem;	// 0x3361288d
// converted property getter: - (float)volume;	// 0x33612b81
@end
