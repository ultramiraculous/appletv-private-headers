/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTrackInfoLayer, NSString, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
	BRTrackInfoLayer *_trackInfoLayer;	// 80 = 0x50
	BRMediaPlayer *_player;	// 84 = 0x54
	NSString *_lastAssetID;	// 88 = 0x58
}
@property(retain) BRMediaPlayer *player;	// G=0x2e86bd; S=0x2e85bd; converted property
- (id)init;	// 0x2e8321
- (id)_fetchCoverArt;	// 0x2e88c9
- (void)_playbackAssetChanged:(id)changed;	// 0x2e89b5
- (void)_playerStateChanged:(id)changed;	// 0x2e8971
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x2e8a91
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x2e8b2d
- (void)_updateCoverArt:(id)art;	// 0x2e89c5
- (void)_updateTrackInfo;	// 0x2e86ed
- (id)accessibilityLabel;	// 0x2e86cd
- (void)controlWasActivated;	// 0x2e8455
- (void)controlWasDeactivated;	// 0x2e8521
- (void)dealloc;	// 0x2e83b1
// converted property getter: - (id)player;	// 0x2e86bd
// converted property setter: - (void)setPlayer:(id)player;	// 0x2e85bd
@end

