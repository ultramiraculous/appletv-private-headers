/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "MPAbstractFullScreenVideoViewController.h"

@class MPPadFullScreenVideoOverlay, MPAudioVideoRoutingPopoverController;

@interface MPPadFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
	MPPadFullScreenVideoOverlay *_fullscreenVideoOverlay;	// 332 = 0x14c
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 336 = 0x150
}
- (id)init;	// 0x3416c0f5
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x3416d375
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x3416d1c5
- (void)_rotationAnimationFinished:(id)finished;	// 0x3416d3f1
- (BOOL)canChangeScaleMode;	// 0x3416c9ad
- (BOOL)controlsOverlayVisible;	// 0x3416c81d
- (void)dealloc;	// 0x3416c121
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x3416c525
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x3416cda9
- (void)loadView;	// 0x3416c2cd
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x3416d361
- (void)overlayTappedBackButton:(id)button;	// 0x3416d2b5
- (void)overlayTappedScaleModeButton:(id)button;	// 0x3416d335
- (id)overlayView;	// 0x3416ca21
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3416d169
- (void)registerForPlayerNotifications;	// 0x3416c1e1
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x3416c69d
- (void)setDisabledParts:(unsigned long long)parts;	// 0x3416c7a5
- (void)setItem:(id)item;	// 0x3416c875
- (void)setPlayer:(id)player;	// 0x3416c575
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x3416c8fd
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x3416c721
- (void)showOverlayAnimated:(BOOL)animated;	// 0x3416cba9
- (void)startTicking;	// 0x3416c419
- (void)stopTicking;	// 0x3416c459
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x3416c5bd
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x3416cfb9
- (void)unregisterForPlayerNotifications;	// 0x3416c25d
- (id)videoOverlayView;	// 0x3416cb89
- (id)videoOverlayViewIfLoaded;	// 0x3416cb99
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x3416cf11
- (void)viewWillDisappear:(BOOL)view;	// 0x3416c31d
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x3416c479
@end

