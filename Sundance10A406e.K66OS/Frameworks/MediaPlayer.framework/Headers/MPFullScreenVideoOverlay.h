/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableView.h"
#import "MPDetailSliderDelegate.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"

@class MPAVController, MPNowPlayingItemQueueInfoButton, MPAVItem, UIView, MPDetailSlider, MPCenteringNavigationBar, MPTransportControls, UINavigationBar, UINavigationItem, UIImageView, UINavigationButton, UILabel;
@protocol MPVideoOverlayDelegate, MPVideoControllerProtocol;

@interface MPFullScreenVideoOverlay : MPSwipableView <MPDetailSliderDelegate, MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay> {
	id<MPVideoControllerProtocol> _videoViewController;	// 116 = 0x74
	id<MPVideoOverlayDelegate> _delegate;	// 120 = 0x78
	MPAVController *_player;	// 124 = 0x7c
	MPAVItem *_item;	// 128 = 0x80
	int _interfaceOrientation;	// 132 = 0x84
	MPTransportControls *_transportControls;	// 136 = 0x88
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 140 = 0x8c
	MPCenteringNavigationBar *_navigationBar;	// 144 = 0x90
	UIImageView *_navigationBarBackground;	// 148 = 0x94
	UIImageView *_navigationBarShadow;	// 152 = 0x98
	UINavigationItem *_navigationItem;	// 156 = 0x9c
	UINavigationButton *_scaleModeButton;	// 160 = 0xa0
	UIView *_titleViewContainer;	// 164 = 0xa4
	UIView *_streamingLoadingTitleView;	// 168 = 0xa8
	MPDetailSlider *_scrubControl;	// 172 = 0xac
	UILabel *_scrubSpeedLabel;	// 176 = 0xb0
	UILabel *_scrubInstructionsLabel;	// 180 = 0xb4
	unsigned long long _desiredParts;	// 184 = 0xb8
	unsigned long long _disabledParts;	// 192 = 0xc0
	unsigned long long _visibleParts;	// 200 = 0xc8
	unsigned _tvOutEnabled : 1;	// 208 = 0xd0
	unsigned _wantsTick : 1;	// 208 = 0xd0
	unsigned _allowsDetailScrubbing : 1;	// 208 = 0xd0
	unsigned _detailScrubbing : 1;	// 208 = 0xd0
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x35ce4205; S=0x35ce3ff1; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x35ce4219; S=0x35ce422d; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x35ce3885; S=0x35ce38bd; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x35ce676d; S=0x35ce3fbd; @synthesize=_delegate
@property(assign, nonatomic) unsigned long long desiredParts;	// G=0x35ce677d; S=0x35ce3d6d; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// G=0x35ce6795; S=0x35ce3dfd; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x35ce67bd; S=0x35ce3ef9; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x35ce67ad; S=0x35ce3e55; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x35ce3959; @synthesize=_navigationBar
@property(retain, nonatomic) MPAVController *player;	// G=0x35ce67cd; S=0x35ce2e05; @synthesize=_player
@property(readonly, assign, nonatomic) MPTransportControls *transportControls;	// G=0x35ce67dd; @synthesize=_transportControls
@property(assign, nonatomic) id<MPVideoControllerProtocol> videoViewController;	// G=0x35ce67ed; S=0x35ce4021; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned long long visibleParts;	// G=0x35ce67fd; S=0x35ce4151; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x35ce269d
- (id)initWithFrame:(CGRect)frame interfaceOrientation:(int)orientation;	// 0x35ce2661
// declared property getter: - (BOOL)TVOutEnabled;	// 0x35ce4205
- (void)_backButtonAction:(id)action;	// 0x35ce427d
- (void)_bufferingStateDidChange:(id)_bufferingState;	// 0x35ce43e1
- (void)_configureLinkButtonForCurrentItemTime;	// 0x35ce3c05
- (void)_didChangeStatusBarOrientation:(id)orientation;	// 0x35ce430d
- (void)_hideScrubInstructions;	// 0x35ce6595
- (void)_initNavigationBar;	// 0x35ce4cdd
- (void)_initNavigationBarBackground;	// 0x35ce3099
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x35ce44d5
- (id)_newLoadingMovieTitleViewWithFrame:(CGRect)frame;	// 0x35ce4bf5
- (id)_newStreamingTitleViewWithFrame:(CGRect)frame;	// 0x35ce4c69
- (id)_newTitleViewWithFrame:(CGRect)frame text:(id)text showSpinner:(BOOL)spinner;	// 0x35ce47ed
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x35ce44c5
- (void)_reloadNavigationBarWithAnimation:(BOOL)animation;	// 0x35ce5065
- (void)_reloadTransportControls:(BOOL)controls;	// 0x35ce4ee1
- (void)_scaleButtonAction:(id)action;	// 0x35ce42c5
- (id)_scrubControlWithFrame:(CGRect)frame;	// 0x35ce53e9
- (BOOL)_shouldShowLoadingTitleView;	// 0x35ce5dc1
- (void)_showScrubInstructions;	// 0x35ce63e5
- (void)_statusBarHeightChanged:(id)changed;	// 0x35ce43d1
- (void)_tickNotification:(id)notification;	// 0x35ce4349
- (void)_timeDidJumpNotification:(id)_time;	// 0x35ce4375
- (BOOL)_updateTitleViewItemVisibility;	// 0x35ce5e79
- (void)_updateTitleViewItemVisibilityWithAnimation:(BOOL)animation;	// 0x35ce5541
- (void)_validityChangedNotification:(id)notification;	// 0x35ce43a1
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x35ce44e9
- (unsigned long long)_visiblePartsForTransportControlsWithParts:(unsigned long long)parts;	// 0x35ce6331
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x35ce4219
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x35ce3885
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x35ce3ce5
- (void)dealloc;	// 0x35ce2909
// declared property getter: - (id)delegate;	// 0x35ce676d
// declared property getter: - (unsigned long long)desiredParts;	// 0x35ce677d
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x35ce47a5
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x35ce476d
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x35ce44fd
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x35ce46a9
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x35ce45d5
- (void)didMoveToSuperview;	// 0x35ce2fd9
- (void)didMoveToWindow;	// 0x35ce3041
// declared property getter: - (unsigned long long)disabledParts;	// 0x35ce6795
- (void)hideAlternateTracks;	// 0x35ce3955
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35ce3779
// declared property getter: - (int)interfaceOrientation;	// 0x35ce67bd
// declared property getter: - (id)item;	// 0x35ce67ad
- (void)layoutSubviews;	// 0x35ce3321
// declared property getter: - (id)navigationBar;	// 0x35ce3959
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x35ce3bf9
// declared property getter: - (id)player;	// 0x35ce67cd
- (void)registerForPlayerNotifications;	// 0x35ce2b99
- (void)restoreSanity;	// 0x35ce2eb9
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x35ce422d
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35ce38bd
- (void)setAlpha:(float)alpha;	// 0x35ce37d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35ce3fbd
// declared property setter: - (void)setDesiredParts:(unsigned long long)parts;	// 0x35ce3d6d
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35ce3d91
// declared property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x35ce3dfd
- (void)setHidden:(BOOL)hidden;	// 0x35ce382d
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x35ce3ef9
// declared property setter: - (void)setItem:(id)item;	// 0x35ce3e55
// declared property setter: - (void)setPlayer:(id)player;	// 0x35ce2e05
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x35ce3ff1
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x35ce4021
// declared property setter: - (void)setVisibleParts:(unsigned long long)parts;	// 0x35ce4151
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35ce4175
- (void)showAlternateTracks;	// 0x35ce38fd
- (void)startTicking;	// 0x35ce2f21
- (void)stopTicking;	// 0x35ce2f91
// declared property getter: - (id)transportControls;	// 0x35ce67dd
- (void)unregisterForPlayerNotifications;	// 0x35ce2cf5
- (BOOL)updateTimeBasedValues;	// 0x35ce3991
// declared property getter: - (id)videoViewController;	// 0x35ce67ed
- (id)viewsToFadeOutWhenShowingBackside;	// 0x35ce3d1d
// declared property getter: - (unsigned long long)visibleParts;	// 0x35ce67fd
@end

