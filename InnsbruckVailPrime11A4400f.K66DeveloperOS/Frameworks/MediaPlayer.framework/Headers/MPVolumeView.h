/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/UIView.h>
#import "MPAudioDeviceControllerDelegate.h"
#import "NSCoding.h"

@class UIImage, UILabel, MPAudioVideoRoutingActionSheet, MPAudioVideoRoutingPopoverController, UIButton, MPVolumeSlider, MPAudioDeviceController;

@interface MPVolumeView : UIView <MPAudioDeviceControllerDelegate, NSCoding> {
	MPAudioVideoRoutingActionSheet *_actionSheet;	// 96 = 0x60
	MPAudioDeviceController *_audioDeviceController;	// 100 = 0x64
	BOOL _hasNonDefaultRouteButtonImages;	// 104 = 0x68
	BOOL _hasNonDefaultMaxVolumeSliderImage;	// 105 = 0x69
	BOOL _hasNonDefaultMinVolumeSliderImage;	// 106 = 0x6a
	BOOL _hidesRouteLabelWhenNoRouteChoice;	// 107 = 0x6b
	UIButton *_routeButton;	// 108 = 0x6c
	BOOL _routeButtonShowsTouchWhenHighlighted;	// 112 = 0x70
	BOOL _routeDiscoveryEnabled;	// 113 = 0x71
	UILabel *_routeLabel;	// 116 = 0x74
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 120 = 0x78
	BOOL _showingButton;	// 124 = 0x7c
	BOOL _showingLabel;	// 125 = 0x7d
	BOOL _showingSlider;	// 126 = 0x7e
	BOOL _showsRouteButton;	// 127 = 0x7f
	BOOL _showsVolumeSlider;	// 128 = 0x80
	int _style;	// 132 = 0x84
	MPVolumeSlider *_volumeSlider;	// 136 = 0x88
	BOOL _volumeSliderShrinksFromBothEnds;	// 140 = 0x8c
	BOOL _wirelessRouteIsPicked;	// 141 = 0x8d
	BOOL _wirelessRoutesAvailable;	// 142 = 0x8e
	unsigned _routePopoverPermittedArrowDirections;	// 144 = 0x90
}
@property(assign, nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;	// G=0x2e29b3f9; S=0x2e29b419; 
@property(readonly, assign, nonatomic) BOOL isShowingRouteButton;	// G=0x2e29b4ad; 
@property(readonly, assign, nonatomic) BOOL isVisible;	// G=0x2e29b471; 
@property(assign, nonatomic) BOOL routeButtonShowsTouchWhenHighlighted;	// G=0x2e29af95; S=0x2e29b1a9; 
@property(assign, nonatomic) unsigned routePopoverPermittedArrowDirections;	// G=0x2e29c8fd; S=0x2e29c90d; @synthesize=_routePopoverPermittedArrowDirections
@property(assign, nonatomic) BOOL showsRouteButton;	// G=0x2e29b275; S=0x2e29b1fd; 
@property(assign, nonatomic) BOOL showsVolumeSlider;	// G=0x2e29b285; S=0x2e29b229; 
@property(readonly, assign, nonatomic) int style;	// G=0x2e29b3d5; 
@property(readonly, assign, nonatomic) MPVolumeSlider *volumeSlider;	// G=0x2e29b3e5; 
@property(assign, nonatomic) BOOL volumeSliderShrinksFromBothEnds;	// G=0x2e29b409; S=0x2e29b445; 
@property(retain, nonatomic) UIImage *volumeWarningSliderImage;	// G=0x2e29af2d; S=0x2e29b089; 
@property(readonly, assign, nonatomic, getter=isWirelessRouteActive) BOOL wirelessRouteActive;	// G=0x2e29ae69; 
@property(readonly, assign, nonatomic, getter=areWirelessRoutesAvailable) BOOL wirelessRoutesAvailable;	// G=0x2e29ae8d; 
- (id)initWithCoder:(id)coder;	// 0x2e29a489
- (id)initWithFrame:(CGRect)frame;	// 0x2e29a2e1
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x2e29a30d
- (void).cxx_destruct;	// 0x2e29c91d
- (void)_createSubviews;	// 0x2e29b5e9
- (id)_defaultRouteButtonImageAsSelected:(BOOL)selected;	// 0x2e29ba19
- (void)_displayAudioRoutePicker;	// 0x2e29bacd
- (void)_getDefaultVolumeSliderFrame:(CGRect *)frame routeButtonFrame:(CGRect *)frame2 forBounds:(CGRect)bounds;	// 0x2e29be61
- (void)_initWithStyle:(int)style;	// 0x2e29a231
- (id)_routeButton;	// 0x2e29b5d5
- (void)_setShowsRouteButton:(BOOL)button animated:(BOOL)animated;	// 0x2e29c0f9
- (void)_setShowsVolumeSlider:(BOOL)slider;	// 0x2e29c4f5
- (void)_setVolumeAudioCategory:(id)category;	// 0x2e29b5b5
- (void)_updateWirelessRouteStatus;	// 0x2e29c7e5
// declared property getter: - (BOOL)areWirelessRoutesAvailable;	// 0x2e29ae8d
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x2e29accd
- (void)dealloc;	// 0x2e29a35d
- (void)didMoveToSuperview;	// 0x2e29a9e1
- (void)didMoveToWindow;	// 0x2e29aa49
- (void)dismissActiveOverlaysAnimated:(BOOL)animated;	// 0x2e29b4bd
- (void)encodeWithCoder:(id)coder;	// 0x2e29a5e5
// declared property getter: - (BOOL)hidesRouteLabelWhenNoRouteChoice;	// 0x2e29b3f9
- (BOOL)isShowingActiveOverlays;	// 0x2e29b585
// declared property getter: - (BOOL)isShowingRouteButton;	// 0x2e29b4ad
// declared property getter: - (BOOL)isVisible;	// 0x2e29b471
// declared property getter: - (BOOL)isWirelessRouteActive;	// 0x2e29ae69
- (void)layoutSubviews;	// 0x2e29a6b9
- (id)maximumVolumeSliderImageForState:(unsigned)state;	// 0x2e29aee5
- (id)minimumVolumeSliderImageForState:(unsigned)state;	// 0x2e29ae9d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2e29a781
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x2e29ae01
- (id)routeButtonImageForState:(unsigned)state;	// 0x2e29af4d
- (CGRect)routeButtonRectForBounds:(CGRect)bounds;	// 0x2e29afd5
// declared property getter: - (BOOL)routeButtonShowsTouchWhenHighlighted;	// 0x2e29af95
// declared property getter: - (unsigned)routePopoverPermittedArrowDirections;	// 0x2e29c8fd
- (void)setAlpha:(float)alpha;	// 0x2e29ab55
- (void)setFrame:(CGRect)frame;	// 0x2e29a821
- (void)setHidden:(BOOL)hidden;	// 0x2e29abbd
// declared property setter: - (void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)choice;	// 0x2e29b419
- (void)setMaximumVolumeSliderImage:(id)image forState:(unsigned)state;	// 0x2e29b04d
- (void)setMinimumVolumeSliderImage:(id)image forState:(unsigned)state;	// 0x2e29b011
- (void)setRouteButtonImage:(id)image forState:(unsigned)state;	// 0x2e29b0a9
// declared property setter: - (void)setRouteButtonShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x2e29b1a9
// declared property setter: - (void)setRoutePopoverPermittedArrowDirections:(unsigned)directions;	// 0x2e29c90d
// declared property setter: - (void)setShowsRouteButton:(BOOL)button;	// 0x2e29b1fd
// declared property setter: - (void)setShowsVolumeSlider:(BOOL)slider;	// 0x2e29b229
// declared property setter: - (void)setVolumeSliderShrinksFromBothEnds:(BOOL)bothEnds;	// 0x2e29b445
- (void)setVolumeThumbImage:(id)image forState:(unsigned)state;	// 0x2e29b255
// declared property setter: - (void)setVolumeWarningSliderImage:(id)image;	// 0x2e29b089
// declared property getter: - (BOOL)showsRouteButton;	// 0x2e29b275
// declared property getter: - (BOOL)showsVolumeSlider;	// 0x2e29b285
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2e29a8a9
// declared property getter: - (int)style;	// 0x2e29b3d5
// declared property getter: - (id)volumeSlider;	// 0x2e29b3e5
- (CGRect)volumeSliderRectForBounds:(CGRect)bounds;	// 0x2e29b295
// declared property getter: - (BOOL)volumeSliderShrinksFromBothEnds;	// 0x2e29b409
- (id)volumeThumbImageForState:(unsigned)state;	// 0x2e29b2d1
- (CGRect)volumeThumbRectForBounds:(CGRect)bounds volumeSliderRect:(CGRect)rect value:(float)value;	// 0x2e29b2f1
// declared property getter: - (id)volumeWarningSliderImage;	// 0x2e29af2d
- (void)willMoveToWindow:(id)window;	// 0x2e29ac25
@end

