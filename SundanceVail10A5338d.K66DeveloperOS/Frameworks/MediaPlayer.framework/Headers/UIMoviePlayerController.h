/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPMovieAccessLog, MPMovieErrorLog, MPVideoViewController, MPAVItem, NSDate, UIMovieSnapshotView, UIImage, NSString, UIViewController, UIView, UINavigationController, NSArray, MPVideoView, UIMovieView, MPTransitionController, MPSystemNowPlayingController, MPAVController;

@interface UIMoviePlayerController : NSObject {
	id _delegate;	// 4 = 0x4
	MPAVItem *_item;	// 8 = 0x8
	NSString *_moviePath;	// 12 = 0xc
	MPAVController *_player;	// 16 = 0x10
	UIImage *_posterImage;	// 20 = 0x14
	NSString *_youTubeVideoID;	// 24 = 0x18
	UIViewController *_topViewController;	// 28 = 0x1c
	MPVideoViewController *_activeVideoController;	// 32 = 0x20
	MPVideoView *_videoView;	// 36 = 0x24
	MPTransitionController *_transitionController;	// 40 = 0x28
	int _transitionCount;	// 44 = 0x2c
	UINavigationController *_portraitNavigationController;	// 48 = 0x30
	CFBagRef _ignoredChangeTypes;	// 52 = 0x34
	int _pendingInterfaceOrientation;	// 56 = 0x38
	MPAVItem *_pendingItem;	// 60 = 0x3c
	MPAVItem *_pendingItemWithDifferentType;	// 64 = 0x40
	CGRect _layoutRect;	// 68 = 0x44
	int _lastSetUIInterfaceOrientation;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	int _interfaceOrientationFromDevice;	// 92 = 0x5c
	NSString *_playbackErrorDescription;	// 96 = 0x60
	unsigned _autoRotationMask;	// 100 = 0x64
	unsigned _displayableParts;	// 104 = 0x68
	unsigned _unmodifiedDisplayableParts;	// 108 = 0x6c
	unsigned _desiredParts;	// 112 = 0x70
	unsigned _audioControlsStyle;	// 116 = 0x74
	unsigned _playableContentTypeOverride;	// 120 = 0x78
	double _timeWhenResignedActive;	// 124 = 0x7c
	double _timeToSnapshot;	// 132 = 0x84
	UIMovieSnapshotView *_snapshotView;	// 140 = 0x8c
	NSArray *_closedCaptionData;	// 144 = 0x90
	MPSystemNowPlayingController *_nowPlayingController;	// 148 = 0x94
	struct {
		unsigned canShowControlsOverlay : 1;
		unsigned wantsControlsOverlayVis : 1;
		unsigned wantsControlsOverlayAnim : 1;
		unsigned wantsControlsOverlayDisableAutohide : 1;
		unsigned wantsFullscreen : 1;
		unsigned alwaysFullscreen : 1;
		unsigned canAnimateControlsOverlay : 1;
		unsigned autoplayWhenLikelyToKeepUp : 1;
		unsigned externalSourceManagesStatusBar : 1;
		unsigned disallowsVideoOut : 1;
		unsigned exited : 1;
		unsigned generatingOrientationNotifications : 1;
		unsigned forStreaming : 1;
		unsigned isExternalTransformationActive : 1;
		unsigned controlsVisibleBeforeExternalTransformation : 1;
		unsigned isActive : 1;
		unsigned resigningActive : 1;
		unsigned didResignActive : 1;
		unsigned uiPrepared : 1;
		unsigned useLegacyControls : 1;
		unsigned isChangingMoviePath : 1;
		unsigned alwaysAllowHidingControlsOverlay : 1;
		unsigned schedulePortraitLoadingIndicator : 1;
		unsigned clientClearedMoviePath : 1;
		unsigned canCommitStatusBarAndOverlayChanges : 1;
		unsigned videoFrameDisplayOnResumeDisabled : 1;
		unsigned usingDebugTestPath : 1;
		unsigned allowsWirelessPlayback : 1;
		unsigned useHostedWindowWhenFullscreen : 1;
	} _mpcBitfield;	// 152 = 0x98
}
@property(readonly, assign, nonatomic) MPMovieAccessLog *accessLog;	// G=0x3414b98d; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x3414bc85; S=0x3414bc99; 
@property(readonly, assign, nonatomic) BOOL areClosedCaptionsAvailable;	// G=0x34148f11; 
@property(assign, nonatomic) unsigned audioControlsStyle;	// G=0x3414e825; S=0x3414ae25; @synthesize=_audioControlsStyle
@property(retain, nonatomic) NSString *audioSessionModeOverride;	// G=0x3414884d; S=0x3414886d; 
@property(assign) unsigned autoRotationMask;	// G=0x3414aa8d; S=0x3414aa9d; converted property
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x3414b641; S=0x3414b605; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x34148fa9; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingInBackground;	// G=0x341481a1; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingWhenLocked;	// G=0x341481c5; 
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x34148799; S=0x341487bd; 
@property(readonly, assign, nonatomic) NSDate *currentDate;	// G=0x34148da1; 
@property(assign, nonatomic) double currentTime;	// G=0x34148cf5; S=0x34148d35; 
@property(assign, nonatomic) id delegate;	// G=0x3414e835; S=0x3414e845; @synthesize=_delegate
@property(assign, nonatomic) BOOL disallowsVideoOut;	// G=0x34148211; S=0x34148649; 
@property(readonly, assign, nonatomic) double duration;	// G=0x34148b6d; 
@property(readonly, assign, nonatomic) MPMovieErrorLog *errorLog;	// G=0x3414ba35; 
@property(readonly, assign, nonatomic) long long fileSize;	// G=0x341485ed; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x3414b815; S=0x3414b851; 
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x3414b8f5; 
@property(readonly, assign, nonatomic) unsigned hostedWindowContextID;	// G=0x34148815; 
@property(readonly, assign) int interfaceOrientation;	// G=0x3414a8b5; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedForPlayback;	// G=0x34148965; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x34148235; S=0x3414e855; @synthesize=_item
@property(copy, nonatomic) NSString *moviePath;	// G=0x34148225; S=0x34148295; 
@property(copy, nonatomic) NSString *movieSubtitle;	// G=0x34148461; S=0x34148489; 
@property(copy, nonatomic) NSString *movieTitle;	// G=0x341484b5; S=0x341484dd; 
@property(readonly, assign, nonatomic) UIMovieView *movieView;	// G=0x34148509; 
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x34148e9d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x3414b0f1; 
@property(assign, nonatomic) unsigned options;	// G=0x341480d1; S=0x341480e5; 
@property(assign, nonatomic) unsigned playableContentType;	// G=0x3414890d; S=0x341488d9; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x34148bc9; 
@property(readonly, assign, nonatomic) double playableEndTime;	// G=0x34148c41; 
@property(readonly, assign, nonatomic) double playableStartTime;	// G=0x34148c05; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x3414e865; S=0x3414ae8d; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) float playbackRate;	// G=0x34148ab1; S=0x34148ae9; 
@property(readonly, assign, nonatomic) unsigned playbackState;	// G=0x34148b29; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x3414b711; S=0x3414b679; 
@property(readonly, assign, nonatomic) double seekableEndTime;	// G=0x34148cb9; 
@property(readonly, assign, nonatomic) double seekableStartTime;	// G=0x34148c7d; 
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x34148e79; S=0x34148e59; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x341488b5; S=0x3414888d; 
@property(assign, nonatomic) BOOL useHostedWindowWhenFullscreen;	// G=0x341487dd; S=0x341487f1; 
@property(assign, nonatomic) BOOL useLegacyControls;	// G=0x3414bbd5; S=0x3414bbe9; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x3414bce1; S=0x3414bcf5; 
@property(readonly, assign, nonatomic) BOOL videoOutActive;	// G=0x341486c1; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x3414856d; 
@property(readonly, assign, nonatomic) float volume;	// G=0x34148ed5; 
@property(copy, nonatomic) NSString *youTubeVideoID;	// G=0x3414e879; S=0x3414badd; @synthesize=_youTubeVideoID
+ (void)allInstancesResignActive;	// 0x3414bb99
+ (CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size interfaceOrientation:(int)orientation destinationTVOut:(BOOL)anOut;	// 0x3414af21
+ (Class)preferredWindowClass;	// 0x3414e88d
- (id)initWithPlayerSize:(CGSize)playerSize;	// 0x34147ce1
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen;	// 0x3414e8a9
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen options:(unsigned)options;	// 0x3414e8e1
- (id)initWithPlayerSize:(CGSize)playerSize options:(unsigned)options;	// 0x34147695
- (id)_activeVideoController;	// 0x3414956d
- (void)_addSnapshotViewForTime:(double)time;	// 0x3414d2ed
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)currentOrientationAnimated;	// 0x3414e5c1
- (void)_autoRotateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x3414e645
- (id)_backgroundPlaceholderView;	// 0x3414e6d9
- (void)_beginDeviceOrientationNotifications;	// 0x3414e359
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x3414c81d
- (BOOL)_canAutoRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3414e4c5
- (void)_commitFinishInitializeActiveViewController:(id)controller animate:(BOOL)animate;	// 0x34149ae1
- (unsigned long long)_convertedPartsMask:(unsigned)mask;	// 0x3414e0bd
- (unsigned long long)_convertedVisiblePartsMask:(unsigned)mask;	// 0x3414e131
- (void)_deviceOrientationChanged:(id)changed;	// 0x3414cd51
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x3414dc95
- (void)_endDeviceOrientationNotifications;	// 0x3414e431
- (void)_ensureActive;	// 0x3414d20d
- (void)_exitPlayer:(int)player;	// 0x3414e14d
- (int)_exitReasonForMPViewControllerExitReason:(int)mpviewControllerExitReason;	// 0x3414e221
- (void)_finishInitializeActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x34149b75
- (void)_initializeVideoViewController:(id)controller orientation:(int)orientation;	// 0x3414973d
- (void)_itemChangedNotification:(id)notification;	// 0x3414c9e1
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x3414cf5d
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x3414d019
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x3414ce2d
- (void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;	// 0x3414dad1
- (void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;	// 0x3414d839
- (void)_movieTypeAvailableNotification:(id)notification;	// 0x3414c955
- (void)_mutedDidChangeNotification:(id)_muted;	// 0x3414d17d
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned)type;	// 0x3414a1d9
- (id)_parentViewControllerForController:(id)controller;	// 0x34149a65
- (void)_pausePlaybackForNotification:(id)notification;	// 0x3414c4b5
- (void)_performTransition:(id)transition toController:(id)controller;	// 0x3414a61d
- (void)_playbackStateChanged:(id)changed;	// 0x3414cbe9
- (id)_portraitNavigationController:(BOOL)controller;	// 0x34149c81
- (void)_prepareAndSetupUI;	// 0x3414b431
- (void)_prepareAndSetupUIForClient;	// 0x3414b525
- (void)_rateDidChangeNotification:(id)_rate;	// 0x3414cda5
- (void)_reconfigurePortraitNavigationItem:(id)item time:(double)time animate:(BOOL)animate;	// 0x34149f31
- (void)_registerForNotifications;	// 0x3414dd39
- (void)_reloadForTransitionFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 animated:(BOOL)animated;	// 0x3414a6e9
- (void)_removeSnapshotView;	// 0x3414d7e9
- (void)_serverDeathNotification:(id)notification;	// 0x3414cbc5
- (void)_setActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x341490dd
- (void)_setTVOutEnabled:(BOOL)enabled;	// 0x3414e77d
- (BOOL)_shouldIgnoreChangeType:(unsigned)type;	// 0x3414a215
- (void)_simpleRemoteNotification:(id)notification;	// 0x3414c5cd
- (void)_tickNotification:(id)notification;	// 0x3414d0ed
- (void)_timeDidJumpNotification:(id)_time;	// 0x3414cfd1
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x3414d061
- (id)_topViewController;	// 0x34148fed
- (void)_transitionFinished:(id)finished;	// 0x3414a4a9
- (void)_tvOutCapabilityChanged:(id)changed;	// 0x3414ccf9
- (void)_unregisterForNotifications;	// 0x3414df4d
- (void)_updateEnabledParts;	// 0x3414e239
- (void)_updateForStreamingOptions;	// 0x3414e711
- (void)_updatePlayableContentTypeOverride;	// 0x3414e689
- (void)_validityChangedNotification:(id)notification;	// 0x3414cbd9
- (void)_videoViewPathWillChangeNotification:(id)_videoViewPath;	// 0x3414d1c5
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x3414d135
- (void)_willBeginSuspendAnimationNotification:(id)notification;	// 0x3414c5ad
- (void)_willEnterForegroundNotification:(id)notification;	// 0x3414dcf1
- (void)_willResignNotification:(id)notification;	// 0x3414c5bd
- (void)_willSuspendNotification:(id)notification;	// 0x3414c59d
// declared property getter: - (id)accessLog;	// 0x3414b98d
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x3414bc85
// declared property getter: - (BOOL)areClosedCaptionsAvailable;	// 0x34148f11
// declared property getter: - (unsigned)audioControlsStyle;	// 0x3414e825
// declared property getter: - (id)audioSessionModeOverride;	// 0x3414884d
// converted property getter: - (unsigned)autoRotationMask;	// 0x3414aa8d
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x3414b641
- (id)backgroundView;	// 0x3414b5e5
- (void)beginExternalTransformation;	// 0x3414b731
- (void)beginIgnoringChangeTypes:(unsigned)types;	// 0x3414a169
- (void)beginTransition;	// 0x3414a409
// declared property getter: - (unsigned)bufferingState;	// 0x34148fa9
// declared property getter: - (BOOL)canContinuePlayingInBackground;	// 0x341481a1
// declared property getter: - (BOOL)canContinuePlayingWhenLocked;	// 0x341481c5
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x34148799
// declared property getter: - (id)currentDate;	// 0x34148da1
// declared property getter: - (double)currentTime;	// 0x34148cf5
- (void)dealloc;	// 0x34147d05
- (void)debugSetup;	// 0x34147665
- (void)delayedDebugSetup;	// 0x34147661
// declared property getter: - (id)delegate;	// 0x3414e835
// declared property getter: - (BOOL)disallowsVideoOut;	// 0x34148211
// declared property getter: - (double)duration;	// 0x34148b6d
- (void)endExternalTransformation;	// 0x3414b7ad
- (void)endIgnoringChangeTypes:(unsigned)types;	// 0x3414a23d
- (void)endTransition;	// 0x3414a459
// declared property getter: - (id)errorLog;	// 0x3414ba35
// declared property getter: - (long long)fileSize;	// 0x341485ed
// declared property getter: - (id)fullscreenView;	// 0x3414b8f5
// declared property getter: - (unsigned)hostedWindowContextID;	// 0x34148815
// converted property getter: - (int)interfaceOrientation;	// 0x3414a8b5
- (BOOL)isFullScreen;	// 0x3414e955
// declared property getter: - (BOOL)isFullscreen;	// 0x3414b815
// declared property getter: - (BOOL)isPreparedForPlayback;	// 0x34148965
// declared property getter: - (id)item;	// 0x34148235
- (void)layoutUIInRect:(CGRect)rect;	// 0x3414b059
- (void)layoutUIInRect:(CGRect)rect fullScreen:(BOOL)screen;	// 0x3414e919
// declared property getter: - (id)moviePath;	// 0x34148225
- (CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)aspectRatio;	// 0x3414b159
// declared property getter: - (id)movieSubtitle;	// 0x34148461
// declared property getter: - (id)movieTitle;	// 0x341484b5
// declared property getter: - (id)movieView;	// 0x34148509
// declared property getter: - (BOOL)muted;	// 0x34148e9d
// declared property getter: - (CGSize)naturalSize;	// 0x3414b0f1
- (id)newTransitionControllerForChangeToInterfaceOrientation:(int)interfaceOrientation fromInterfaceOrientation:(int)interfaceOrientation2;	// 0x3414957d
- (id)newViewControllerForItem:(id)item interfaceOrientation:(int)orientation reusingController:(id)controller;	// 0x3414966d
// declared property getter: - (unsigned)options;	// 0x341480d1
- (void)pause;	// 0x34148a0d
- (void)performTransition:(id)transition;	// 0x3414a581
- (void)play;	// 0x341489cd
// declared property getter: - (unsigned)playableContentType;	// 0x3414890d
// declared property getter: - (double)playableDuration;	// 0x34148bc9
// declared property getter: - (double)playableEndTime;	// 0x34148c41
// declared property getter: - (double)playableStartTime;	// 0x34148c05
// declared property getter: - (id)playbackErrorDescription;	// 0x3414e865
// declared property getter: - (float)playbackRate;	// 0x34148ab1
// declared property getter: - (unsigned)playbackState;	// 0x34148b29
- (id)playerView;	// 0x3414e96d
- (void)portraitDoneButtonAction:(id)action;	// 0x34149c21
- (void)portraitScaleButtonAction:(id)action;	// 0x34149c55
// declared property getter: - (id)posterImage;	// 0x3414b711
- (void)prepareAndSetupUI;	// 0x3414b549
- (void)prepareForPlayback;	// 0x341489bd
- (void)resignActive;	// 0x3414bd41
- (BOOL)seekToDate:(id)date;	// 0x34148dfd
// declared property getter: - (double)seekableEndTime;	// 0x34148cb9
// declared property getter: - (double)seekableStartTime;	// 0x34148c7d
- (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x3414adb5
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3414add5
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x3414bc99
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x341486e9
// declared property setter: - (void)setAudioControlsStyle:(unsigned)style;	// 0x3414ae25
// declared property setter: - (void)setAudioSessionModeOverride:(id)override;	// 0x3414886d
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x34148595
// converted property setter: - (void)setAutoRotationMask:(unsigned)mask;	// 0x3414aa9d
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x3414b605
- (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x3414ac71
- (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x3414acb1
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x341487bd
- (void)setClosedCaptions:(id)captions;	// 0x3414871d
- (void)setControlsOverlayVisible:(BOOL)visible disableAutohide:(BOOL)autohide animate:(BOOL)animate;	// 0x3414ad11
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x34148d35
- (void)setCurrentTime:(double)time timeSnapOption:(unsigned)option;	// 0x34148d59
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3414e845
- (void)setDesiredMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x3414ab09
// declared property setter: - (void)setDisallowsVideoOut:(BOOL)anOut;	// 0x34148649
- (void)setDisplayable:(BOOL)displayable movieParts:(unsigned)parts animated:(BOOL)animated;	// 0x3414ac41
- (void)setDisplayableMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x3414ab61
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x3414b851
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3414b865
- (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x3414b93d
- (BOOL)setInterfaceOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x3414aa69
// declared property setter: - (void)setItem:(id)item;	// 0x3414e855
- (void)setItem:(id)item animated:(BOOL)animated;	// 0x34148285
- (void)setManagesStatusBar:(BOOL)bar;	// 0x3414866d
// declared property setter: - (void)setMoviePath:(id)path;	// 0x34148295
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x34148489
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x341484dd
// declared property setter: - (void)setOptions:(unsigned)options;	// 0x341480e5
- (BOOL)setOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x3414a8e9
// declared property setter: - (void)setPlayableContentType:(unsigned)type;	// 0x341488d9
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x3414ae8d
// declared property setter: - (void)setPlaybackRate:(float)rate;	// 0x34148ae9
// declared property setter: - (void)setPosterImage:(id)image;	// 0x3414b679
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x34148e59
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x3414888d
// declared property setter: - (void)setUseHostedWindowWhenFullscreen:(BOOL)fullscreen;	// 0x341487f1
// declared property setter: - (void)setUseLegacyControls:(BOOL)controls;	// 0x3414bbe9
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x3414bcf5
// declared property setter: - (void)setYouTubeVideoID:(id)anId;	// 0x3414badd
- (void)snapshotViewWasTapped:(id)tapped;	// 0x3414c48d
- (void)stop;	// 0x34148a4d
// declared property getter: - (BOOL)stopAtEnd;	// 0x34148e79
- (void)tearDownUI;	// 0x3414b559
- (void)unlockMoviePlaybackResources;	// 0x34148129
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x341488b5
// declared property getter: - (BOOL)useHostedWindowWhenFullscreen;	// 0x341487dd
// declared property getter: - (BOOL)useLegacyControls;	// 0x3414bbd5
- (BOOL)videoController:(id)controller tappedButtonPart:(unsigned long long)part;	// 0x3414be25
- (void)videoController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x3414c2cd
- (void)videoController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x3414c23d
- (void)videoControllerDidCreateFullscreenView:(id)videoController;	// 0x3414c35d
- (void)videoControllerDidEnterFullscreen:(id)videoController;	// 0x3414c091
- (void)videoControllerDidExitFullscreen:(id)videoController;	// 0x3414c1bd
- (void)videoControllerDidHideOverlay:(id)videoController;	// 0x3414c315
- (void)videoControllerDidShowOverlay:(id)videoController;	// 0x3414c285
- (CGRect)videoControllerFrameAfterFullscreenExit:(id)exit;	// 0x3414c40d
- (BOOL)videoControllerShouldAutohide:(id)videoController;	// 0x3414bfdd
- (void)videoControllerWillEnterFullscreen:(id)videoController;	// 0x3414c049
- (void)videoControllerWillExitFullscreen:(id)videoController reason:(int)reason;	// 0x3414c0d9
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x3414bce1
// declared property getter: - (BOOL)videoOutActive;	// 0x341486c1
// declared property getter: - (id)view;	// 0x3414856d
- (void)viewController:(id)controller beginIgnoringChangeTypes:(unsigned)types;	// 0x3414a559
- (void)viewController:(id)controller endIgnoringChangeType:(unsigned)type;	// 0x3414a56d
- (void)viewControllerFailedToPlay:(id)play withError:(id)error;	// 0x3414bf85
- (void)viewControllerRequestsExit:(id)exit reason:(int)reason;	// 0x3414bdf1
// declared property getter: - (float)volume;	// 0x34148ed5
// declared property getter: - (id)youTubeVideoID;	// 0x3414e879
@end

