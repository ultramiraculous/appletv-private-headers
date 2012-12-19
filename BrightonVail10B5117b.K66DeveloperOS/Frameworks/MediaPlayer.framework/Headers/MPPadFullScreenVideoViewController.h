/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAbstractFullScreenVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MPAudioVideoRoutingPopoverController, MPPadFullScreenVideoOverlay;

@interface MPPadFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
	MPPadFullScreenVideoOverlay *_fullscreenVideoOverlay;	// 336 = 0x150
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 340 = 0x154
}
- (id)init;	// 0x31d7f3b5
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x31d80635
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x31d80485
- (void)_rotationAnimationFinished:(id)finished;	// 0x31d806b1
- (BOOL)canChangeScaleMode;	// 0x31d7fc6d
- (BOOL)controlsOverlayVisible;	// 0x31d7fadd
- (void)dealloc;	// 0x31d7f3e1
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31d7f7e5
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x31d80069
- (void)loadView;	// 0x31d7f58d
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x31d80621
- (void)overlayTappedBackButton:(id)button;	// 0x31d80575
- (void)overlayTappedScaleModeButton:(id)button;	// 0x31d805f5
- (id)overlayView;	// 0x31d7fce1
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x31d80429
- (void)registerForPlayerNotifications;	// 0x31d7f4a1
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31d7f95d
- (void)setDisabledParts:(unsigned long long)parts;	// 0x31d7fa65
- (void)setItem:(id)item;	// 0x31d7fb35
- (void)setPlayer:(id)player;	// 0x31d7f835
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x31d7fbbd
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31d7f9e1
- (void)showOverlayAnimated:(BOOL)animated;	// 0x31d7fe69
- (void)startTicking;	// 0x31d7f6d9
- (void)stopTicking;	// 0x31d7f719
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x31d7f87d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x31d80279
- (void)unregisterForPlayerNotifications;	// 0x31d7f51d
- (id)videoOverlayView;	// 0x31d7fe49
- (id)videoOverlayViewIfLoaded;	// 0x31d7fe59
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x31d801d1
- (void)viewWillDisappear:(BOOL)view;	// 0x31d7f5dd
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31d7f739
@end
