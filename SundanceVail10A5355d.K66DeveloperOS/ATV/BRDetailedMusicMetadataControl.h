/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMusicMetadataControl : BRControl {
	BRMarqueeTextControl *_songTitle;	// 80 = 0x50
	BRTextControl *_songArtist;	// 84 = 0x54
	BRTextControl *_albumTitle;	// 88 = 0x58
	BRTextControl *_trackInfo;	// 92 = 0x5c
	BRTextControl *_duration;	// 96 = 0x60
	BRTextControl *_releaseDate;	// 100 = 0x64
	BRTextControl *_price;	// 104 = 0x68
	BOOL _scrollingAllowed;	// 108 = 0x6c
}
@property(assign) BOOL scrollingAllowed;	// G=0x2aed35; S=0x2aecf9; converted property
- (id)init;	// 0x2ae231
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x2aed69
- (id)_metadataMusicDetailsAttributes;	// 0x2aed45
- (id)_metadataMusicSongTitleAttributes;	// 0x2aed8d
- (void)controlWasActivated;	// 0x2ae469
- (void)controlWasDeactivated;	// 0x2ae4c5
- (void)dealloc;	// 0x2ae3a1
- (void)layoutSubcontrols;	// 0x2ae8e1
// converted property getter: - (BOOL)scrollingAllowed;	// 0x2aed35
- (void)setAlbumTitle:(id)title;	// 0x2ae641
- (void)setDuration:(id)duration;	// 0x2ae729
- (void)setPrice:(id)price;	// 0x2ae811
- (void)setReleaseDate:(id)date;	// 0x2ae79d
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x2aecf9
- (void)setSongArtist:(id)artist;	// 0x2ae5cd
- (void)setSongTitle:(id)title;	// 0x2ae515
- (void)setTrackInfo:(id)info;	// 0x2ae6b5
@end

