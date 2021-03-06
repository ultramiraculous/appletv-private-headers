/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "MPAbstractFullScreenVideoViewController.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
	MPFullScreenVideoOverlay *_overlayView;	// 340 = 0x154
	int _autorotationState;	// 344 = 0x158
	BOOL _inhibitOverlay;	// 348 = 0x15c
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x35cd82e5; S=0x35cd8309; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x35cd969d; S=0x35cd96ad; @synthesize=_autorotationState
@property(assign) BOOL inhibitOverlay;	// G=0x35cd968d; S=0x35cd8eed; converted property
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay *overlayView;	// G=0x35cd8879; 
- (id)init;	// 0x35cd7a91
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x35cd9401
- (void)_reallyRemoveOverlay;	// 0x35cd9625
- (void)_rotationAnimationFinished:(id)finished;	// 0x35cd9535
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x35cd82e5
// declared property getter: - (int)autorotationState;	// 0x35cd969d
- (BOOL)controlsOverlayVisible;	// 0x35cd82b9
- (id)createChapterFlipTransition;	// 0x35cd80f5
- (void)dealloc;	// 0x35cd7aed
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x35cd8bf1
// converted property getter: - (BOOL)inhibitOverlay;	// 0x35cd968d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x35cd7cc1
- (void)overlayTappedBackButton:(id)button;	// 0x35cd924d
- (void)overlayTappedScaleModeButton:(id)button;	// 0x35cd9329
// declared property getter: - (id)overlayView;	// 0x35cd8879
- (void)removeChildViewController:(id)controller;	// 0x35cd7d89
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x35cd8309
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x35cd96ad
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35cd7ed5
- (void)setDisabledParts:(unsigned long long)parts;	// 0x35cd7fed
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x35cd8eed
- (void)setItem:(id)item;	// 0x35cd7e51
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x35cd8075
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35cd7f59
- (void)showChaptersController;	// 0x35cd8239
- (void)showOverlayAnimated:(BOOL)animated;	// 0x35cd8ab1
- (void)startTicking;	// 0x35cd7c61
- (void)stopTicking;	// 0x35cd7ca1
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x35cd9355
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x35cd8329
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x35cd8f55
- (id)videoOverlayView;	// 0x35cd8a91
- (id)videoOverlayViewIfLoaded;	// 0x35cd8aa1
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x35cd8e45
- (void)videoView_playbackStateChangedNotification:(id)notification;	// 0x35cd8d31
- (void)viewDidAppear:(BOOL)view;	// 0x35cd7b79
- (void)viewDidDisappear:(BOOL)view;	// 0x35cd7c1d
@end

