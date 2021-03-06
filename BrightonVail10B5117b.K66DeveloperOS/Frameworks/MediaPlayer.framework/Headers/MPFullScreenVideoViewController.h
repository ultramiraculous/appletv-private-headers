/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAbstractFullScreenVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
	MPFullScreenVideoOverlay *_overlayView;	// 336 = 0x150
	int _autorotationState;	// 340 = 0x154
	BOOL _inhibitOverlay;	// 344 = 0x158
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x31d7dfd9; S=0x31d7dffd; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x31d7f395; S=0x31d7f3a5; @synthesize=_autorotationState
@property(assign) BOOL inhibitOverlay;	// G=0x31d7f385; S=0x31d7ebe5; converted property
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay *overlayView;	// G=0x31d7e56d; 
- (id)init;	// 0x31d7d785
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x31d7f0f9
- (void)_reallyRemoveOverlay;	// 0x31d7f31d
- (void)_rotationAnimationFinished:(id)finished;	// 0x31d7f22d
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x31d7dfd9
// declared property getter: - (int)autorotationState;	// 0x31d7f395
- (BOOL)controlsOverlayVisible;	// 0x31d7dfad
- (id)createChapterFlipTransition;	// 0x31d7dde9
- (void)dealloc;	// 0x31d7d7e1
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x31d7e8e9
// converted property getter: - (BOOL)inhibitOverlay;	// 0x31d7f385
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x31d7d9b5
- (void)overlayTappedBackButton:(id)button;	// 0x31d7ef45
- (void)overlayTappedScaleModeButton:(id)button;	// 0x31d7f021
// declared property getter: - (id)overlayView;	// 0x31d7e56d
- (void)removeChildViewController:(id)controller;	// 0x31d7da7d
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x31d7dffd
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x31d7f3a5
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31d7dbc9
- (void)setDisabledParts:(unsigned long long)parts;	// 0x31d7dce1
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x31d7ebe5
- (void)setItem:(id)item;	// 0x31d7db45
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x31d7dd69
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31d7dc4d
- (void)showChaptersController;	// 0x31d7df2d
- (void)showOverlayAnimated:(BOOL)animated;	// 0x31d7e7a5
- (void)startTicking;	// 0x31d7d955
- (void)stopTicking;	// 0x31d7d995
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x31d7f04d
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x31d7e01d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x31d7ec4d
- (id)videoOverlayView;	// 0x31d7e785
- (id)videoOverlayViewIfLoaded;	// 0x31d7e795
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x31d7eb3d
- (void)videoView_playbackStateChangedNotification:(id)notification;	// 0x31d7ea29
- (void)viewDidAppear:(BOOL)view;	// 0x31d7d86d
- (void)viewDidDisappear:(BOOL)view;	// 0x31d7d911
@end

