/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTransportDataProvider.h"

@class NSMutableArray;
@protocol BRPlayerDelegate;

__attribute__((visibility("hidden")))
@interface BRMediaPlayer : XXUnknownSuperclass <BRTransportDataProvider> {
	NSMutableArray *_stateStack;	// 4 = 0x4
	id<BRPlayerDelegate> _playerDelegate;	// 8 = 0x8
}
@property(assign) long chapterGroupIndex;	// G=0x37600d; S=0x376009; converted property
@property(assign) long currentChapterIndex;	// G=0x375ff5; S=0x375ff1; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x376051; S=0x37604d; converted property
@property(assign) double elapsedTime;	// G=0x375f59; S=0x375f51; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x376131; S=0x37612d; converted property
@property(assign) BOOL muted;	// G=0x376141; S=0x37613d; converted property
@property(retain) id playbackDate;	// G=0x375f7d; S=0x375f79; converted property
@property(retain, nonatomic) id<BRPlayerDelegate> playerDelegate;	// G=0x3760a5; S=0x3760b5; @synthesize=_playerDelegate
@property(retain) id playerSpecificOptions;	// G=0x376185; S=0x376181; converted property
@property(assign) int playlistEndAction;	// G=0x37609d; S=0x376099; converted property
@property(assign) int repeatMode;	// G=0x37611d; S=0x376119; converted property
@property(retain) id selectedAudioOption;	// G=0x3760f9; S=0x3760f5; converted property
@property(retain) id selectedMedia;	// G=0x376105; S=0x376109; converted property
@property(retain) id selectedSubtitleOption;	// G=0x3760ed; S=0x3760dd; converted property
@property(assign) BOOL shufflePlayback;	// G=0x376111; S=0x37610d; converted property
@property(assign) BOOL skipExplicit;	// G=0x376129; S=0x376125; converted property
@property(assign) float startPosition;	// G=0x375f4d; S=0x375f49; converted property
@property(assign) double startTime;	// G=0x375fb1; S=0x375fa9; converted property
@property(assign) double stopTime;	// G=0x375f91; S=0x375f89; converted property
@property(assign) double virtualChapterMark;	// G=0x375fd1; S=0x375fcd; converted property
@property(assign) float volume;	// G=0x37614d; S=0x376149; converted property
+ (BOOL)allowMultiplePlayers;	// 0x375dad
+ (id)contentTypes;	// 0x375da9
+ (BOOL)handlesVideoForType:(id)type;	// 0x375db1
- (void)appendMediaList:(id)list;	// 0x375e61
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x375e65
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x376055
- (id)audioOptions;	// 0x3760f1
- (BRTimeRange)bufferedRange;	// 0x376031
- (float)bufferingProgress;	// 0x37603d
- (id)chapterAtIndex:(long)index;	// 0x376029
- (long)chapterCount;	// 0x376025
- (id)chapterGroupAtIndex:(long)index;	// 0x376011
- (long)chapterGroupCount;	// 0x376005
// converted property getter: - (long)chapterGroupIndex;	// 0x37600d
- (long)chapterIndexForTime:(double)time;	// 0x375ff9
- (BOOL)chapterIsPlayable:(long)playable;	// 0x375ffd
- (id)chapters;	// 0x376021
- (void)clearStack;	// 0x3763dd
- (id)collection;	// 0x375e69
- (BOOL)cueMediaWithError:(id *)error;	// 0x375eb9
// converted property getter: - (long)currentChapterIndex;	// 0x375ff5
- (long)currentInterstitialIndex;	// 0x376019
- (id)currentVideoFrame;	// 0x3760cd
- (void)dealloc;	// 0x375db5
- (id)debugStringForState:(int)state;	// 0x376189
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x376051
- (double)duration;	// 0x375f31
// converted property getter: - (double)elapsedTime;	// 0x375f59
- (BOOL)hasClosedCaptions;	// 0x3760e5
- (BOOL)hasRealChapters;	// 0x376001
- (id)interstitialTimes;	// 0x376015
- (BOOL)isAssetReadyToPlay:(id)play;	// 0x376045
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x376131
- (BOOL)isTrackEnabled:(int)enabled;	// 0x3760fd
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x3760d1
- (id)media;	// 0x375e6d
- (int)mediaCount;	// 0x375e75
- (long)mediaIndex;	// 0x375eb5
// converted property getter: - (BOOL)muted;	// 0x376141
- (void)nextChapter;	// 0x375fe9
- (void)nextMedia;	// 0x376139
- (int)peekState;	// 0x37632d
// converted property getter: - (id)playbackDate;	// 0x375f7d
- (id)playbackInfo;	// 0x376049
// declared property getter: - (id)playerDelegate;	// 0x3760a5
// converted property getter: - (id)playerSpecificOptions;	// 0x376185
- (int)playerState;	// 0x375f21
- (BOOL)playingVisualContent;	// 0x3760c5
// converted property getter: - (int)playlistEndAction;	// 0x37609d
- (int)popState;	// 0x376365
- (void)previousChapter;	// 0x375fed
- (void)previousMedia;	// 0x376135
- (void)pushState:(int)state;	// 0x37626d
- (id)qualityOfServiceInfo;	// 0x3760a1
// converted property getter: - (int)repeatMode;	// 0x37611d
- (void)resetToBeginning;	// 0x375fc9
- (BOOL)reverseTouchSwipeBehavior;	// 0x375e19
// converted property getter: - (id)selectedAudioOption;	// 0x3760f9
// converted property getter: - (id)selectedMedia;	// 0x376105
// converted property getter: - (id)selectedSubtitleOption;	// 0x3760ed
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x376009
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x375ff1
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x37604d
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x375f51
- (void)setFailedURLDelegate:(id)delegate;	// 0x376409
- (void)setForcedSubtitleOption;	// 0x3760e9
- (void)setForwardPlaybackEndTime:(double)time;	// 0x375f71
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x37612d
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x375e5d
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x375e21
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x375e1d
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x37613d
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x375f79
// declared property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x3760b5
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x376181
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x376099
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x376119
- (void)setReversePlaybackEndTime:(double)time;	// 0x375f75
// converted property setter: - (void)setSelectedAudioOption:(id)option;	// 0x3760f5
- (void)setSelectedClosedCaptionsEnabled:(BOOL)enabled;	// 0x3760e1
// converted property setter: - (void)setSelectedMedia:(id)media;	// 0x376109
// converted property setter: - (void)setSelectedSubtitleOption:(id)option;	// 0x3760dd
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x37610d
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x376125
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x375f81
// converted property setter: - (void)setStartPosition:(float)position;	// 0x375f49
// converted property setter: - (void)setStartTime:(double)time;	// 0x375fa9
- (BOOL)setState:(int)state error:(id *)error;	// 0x375f1d
// converted property setter: - (void)setStopTime:(double)time;	// 0x375f89
- (void)setTrackEnabled:(BOOL)enabled forTrackID:(int)trackID;	// 0x376101
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x375fcd
// converted property setter: - (void)setVolume:(float)volume;	// 0x376149
// converted property getter: - (BOOL)shufflePlayback;	// 0x376111
// converted property getter: - (BOOL)skipExplicit;	// 0x376129
- (id)startDate;	// 0x375f85
// converted property getter: - (float)startPosition;	// 0x375f4d
// converted property getter: - (double)startTime;	// 0x375fb1
// converted property getter: - (double)stopTime;	// 0x375f91
- (BOOL)stopsActiveAudioPlayer;	// 0x375e15
- (id)subtitleOptions;	// 0x3760d9
- (BOOL)supportsBufferedRange;	// 0x37602d
- (BOOL)supportsMultipleTrickSpeeds;	// 0x375f25
- (BOOL)supportsRepeatModes;	// 0x376121
- (BOOL)supportsShufflePlayback;	// 0x376115
- (BOOL)supportsTrickPlay;	// 0x375f29
- (BOOL)supportsVolumeControl;	// 0x376145
- (int)swapState:(int)state;	// 0x3762f9
- (id)trackList;	// 0x375e71
// converted property getter: - (double)virtualChapterMark;	// 0x375fd1
- (id)visuals;	// 0x3760c9
// converted property getter: - (float)volume;	// 0x37614d
@end
