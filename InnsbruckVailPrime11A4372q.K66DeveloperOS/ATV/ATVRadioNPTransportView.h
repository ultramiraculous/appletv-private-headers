/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, ATVDataItem, BRTextControl, BRMusicNowPlayingTransportLayer, NSString, BRFadeMaskLayer, NSDictionary, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface ATVRadioNPTransportView : BRControl {
	NSString *_stationName;	// 84 = 0x54
	ATVDataItem *_radioTrack;	// 88 = 0x58
	BRMusicNowPlayingTransportLayer *_transportBar;	// 92 = 0x5c
	BRMarqueeTextControl *_title;	// 96 = 0x60
	BRTextControl *_artist;	// 100 = 0x64
	BRTextControl *_album;	// 104 = 0x68
	BRMarqueeTextControl *_debugMessageView;	// 108 = 0x6c
	BRImageControl *_priceBackground;	// 112 = 0x70
	BRTextControl *_priceText;	// 116 = 0x74
	BRTextControl *_transportBarText;	// 120 = 0x78
	BRImageControl *_airplayImage;	// 124 = 0x7c
	BRFadeMaskLayer *_topContainerMask;	// 128 = 0x80
	BRControl *_topContainer;	// 132 = 0x84
	NSDictionary *_primaryAttributes;	// 136 = 0x88
	NSDictionary *_secondaryAttributes;	// 140 = 0x8c
	NSDictionary *_priceAttributes;	// 144 = 0x90
	NSDictionary *_transportBarTextAttributes;	// 148 = 0x94
}
@property(retain, nonatomic) BRImageControl *airplayImage;	// G=0x99e11; S=0x99e21; @synthesize=_airplayImage
@property(retain, nonatomic) BRTextControl *album;	// G=0x99cf9; S=0x99d09; @synthesize=_album
@property(retain, nonatomic) BRTextControl *artist;	// G=0x99cc1; S=0x99cd1; @synthesize=_artist
@property(retain, nonatomic) BRMarqueeTextControl *debugMessageView;	// G=0x99d31; S=0x99d41; @synthesize=_debugMessageView
@property(retain, nonatomic) NSDictionary *priceAttributes;	// G=0x99f29; S=0x99f39; @synthesize=_priceAttributes
@property(retain, nonatomic) BRImageControl *priceBackground;	// G=0x99d69; S=0x99d79; @synthesize=_priceBackground
@property(retain, nonatomic) BRTextControl *priceText;	// G=0x99da1; S=0x99db1; @synthesize=_priceText
@property(retain, nonatomic) NSDictionary *primaryAttributes;	// G=0x99eb9; S=0x99ec9; @synthesize=_primaryAttributes
@property(retain, nonatomic) ATVDataItem *radioTrack;	// G=0x99c41; S=0x98db9; @synthesize=_radioTrack
@property(retain, nonatomic) NSDictionary *secondaryAttributes;	// G=0x99ef1; S=0x99f01; @synthesize=_secondaryAttributes
@property(copy, nonatomic) NSString *stationName;	// G=0x99c2d; S=0x992fd; @synthesize=_stationName
@property(retain, nonatomic) BRMarqueeTextControl *title;	// G=0x99c89; S=0x99c99; @synthesize=_title
@property(retain, nonatomic) BRControl *topContainer;	// G=0x99e81; S=0x99e91; @synthesize=_topContainer
@property(retain, nonatomic) BRFadeMaskLayer *topContainerMask;	// G=0x99e49; S=0x99e59; @synthesize=_topContainerMask
@property(retain, nonatomic) BRMusicNowPlayingTransportLayer *transportBar;	// G=0x99c51; S=0x99c61; @synthesize=_transportBar
@property(retain, nonatomic) BRTextControl *transportBarText;	// G=0x99dd9; S=0x99de9; @synthesize=_transportBarText
@property(retain, nonatomic) NSDictionary *transportBarTextAttributes;	// G=0x99f61; S=0x99f71; @synthesize=_transportBarTextAttributes
- (id)init;	// 0x98941
- (void).cxx_destruct;	// 0x99f99
- (void)_configureAirplayImage;	// 0x99ab5
// declared property getter: - (id)airplayImage;	// 0x99e11
// declared property getter: - (id)album;	// 0x99cf9
// declared property getter: - (id)artist;	// 0x99cc1
- (void)dealloc;	// 0x98d4d
// declared property getter: - (id)debugMessageView;	// 0x99d31
- (void)layoutSubcontrols;	// 0x99405
// declared property getter: - (id)priceAttributes;	// 0x99f29
// declared property getter: - (id)priceBackground;	// 0x99d69
// declared property getter: - (id)priceText;	// 0x99da1
// declared property getter: - (id)primaryAttributes;	// 0x99eb9
// declared property getter: - (id)radioTrack;	// 0x99c41
// declared property getter: - (id)secondaryAttributes;	// 0x99ef1
// declared property setter: - (void)setAirplayImage:(id)image;	// 0x99e21
// declared property setter: - (void)setAlbum:(id)album;	// 0x99d09
// declared property setter: - (void)setArtist:(id)artist;	// 0x99cd1
// declared property setter: - (void)setDebugMessageView:(id)view;	// 0x99d41
// declared property setter: - (void)setPriceAttributes:(id)attributes;	// 0x99f39
// declared property setter: - (void)setPriceBackground:(id)background;	// 0x99d79
// declared property setter: - (void)setPriceText:(id)text;	// 0x99db1
// declared property setter: - (void)setPrimaryAttributes:(id)attributes;	// 0x99ec9
// declared property setter: - (void)setRadioTrack:(id)track;	// 0x98db9
// declared property setter: - (void)setSecondaryAttributes:(id)attributes;	// 0x99f01
// declared property setter: - (void)setStationName:(id)name;	// 0x992fd
// declared property setter: - (void)setTitle:(id)title;	// 0x99c99
// declared property setter: - (void)setTopContainer:(id)container;	// 0x99e91
// declared property setter: - (void)setTopContainerMask:(id)mask;	// 0x99e59
// declared property setter: - (void)setTransportBar:(id)bar;	// 0x99c61
// declared property setter: - (void)setTransportBarText:(id)text;	// 0x99de9
// declared property setter: - (void)setTransportBarTextAttributes:(id)attributes;	// 0x99f71
// declared property getter: - (id)stationName;	// 0x99c2d
// declared property getter: - (id)title;	// 0x99c89
// declared property getter: - (id)topContainer;	// 0x99e81
// declared property getter: - (id)topContainerMask;	// 0x99e49
// declared property getter: - (id)transportBar;	// 0x99c51
// declared property getter: - (id)transportBarText;	// 0x99dd9
// declared property getter: - (id)transportBarTextAttributes;	// 0x99f61
@end
