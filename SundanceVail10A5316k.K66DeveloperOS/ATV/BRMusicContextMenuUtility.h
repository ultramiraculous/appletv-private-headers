/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRContextMenuUtility.h"


__attribute__((visibility("hidden")))
@interface BRMusicContextMenuUtility : XXUnknownSuperclass <BRContextMenuUtility> {
	BOOL _onTheGoEnabled;	// 4 = 0x4
	BOOL _startGeniusEnabled;	// 5 = 0x5
	BOOL _airTunesSettingsEnabled;	// 6 = 0x6
	BOOL _browseArtistEnabled;	// 7 = 0x7
	BOOL _browseAlbumEnabled;	// 8 = 0x8
	BOOL _navigateToArtistForBrowseArtist;	// 9 = 0x9
	BOOL _navigateToAlbumForBrowseAlbum;	// 10 = 0xa
}
@property(assign) BOOL airTunesSettingsEnabled;	// G=0x36d1e9; S=0x36d1d9; converted property
@property(assign) BOOL browseAlbumEnabled;	// G=0x36d229; S=0x36d219; converted property
@property(assign) BOOL browseArtistEnabled;	// G=0x36d209; S=0x36d1f9; converted property
@property(assign) BOOL navigateToAlbumForBrowseAlbum;	// G=0x36d269; S=0x36d259; converted property
@property(assign) BOOL navigateToArtistForBrowseArtist;	// G=0x36d249; S=0x36d239; converted property
@property(assign) BOOL onTheGoEnabled;	// G=0x36d1a9; S=0x36d199; converted property
@property(assign) BOOL startGeniusEnabled;	// G=0x36d1c9; S=0x36d1b9; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x36d10d
+ (id)utility;	// 0x36d0c9
- (id)init;	// 0x36d11d
// converted property getter: - (BOOL)airTunesSettingsEnabled;	// 0x36d1e9
// converted property getter: - (BOOL)browseAlbumEnabled;	// 0x36d229
// converted property getter: - (BOOL)browseArtistEnabled;	// 0x36d209
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x36d279
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x36d27d
// converted property getter: - (BOOL)navigateToAlbumForBrowseAlbum;	// 0x36d269
// converted property getter: - (BOOL)navigateToArtistForBrowseArtist;	// 0x36d249
// converted property getter: - (BOOL)onTheGoEnabled;	// 0x36d1a9
// converted property setter: - (void)setAirTunesSettingsEnabled:(BOOL)enabled;	// 0x36d1d9
// converted property setter: - (void)setBrowseAlbumEnabled:(BOOL)enabled;	// 0x36d219
// converted property setter: - (void)setBrowseArtistEnabled:(BOOL)enabled;	// 0x36d1f9
// converted property setter: - (void)setNavigateToAlbumForBrowseAlbum:(BOOL)browseAlbum;	// 0x36d259
// converted property setter: - (void)setNavigateToArtistForBrowseArtist:(BOOL)browseArtist;	// 0x36d239
// converted property setter: - (void)setOnTheGoEnabled:(BOOL)enabled;	// 0x36d199
// converted property setter: - (void)setStartGeniusEnabled:(BOOL)enabled;	// 0x36d1b9
// converted property getter: - (BOOL)startGeniusEnabled;	// 0x36d1c9
@end

