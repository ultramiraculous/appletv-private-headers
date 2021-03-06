/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTITunesMetadataRetrieval.h"
#import "AppleTV-Structs.h"
#import "BRPeriodicMetadataRetrieval.h"
#import "BRMediaPlayer.h"
#import "AVAssetResourceLoaderDelegate.h"
#import "LTAVFoundationDataRetrieval.h"

@class AVQueuePlayer, NSTimer, NSMutableArray, LTAVPlaylist, NSArray, LTMusicScrubber, NSSet, BRKeyValueObservingRegistry, LTVideoVisualControl, NSDate, NSString, AVMediaSelectionOption, LTTrickPlayPlayer, AVPlayerItem, AVPlayer, ATVSecureKeyStandardConnector, BRControl, BRStateMachine;
@protocol BRFailedURLHandling, BRMediaCollection, BRMediaAsset;

__attribute__((visibility("hidden")))
@interface LTAVPlayer : BRMediaPlayer <LTITunesMetadataRetrieval, LTAVFoundationDataRetrieval, BRPeriodicMetadataRetrieval, AVAssetResourceLoaderDelegate> {
	BRStateMachine *_stateMachine;	// 4 = 0x4
	BRStateMachine *_lookaheadStateMachine;	// 8 = 0x8
	AVQueuePlayer *_player;	// 12 = 0xc
	int _playerItemStatus;	// 16 = 0x10
	LTVideoVisualControl *_avPlayerVisuals;	// 20 = 0x14
	BRControl *_trickPlayVisuals;	// 24 = 0x18
	AVPlayerItem *_currentItem;	// 28 = 0x1c
	AVPlayerItem *_playerItemBeingLoaded;	// 32 = 0x20
	AVPlayerItem *_lookaheadPlayerItemBeingLoaded;	// 36 = 0x24
	LTAVPlaylist *_playlist;	// 40 = 0x28
	id<BRMediaAsset> _mediaAssetBeingAuthorized;	// 44 = 0x2c
	id<BRMediaAsset> _lookaheadMediaAssetBeingAuthorized;	// 48 = 0x30
	id<BRMediaCollection> _mediaCollection;	// 52 = 0x34
	BRKeyValueObservingRegistry *_kvoRegistry;	// 56 = 0x38
	NSTimer *_movieExpirationTimer;	// 60 = 0x3c
	id _timeObserverToken;	// 64 = 0x40
	NSString *_keyBagPath;	// 68 = 0x44
	NSArray *_selectableAudioOptions;	// 72 = 0x48
	NSArray *_chapters;	// 76 = 0x4c
	NSArray *_selectableSubtitleOptions;	// 80 = 0x50
	AVMediaSelectionOption *_selectedAVSubtitleOption;	// 84 = 0x54
	id _subtitleOptionFilter;	// 88 = 0x58
	NSSet *_cachedLastAudioFormatsSet;	// 92 = 0x5c
	NSMutableArray *_fairPlayContexts;	// 96 = 0x60
	int _defaultActionAtItemEnd;	// 100 = 0x64
	unsigned _reasonForPlayerItemChange;	// 104 = 0x68
	AVPlayerItem *_dummyPlayerItem;	// 108 = 0x6c
	AVPlayer *_dummyPlayer;	// 112 = 0x70
	NSTimer *_HDCPDownTimer;	// 116 = 0x74
	NSTimer *_HDCPPollTimer;	// 120 = 0x78
	NSTimer *_daapTickleTimer;	// 124 = 0x7c
	NSTimer *_liveStreamMonitorTimer;	// 128 = 0x80
	NSTimer *_bookmarkSaverTimer;	// 132 = 0x84
	NSTimer *_seekDelayTimer;	// 136 = 0x88
	NSTimer *_expirationTimer;	// 140 = 0x8c
	NSTimer *_unexpectedZeroRateTimer;	// 144 = 0x90
	NSTimer *_crabsDownloadStalledTimer;	// 148 = 0x94
	LTTrickPlayPlayer *_trickPlayPlayer;	// 152 = 0x98
	LTMusicScrubber *_musicScrubber;	// 156 = 0x9c
	long _lastRetrievedChapterIndex;	// 160 = 0xa0
	int _externalPlayerState;	// 164 = 0xa4
	int _direction;	// 168 = 0xa8
	BOOL _forceLiveStreaming;	// 172 = 0xac
	BOOL _playingBackInitialItem;	// 173 = 0xad
	BOOL _startDateIsEstimate;	// 174 = 0xae
	BOOL _currentItemHasBeenPlayed;	// 175 = 0xaf
	BOOL _shouldDisplayBitRate;	// 176 = 0xb0
	BOOL _muted;	// 177 = 0xb1
	BOOL _hasRealChapters;	// 178 = 0xb2
	BOOL _constantAudioOutputEnabled;	// 179 = 0xb3
	BOOL _shouldUseWorkaroundForStalledDownload;	// 180 = 0xb4
	long _chapterGroupIndex;	// 184 = 0xb8
	double _virtualChapterMark;	// 188 = 0xbc
	int _numPendingRateRequests;	// 196 = 0xc4
	long _previousNotedAccessLogEventsCount;	// 200 = 0xc8
	int _hdcpStatus;	// 204 = 0xcc
	BOOL _isExternalProtectionRequiredForPlaybackForCurrentItem;	// 208 = 0xd0
	BOOL _isPresentable;	// 209 = 0xd1
	XXStruct_pwHToB _cachedDuration;	// 212 = 0xd4
	XXStruct_pwHToB _cachedPlayerTime;	// 236 = 0xec
	XXStruct_pwHToB _lastTimeUpdate;	// 260 = 0x104
	XXStruct_pwHToB _forwardPlaybackEndTime;	// 284 = 0x11c
	XXStruct_pwHToB _reversePlaybackEndTime;	// 308 = 0x134
	float _volume;	// 332 = 0x14c
	XXStruct_yD8eWC _aggregateBufferedRange;	// 336 = 0x150
	double _startTime;	// 384 = 0x180
	float _startPosition;	// 392 = 0x188
	NSDate *_startDate;	// 396 = 0x18c
	XXStruct_pwHToB _timeBeingSeekedTo;	// 400 = 0x190
	NSDate *_dateBeingSeekedTo;	// 424 = 0x1a8
	XXStruct_yD8eWC _lastGoodSeekableRange;	// 428 = 0x1ac
	int _playlistEndAction;	// 476 = 0x1dc
	int _mediaAssetEndAction;	// 480 = 0x1e0
	id<BRFailedURLHandling> _failedURLHandlingDelegate;	// 484 = 0x1e4
	ATVSecureKeyStandardConnector *_standardKeyConnector;	// 488 = 0x1e8
	double _lastReportedBandwidth;	// 492 = 0x1ec
	double _lastReportedBandwidthMax;	// 500 = 0x1f4
	double _lastReportedBandwidthMean;	// 508 = 0x1fc
	double _lastReportedBandwidthStdDev;	// 516 = 0x204
	double _playbackLikelyToKeepUpTime;	// 524 = 0x20c
	int _stallCount;	// 532 = 0x214
}
@property(assign) long chapterGroupIndex;	// G=0x4778d5; S=0x4778ad; converted property
@property(readonly, retain) NSArray *chapters;	// G=0x47793d; converted property
@property(assign) long currentChapterIndex;	// G=0x4776ad; S=0x4775d1; converted property
@property(assign) double elapsedTime;	// G=0x475491; S=0x4753c9; converted property
@property(readonly, assign) BOOL hasRealChapters;	// G=0x477855; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x4783b1; S=0x478391; converted property
@property(assign) BOOL isPresentable;	// G=0x477e1d; S=0x477e0d; converted property
@property(assign) int mediaAssetEndAction;	// G=0x479449; S=0x4793cd; converted property
@property(assign) BOOL muted;	// G=0x477bf5; S=0x477bbd; converted property
@property(retain) id playbackDate;	// G=0x475875; S=0x475771; converted property
@property(readonly, retain) LTAVPlaylist *playlist;	// G=0x499ce9; converted property
@property(assign) int playlistEndAction;	// G=0x4793bd; S=0x479341; converted property
@property(assign) int repeatMode;	// G=0x478329; S=0x47828d; converted property
@property(retain) id selectedAudioOption;	// G=0x478a35; S=0x47889d; converted property
@property(retain) id selectedMedia;	// G=0x478ca9; S=0x478e51; converted property
@property(retain) id selectedSubtitleOption;	// G=0x47871d; S=0x478471; converted property
@property(assign) BOOL shufflePlayback;	// G=0x478245; S=0x4781a9; converted property
@property(assign) BOOL skipExplicit;	// G=0x47836d; S=0x47834d; converted property
@property(readonly, retain) NSDate *startDate;	// G=0x4759dd; converted property
@property(assign) float startPosition;	// G=0x4753b9; S=0x4753a9; converted property
@property(retain) id subtitleOptionFilter;	// G=0x478419; S=0x4783d5; converted property
@property(assign) double virtualChapterMark;	// G=0x4768d1; S=0x476879; converted property
+ (id)_buildQualityOfServiceReport:(id)serviceReport;	// 0x4815c1
+ (BOOL)allowMultiplePlayers;	// 0x47400d
+ (id)contentTypes;	// 0x473c79
+ (double)fastSpeedLevel1;	// 0x474011
+ (double)fastSpeedLevel2;	// 0x474025
+ (double)fastSpeedLevel3;	// 0x474039
+ (void)initialize;	// 0x473b05
+ (double)slowSpeedLevel1;	// 0x47404d
+ (double)slowSpeedLevel2;	// 0x474061
+ (double)slowSpeedLevel3;	// 0x474075
- (id)init;	// 0x474089
- (void).cxx_destruct;	// 0x4799ed
- (void)_addLookAheadPlayerItem;	// 0x47d2a5
- (BOOL)_allowedToBeginFastForwardFromTime:(XXStruct_pwHToB)time;	// 0x485b35
- (BOOL)_allowedToBeginRewindFromTime:(XXStruct_pwHToB)time;	// 0x485cb1
- (BOOL)_allowedToPauseAtTime:(XXStruct_pwHToB)time;	// 0x485e39
- (BOOL)_allowedToSetElapsedTimeWithUserInfo:(id)userInfo fromTime:(XXStruct_pwHToB)time;	// 0x485fb9
- (BOOL)_alreadyPlayingMediaIndex:(long)index inTrackList:(id)trackList;	// 0x482991
- (BOOL)_alwaysUseTrickPlayPlayer;	// 0x47e3a1
- (void)_applyLoudnessInfoForAsset:(id)asset playerItem:(id)item priorToEnqueueing:(BOOL)enqueueing;	// 0x47cb05
- (void)_audioFormatsDidChange;	// 0x47f4b9
- (id)_authIfNecessaryAndPrimeQueue;	// 0x486be5
- (void)_authorizationAttemptComplete:(id)complete;	// 0x48195d
- (id)_bookmarkSaveInterval;	// 0x499a3d
- (void)_bookmarkSaverTimerFired:(id)fired;	// 0x47db7d
- (id)_cachedLastAudioFormatsSet;	// 0x47e809
- (void)_cancelMusicScrub;	// 0x488af9
- (id)_chaptersFromAVAsset;	// 0x47f909
- (void)_configureDAAPTickleTimer;	// 0x47e259
- (void)_configureLoadedPlayerItem;	// 0x4846d9
- (void)_crabsDownloadStalledTimerFired:(id)fired;	// 0x485679
- (BOOL)_currentItemIsLive;	// 0x47db91
- (id)_dateCorrespondingToTime:(XXStruct_pwHToB)time;	// 0x488335
- (void)_deactivateAudioSession;	// 0x47f2e5
- (void)_deauthorizeAsset:(id)asset;	// 0x47dda5
- (void)_delayedEventHandler:(id)handler;	// 0x47e679
- (void)_delayedEventTimerFired:(id)fired;	// 0x47e639
- (void)_deleteDownloadKeyCookieForAsset:(id)asset;	// 0x499bc5
- (void)_displayModeChanged:(id)changed;	// 0x481add
- (void)_disposePlayer;	// 0x479d85
- (void)_dummyPlayerItemStatusHasChanged;	// 0x48236d
- (void)_durationDidChange:(XXStruct_pwHToB)_duration;	// 0x480919
- (id)_emergeFromTrickPlayAtTime:(XXStruct_pwHToB)time resumeState:(int)state;	// 0x485a65
- (XXStruct_pwHToB)_endSeekTimeFromDuration:(double)duration useBounceBack:(BOOL)back;	// 0x4889e1
- (void)_enforceMovieExpirationPolicy:(id)policy;	// 0x481da9
- (void)_enterTrickPlayAtRate:(float)rate fromTime:(XXStruct_pwHToB)time;	// 0x484eb1
- (id)_eventForError:(id)error;	// 0x486a99
- (int)_externalProtectionStatus;	// 0x47ea09
- (id)_filteredSubtitleOptions;	// 0x47f109
- (id)_generateFakeChapters;	// 0x47fd21
- (id)_goToNextMediaWithReason:(unsigned)reason;	// 0x487261
- (id)_goToPreviousMediaWithReason:(unsigned)reason;	// 0x487525
- (id)_handleBufferEmptyDuringAVPlayerPlaybackWithRate:(float)rate;	// 0x486909
- (id)_handleDisplayWasUnpluggedDuringPlayback:(id)playback;	// 0x4895e5
- (id)_handleGenericError:(BOOL)error avError:(id)error2;	// 0x488b2d
- (id)_handleHDCPDroppedDuringPlayback:(id)playback;	// 0x489525
- (id)_handleHDCPErrorDuringStateTransition;	// 0x48947d
- (id)_handleMediaResourceLoaded:(BOOL)loaded;	// 0x488fd1
- (void)_handleSoundFormatSelectionAfterPause:(id)pause;	// 0x47f435
- (void)_hdcpHasBeenDownTooLong:(id)aLong;	// 0x47e965
- (BOOL)_hdcpRequiredButNotAvailable;	// 0x47e925
- (id)_hitBeginningWhileGoingBackwardUsingAVPlayer;	// 0x488551
- (id)_hitBeginningWhileGoingBackwardUsingTrickPlayPlayer;	// 0x488799
- (id)_hitEndWhileGoingForwardUsingAVPlayerUsingBounceBack:(BOOL)back;	// 0x48869d
- (id)_hitEndWhileGoingForwardUsingTrickPlayPlayer;	// 0x488819
- (id)_hitEndWhilePlaying;	// 0x4888bd
- (id)_iTunesMetadataForKey:(id)key fallbackCode:(unsigned long)code;	// 0x47de1d
- (void)_initializeLookaheadStateMachine:(id)machine;	// 0x498c5d
- (id)_initializePlayer;	// 0x4830b9
- (void)_initializeStateMachine:(id)machine;	// 0x48963d
- (id)_interstitials;	// 0x4802e1
- (BOOL)_isStreamingAsset:(id)asset;	// 0x47dbb9
- (BOOL)_isTimeNearForwardEdgeOfBuffer:(XXStruct_pwHToB)buffer;	// 0x481e35
- (id)_itemChangedToNilDueToUserAction:(BOOL)userAction;	// 0x487775
- (id)_itemChangedToNonNil:(BOOL)nonNil currentState:(id)state;	// 0x487e6d
- (void)_liveStreamMonitorFired:(id)fired;	// 0x47dab1
- (id)_loadLookaheadAVAssetKeysForAsset:(id)asset;	// 0x499801
- (void)_loadedTimeRangesDidChange:(id)_loadedTimeRanges;	// 0x480951
- (void)_movieExpirationDateSet:(id)set;	// 0x481bed
- (double)_nextChapterMark;	// 0x480241
- (id)_pause;	// 0x484f7d
- (void)_performPostMediaAssetChangedActions:(BOOL)actions;	// 0x499c59
- (void)_playbackBufferEmptyDidChange:(BOOL)_playbackBufferEmpty;	// 0x4818f5
- (void)_playbackBufferFullDidChange:(BOOL)_playbackBufferFull;	// 0x4818c1
- (id)_playbackDateFromAVPlayer;	// 0x4820c1
- (void)_playbackLikelyToKeepUpDidChange:(BOOL)_playbackLikelyToKeepUp;	// 0x481861
- (void)_playerItemAccessLogChanged:(id)changed;	// 0x48034d
- (void)_playerItemDidChange;	// 0x480601
- (void)_playerItemDidPlayToEnd:(id)_playerItem;	// 0x4803a1
- (void)_playerItemFailedToPlayToEnd:(id)end;	// 0x480421
- (id)_playerItemForAsset:(id)asset;	// 0x47b685
- (void)_playerItemPlaybackStalled:(id)stalled;	// 0x4804d5
- (void)_playerItemStatusDidChange;	// 0x48070d
- (void)_playerItemTracksDidChange:(id)_playerItemTracks;	// 0x4812e1
- (void)_playerItemWillChange;	// 0x4805d5
- (void)_playerRateDidChangeToRate:(float)_playerRate;	// 0x480671
- (void)_pollHDCPStatus:(id)status;	// 0x47e859
- (void)_postAssetWillChangeImmediately;	// 0x47b3c5
- (void)_postDelayedEvent:(id)event;	// 0x47e40d
- (void)_postDelayedEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x47e519
- (void)_postDelayedEventWithHighPriority:(id)highPriority;	// 0x47e42d
- (void)_postErrorNotificationImmediately:(id)immediately;	// 0x47b5c1
- (double)_previousChapterMark;	// 0x480109
- (id)_primeQueue;	// 0x486d69
- (void)_primeQueueAfterDelay:(double)delay;	// 0x486b55
- (void)_queuePrimeDelayExpired;	// 0x486bb9
- (void)_removeLookAheadPlayerItem;	// 0x47d3a1
- (void)_restartFirehoseByCreatingDummyPlayer;	// 0x482131
- (int)_resumeState;	// 0x4846b9
- (void)_sagaMediaFailedToResolve:(id)resolve;	// 0x47e781
- (void)_saveBookmarkWithShouldAttemptToUpdatePlaycount:(BOOL)_saveBookmarkWith;	// 0x488ee9
- (id)_seekCompleted:(BOOL)completed;	// 0x48551d
- (void)_seekDelayTimerFired:(id)fired;	// 0x48562d
- (void)_seekableTimeRangesDidChange:(id)_seekableTimeRanges;	// 0x481209
- (void)_sendBufferSufficientToPlayNotification;	// 0x48153d
- (void)_sendQualityOfServiceReportNotification;	// 0x48179d
- (void)_sendStartBufferingNotification:(XXStruct_pwHToB)notification;	// 0x481425
- (void)_setAVPlayerRate:(float)rate;	// 0x47dd21
- (void)_setCachedLastAudioFormatsSet:(id)set;	// 0x47e81d
- (void)_setChapters:(id)chapters;	// 0x47ffc9
- (void)_setConstantAudioOuputEnabled:(BOOL)enabled;	// 0x485075
- (void)_setDateBeingSeekedTo:(id)to;	// 0x485779
- (void)_setElapsedTime:(XXStruct_pwHToB)time;	// 0x485145
- (void)_setElapsedTimeWithUserInfo:(id)userInfo;	// 0x4850ad
- (void)_setExternalPlayerState:(int)state;	// 0x484531
- (void)_setExternalPlayerState:(int)state reason:(id)reason;	// 0x484545
- (id)_setMediaAtIndex:(long)index inTrackList:(id)trackList;	// 0x4825e1
- (void)_setPlayerItem:(id)item;	// 0x479e69
- (void)_setResumeState:(int)state;	// 0x484685
- (void)_setTimeBeingSeekedTo:(XXStruct_pwHToB)to;	// 0x4856c9
- (void)_setTimeOrDateWithDelayedSeek:(id)delayedSeek;	// 0x4857a1
- (BOOL)_shouldAdvanceManuallyOnError;	// 0x488e41
- (BOOL)_shouldUseTrickPlayPlayerForFastForwardOnBufferEmpty;	// 0x48686d
- (BOOL)_shouldUseTrickPlayPlayerForFastReverseOnBufferEmpty;	// 0x4867d1
- (void)_speakerWasSelected:(id)selected;	// 0x481a81
- (id)_standardKeyConnector;	// 0x479d2d
- (void)_startBookmarkTimerIfNeeded;	// 0x499ad9
- (id)_startFastForwardFromTime:(XXStruct_pwHToB)time rate:(float)rate;	// 0x486149
- (id)_startPlayback;	// 0x484d15
- (id)_startRewindFromTime:(XXStruct_pwHToB)time rate:(float)rate;	// 0x4864f1
- (void)_stopAndTearDownEverythingWithReason:(unsigned)reason notifyListeners:(BOOL)listeners;	// 0x482a2d
- (void)_stopBookmarkTimer;	// 0x499b91
- (void)_stopPlayer:(id)player;	// 0x47dced
- (id)_stringValueForMetadataItem:(id)metadataItem notificationName:(id)name;	// 0x47df95
- (void)_subtitleSettingsChanged:(id)changed;	// 0x481b9d
- (void)_tickleHomeShareActivity:(id)activity;	// 0x47d981
- (XXStruct_pwHToB)_timeCorrespondingToDate:(id)date;	// 0x48843d
- (void)_timedMetadataDidChange;	// 0x480895
- (void)_unexpectedZeroRateTimerFired:(id)fired;	// 0x47e735
- (id)_unfilteredSubtitleOptions;	// 0x47f0f5
- (void)_updateActionAtItemEnd;	// 0x484e29
- (void)_updateAudioOptions;	// 0x47ea19
- (void)_updateCachedPlayerTime:(XXStruct_pwHToB)time;	// 0x48432d
- (void)_updateChapters;	// 0x47f721
- (void)_updateFairplayContext;	// 0x47d4c5
- (void)_updateSelectedAudioOptionAndSelectableAudioOptionsForRouteChange;	// 0x47f675
- (void)_updateSelectedSubtitleOption;	// 0x47ed9d
- (void)_updateSubtitleOptions;	// 0x47ea51
- (void)_updateTrickPlayPlayer;	// 0x47affd
- (void)_updateVisuals:(BOOL)visuals;	// 0x47b28d
- (BOOL)_useDateForChapterSeeking;	// 0x480021
- (BOOL)_useSeekTime;	// 0x481fbd
- (BOOL)_useTrickPlayPlayerTime;	// 0x481ead
- (id)accessLogArray;	// 0x479271
- (void)appendMediaList:(id)list;	// 0x474ab9
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x474a65
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x477d9d
- (id)audioOptions;	// 0x478889
- (BRTimeRange)bufferedRange;	// 0x4779cd
- (float)bufferingProgress;	// 0x477b05
- (id)chapterAtIndex:(long)index;	// 0x477971
- (long)chapterCount;	// 0x477951
- (id)chapterGroupAtIndex:(long)index;	// 0x4778e5
- (long)chapterGroupCount;	// 0x477865
// converted property getter: - (long)chapterGroupIndex;	// 0x4778d5
- (long)chapterIndexForTime:(double)time;	// 0x4777e9
- (BOOL)chapterIsPlayable:(long)playable;	// 0x477851
// converted property getter: - (id)chapters;	// 0x47793d
- (id)collection;	// 0x474d89
- (BOOL)cueMediaWithError:(id *)error;	// 0x474e1d
// converted property getter: - (long)currentChapterIndex;	// 0x4776ad
- (id)currentVideoFrame;	// 0x477c31
- (void)dealloc;	// 0x4745e9
- (double)duration;	// 0x475269
// converted property getter: - (double)elapsedTime;	// 0x475491
- (id)errorLogArray;	// 0x4792d9
- (void)externalPlayerDidHitBeginning;	// 0x479965
- (void)externalPlayerDidHitEnd;	// 0x479991
- (void)handleSoundFormatChangeWhilePlayingVideo;	// 0x47f3a1
// converted property getter: - (BOOL)hasRealChapters;	// 0x477855
- (id)iTunesMetadataArtist;	// 0x4790bd
- (id)iTunesMetadataCoverArtImageProxy;	// 0x47912d
- (id)iTunesMetadataTitle;	// 0x47904d
- (void)insertMedia:(id)media atIndex:(long)index;	// 0x474b5d
- (BOOL)isAssetReadyToPlay:(id)play;	// 0x477b0d
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x4783b1
// converted property getter: - (BOOL)isPresentable;	// 0x477e1d
- (BOOL)isTrackEnabled:(int)enabled;	// 0x478a49
- (id)media;	// 0x474d9d
// converted property getter: - (int)mediaAssetEndAction;	// 0x479449
- (long)mediaIndex;	// 0x474dfd
// converted property getter: - (BOOL)muted;	// 0x477bf5
- (void)nextChapter;	// 0x4768e9
- (void)nextMedia;	// 0x4780a9
- (id)periodicMetadataTitle;	// 0x479841
// converted property getter: - (id)playbackDate;	// 0x475875
- (id)playbackInfo;	// 0x475b01
- (int)playerState;	// 0x475229
- (BOOL)playingVisualContent;	// 0x477e2d
// converted property getter: - (id)playlist;	// 0x499ce9
// converted property getter: - (int)playlistEndAction;	// 0x4793bd
- (void)previousChapter;	// 0x476f41
- (void)previousMedia;	// 0x477fa9
- (void)purgeTrackList;	// 0x474d65
- (id)qualityOfServiceInfo;	// 0x479459
- (void)refreshLookaheadItem;	// 0x4799bd
- (void)removeMedia:(id)media;	// 0x474bc5
// converted property getter: - (int)repeatMode;	// 0x478329
- (void)resetToBeginning;	// 0x4759f1
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)requestedResource;	// 0x47993d
// converted property getter: - (id)selectedAudioOption;	// 0x478a35
// converted property getter: - (id)selectedMedia;	// 0x478ca9
// converted property getter: - (id)selectedSubtitleOption;	// 0x47871d
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x4778ad
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x4775d1
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x4753c9
- (void)setFailedURLDelegate:(id)delegate;	// 0x479d19
- (void)setForwardPlaybackEndTime:(double)time;	// 0x475601
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x478391
// converted property setter: - (void)setIsPresentable:(BOOL)presentable;	// 0x477e0d
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x4749d9
// converted property setter: - (void)setMediaAssetEndAction:(int)action;	// 0x4793cd
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x4746f1
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x474755
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x477bbd
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x475771
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x479341
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x47828d
- (void)setReversePlaybackEndTime:(double)time;	// 0x4756b9
// converted property setter: - (void)setSelectedAudioOption:(id)option;	// 0x47889d
// converted property setter: - (void)setSelectedMedia:(id)media;	// 0x478e51
// converted property setter: - (void)setSelectedSubtitleOption:(id)option;	// 0x478471
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x4781a9
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x47834d
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x4759a9
// converted property setter: - (void)setStartPosition:(float)position;	// 0x4753a9
- (BOOL)setState:(int)state error:(id *)error;	// 0x474f2d
// converted property setter: - (void)setSubtitleOptionFilter:(id)filter;	// 0x4783d5
- (void)setTrackEnabled:(BOOL)enabled forTrackID:(int)trackID;	// 0x478b81
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x476879
- (void)setVolume:(float)volume;	// 0x477c05
// converted property getter: - (BOOL)shufflePlayback;	// 0x478245
// converted property getter: - (BOOL)skipExplicit;	// 0x47836d
// converted property getter: - (id)startDate;	// 0x4759dd
// converted property getter: - (float)startPosition;	// 0x4753b9
// converted property getter: - (id)subtitleOptionFilter;	// 0x478419
- (id)subtitleOptions;	// 0x478439
- (BOOL)supportsBufferedRange;	// 0x4779c9
- (BOOL)supportsMultipleTrickSpeeds;	// 0x475239
- (BOOL)supportsRepeatModes;	// 0x478349
- (BOOL)supportsShufflePlayback;	// 0x478269
- (BOOL)supportsTrickPlay;	// 0x475251
- (BOOL)supportsVolumeControl;	// 0x475a99
- (id)timedMetadata;	// 0x479229
- (id)trackList;	// 0x474ddd
- (id)upNextMedia;	// 0x474dbd
// converted property getter: - (double)virtualChapterMark;	// 0x4768d1
- (id)visuals;	// 0x477e69
@end

