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
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x34dfd6a1; S=0x34dfd529; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x34dfd6b5; S=0x34dfd6c9; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x34dfce29; S=0x34dfce61; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x34dffce1; S=0x34dfd4ed; @synthesize=_delegate
@property(assign, nonatomic) unsigned desiredParts;	// G=0x34dffcf1; S=0x34dfd2e9; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x34dffd01; S=0x34dfd351; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x34dffd21; S=0x34dfd435; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x34dffd11; S=0x34dfd38d; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x34dfcf01; @synthesize=_navigationBar
@property(retain, nonatomic) MPAVController *player;	// G=0x34dffd31; S=0x34dffd41; @synthesize=_player
@property(readonly, assign, nonatomic) MPTransportControls *transportControls;	// G=0x34dffd65; @synthesize=_transportControls
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x34dffd75; S=0x34dfd55d; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned visibleParts;	// G=0x34dffd85; S=0x34dfd5f5; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x34dfbd79
- (id)initWithFrame:(CGRect)frame interfaceOrientation:(int)orientation;	// 0x34dfbd3d
// declared property getter: - (BOOL)TVOutEnabled;	// 0x34dfd6a1
- (void)_backButtonAction:(id)action;	// 0x34dfd71d
- (void)_bufferingStateDidChange:(id)_bufferingState;	// 0x34dfd845
- (void)_configureLinkButtonForCurrentItemTime;	// 0x34dfd1b5
- (unsigned)_desiredPartsForTransportControlsWithParts:(unsigned)parts;	// 0x34dfdb89
- (void)_hideScrubInstructions;	// 0x34dffaf1
- (void)_initNavigationBar;	// 0x34dfe105
- (void)_initNavigationBarBackground;	// 0x34dfc5b5
- (id)_newLoadingMovieTitleViewWithFrame:(CGRect)frame;	// 0x34dfe025
- (id)_newStreamingTitleViewWithFrame:(CGRect)frame;	// 0x34dfe095
- (id)_newTitleViewWithFrame:(CGRect)frame text:(id)text showSpinner:(BOOL)spinner;	// 0x34dfdbe5
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x34dfd931
- (void)_reloadNavigationBarWithAnimation:(BOOL)animation;	// 0x34dfe545
- (void)_reloadTransportControls:(BOOL)controls;	// 0x34dfe329
- (void)_scaleButtonAction:(id)action;	// 0x34dfd765
- (void)_scaleModeDidChangeNotification:(id)_scaleMode;	// 0x34dfd941
- (id)_scrubControlWithFrame:(CGRect)frame;	// 0x34dfe8d1
- (BOOL)_shouldShowLoadingTitleView;	// 0x34dff319
- (void)_showScrubInstructions;	// 0x34dff941
- (void)_statusBarHeightChanged:(id)changed;	// 0x34dfd835
- (void)_tickNotification:(id)notification;	// 0x34dfd7ad
- (void)_timeDidJumpNotification:(id)_time;	// 0x34dfd7d9
- (BOOL)_updateTitleViewItemVisibility;	// 0x34dff3cd
- (void)_updateTitleViewItemVisibilityWithAnimation:(BOOL)animation;	// 0x34dfea35
- (void)_validityChangedNotification:(id)notification;	// 0x34dfd805
- (unsigned)_visiblePartsForTransportControlsWithParts:(unsigned)parts;	// 0x34dff8d9
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x34dfd6b5
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x34dfce29
- (void)crossedURLTimeMarker:(id)marker;	// 0x34dfd289
- (void)dealloc;	// 0x34dfc0d5
// declared property getter: - (id)delegate;	// 0x34dffce1
// declared property getter: - (unsigned)desiredParts;	// 0x34dffcf1
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x34dfdb41
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x34dfdb09
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x34dfd955
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x34dfda85
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x34dfd9f1
- (void)didMoveToSuperview;	// 0x34dfc4f5
- (void)didMoveToWindow;	// 0x34dfc55d
// declared property getter: - (unsigned)disabledParts;	// 0x34dffd01
- (void)hideAlternateTracks;	// 0x34dfcefd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x34dfcd1d
// declared property getter: - (int)interfaceOrientation;	// 0x34dffd21
// declared property getter: - (id)item;	// 0x34dffd11
- (void)layoutSubviews;	// 0x34dfc801
// declared property getter: - (id)navigationBar;	// 0x34dfcf01
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x34dfd1a9
// declared property getter: - (id)player;	// 0x34dffd31
- (void)restoreSanity;	// 0x34dfc3d9
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x34dfd6c9
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x34dfce61
- (void)setAlpha:(float)alpha;	// 0x34dfcd79
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34dfd4ed
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x34dfd2e9
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x34dfd2fd
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x34dfd351
- (void)setHidden:(BOOL)hidden;	// 0x34dfcdd1
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x34dfd435
// declared property setter: - (void)setItem:(id)item;	// 0x34dfd38d
// declared property setter: - (void)setPlayer:(id)player;	// 0x34dffd41
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x34dfd529
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x34dfd55d
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x34dfd5f5
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x34dfd609
- (void)showAlternateTracks;	// 0x34dfcea1
- (void)startTicking;	// 0x34dfc43d
- (void)stopTicking;	// 0x34dfc4a9
// declared property getter: - (id)transportControls;	// 0x34dffd65
- (BOOL)updateTimeBasedValues;	// 0x34dfcf39
// declared property getter: - (id)videoViewController;	// 0x34dffd75
- (id)viewsToFadeOutWhenShowingBackside;	// 0x34dfd299
// declared property getter: - (unsigned)visibleParts;	// 0x34dffd85
@end

