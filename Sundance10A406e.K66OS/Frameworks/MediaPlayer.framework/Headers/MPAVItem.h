/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPImageCache, MPAlternateTracks, MPQueueFeeder, MPAVController, AVPlayerItem, NSString, NSData, AVAsset, NSArray, NSURL, MPMediaItem;
@protocol OS_dispatch_queue;

@interface MPAVItem : NSObject {
	AVPlayerItem *_avPlayerItem;	// 4 = 0x4
	AVAsset *_asset;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_assetQueue;	// 12 = 0xc
	BOOL _didAttemptToLoadAsset;	// 16 = 0x10
	BOOL _isAssetLoaded;	// 17 = 0x11
	MPQueueFeeder *_feeder;	// 20 = 0x14
	MPAVController *_player;	// 24 = 0x18
	float _soundCheckVolumeNormalization;	// 28 = 0x1c
	NSArray *_chapterTimeMarkers;	// 32 = 0x20
	NSArray *_artworkTimeMarkers;	// 36 = 0x24
	NSArray *_urlTimeMarkers;	// 40 = 0x28
	NSArray *_closedCaptionTimeMarkers;	// 44 = 0x2c
	MPAlternateTracks *_alternateTracks;	// 48 = 0x30
	double _cachedDuration;	// 52 = 0x34
	double _cachedPlayableDuration;	// 60 = 0x3c
	NSArray *_cachedSeekableTimeRanges;	// 68 = 0x44
	double _seekableTimeRangesCacheTime;	// 72 = 0x48
	unsigned _type;	// 80 = 0x50
	float _defaultPlaybackRate;	// 84 = 0x54
	unsigned _indexInQueueFeeder;	// 88 = 0x58
	unsigned _advancedDuringPlayback : 1;	// 92 = 0x5c
	unsigned _handledFinishTime : 1;	// 92 = 0x5c
	unsigned _hasPlayedThisSession : 1;	// 92 = 0x5c
	unsigned _wasCountedAsSkipped : 1;	// 92 = 0x5c
	unsigned _isStreamable : 2;	// 92 = 0x5c
	unsigned _watchingAttributes : 1;	// 92 = 0x5c
	unsigned _lyricsAvailable : 1;	// 92 = 0x5c
	unsigned _timeMarkersNeedLoading : 1;	// 93 = 0x5d
}
@property(readonly, assign, nonatomic) NSString *album;	// G=0x35cbfd21; 
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x35cbfd29; 
@property(readonly, assign, nonatomic) unsigned albumTrackCount;	// G=0x35cbfd31; 
@property(readonly, assign, nonatomic) unsigned albumTrackNumber;	// G=0x35cbfd2d; 
@property(readonly, assign, nonatomic) BOOL allowsEQ;	// G=0x35cbff21; 
@property(readonly, assign, nonatomic) MPAlternateTracks *alternateTracks;	// G=0x35cc3005; @synthesize=_alternateTracks
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x35cbfd25; 
@property(readonly, assign, nonatomic) NSData *artworkImageData;	// G=0x35cbfd39; 
@property(readonly, assign, nonatomic) NSString *artworkMIMEType;	// G=0x35cbfd3d; 
@property(retain, nonatomic) NSArray *artworkTimeMarkers;	// G=0x35cc12cd; S=0x35cc3015; @synthesize=_artworkTimeMarkers
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x35cbf5a9; 
@property(readonly, assign, nonatomic) BOOL canSeedGenius;	// G=0x35cbfd41; 
@property(retain, nonatomic) NSArray *chapterTimeMarkers;	// G=0x35cc12a5; S=0x35cc3025; @synthesize=_chapterTimeMarkers
@property(retain, nonatomic) NSArray *closedCaptionTimeMarkers;	// G=0x35cc1399; S=0x35cc131d; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x35cbfd45; 
@property(readonly, assign, nonatomic) unsigned countForQueueFeeder;	// G=0x35cbfd69; 
@property(readonly, assign, nonatomic) double currentTimeDisplayOverride;	// G=0x35cbfd91; 
@property(readonly, assign, nonatomic) int customAVEQPreset;	// G=0x35cbff1d; 
@property(assign, nonatomic) float defaultPlaybackRate;	// G=0x35cc3055; S=0x35cc3065; @synthesize=_defaultPlaybackRate
@property(readonly, assign, nonatomic) unsigned discCount;	// G=0x35cbfd4d; 
@property(readonly, assign, nonatomic) unsigned discNumber;	// G=0x35cbfd49; 
@property(readonly, assign, nonatomic) NSString *displayableText;	// G=0x35cbfdf1; 
@property(readonly, assign, nonatomic) BOOL displayableTextLoaded;	// G=0x35cbfda9; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x35cc18b9; 
@property(readonly, assign, nonatomic) double durationFromExternalMetadata;	// G=0x35cc1901; 
@property(readonly, assign, nonatomic) double durationIfAvailable;	// G=0x35cc19a1; 
@property(readonly, assign, nonatomic) BOOL durationIsValid;	// G=0x35cc1919; 
@property(assign, nonatomic) MPQueueFeeder *feeder;	// G=0x35cc3035; S=0x35cc3045; @synthesize=_feeder
@property(assign, nonatomic) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x35cc0071; S=0x35cc00b5; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x35cbfd65; 
@property(readonly, assign, nonatomic) BOOL hasDataForItemArtwork;	// G=0x35cbfe89; 
@property(readonly, assign, nonatomic) BOOL hasDisplayableText;	// G=0x35cbfe8d; 
@property(assign, nonatomic) BOOL hasPlayedThisSession;	// G=0x35cbfe91; S=0x35cc0159; 
@property(readonly, assign, nonatomic) MPImageCache *imageCache;	// G=0x35cc0205; 
@property(assign, nonatomic) unsigned indexInQueueFeeder;	// G=0x35cc3075; S=0x35cc3085; @synthesize=_indexInQueueFeeder
@property(assign) BOOL isAssetLoaded;	// G=0x35cc3095; S=0x35cc30ad; @synthesize=_isAssetLoaded
@property(readonly, assign, nonatomic) BOOL isStreamingQuality;	// G=0x35d8eb79; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x35cbfe01; 
@property(readonly, assign, nonatomic) NSString *mainTitle;	// G=0x35cbff41; 
@property(readonly, assign, nonatomic) MPMediaItem *mediaItem;	// G=0x35d6dedd; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x35cbff45; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x35cc1779; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x35cc1ae1; 
@property(readonly, assign, nonatomic) double playableDurationIfAvailable;	// G=0x35cc1af9; 
@property(assign, nonatomic) double playbackCheckpointCurrentTime;	// G=0x35cbfaa1; S=0x35cbfab9; 
@property(assign, nonatomic) MPAVController *player;	// G=0x35cc30c5; S=0x35cc30d5; @synthesize=_player
@property(readonly, assign, nonatomic) AVPlayerItem *playerItem;	// G=0x35cbf799; 
@property(readonly, assign, nonatomic) NSURL *podcastURL;	// G=0x35cbff9d; 
@property(readonly, assign, nonatomic) CGSize presentationSize;	// G=0x35cc0035; 
@property(assign, nonatomic) float soundCheckVolumeNormalization;	// G=0x35cc30e5; S=0x35cc0191; @synthesize=_soundCheckVolumeNormalization
@property(readonly, assign, nonatomic) int status;	// G=0x35cbfa0d; 
@property(readonly, assign, nonatomic, getter=isStreamable) BOOL streamable;	// G=0x35cbfea5; 
@property(assign, nonatomic) int subtitleTrackID;	// G=0x35cbfad9; S=0x35cbfadd; 
@property(readonly, assign, nonatomic) BOOL supportsRewindAndFastForward15Seconds;	// G=0x35cc01c9; 
@property(readonly, assign, nonatomic) double timeOfSeekableEnd;	// G=0x35cc1bf1; 
@property(readonly, assign, nonatomic) double timeOfSeekableStart;	// G=0x35cc1b11; 
@property(readonly, assign, nonatomic) unsigned type;	// G=0x35cc1765; 
@property(retain, nonatomic) NSArray *urlTimeMarkers;	// G=0x35cc12f5; S=0x35cc30f5; @synthesize=_urlTimeMarkers
@property(readonly, assign, nonatomic) BOOL useEmbeddedChapterData;	// G=0x35cc0315; 
@property(readonly, assign, nonatomic) float userRating;	// G=0x35cc1775; 
@property(assign) BOOL userSkippedPlayback;	// G=0x35cbfb49; S=0x35cbfb25; converted property
@property(copy, nonatomic) NSString *videoID;	// G=0x35cc1865; S=0x35cc188d; 
@property(readonly, assign, nonatomic) BOOL wantsSubtitles;	// G=0x35cc1785; 
@property(readonly, assign, nonatomic) BOOL wasDownloadedThisSession;	// G=0x35d8ec31; 
+ (id)URLFromPath:(id)path;	// 0x35cbef0d
+ (void)applyVolumeNormalizationForQueuedItems:(id)queuedItems;	// 0x35cbfd35
+ (unsigned)defaultScaleMode;	// 0x35cbeef9
+ (void)setDefaultScaleMode:(unsigned)mode;	// 0x35cbeefd
- (id)init;	// 0x35cbefbd
- (id)initWithAsset:(id)asset;	// 0x35cbf049
- (id)initWithURL:(id)url;	// 0x35cbefd1
- (id)initWithURL:(id)url options:(id)options;	// 0x35cbf00d
- (void)_applicationDidBecomeActive:(id)_application;	// 0x35cc1f59
- (void)_checkAllowsBlockingDurationCall;	// 0x35cc2ab9
- (void)_closedCaptioningStatusDidChangeNotification:(id)_closedCaptioningStatus;	// 0x35cc1f39
- (double)_durationFromExternalMetadataIfAvailable;	// 0x35cc1941
- (double)_durationInSeconds;	// 0x35cbfb5d
- (id)_imageChapterTrackIDsForAsset:(id)asset;	// 0x35cc1601
- (void)_itemAttributeAvailableKey:(id)key;	// 0x35cc1d31
- (void)_loadAssetAndPlayerItem;	// 0x35cbf495
- (void)_loadAssetProperties;	// 0x35cc21a9
- (void)_loadTimeMarkersAsync;	// 0x35cc1185
- (void)_loadTimeMarkersBlocking;	// 0x35cc0319
- (double)_playableDurationForLoadedTimeRanges:(id)loadedTimeRanges;	// 0x35cc20b9
- (void)_realoadEmbeddedTimeMarkers;	// 0x35cc01cd
- (void)_releaseAllTimeMarkers;	// 0x35cbf241
- (id)_seekableTimeRanges;	// 0x35cc1ff9
- (id)_timeMarkerFromMarkers:(id)markers forTime:(double)time;	// 0x35cc13a9
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;	// 0x35cc2205
// declared property getter: - (id)album;	// 0x35cbfd21
// declared property getter: - (id)albumArtist;	// 0x35cbfd29
// declared property getter: - (unsigned)albumTrackCount;	// 0x35cbfd31
// declared property getter: - (unsigned)albumTrackNumber;	// 0x35cbfd2d
// declared property getter: - (BOOL)allowsEQ;	// 0x35cbff21
// declared property getter: - (id)alternateTracks;	// 0x35cc3005
- (unsigned)alternatesCountForTypes:(unsigned)types;	// 0x35cbfe65
// declared property getter: - (id)artist;	// 0x35cbfd25
// declared property getter: - (id)artworkImageData;	// 0x35cbfd39
// declared property getter: - (id)artworkMIMEType;	// 0x35cbfd3d
- (id)artworkTimeMarkerForTime:(double)time;	// 0x35cc154d
// declared property getter: - (id)artworkTimeMarkers;	// 0x35cc12cd
// declared property getter: - (id)asset;	// 0x35cbf5a9
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)directAVControllerNotificationReferencingItem;	// 0x35cc2255
// declared property getter: - (BOOL)canSeedGenius;	// 0x35cbfd41
- (id)chapterTimeMarkerForTime:(double)time;	// 0x35cc1511
// declared property getter: - (id)chapterTimeMarkers;	// 0x35cc12a5
- (id)closedCaptionTimeMarkerForTime:(double)time;	// 0x35cc15c5
// declared property getter: - (id)closedCaptionTimeMarkers;	// 0x35cc1399
// declared property getter: - (id)composer;	// 0x35cbfd45
// declared property getter: - (unsigned)countForQueueFeeder;	// 0x35cbfd69
// declared property getter: - (double)currentTimeDisplayOverride;	// 0x35cbfd91
// declared property getter: - (int)customAVEQPreset;	// 0x35cbff1d
- (void)dealloc;	// 0x35cbf2c1
// declared property getter: - (float)defaultPlaybackRate;	// 0x35cc3055
// declared property getter: - (unsigned)discCount;	// 0x35cbfd4d
// declared property getter: - (unsigned)discNumber;	// 0x35cbfd49
// declared property getter: - (id)displayableText;	// 0x35cbfdf1
// declared property getter: - (BOOL)displayableTextLoaded;	// 0x35cbfda9
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x35cc18b9
// declared property getter: - (double)durationFromExternalMetadata;	// 0x35cc1901
// declared property getter: - (double)durationIfAvailable;	// 0x35cc19a1
- (double)durationInSeconds;	// 0x35cbfbb1
// declared property getter: - (BOOL)durationIsValid;	// 0x35cc1919
// declared property getter: - (id)feeder;	// 0x35cc3035
- (void)flushNowPlayingCaches;	// 0x35cbf465
// declared property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x35cc0071
// declared property getter: - (id)genre;	// 0x35cbfd65
- (BOOL)hasAlternatesForTypes:(unsigned)types;	// 0x35cbfe41
// declared property getter: - (BOOL)hasDataForItemArtwork;	// 0x35cbfe89
// declared property getter: - (BOOL)hasDisplayableText;	// 0x35cbfe8d
// declared property getter: - (BOOL)hasPlayedThisSession;	// 0x35cbfe91
// declared property getter: - (id)imageCache;	// 0x35cc0205
- (id)imageCacheRequestWithSize:(CGSize)size time:(double)time;	// 0x35cc0209
- (id)imageCacheRequestWithSize:(CGSize)size time:(double)time usePlaceholderAsFallback:(BOOL)fallback;	// 0x35cc0235
// declared property getter: - (unsigned)indexInQueueFeeder;	// 0x35cc3075
// declared property getter: - (BOOL)isAssetLoaded;	// 0x35cc3095
- (BOOL)isAssetURLValid;	// 0x35cbfd61
- (BOOL)isPlaceholderForItem:(id)item;	// 0x35cbfd5d
// declared property getter: - (BOOL)isStreamable;	// 0x35cbfea5
// declared property getter: - (BOOL)isStreamingQuality;	// 0x35d8eb79
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned)speed;	// 0x35cbef01
- (BOOL)isValidPlayerSubstituteForItem:(id)item;	// 0x35cbfd51
- (void)loadAssetAndPlayerItem;	// 0x35cbf491
- (id)localeForAssetTrack:(id)assetTrack;	// 0x35cc2bed
- (id)localizedPositionInPlaylistString;	// 0x35cc1789
// declared property getter: - (id)lyrics;	// 0x35cbfe01
// declared property getter: - (id)mainTitle;	// 0x35cbff41
// declared property getter: - (id)mediaItem;	// 0x35d6dedd
// declared property getter: - (CGSize)naturalSize;	// 0x35cbff45
- (void)notePlaybackFinishedByHittingEnd;	// 0x35cbfa89
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35cc1f79
- (id)path;	// 0x35cbfc21
// declared property getter: - (unsigned long long)persistentID;	// 0x35cc1779
// declared property getter: - (double)playableDuration;	// 0x35cc1ae1
// declared property getter: - (double)playableDurationIfAvailable;	// 0x35cc1af9
// declared property getter: - (double)playbackCheckpointCurrentTime;	// 0x35cbfaa1
- (float)playbackRateForLevel:(unsigned)level direction:(int)direction paused:(BOOL)paused;	// 0x35cbffa1
// declared property getter: - (id)player;	// 0x35cc30c5
// declared property getter: - (id)playerItem;	// 0x35cbf799
// declared property getter: - (id)podcastURL;	// 0x35cbff9d
// declared property getter: - (CGSize)presentationSize;	// 0x35cc0035
- (BOOL)prioritizeDownloadSession;	// 0x35d97b61
- (void)reevaluateType;	// 0x35cc2c4d
- (void)replacePlayerItemWithPlayerItem:(id)playerItem;	// 0x35cc2f11
- (void)resetBookkeeping;	// 0x35cbfa2d
- (float)scanIntervalForLevel:(unsigned)level paused:(BOOL)paused;	// 0x35cc00fd
- (void)setAlternateAudioTrackID:(int)anId;	// 0x35cbfa81
// declared property setter: - (void)setArtworkTimeMarkers:(id)markers;	// 0x35cc3015
// declared property setter: - (void)setChapterTimeMarkers:(id)markers;	// 0x35cc3025
// declared property setter: - (void)setClosedCaptionTimeMarkers:(id)markers;	// 0x35cc131d
// declared property setter: - (void)setDefaultPlaybackRate:(float)rate;	// 0x35cc3065
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x35cc3045
// declared property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x35cc00b5
// declared property setter: - (void)setHasPlayedThisSession:(BOOL)session;	// 0x35cc0159
// declared property setter: - (void)setIndexInQueueFeeder:(unsigned)queueFeeder;	// 0x35cc3085
// declared property setter: - (void)setIsAssetLoaded:(BOOL)loaded;	// 0x35cc30ad
- (void)setOverrideDuration:(double)duration;	// 0x35cc017d
// declared property setter: - (void)setPlaybackCheckpointCurrentTime:(double)time;	// 0x35cbfab9
- (void)setPlaybackFinishedTime:(double)time;	// 0x35cbfabd
- (void)setPlaybackStoppedTime:(double)time;	// 0x35cbfa85
// declared property setter: - (void)setPlayer:(id)player;	// 0x35cc30d5
- (void)setPlayerItem:(id)item;	// 0x35cbf975
- (void)setRating:(float)rating;	// 0x35cbfad5
// declared property setter: - (void)setSoundCheckVolumeNormalization:(float)normalization;	// 0x35cc0191
// declared property setter: - (void)setSubtitleTrackID:(int)anId;	// 0x35cbfadd
// declared property setter: - (void)setUrlTimeMarkers:(id)markers;	// 0x35cc30f5
- (void)setUserAdvancedDuringPlayback:(BOOL)playback;	// 0x35cbfae1
- (void)setUserEnabledSubtitles:(BOOL)subtitles;	// 0x35cbfaf9
// converted property setter: - (void)setUserSkippedPlayback:(BOOL)playback;	// 0x35cbfb25
// declared property setter: - (void)setVideoID:(id)anId;	// 0x35cc188d
- (void)setupEQPresetWithDefaultPreset:(int)defaultPreset;	// 0x35cc2409
- (void)setupPlaybackInfo;	// 0x35cc2471
// declared property getter: - (float)soundCheckVolumeNormalization;	// 0x35cc30e5
// declared property getter: - (int)status;	// 0x35cbfa0d
// declared property getter: - (int)subtitleTrackID;	// 0x35cbfad9
// declared property getter: - (BOOL)supportsRewindAndFastForward15Seconds;	// 0x35cc01c9
// declared property getter: - (double)timeOfSeekableEnd;	// 0x35cc1bf1
// declared property getter: - (double)timeOfSeekableStart;	// 0x35cc1b11
- (id)titlesForTime:(double)time;	// 0x35cc0311
// declared property getter: - (unsigned)type;	// 0x35cc1765
- (id)url;	// 0x35cbfcad
- (id)urlTimeMarkerForTime:(double)time;	// 0x35cc1589
// declared property getter: - (id)urlTimeMarkers;	// 0x35cc12f5
// declared property getter: - (BOOL)useEmbeddedChapterData;	// 0x35cc0315
// declared property getter: - (float)userRating;	// 0x35cc1775
// converted property getter: - (BOOL)userSkippedPlayback;	// 0x35cbfb49
// declared property getter: - (id)videoID;	// 0x35cc1865
// declared property getter: - (BOOL)wantsSubtitles;	// 0x35cc1785
// declared property getter: - (BOOL)wasDownloadedThisSession;	// 0x35d8ec31
@end

