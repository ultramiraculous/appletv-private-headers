/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, MPAVController, MPButton, NSMutableIndexSet, MPAVItem;

@interface MPTransportControls : UIView {
	id _target;	// 88 = 0x58
	MPAVItem *_item;	// 92 = 0x5c
	MPAVController *_player;	// 96 = 0x60
	unsigned long long _desiredParts;	// 100 = 0x64
	unsigned long long _disabledParts;	// 108 = 0x6c
	NSMutableIndexSet *_heldParts;	// 116 = 0x74
	unsigned long long _visibleParts;	// 120 = 0x78
	unsigned _playing : 1;	// 128 = 0x80
	BOOL _allowsWirelessPlayback;	// 129 = 0x81
	BOOL _registeredForPlayerNotifications;	// 130 = 0x82
	MPButton *_alternatesButton;	// 132 = 0x84
	MPButton *_bookmarkButton;	// 136 = 0x88
	MPButton *_chaptersButton;	// 140 = 0x8c
	MPButton *_devicePickerButton;	// 144 = 0x90
	MPButton *_emailButton;	// 148 = 0x94
	MPButton *_likeOrBanButton;	// 152 = 0x98
	MPButton *_nextButton;	// 156 = 0x9c
	MPButton *_playButton;	// 160 = 0xa0
	MPButton *_previousButton;	// 164 = 0xa4
	MPButton *_rewind30SecondsButton;	// 168 = 0xa8
	MPButton *_scaleButton;	// 172 = 0xac
	MPButton *_toggleFullscreenButton;	// 176 = 0xb0
	id _volumeSlider;	// 180 = 0xb4
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x3417da75; S=0x3417c1b5; @synthesize=_allowsWirelessPlayback
@property(assign, nonatomic) unsigned long long desiredParts;	// G=0x3417da85; S=0x3417c1e1; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// G=0x3417da9d; S=0x3417c255; @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem *item;	// G=0x3417dab5; S=0x3417c2a1; @synthesize=_item
@property(readonly, assign, nonatomic) NSString *pauseButtonImage;	// G=0x3417c3c9; 
@property(readonly, assign, nonatomic) NSString *playButtonImage;	// G=0x3417c3bd; 
@property(readonly, assign, nonatomic) NSString *playPauseButtonImage;	// G=0x3417c3d5; 
@property(retain, nonatomic) MPAVController *player;	// G=0x3417dac5; S=0x3417b9c9; @synthesize=_player
@property(assign, nonatomic) BOOL registeredForPlayerNotifications;	// G=0x3417db0d; S=0x3417db1d; @synthesize=_registeredForPlayerNotifications
@property(assign, nonatomic) id target;	// G=0x3417dad5; S=0x3417dae5; @synthesize=_target
@property(assign, nonatomic) unsigned long long visibleParts;	// G=0x3417daf5; S=0x3417c339; @synthesize=_visibleParts
+ (Class)buttonClass;	// 0x3417bf75
+ (unsigned long long)defaultVisibleParts;	// 0x3417b2e5
- (id)init;	// 0x3417b331
- (id)initWithFrame:(CGRect)frame;	// 0x3417b361
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x3417c409
- (void)_applyDesiredPartsWithAnimation:(BOOL)animation;	// 0x3417cf39
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)parts;	// 0x3417cd9d
- (void)_availableRoutesChangedNotification:(id)notification;	// 0x3417c469
- (void)_handleHoldForPart:(unsigned long long)part;	// 0x3417cf6d
- (void)_handleReleaseForPart:(unsigned long long)part;	// 0x3417d035
- (void)_handleTapForPart:(unsigned long long)part;	// 0x3417d0d9
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x3417c4c5
- (void)_itemChangedNotification:(id)notification;	// 0x3417c539
- (void)_playbackStateChangedNotification:(id)notification;	// 0x3417c579
- (void)_reloadViewWithAnimation:(BOOL)animation;	// 0x3417d359
- (void)_timeMarkersAvailableNotification:(id)notification;	// 0x3417c4d9
- (id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned long long)part;	// 0x3417d7f9
- (void)_updateEnabledStates:(BOOL)states;	// 0x3417d939
- (void)_validityChangedNotification:(id)notification;	// 0x3417c6d5
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x3417da75
- (BOOL)allowsWirelessPlaybackForCurrentItem;	// 0x3417c6e9
- (BOOL)alwaysHidesSystemVolumeHUD;	// 0x3417cd99
- (void)buttonDown:(id)down;	// 0x3417c735
- (id)buttonForPart:(unsigned long long)part;	// 0x3417bf91
- (void)buttonHeld:(id)held;	// 0x3417c771
- (void)buttonHoldReleased:(id)released;	// 0x3417c7c5
- (id)buttonImageForPart:(unsigned long long)part;	// 0x3417cb29
- (void)buttonUp:(id)up;	// 0x3417c7f9
- (void)dealloc;	// 0x3417b4c9
// declared property getter: - (unsigned long long)desiredParts;	// 0x3417da85
- (void)didMoveToSuperview;	// 0x3417bd99
- (void)didMoveToWindow;	// 0x3417bd41
// declared property getter: - (unsigned long long)disabledParts;	// 0x3417da9d
- (id)highlightedButtonImageForPart:(unsigned long long)part;	// 0x3417cd91
// declared property getter: - (id)item;	// 0x3417dab5
- (id)newButtonForPart:(unsigned long long)part;	// 0x3417c855
- (id)newVolumeSlider;	// 0x3417ca0d
// declared property getter: - (id)pauseButtonImage;	// 0x3417c3c9
// declared property getter: - (id)playButtonImage;	// 0x3417c3bd
// declared property getter: - (id)playPauseButtonImage;	// 0x3417c3d5
// declared property getter: - (id)player;	// 0x3417dac5
- (void)registerForPlayerNotifications;	// 0x3417b7d5
// declared property getter: - (BOOL)registeredForPlayerNotifications;	// 0x3417db0d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x3417cb25
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3417c1b5
- (void)setAlpha:(float)alpha;	// 0x3417bdf1
// declared property setter: - (void)setDesiredParts:(unsigned long long)parts;	// 0x3417c1e1
- (void)setDesiredParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x3417c205
// declared property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x3417c255
- (void)setFrame:(CGRect)frame;	// 0x3417bea1
- (void)setHidden:(BOOL)hidden;	// 0x3417be49
// declared property setter: - (void)setItem:(id)item;	// 0x3417c2a1
// declared property setter: - (void)setPlayer:(id)player;	// 0x3417b9c9
// declared property setter: - (void)setRegisteredForPlayerNotifications:(BOOL)playerNotifications;	// 0x3417db1d
// declared property setter: - (void)setTarget:(id)target;	// 0x3417dae5
// declared property setter: - (void)setVisibleParts:(unsigned long long)parts;	// 0x3417c339
- (void)setVisibleParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x3417c35d
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;	// 0x3417cd95
// declared property getter: - (id)target;	// 0x3417dad5
- (void)unregisterForPlayerNotifications;	// 0x3417b8f9
// declared property getter: - (unsigned long long)visibleParts;	// 0x3417daf5
@end

