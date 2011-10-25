/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSTimer, NSString, MPInlineAudioOverlay, MPAudioVideoRoutingPopoverController, UIView, UITapGestureRecognizer, UIWindow, MPInlineVideoOverlay, UIPinchGestureRecognizer;
@protocol MPVideoOverlay;

@interface MPInlineVideoViewController : MPVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	int _videoOverlayStyle;	// 280 = 0x118
	MPInlineVideoOverlay *_inlineOverlayView;	// 284 = 0x11c
	UIView<MPVideoOverlay> *_fullscreenOverlayView;	// 288 = 0x120
	MPInlineAudioOverlay *_audioOverlayView;	// 292 = 0x124
	int _audioOverlayStyle;	// 296 = 0x128
	UIView *_overlayViewBeingHidden;	// 300 = 0x12c
	BOOL _overlayViewIsVisible;	// 304 = 0x130
	NSString *_playbackErrorDescription;	// 308 = 0x134
	UITapGestureRecognizer *_tapGestureRecognizer;	// 312 = 0x138
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 316 = 0x13c
	UITapGestureRecognizer *_fullscreenTapGestureRecognizer;	// 320 = 0x140
	UITapGestureRecognizer *_fullscreenDoubleTapGestureRecognizer;	// 324 = 0x144
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 328 = 0x148
	UIPinchGestureRecognizer *_fullscreenPinchGestureRecognizer;	// 332 = 0x14c
	NSTimer *_idleTimer;	// 336 = 0x150
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 340 = 0x154
	UIWindow *_windowForDisablingAutorotation;	// 344 = 0x158
	unsigned _wantsOverlayVisibleWhenItemIsAvailable : 1;	// 348 = 0x15c
	unsigned _wantsOverlayVisibleWhenItemIsAvailableAnimated : 1;	// 348 = 0x15c
	unsigned _animatingOverlay : 1;	// 348 = 0x15c
	unsigned _inCloneMirrorMode : 1;	// 348 = 0x15c
	UIView *_fullscreenView;	// 352 = 0x160
	UIView *_superviewBeforeFullscreen;	// 356 = 0x164
	UIViewController *_parentViewControllerBeforeFullscreen;	// 360 = 0x168
	unsigned _indexInSuperviewBeforeFullscreen;	// 364 = 0x16c
	CGRect _nonFullscreenDestinationFrame;	// 368 = 0x170
	int _desiredInterfaceOrientation;	// 384 = 0x180
	int _previousStatusBarStyle;	// 388 = 0x184
	unsigned _statusBarWasHidden : 1;	// 392 = 0x188
	unsigned _isFullscreen : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransition : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransitionToInline : 1;	// 392 = 0x188
	unsigned _contentViewDidClipToBounds : 1;	// 392 = 0x188
	unsigned _fullscreenViewSizeIsExternallyManaged : 1;	// 392 = 0x188
	unsigned _swallowNextTapGesture : 1;	// 392 = 0x188
	unsigned _exited : 1;	// 392 = 0x188
}
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x35ba6045; S=0x35ba24b5; @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x35ba2565; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x35ba6055; S=0x35ba24fd; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x35ba6065; S=0x35ba23b1; @synthesize=_videoOverlayStyle
- (id)init;	// 0x35ba0419
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x35ba2301
- (BOOL)_canHideOverlay:(BOOL)overlay;	// 0x35ba31a5
- (void)_cancelOverlayIdleTimer;	// 0x35ba3c41
- (unsigned)_effectiveItemType;	// 0x35ba5f6d
- (void)_fireOverlayIdleTimer:(id)timer;	// 0x35ba3a59
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x35ba36a9
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x35ba3995
- (void)_layoutForItemTypeAvailable;	// 0x35ba2695
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x35ba21fd
- (void)_removeCoverView;	// 0x35ba6009
- (void)_resetOverlayIdleTimer;	// 0x35ba3b89
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x35ba3215
- (void)_showOverlayDidEnd;	// 0x35ba3621
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x35ba5281
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x35ba5295
- (void)_transitionFromFullscreenDidEnd;	// 0x35ba5ab9
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x35ba3e9d
- (void)_transitionToFullscreenDidEnd;	// 0x35ba4f7d
- (void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x35ba3ca5
- (BOOL)_useInlineControls;	// 0x35ba5fd9
- (id)_viewControllerForRotationForViewController:(id)viewController;	// 0x35ba5fa9
- (void)_viewWasPinched:(id)pinched;	// 0x35ba20a1
- (void)_viewWasTapped:(id)tapped;	// 0x35ba1f05
// declared property getter: - (int)audioOverlayStyle;	// 0x35ba6045
- (id)audioOverlayViewIfLoaded;	// 0x35ba3195
- (id)backgroundView;	// 0x35ba0d95
- (BOOL)canShowQTAudioOnlyUI;	// 0x35ba1759
- (BOOL)controlsOverlayVisible;	// 0x35ba0ff5
- (id)createChapterFlipTransition;	// 0x35ba2575
- (void)dealloc;	// 0x35ba052d
- (void)displayVideoViewOnScreen;	// 0x35ba1289
// declared property getter: - (id)fullscreenView;	// 0x35ba2565
- (BOOL)isFullscreen;	// 0x35ba1669
- (BOOL)isTransitioningFromFullscreen;	// 0x35ba3e71
- (BOOL)isTransitioningToFullscreen;	// 0x35ba3e41
- (void)loadView;	// 0x35ba0871
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x35ba1ef5
- (void)overlayTappedBackButton:(id)button;	// 0x35ba1e45
- (void)overlayTappedScaleModeButton:(id)button;	// 0x35ba1ec9
// declared property getter: - (id)playbackErrorDescription;	// 0x35ba6055
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x35ba2619
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x35ba1dcd
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35ba0ad9
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x35ba24b5
- (void)setControlsNeedLayout;	// 0x35ba1405
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x35ba1005
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x35ba0c05
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x35ba16c1
- (void)setDisabledParts:(unsigned)parts;	// 0x35ba0d49
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x35ba167d
- (void)setItem:(id)item;	// 0x35ba0b39
- (void)setItemTypeOverride:(unsigned)override;	// 0x35ba1719
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x35ba1035
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x35ba24fd
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x35ba09ed
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x35ba23b1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x35ba0c65
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x35ba1031
- (void)startTicking;	// 0x35ba099d
- (void)stopTicking;	// 0x35ba09c5
- (void)swipableViewHadActivity:(id)activity;	// 0x35ba098d
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x35ba17b5
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x35ba17d1
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x35ba17ed
// declared property getter: - (int)videoOverlayStyle;	// 0x35ba6065
- (id)videoOverlayView;	// 0x35ba2cc9
- (id)videoOverlayViewIfLoaded;	// 0x35ba3159
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x35ba2371
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x35ba2291
- (void)viewDidAppear:(BOOL)view;	// 0x35ba090d
- (void)viewDidDisappear:(BOOL)view;	// 0x35ba094d
@end

