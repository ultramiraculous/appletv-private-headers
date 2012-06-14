/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "MPAssetKeyDelegate.h"
#import "BRMediaPlayer.h"

@class NSString, NSTimer, NSArray, ATVDataServer, BRImageManager, ATVDataQuery, ATVDataCollection, NSDictionary, BRMarimbaSlideshowControl, NSMutableDictionary, BRControl, BRAsyncTask;

__attribute__((visibility("hidden")))
@interface LTMarimbaPhotoPlayer : BRMediaPlayer <MPAssetKeyDelegate> {
	BRControl *_tempVisuals;	// 8 = 0x8
	NSTimer *_spinnerTimer;	// 12 = 0xc
	BRAsyncTask *_preloadImageTask;	// 16 = 0x10
	NSString *_assetIDBeingLoaded;	// 20 = 0x14
	BRMarimbaSlideshowControl *_visuals;	// 24 = 0x18
	NSArray *_assets;	// 28 = 0x1c
	BRMediaPlayer *_audioPlayer;	// 32 = 0x20
	id _musicServerID;	// 36 = 0x24
	id _musicPlaylistID;	// 40 = 0x28
	ATVDataServer *_musicServerRef;	// 44 = 0x2c
	ATVDataCollection *_musicPlaylistRef;	// 48 = 0x30
	ATVDataQuery *_playlistsQuery;	// 52 = 0x34
	ATVDataQuery *_songsQuery;	// 56 = 0x38
	NSDictionary *_slideshowPlaybackOptions;	// 60 = 0x3c
	NSArray *_orderedPhotoAssets;	// 64 = 0x40
	NSTimer *_screensaverTickleTimer;	// 68 = 0x44
	int _state;	// 72 = 0x48
	int _numPreloadAttemptsToMake;	// 76 = 0x4c
	int _numPreloadSuccesses;	// 80 = 0x50
	int _indexOfNextImageToPreload;	// 84 = 0x54
	long _startIndex;	// 88 = 0x58
	int _imageSizeToLoad;	// 92 = 0x5c
	BOOL _initialImagePrefetchInProgress;	// 96 = 0x60
	BOOL _playbackInitiated;	// 97 = 0x61
	BOOL _shuffleSet;	// 98 = 0x62
	BOOL _shuffle;	// 99 = 0x63
	BOOL _repeatModeSet;	// 100 = 0x64
	int _repeatMode;	// 104 = 0x68
	BOOL _muted;	// 108 = 0x6c
	BOOL _weOwnMusicPlayback;	// 109 = 0x6d
	BOOL _musicPlaybackOnwershipPermanentlyRelinquished;	// 110 = 0x6e
	BRImageManager *_preferredImageManager;	// 112 = 0x70
	BOOL _preloadingDisabled;	// 116 = 0x74
	BOOL _substitute;	// 117 = 0x75
	int _substituteIndex;	// 120 = 0x78
	BOOL _preloadingComplete;	// 124 = 0x7c
	BOOL _marimbaVisualsOnDisplay;	// 125 = 0x7d
	BOOL _musicPrefetchInProgress;	// 126 = 0x7e
	BOOL _documentSetupComplete;	// 127 = 0x7f
	float _lastRemovedEffectsTime;	// 128 = 0x80
	NSArray *_pendingAssets;	// 132 = 0x84
	NSString *_uniqueIDForPlayPauseRegistration;	// 136 = 0x88
	int _marimbaDidAddEffectsVisitCounter;	// 140 = 0x8c
	NSMutableDictionary *_assetKeyToAssetMap;	// 144 = 0x90
	id _musicQueryToRun;	// 148 = 0x94
	int _imageManagerPruneCountToRestore;	// 152 = 0x98
	int _imageLoadBatchCounter;	// 156 = 0x9c
}
@property(assign, nonatomic) int imageLoadBatchCounter;	// G=0x42b29; S=0x42b39; @synthesize=_imageLoadBatchCounter
@property(assign, nonatomic) int imageManagerPruneCountToRestore;	// G=0x42b09; S=0x42b19; @synthesize=_imageManagerPruneCountToRestore
@property(copy, nonatomic) id musicQueryToRun;	// G=0x42ae5; S=0x42af9; @synthesize=_musicQueryToRun
@property(assign) BOOL muted;	// G=0x42571; S=0x42515; converted property
@property(retain) id playerSpecificOptions;	// G=0x420d1; S=0x41f19; converted property
@property(assign) int repeatMode;	// G=0x42195; S=0x42171; converted property
@property(assign) BOOL shufflePlayback;	// G=0x42109; S=0x420e5; converted property
@property(readonly, retain) BRMarimbaSlideshowControl *visuals;	// G=0x41e95; converted property
@property(assign) float volume;	// G=0x42475; S=0x4240d; converted property
+ (id)contentTypes;	// 0x414c5
- (id)init;	// 0x41559
- (void).cxx_destruct;	// 0x42b49
- (void)_applyDocumentChangesAfterTransition:(id)transition;	// 0x45789
- (void)_applyPlayerSpecificOptions;	// 0x44ea9
- (void)_authorizationAttemptComplete:(id)complete;	// 0x481b9
- (void)_authorizeMedia;	// 0x46d69
- (void)_beginMusicPrefetch;	// 0x43af9
- (void)_beginMusicPrefetchFromDefaults;	// 0x437cd
- (void)_beginMusicPrefetchFromPlayerOptions;	// 0x434b5
- (void)_cancelMusicPrefetch;	// 0x43cd9
- (void)_configureImageManagerPruneCount;	// 0x42cf9
- (void)_cueMedia;	// 0x46e59
- (id)_dataClient;	// 0x465a9
- (void)_dataClientStatusChanged:(id)changed;	// 0x484ad
- (BOOL)_handlePauseActionWithError:(id *)error;	// 0x476a5
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x477b9
- (BOOL)_handleStopActionWithError:(id *)error;	// 0x473a5
- (void)_imageWritten:(id)written;	// 0x47a45
- (int)_indexOfAssetPathInOrderedAssets:(id)orderedAssets;	// 0x471a9
- (void)_loadFailed:(id)failed;	// 0x47ba1
- (void)_marimbaDidAddEffects:(id)_marimba;	// 0x480d5
- (void)_marimbaSlideshowPlaybackFinished:(id)finished;	// 0x47d5d
- (void)_marimbaSlideshowWillRepeat:(id)_marimbaSlideshow;	// 0x47d71
- (void)_needPathsNotification:(id)notification;	// 0x47cb5
- (void)_newPhotoPlayerPlaying:(id)playing;	// 0x47ce9
- (id)_pathForLocalAssetID:(id)localAssetID;	// 0x47135
- (void)_playerError:(id)error;	// 0x483ad
- (void)_playerMediaCued:(id)cued;	// 0x482d9
- (void)_playlistsQueryComplete;	// 0x46655
- (void)_preloadNextImage;	// 0x42dbd
- (int)_preloadSuccessThresholdForStyle:(id)style;	// 0x47251
- (void)_reorderImages;	// 0x43d49
- (void)_restoreImageManagerPruneCount;	// 0x42d7d
- (void)_runPlaylistsQuery;	// 0x4639d
- (void)_runSongsQuery;	// 0x46819
- (void)_setMusic;	// 0x461f5
- (void)_setNewMedia:(id)media;	// 0x472ad
- (void)_setNewState:(int)state;	// 0x47339
- (void)_setPlaylistsQuery:(id)query;	// 0x46555
- (void)_setSlideshowTheme;	// 0x457dd
- (void)_setSongsQuery:(id)query;	// 0x46a99
- (void)_setTimePerSlide;	// 0x45db1
- (void)_setTransition;	// 0x45951
- (void)_setupDocument;	// 0x4486d
- (void)_songsQueryComplete;	// 0x46aed
- (void)_spinnerTimerFired;	// 0x43ead
- (void)_startPreloadTask;	// 0x43459
- (void)_startScreenSaverTickleTimer;	// 0x46fdd
- (void)_startSlideshowIfReady;	// 0x44e19
- (void)_stopScreenSaverTickleTimer;	// 0x470ad
- (void)_tickleScreensaver:(id)screensaver;	// 0x470e1
- (void)_triggerPreloadOfNextImage;	// 0x43285
- (void)_updateDocumentForNewMedia;	// 0x4409d
- (void)_updateForNewMedia;	// 0x44675
- (void)_updatePreloadingStateForLastPlayed:(id)lastPlayed;	// 0x43101
- (id)absolutePathForAssetKey:(id)assetKey;	// 0x42581
- (id)absolutePathForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x42949
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x42959
- (id)collection;	// 0x41db1
- (void)dealloc;	// 0x418c5
// declared property getter: - (int)imageLoadBatchCounter;	// 0x42b29
// declared property getter: - (int)imageManagerPruneCountToRestore;	// 0x42b09
- (id)media;	// 0x41db5
// declared property getter: - (id)musicQueryToRun;	// 0x42ae5
// converted property getter: - (BOOL)muted;	// 0x42571
- (void)nextMedia;	// 0x422d5
// converted property getter: - (id)playerSpecificOptions;	// 0x420d1
- (int)playerState;	// 0x41e81
- (BOOL)playingVisualContent;	// 0x41e91
- (void)previousMedia;	// 0x42205
// converted property getter: - (int)repeatMode;	// 0x42195
- (CGImageRef)retainedCGImageForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x4295d
- (BOOL)reverseTouchSwipeBehavior;	// 0x41acd
// declared property setter: - (void)setImageLoadBatchCounter:(int)counter;	// 0x42b39
// declared property setter: - (void)setImageManagerPruneCountToRestore:(int)restore;	// 0x42b19
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x41d41
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x41ad1
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x41b1d
// declared property setter: - (void)setMusicQueryToRun:(id)run;	// 0x42af9
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x42515
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x41f19
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x42171
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x420e5
- (BOOL)setState:(int)state error:(id *)error;	// 0x41e21
// converted property setter: - (void)setVolume:(float)volume;	// 0x4240d
// converted property getter: - (BOOL)shufflePlayback;	// 0x42109
- (BOOL)stopsActiveAudioPlayer;	// 0x41ac9
- (BOOL)supportsRepeatModes;	// 0x42201
- (BOOL)supportsVolumeControl;	// 0x423a5
// converted property getter: - (id)visuals;	// 0x41e95
// converted property getter: - (float)volume;	// 0x42475
@end

