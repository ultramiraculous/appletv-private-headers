/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMusicMetadataControl : BRControl {
	BRMarqueeTextControl *_songTitle;	// 84 = 0x54
	BRTextControl *_songArtist;	// 88 = 0x58
	BRTextControl *_albumTitle;	// 92 = 0x5c
	BRTextControl *_trackInfo;	// 96 = 0x60
	BRTextControl *_duration;	// 100 = 0x64
	BRTextControl *_releaseDate;	// 104 = 0x68
	BRTextControl *_price;	// 108 = 0x6c
	BOOL _scrollingAllowed;	// 112 = 0x70
}
@property(assign) BOOL scrollingAllowed;	// G=0x2bbaa5; S=0x2bba69; converted property
- (id)init;	// 0x2bafa1
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x2bbad9
- (id)_metadataMusicDetailsAttributes;	// 0x2bbab5
- (id)_metadataMusicSongTitleAttributes;	// 0x2bbafd
- (void)controlWasActivated;	// 0x2bb1d9
- (void)controlWasDeactivated;	// 0x2bb235
- (void)dealloc;	// 0x2bb111
- (void)layoutSubcontrols;	// 0x2bb651
// converted property getter: - (BOOL)scrollingAllowed;	// 0x2bbaa5
- (void)setAlbumTitle:(id)title;	// 0x2bb3b1
- (void)setDuration:(id)duration;	// 0x2bb499
- (void)setPrice:(id)price;	// 0x2bb581
- (void)setReleaseDate:(id)date;	// 0x2bb50d
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x2bba69
- (void)setSongArtist:(id)artist;	// 0x2bb33d
- (void)setSongTitle:(id)title;	// 0x2bb285
- (void)setTrackInfo:(id)info;	// 0x2bb425
@end

