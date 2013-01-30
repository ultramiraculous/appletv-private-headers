/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSecureResource.h"
#import "ATVVideoCacheManagerDelegate.h"
#import "BRController.h"

@class BRTransportControl, BRResumeMenuControl, BRAudioVisualizerControl, BRDescriptionOverlayControl, NSTimer, BRMediaPlayer, BRMediaPlayerEventHandler, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerController : BRController <ATVVideoCacheManagerDelegate, BRSecureResource> {
	long _state;	// 100 = 0x64
	BRControl *_content;	// 104 = 0x68
	BRAudioVisualizerControl *_audioVisualizer;	// 108 = 0x6c
	BRMediaPlayer *_player;	// 112 = 0x70
	BRMediaPlayerEventHandler *_eventHandler;	// 116 = 0x74
	BRResumeMenuControl *_resumeMenu;	// 120 = 0x78
	BRTransportControl *_transport;	// 124 = 0x7c
	BRControl *_javascriptOverlay;	// 128 = 0x80
	BRDescriptionOverlayControl *_descriptionOverlay;	// 132 = 0x84
	BRTextControl *_explanatoryTextControl;	// 136 = 0x88
	id _delegate;	// 140 = 0x8c
	id _transitionAnimationDelegate;	// 144 = 0x90
	NSTimer *_suppressBackgroundProcessTimer;	// 148 = 0x94
	NSTimer *_explanatoryTextFadeTimer;	// 152 = 0x98
	NSTimer *_readyToPlayTimer;	// 156 = 0x9c
	NSTimer *_readyToPlayUpdateMinsTimer;	// 160 = 0xa0
	NSTimer *_readyToPlayBandwidthHintTimer;	// 164 = 0xa4
	NSTimer *_loadingSpinnerDelayTimer;	// 168 = 0xa8
	float _lastBufferingProgress;	// 172 = 0xac
	unsigned _startChapterIndex;	// 176 = 0xb0
	float _startPosition;	// 180 = 0xb4
	double _bandwidthHintReadyToPlayMaxTimeInSeconds;	// 184 = 0xb8
	BOOL _drmAttempted;	// 192 = 0xc0
	BOOL _authenticationAttempted;	// 193 = 0xc1
	BOOL _playbackInitiated;	// 194 = 0xc2
	BOOL _shouldBeginPlaybackImmediately;	// 195 = 0xc3
	BOOL _shouldRestoreVoiceOver;	// 196 = 0xc4
	BOOL _alwaysStopOnPop;	// 197 = 0xc5
	BOOL _transportDisabled;	// 198 = 0xc6
	BOOL _resumeMenuDisabled;	// 199 = 0xc7
	BOOL _waitingForTransition;	// 200 = 0xc8
	BOOL _visualsHidden;	// 201 = 0xc9
	BOOL _inChapterMode;	// 202 = 0xca
	BOOL _digitalExtrasMenuItemDisabled;	// 203 = 0xcb
	BOOL _itemReadyToPlay;	// 204 = 0xcc
	BOOL _supportsBandwidthHints;	// 205 = 0xcd
	BOOL _supportsPreviewBandwidthHints;	// 206 = 0xce
}
@property(assign) BOOL alwaysStopPlaybackWhenPopped;	// G=0x2a11d5; S=0x2a11c5; converted property
@property(assign) BOOL digitalExtrasMenuItemDisabled;	// G=0x2a10c5; S=0x2a10b5; converted property
@property(readonly, retain) BRControl *javascriptOverlay;	// G=0x2a1cd1; converted property
@property(readonly, retain) BRMediaPlayer *player;	// G=0x2a0ef1; converted property
@property(assign) id playerDelegate;	// G=0x2a1001; S=0x2a0fc5; converted property
@property(assign) int repeatMode;	// G=0x2a11a5; S=0x2a1185; converted property
@property(assign) BOOL resumeMenuDisabled;	// G=0x2a1021; S=0x2a1011; converted property
@property(assign) BOOL shouldBeginPlaybackImmediately;	// G=0x2a1d31; S=0x2a1d21; converted property
@property(assign) unsigned startChapterIndex;	// G=0x2a10e5; S=0x2a10d5; converted property
@property(assign) float startPosition;	// G=0x2a1135; S=0x2a10f5; converted property
@property(assign) BOOL transportControlDisabled;	// G=0x2a10a5; S=0x2a1031; converted property
@property(assign) BOOL visualsHidden;	// G=0x2a12d1; S=0x2a12c1; converted property
+ (id)controllerForPlayer:(id)player;	// 0x2a0f01
- (id)initWithPlayer:(id)player;	// 0x2a087d
- (id)_audioVisualizerForMediaAsset:(id)mediaAsset;	// 0x2a4699
- (void)_authenticationCancelled:(id)cancelled;	// 0x2a5865
- (void)_authenticationFailed:(id)failed;	// 0x2a57e1
- (void)_authenticationSucceeded:(id)succeeded;	// 0x2a5771
- (void)_authorizationAttemptComplete:(id)complete;	// 0x2a54c1
- (id)_bandwidthHintReadyToPlayMaxTimeInSeconds;	// 0x2a6225
- (BOOL)_cycleInfoDisplay:(id)display;	// 0x2a4869
- (id)_descriptionOverlayForType:(id)type;	// 0x2a4629
- (void)_dismissResumeMenu;	// 0x2a59a1
- (BOOL)_enterAudioSubtitleChapterPicker;	// 0x2a4715
- (void)_enterAuthenticationState;	// 0x2a395d
- (void)_enterChaptersSubtitlesAndAlternateAudioPickingState;	// 0x2a319d
- (void)_enterDRMSyncState;	// 0x2a34e5
- (void)_enterDownloadWaitStateWithTime:(double)time;	// 0x2a2a21
- (void)_enterErrorStateWithError:(id)error;	// 0x2a3691
- (void)_enterMediaCueingState;	// 0x2a3025
- (void)_enterMediaResolutionState;	// 0x2a212d
- (void)_enterPINEntryState;	// 0x2a1ef9
- (void)_enterPlaybackStatePlaying:(BOOL)playing;	// 0x2a3485
- (void)_enterPostResumeMenuStateAtTime:(double)time;	// 0x2a26e1
- (void)_enterResumeMenuState;	// 0x2a2339
- (void)_exitChaptersSubtitlesAndAlternateAudioPickingState:(id)state;	// 0x2a3359
- (void)_explanatoryTextTimerFired:(id)fired;	// 0x2a61f5
- (BOOL)_handleContextMenuEvent:(id)event;	// 0x2a5ddd
- (void)_handleContextMenuSelection:(id)selection;	// 0x2a600d
- (BOOL)_handleDownEvent:(id)event;	// 0x2a5e81
- (BOOL)_handleDownloadStateEvent:(id)event;	// 0x2a6089
- (void)_handleHideChapterMarkers;	// 0x2a4589
- (BOOL)_handleMenuButtonEvent:(id)event;	// 0x2a5aa1
- (void)_handleShowChapterMarkers;	// 0x2a453d
- (BOOL)_handleUpDownCommandsForInfoDisplay:(id)infoDisplay;	// 0x2a5f81
- (BOOL)_handleUpEvent:(id)event;	// 0x2a5e29
- (void)_initiatePlayback;	// 0x2a3ac9
- (void)_invalidateReadyToPlayHintTimers;	// 0x2a3c95
- (id)_javascriptOverlay;	// 0x2a44fd
- (id)_makeMusicContextMenuUtility;	// 0x2a50b9
- (id)_photoSet;	// 0x2a4c91
- (void)_playerAssetChanged:(id)changed;	// 0x2a5371
- (void)_playerError:(id)error;	// 0x2a5321
- (void)_playerIsReadyToPlay:(id)play;	// 0x2a565d
- (void)_playerMediaCued:(id)cued;	// 0x2a56f1
- (void)_playerPlaybackEnded:(id)ended;	// 0x2a515d
- (void)_playerStateChanged:(id)changed;	// 0x2a51b1
- (void)_playerTimeSkipped:(id)skipped;	// 0x2a5395
- (void)_playerVisualsChanged:(id)changed;	// 0x2a52dd
- (id)_previewBandwidthHintPromptTime;	// 0x2a3c01
- (void)_readyToPlayBandwidthHintTimerFired:(id)playBandwidthHintTimerFired;	// 0x2a2f05
- (void)_readyToPlayTimerFired:(id)playTimerFired;	// 0x2a2da9
- (void)_readyToPlayUpdateMinsTimerFired:(id)playUpdateMinsTimerFired;	// 0x2a2e81
- (BOOL)_requiresLeaseForAsset:(id)asset;	// 0x2a3bdd
- (void)_restoreVoiceOverIfNeeded;	// 0x2a4c21
- (void)_resumeItemSelected:(id)selected;	// 0x2a59fd
- (double)_resumeTime;	// 0x2a5949
- (BOOL)_shouldShowResumeMenu;	// 0x2a4d29
- (BOOL)_shouldUseMusicContextMenu;	// 0x2a4ed1
- (void)_showLoadingSpinner;	// 0x2a4a75
- (void)_showTransport:(id)transport;	// 0x2a45f5
- (void)_spinnerDelayTimerFired:(id)fired;	// 0x2a4c71
- (void)_startFromBeginningItemSelected:(id)beginningItemSelected;	// 0x2a5a51
- (void)_suppressBackgroundProcesses:(id)processes;	// 0x2a6119
- (void)_transitionAnimationFinished;	// 0x2a58e9
- (id)_transportControlForType:(id)type;	// 0x2a4399
- (void)_updateExplantoryText;	// 0x2a40a9
- (void)_updatePlaybackControls;	// 0x2a3cf1
- (void)_updateReadyToPlayTime:(id)playTime;	// 0x2a2cd9
- (void)_updateVoiceOverDisabling;	// 0x2a4b4d
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x2a1aa1
// converted property getter: - (BOOL)alwaysStopPlaybackWhenPopped;	// 0x2a11d5
- (BOOL)brEventAction:(id)action;	// 0x2a16c5
- (BOOL)canBeScreenSaver;	// 0x2a12e1
- (id)cancelProviderForContextMenu;	// 0x2a1ccd
- (void)clearPlayer;	// 0x2a0f4d
- (void)controlWasActivated;	// 0x2a1311
- (void)controlWasDeactivated;	// 0x2a14e5
- (void)dealloc;	// 0x2a0d69
// converted property getter: - (BOOL)digitalExtrasMenuItemDisabled;	// 0x2a10c5
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x2a1e05
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x2a1d41
- (BOOL)isErrorPresented;	// 0x2a1ee1
// converted property getter: - (id)javascriptOverlay;	// 0x2a1cd1
- (void)layoutSubcontrols;	// 0x2a1851
// converted property getter: - (id)player;	// 0x2a0ef1
// converted property getter: - (id)playerDelegate;	// 0x2a1001
- (id)providersForContextMenu;	// 0x2a1c19
// converted property getter: - (int)repeatMode;	// 0x2a11a5
// converted property getter: - (BOOL)resumeMenuDisabled;	// 0x2a1021
- (id)secureResourceAuthenticator;	// 0x2a1e79
// converted property setter: - (void)setAlwaysStopPlaybackWhenPopped:(BOOL)popped;	// 0x2a11c5
// converted property setter: - (void)setDigitalExtrasMenuItemDisabled:(BOOL)disabled;	// 0x2a10b5
- (void)setFailedURLDelegate:(id)delegate;	// 0x2a1bf9
- (void)setForwardPlaybackEndTime:(double)time;	// 0x2a1ce1
// converted property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x2a0fc5
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x2a1185
// converted property setter: - (void)setResumeMenuDisabled:(BOOL)disabled;	// 0x2a1011
- (void)setReversePlaybackEndTime:(double)time;	// 0x2a1d01
// converted property setter: - (void)setShouldBeginPlaybackImmediately:(BOOL)beginPlaybackImmediately;	// 0x2a1d21
// converted property setter: - (void)setStartChapterIndex:(unsigned)index;	// 0x2a10d5
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x2a1145
// converted property setter: - (void)setStartPosition:(float)position;	// 0x2a10f5
// converted property setter: - (void)setTransportControlDisabled:(BOOL)disabled;	// 0x2a1031
// converted property setter: - (void)setVisualsHidden:(BOOL)hidden;	// 0x2a12c1
// converted property getter: - (BOOL)shouldBeginPlaybackImmediately;	// 0x2a1d31
- (BOOL)shouldShowTrackPopup;	// 0x2a1aa5
- (BOOL)shouldTransitionIn;	// 0x2a1b51
// converted property getter: - (unsigned)startChapterIndex;	// 0x2a10e5
- (id)startDate;	// 0x2a1165
// converted property getter: - (float)startPosition;	// 0x2a1135
// converted property getter: - (BOOL)transportControlDisabled;	// 0x2a10a5
// converted property getter: - (BOOL)visualsHidden;	// 0x2a12d1
- (void)wasPopped;	// 0x2a15a5
- (void)wasPushed;	// 0x2a1539
@end
