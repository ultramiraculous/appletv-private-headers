/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"
#import "MPSwipableView.h"

@class MPVideoViewController, MPAVItem, UINavigationBar, UINavigationItem, MPTransportControls, UIView, UIImageView, UINavigationButton, UILabel, MPNowPlayingItemQueueInfoButton, MPDetailSlider, MPAVController, MPCenteringNavigationBar;
@protocol MPVideoOverlayDelegate;

@interface MPFullScreenVideoOverlay : MPSwipableView <MPDetailSliderDelegate, MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay> {
	MPVideoViewController *_videoViewController;	// 76 = 0x4c
	id<MPVideoOverlayDelegate> _delegate;	// 80 = 0x50
	MPAVController *_player;	// 84 = 0x54
	MPAVItem *_item;	// 88 = 0x58
	int _interfaceOrientation;	// 92 = 0x5c
	MPTransportControls *_transportControls;	// 96 = 0x60
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 100 = 0x64
	MPCenteringNavigationBar *_navigationBar;	// 104 = 0x68
	UIImageView *_navigationBarBackground;	// 108 = 0x6c
	UIImageView *_navigationBarShadow;	// 112 = 0x70
	UINavigationItem *_navigationItem;	// 116 = 0x74
	UINavigationButton *_scaleModeButton;	// 120 = 0x78
	UIView *_titleViewContainer;	// 124 = 0x7c
	UIView *_streamingLoadingTitleView;	// 128 = 0x80
	MPDetailSlider *_scrubControl;	// 132 = 0x84
	UILabel *_scrubSpeedLabel;	// 136 = 0x88
	UILabel *_scrubInstructionsLabel;	// 140 = 0x8c
	unsigned _desiredParts;	// 144 = 0x90
	unsigned _disabledParts;	// 148 = 0x94
	unsigned _visibleParts;	// 152 = 0x98
	unsigned _tvOutEnabled : 1;	// 156 = 0x9c
	unsigned _wantsTick : 1;	// 156 = 0x9c
	unsigned _allowsDetailScrubbing : 1;	// 156 = 0x9c
	unsigned _detailScrubbing : 1;	// 156 = 0x9c
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x319ea595; S=0x319ea41d; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x319ea5a9; S=0x319ea5bd; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x319e9d1d; S=0x319e9d55; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x319ecbd5; S=0x319ea3e1; @synthesize=_delegate
@property(assign, nonatomic) unsigned desiredParts;	// G=0x319ecbe5; S=0x319ea1dd; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x319ecbf5; S=0x319ea245; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x319ecc15; S=0x319ea329; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x319ecc05; S=0x319ea281; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x319e9df5; @synthesize=_navigationBar
@property(retain, nonatomic) MPAVController *player;	// G=0x319ecc25; S=0x319ecc35; @synthesize=_player
@property(readonly, assign, nonatomic) MPTransportControls *transportControls;	// G=0x319ecc59; @synthesize=_transportControls
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x319ecc69; S=0x319ea451; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned visibleParts;	// G=0x319ecc79; S=0x319ea4e9; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x319e8c6d
- (id)initWithFrame:(CGRect)frame interfaceOrientation:(int)orientation;	// 0x319e8c31
// declared property getter: - (BOOL)TVOutEnabled;	// 0x319ea595
- (void)_backButtonAction:(id)action;	// 0x319ea611
- (void)_bufferingStateDidChange:(id)_bufferingState;	// 0x319ea739
- (void)_configureLinkButtonForCurrentItemTime;	// 0x319ea0a9
- (unsigned)_desiredPartsForTransportControlsWithParts:(unsigned)parts;	// 0x319eaa7d
- (void)_hideScrubInstructions;	// 0x319ec9e5
- (void)_initNavigationBar;	// 0x319eaff9
- (void)_initNavigationBarBackground;	// 0x319e94a9
- (id)_newLoadingMovieTitleViewWithFrame:(CGRect)frame;	// 0x319eaf19
- (id)_newStreamingTitleViewWithFrame:(CGRect)frame;	// 0x319eaf89
- (id)_newTitleViewWithFrame:(CGRect)frame text:(id)text showSpinner:(BOOL)spinner;	// 0x319eaad9
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x319ea825
- (void)_reloadNavigationBarWithAnimation:(BOOL)animation;	// 0x319eb439
- (void)_reloadTransportControls:(BOOL)controls;	// 0x319eb21d
- (void)_scaleButtonAction:(id)action;	// 0x319ea659
- (void)_scaleModeDidChangeNotification:(id)_scaleMode;	// 0x319ea835
- (id)_scrubControlWithFrame:(CGRect)frame;	// 0x319eb7c5
- (BOOL)_shouldShowLoadingTitleView;	// 0x319ec20d
- (void)_showScrubInstructions;	// 0x319ec835
- (void)_statusBarHeightChanged:(id)changed;	// 0x319ea729
- (void)_tickNotification:(id)notification;	// 0x319ea6a1
- (void)_timeDidJumpNotification:(id)_time;	// 0x319ea6cd
- (BOOL)_updateTitleViewItemVisibility;	// 0x319ec2c1
- (void)_updateTitleViewItemVisibilityWithAnimation:(BOOL)animation;	// 0x319eb929
- (void)_validityChangedNotification:(id)notification;	// 0x319ea6f9
- (unsigned)_visiblePartsForTransportControlsWithParts:(unsigned)parts;	// 0x319ec7cd
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x319ea5a9
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x319e9d1d
- (void)crossedURLTimeMarker:(id)marker;	// 0x319ea17d
- (void)dealloc;	// 0x319e8fc9
// declared property getter: - (id)delegate;	// 0x319ecbd5
// declared property getter: - (unsigned)desiredParts;	// 0x319ecbe5
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x319eaa35
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x319ea9fd
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x319ea849
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x319ea979
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x319ea8e5
- (void)didMoveToSuperview;	// 0x319e93e9
- (void)didMoveToWindow;	// 0x319e9451
// declared property getter: - (unsigned)disabledParts;	// 0x319ecbf5
- (void)hideAlternateTracks;	// 0x319e9df1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x319e9c11
// declared property getter: - (int)interfaceOrientation;	// 0x319ecc15
// declared property getter: - (id)item;	// 0x319ecc05
- (void)layoutSubviews;	// 0x319e96f5
// declared property getter: - (id)navigationBar;	// 0x319e9df5
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x319ea09d
// declared property getter: - (id)player;	// 0x319ecc25
- (void)restoreSanity;	// 0x319e92cd
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x319ea5bd
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x319e9d55
- (void)setAlpha:(float)alpha;	// 0x319e9c6d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x319ea3e1
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x319ea1dd
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x319ea1f1
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x319ea245
- (void)setHidden:(BOOL)hidden;	// 0x319e9cc5
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x319ea329
// declared property setter: - (void)setItem:(id)item;	// 0x319ea281
// declared property setter: - (void)setPlayer:(id)player;	// 0x319ecc35
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x319ea41d
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x319ea451
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x319ea4e9
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x319ea4fd
- (void)showAlternateTracks;	// 0x319e9d95
- (void)startTicking;	// 0x319e9331
- (void)stopTicking;	// 0x319e939d
// declared property getter: - (id)transportControls;	// 0x319ecc59
- (BOOL)updateTimeBasedValues;	// 0x319e9e2d
// declared property getter: - (id)videoViewController;	// 0x319ecc69
- (id)viewsToFadeOutWhenShowingBackside;	// 0x319ea18d
// declared property getter: - (unsigned)visibleParts;	// 0x319ecc79
@end
