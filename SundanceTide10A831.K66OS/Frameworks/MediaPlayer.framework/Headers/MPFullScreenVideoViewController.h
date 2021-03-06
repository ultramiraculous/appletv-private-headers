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
@property(assign) BOOL allowsDetailScrubbing;	// G=0x36edfbd5; S=0x36edfbf9; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x36ee0f8d; S=0x36ee0f9d; @synthesize=_autorotationState
@property(assign) BOOL inhibitOverlay;	// G=0x36ee0f7d; S=0x36ee07dd; converted property
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay *overlayView;	// G=0x36ee0169; 
- (id)init;	// 0x36edf381
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x36ee0cf1
- (void)_reallyRemoveOverlay;	// 0x36ee0f15
- (void)_rotationAnimationFinished:(id)finished;	// 0x36ee0e25
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x36edfbd5
// declared property getter: - (int)autorotationState;	// 0x36ee0f8d
- (BOOL)controlsOverlayVisible;	// 0x36edfba9
- (id)createChapterFlipTransition;	// 0x36edf9e5
- (void)dealloc;	// 0x36edf3dd
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x36ee04e1
// converted property getter: - (BOOL)inhibitOverlay;	// 0x36ee0f7d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x36edf5b1
- (void)overlayTappedBackButton:(id)button;	// 0x36ee0b3d
- (void)overlayTappedScaleModeButton:(id)button;	// 0x36ee0c19
// declared property getter: - (id)overlayView;	// 0x36ee0169
- (void)removeChildViewController:(id)controller;	// 0x36edf679
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x36edfbf9
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x36ee0f9d
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36edf7c5
- (void)setDisabledParts:(unsigned long long)parts;	// 0x36edf8dd
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x36ee07dd
- (void)setItem:(id)item;	// 0x36edf741
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x36edf965
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36edf849
- (void)showChaptersController;	// 0x36edfb29
- (void)showOverlayAnimated:(BOOL)animated;	// 0x36ee03a1
- (void)startTicking;	// 0x36edf551
- (void)stopTicking;	// 0x36edf591
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x36ee0c45
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x36edfc19
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x36ee0845
- (id)videoOverlayView;	// 0x36ee0381
- (id)videoOverlayViewIfLoaded;	// 0x36ee0391
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x36ee0735
- (void)videoView_playbackStateChangedNotification:(id)notification;	// 0x36ee0621
- (void)viewDidAppear:(BOOL)view;	// 0x36edf469
- (void)viewDidDisappear:(BOOL)view;	// 0x36edf50d
@end

