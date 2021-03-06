/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPlayback.h"
#import "MPMovieViewDelegate.h"
#import </libobjc.A.h>

@class MPMovieErrorLog, NSMutableDictionary, MPInlineVideoController, NSArray, MPAVController, MPSystemNowPlayingController, NSMutableSet, MPMoviePlayerController, MPMovieView, NSDictionary, NSError, MPMovieAccessLog, NSMutableArray;
@protocol MPMoviePlayerControllerDelegate;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback> {
	int _additionalButtons;	// 4 = 0x4
	NSMutableSet *_asyncImageGenerators;	// 8 = 0x8
	int _controlStyle;	// 12 = 0xc
	float _currentPlaybackRate;	// 16 = 0x10
	id<MPMoviePlayerControllerDelegate> _delegate;	// 20 = 0x14
	NSDictionary *_HTTPHeaderFields;	// 24 = 0x18
	MPMoviePlayerController *_moviePlayer;	// 28 = 0x1c
	NSArray *_movies;	// 32 = 0x20
	BOOL _moviesNeedReload;	// 36 = 0x24
	int _movieSourceType;	// 40 = 0x28
	MPMovieView *_movieView;	// 44 = 0x2c
	MPSystemNowPlayingController *_nowPlayingController;	// 48 = 0x30
	NSError *_playbackError;	// 52 = 0x34
	MPAVController *_player;	// 56 = 0x38
	NSMutableArray *_queuedThumbnailRequests;	// 60 = 0x3c
	int _repeatMode;	// 64 = 0x40
	unsigned _stateBeforeSettingPlaybackTime;	// 68 = 0x44
	MPInlineVideoController *_videoViewController;	// 72 = 0x48
	unsigned _finishNotificationsPosted;	// 76 = 0x4c
	BOOL _shouldAutoplay;	// 80 = 0x50
	BOOL _useApplicationAudioSession;	// 81 = 0x51
	BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;	// 82 = 0x52
	BOOL _preparedQueue;	// 83 = 0x53
	BOOL _didAppear;	// 84 = 0x54
	BOOL _ignorePlaybackStateChanges;	// 85 = 0x55
	BOOL _playWhenSourceTypeIsDetermined;	// 86 = 0x56
	BOOL _prepareWhenSourceTypeIsDetermined;	// 87 = 0x57
	BOOL _isChangingMoviePath;	// 88 = 0x58
	BOOL _wasPlayingBeforeSuspended;	// 89 = 0x59
	BOOL _canPostDidFinishNotificationOnItemChange;	// 90 = 0x5a
	BOOL _readyForDisplay;	// 91 = 0x5b
	BOOL _shouldRestartPlaybackFromBeginning;	// 92 = 0x5c
	BOOL _useHostedWindowWhenFullscreen;	// 93 = 0x5d
	BOOL _willSoonEndUsingVideoLayer;	// 94 = 0x5e
	double _initialPlaybackTime;	// 96 = 0x60
	double _endPlaybackTime;	// 104 = 0x68
	NSMutableDictionary *_timedMetadataForUniqueKey;	// 112 = 0x70
	BOOL _isActive;	// 116 = 0x74
	BOOL _isResigningActive;	// 117 = 0x75
	BOOL _didResignActive;	// 118 = 0x76
	BOOL _canShowControlsOverlayBeforeResignedActive;	// 119 = 0x77
	double _timeWhenResignedActive;	// 120 = 0x78
	unsigned _movieIndexWhenResignedActive;	// 128 = 0x80
	MPMovieAccessLog *_cachedAccessLog;	// 132 = 0x84
	MPMovieErrorLog *_cachedErrorLog;	// 136 = 0x88
}
@property(assign) BOOL allowsAirPlay;	// G=0x2e245d59; S=0x2e245d1d; converted property
@property(retain) id asset;	// G=0x2e245731; S=0x2e245785; converted property
@property(retain) id contentURL;	// G=0x2e2455bd; S=0x2e24562d; converted property
@property(assign) int controlStyle;	// G=0x2e245bdd; S=0x2e245b4d; converted property
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x2e2461f5; S=0x2e2461a9; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x2e246161; S=0x2e246139; 
@property(assign) double endPlaybackTime;	// G=0x2e2467d5; S=0x2e246751; converted property
@property(assign, getter=isFullscreen) BOOL fullscreen;	// G=0x2e245ddd; S=0x2e245c61; converted property
@property(assign) double initialPlaybackTime;	// G=0x2e2466d5; S=0x2e246651; converted property
@property(assign) BOOL inlinePlaybackUsesTVOut;	// G=0x2e249961; S=0x2e249925; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x2e245e19; 
@property(assign) int movieSourceType;	// G=0x2e2464cd; S=0x2e24642d; converted property
@property(assign) int repeatMode;	// G=0x2e245bfd; S=0x2e245bed; converted property
@property(assign) int scalingMode;	// G=0x2e245b0d; S=0x2e245ac9; converted property
@property(assign) BOOL shouldAutoplay;	// G=0x2e245c51; S=0x2e245c0d; converted property
@property(assign) BOOL useApplicationAudioSession;	// G=0x2e249b71; S=0x2e249af5; converted property
- (id)init;	// 0x2e244e19
- (void).cxx_destruct;	// 0x2e24b915
- (id)_HTTPHeaderFields;	// 0x2e248cd9
- (int)_additionalButtons;	// 0x2e248bd9
- (id)_advertisementView;	// 0x2e248be9
- (BOOL)_areControlsHidden;	// 0x2e248c31
- (id)_audioSessionModeOverride;	// 0x2e248c75
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x2e2478fd
- (void)_cacheAccessAndErrorLogs;	// 0x2e249b81
- (BOOL)_canContinuePlayingWhenLocked;	// 0x2e24aab5
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;	// 0x2e24a685
- (id)_delegate;	// 0x2e248c95
- (void)_didBecomeActiveNotification:(id)notification;	// 0x2e248a7d
- (BOOL)_didPostFinishNotificationForReason:(int)reason;	// 0x2e249cd5
- (void)_endUsingVideoLayer;	// 0x2e24ab1d
- (void)_ensureActive;	// 0x2e24a09d
- (void)_firstVideoFrameDisplayedNotification:(id)notification;	// 0x2e2473b9
- (id)_hostedWindow;	// 0x2e249a05
- (unsigned)_hostedWindowContextID;	// 0x2e249a4d
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)_isExternalPlaybackActive;	// 0x2e247455
- (BOOL)_isNavigationBarHidden;	// 0x2e248d15
- (BOOL)_isReadyForDisplay;	// 0x2e248d05
- (BOOL)_isTVOutEnabled;	// 0x2e248d51
- (void)_itemDidChangeNotification:(id)_item;	// 0x2e2474ad
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x2e247715
- (void)_itemPlaybackErrorNotification:(id)notification;	// 0x2e247881
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x2e247619
- (void)_movieDurationAvailableNotification:(id)notification;	// 0x2e24888d
- (void)_movieNaturalSizeAvailableNotification:(id)notification;	// 0x2e248969
- (id)_movieOptions;	// 0x2e249f49
- (void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;	// 0x2e2483ad
- (void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;	// 0x2e2480b1
- (void)_movieSourceTypeAvailableNotification:(id)notification;	// 0x2e248719
- (id)_movieSubtitle;	// 0x2e248d8d
- (id)_movieTitle;	// 0x2e248df5
- (void)_movieTypeAvailableNotification:(id)notification;	// 0x2e2485ed
- (id)_movies;	// 0x2e249f35
- (id)_navigationBar;	// 0x2e248e5d
- (id)_nowPlayingMovie;	// 0x2e24a001
- (void)_pausePlaybackForSuspension;	// 0x2e24a5e9
- (double)_playableEndTime;	// 0x2e248ec5
- (double)_playableStartTime;	// 0x2e248f01
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x2e247a09
- (void)_postDidFinishNotificationWithReason:(int)_post;	// 0x2e24a7c1
- (void)_postNotificationName:(id)name object:(id)object;	// 0x2e24a701
- (void)_postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x2e24a739
- (void)_prepareToPlayWithStartIndex:(unsigned)startIndex;	// 0x2e24a199
- (void)_rateDidChangeNotification:(id)_rate;	// 0x2e247b41
- (void)_resignActive;	// 0x2e24a131
- (id)_resolvedContentURL;	// 0x2e248f3d
- (void)_restartPlaybackFromBeginning;	// 0x2e24aa19
- (double)_seekableEndTime;	// 0x2e248ffd
- (double)_seekableStartTime;	// 0x2e249039
- (void)_serverDiedNotification:(id)notification;	// 0x2e247f2d
- (void)_setAdditionalButtons:(int)buttons;	// 0x2e249075
- (void)_setAudioSessionModeOverride:(id)override;	// 0x2e249135
- (void)_setControlsHidden:(BOOL)hidden;	// 0x2e2491d5
- (void)_setControlsHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x2e249155
- (void)_setCurrentPlaybackTime:(double)time timeOption:(int)option;	// 0x2e2491e9
- (void)_setDelegate:(id)delegate;	// 0x2e2492f9
- (void)_setDisallowsAMRAudio:(BOOL)audio;	// 0x2e24930d
- (void)_setHTTPHeaderFields:(id)fields;	// 0x2e24932d
- (void)_setMovieMediaTypesOverride:(int)override;	// 0x2e2493bd
- (void)_setMoviePlayer:(id)player;	// 0x2e24a089
- (void)_setMovieSubtitle:(id)subtitle;	// 0x2e249405
- (void)_setMovieTitle:(id)title;	// 0x2e249475
- (void)_setMovies:(id)movies;	// 0x2e249cf9
- (void)_setNavigationBarHidden:(BOOL)hidden;	// 0x2e2494e5
- (void)_setNowPlayingMovie:(id)movie;	// 0x2e249fad
- (void)_setShouldEnforceHDCP:(BOOL)_set;	// 0x2e249521
- (void)_setUseApplicationAudioSession:(BOOL)session;	// 0x2e24a5ad
- (void)_setUseHostedWindowWhenFullscreen:(BOOL)fullscreen;	// 0x2e24999d
- (void)_setVideoViewControllerOverlayStyle;	// 0x2e249541
- (BOOL)_shouldContinuePlaybackInBackground;	// 0x2e249639
- (BOOL)_shouldEnforceHDCP;	// 0x2e249689
- (void)_simpleRemoteNotification:(id)notification;	// 0x2e248aed
- (void)_timeDidJumpNotification:(id)_time;	// 0x2e247f09
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x2e247be9
- (void)_timedMetadataImageAvailableNotification:(id)notification;	// 0x2e247eb9
- (void)_updateDisabledPartsFromDelegate;	// 0x2e24ab4d
- (BOOL)_useHostedWindowWhenFullscreen;	// 0x2e2499f5
- (id)_videoView;	// 0x2e2496ad
- (id)_videoViewController;	// 0x2e2496f5
- (void)_videoViewPathWillChangeNotification:(id)_videoViewPath;	// 0x2e248001
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x2e247f41
- (void)_willResignActiveNotification:(id)notification;	// 0x2e248a45
- (void)_willTerminateNotification:(id)notification;	// 0x2e248add
- (id)accessLog;	// 0x2e24b73d
// converted property getter: - (BOOL)allowsAirPlay;	// 0x2e245d59
// converted property getter: - (id)asset;	// 0x2e245731
- (id)backgroundView;	// 0x2e2459e1
- (void)beginSeekingBackward;	// 0x2e246275
- (void)beginSeekingForward;	// 0x2e246229
- (void)cancelAllThumbnailImageRequests;	// 0x2e24b6b5
// converted property getter: - (id)contentURL;	// 0x2e2455bd
// converted property getter: - (int)controlStyle;	// 0x2e245bdd
// declared property getter: - (float)currentPlaybackRate;	// 0x2e2461f5
// declared property getter: - (double)currentPlaybackTime;	// 0x2e246161
- (void)dealloc;	// 0x2e245401
- (BOOL)disallowsAMRAudio;	// 0x2e248cb5
- (double)duration;	// 0x2e2464e1
// converted property getter: - (double)endPlaybackTime;	// 0x2e2467d5
- (void)endSeeking;	// 0x2e2462c5
- (id)errorLog;	// 0x2e24b829
// converted property getter: - (double)initialPlaybackTime;	// 0x2e2466d5
// converted property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x2e249961
- (BOOL)isAirPlayVideoActive;	// 0x2e245d95
// converted property getter: - (BOOL)isFullscreen;	// 0x2e245ddd
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x2e245e19
- (int)loadState;	// 0x2e245a89
- (int)movieMediaTypes;	// 0x2e2463c9
// converted property getter: - (int)movieSourceType;	// 0x2e2464cd
- (void)movieView:(id)view willMoveToSuperview:(id)superview;	// 0x2e246851
- (void)movieView:(id)view willMoveToWindow:(id)window;	// 0x2e246891
- (void)movieViewDidMoveToWindow:(id)movieView;	// 0x2e246939
- (CGSize)naturalSize;	// 0x2e2465d1
- (void)pause;	// 0x2e245fc9
- (void)play;	// 0x2e245ef9
- (double)playableDuration;	// 0x2e246559
- (int)playbackState;	// 0x2e245a49
- (void)prepareToPlay;	// 0x2e245e99
// converted property getter: - (int)repeatMode;	// 0x2e245bfd
- (void)requestThumbnailImagesAtTimes:(id)times timeOption:(int)option;	// 0x2e24b011
// converted property getter: - (int)scalingMode;	// 0x2e245b0d
// converted property setter: - (void)setAllowsAirPlay:(BOOL)play;	// 0x2e245d1d
// converted property setter: - (void)setAsset:(id)asset;	// 0x2e245785
- (void)setBackgroundColor:(id)color;	// 0x2e249a89
// converted property setter: - (void)setContentURL:(id)url;	// 0x2e24562d
// converted property setter: - (void)setControlStyle:(int)style;	// 0x2e245b4d
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x2e2461a9
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x2e246139
// converted property setter: - (void)setEndPlaybackTime:(double)time;	// 0x2e246751
// converted property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x2e245c61
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x2e245c75
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x2e246651
// converted property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x2e249925
- (void)setMovieControlMode:(int)mode;	// 0x2e249ad9
// converted property setter: - (void)setMovieSourceType:(int)type;	// 0x2e24642d
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x2e245bed
// converted property setter: - (void)setScalingMode:(int)mode;	// 0x2e245ac9
// converted property setter: - (void)setShouldAutoplay:(BOOL)autoplay;	// 0x2e245c0d
// converted property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x2e249af5
// converted property getter: - (BOOL)shouldAutoplay;	// 0x2e245c51
- (void)skipToBeginning;	// 0x2e246341
- (void)skipToNextItem;	// 0x2e246301
- (void)skipToPreviousItem;	// 0x2e246389
- (void)stop;	// 0x2e246011
- (id)thumbnailImageAtTime:(double)time timeOption:(int)option;	// 0x2e24acf9
- (id)timedMetadata;	// 0x2e24b6fd
- (id)timedMetadataForKey:(id)key;	// 0x2e24b71d
// converted property getter: - (BOOL)useApplicationAudioSession;	// 0x2e249b71
- (BOOL)videoController:(id)controller tappedButtonPart:(unsigned long long)part;	// 0x2e246e2d
- (void)videoController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x2e247271
- (void)videoController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x2e247129
- (void)videoControllerDidEnterFullscreen:(id)videoController;	// 0x2e246c21
- (void)videoControllerDidExitFullscreen:(id)videoController;	// 0x2e246da1
- (void)videoControllerDidHideOverlay:(id)videoController;	// 0x2e247325
- (void)videoControllerDidShowOverlay:(id)videoController;	// 0x2e2471dd
- (BOOL)videoControllerShouldAutohide:(id)videoController;	// 0x2e246a79
- (void)videoControllerWillEnterFullscreen:(id)videoController;	// 0x2e246b01
- (void)videoControllerWillExitFullscreen:(id)videoController;	// 0x2e246c81
- (id)view;	// 0x2e245831
- (void)viewControllerRequestsExit:(id)exit reason:(int)reason;	// 0x2e246e01
@end

