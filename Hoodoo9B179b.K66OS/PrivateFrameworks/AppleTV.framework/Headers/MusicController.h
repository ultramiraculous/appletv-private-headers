/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRDataQueryController.h"


@interface MusicController : BRDataQueryController {
}
+ (void)addGenre:(id)genre toQuery:(ATVMediaQueryRef)query;	// 0x303b1079
+ (void)addPropertiesForAlbumQuery:(ATVMediaQueryRef)albumQuery;	// 0x303b1569
+ (void)addPropertiesForSongsQuery:(ATVMediaQueryRef)songsQuery;	// 0x303b1469
+ (void)addiTunesLPFilterToQuery:(ATVMediaQueryRef)query;	// 0x303b1035
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album;	// 0x303b1cd1
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album displaysArtistName:(BOOL)name;	// 0x303b1ce5
+ (id)artistMenuItemForArtist:(ATVMediaCollectionRef)artist;	// 0x303b1c55
+ (ATVMediaQueryRef)createAudiobooksQueryWithProperties:(BOOL)properties;	// 0x303b15ed
+ (ATVMediaQueryRef)createItemsQueryForAlbum:(ATVMediaCollectionRef)album;	// 0x303b1805
+ (ATVMediaQueryRef)createItemsQueryForPlaylist:(ATVMediaCollectionRef)playlist;	// 0x303b1875
+ (ATVMediaQueryRef)createMusicVideosQueryWithProperties:(BOOL)properties;	// 0x303b1661
+ (ATVMediaQueryRef)createMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0x303b16d5
+ (ATVMediaQueryRef)createPlaylistsQueryWithProperties:(BOOL)properties;	// 0x303b172d
+ (ATVMediaCompoundFilterRef)createSongsAndMusicVideosFilter;	// 0x303b13b9
+ (ATVMediaQueryRef)createSongsQuery;	// 0x303b10b9
+ (ATVMediaQueryRef)createSongsQueryForAlbumID:(id)albumID;	// 0x303b1275
+ (ATVMediaQueryRef)createSongsQueryForArtist:(ATVMediaCollectionRef)artist;	// 0x303b1115
+ (ATVMediaQueryRef)createSongsQueryForComposer:(ATVMediaCollectionRef)composer;	// 0x303b12fd
+ (ATVMediaQueryRef)createSongsQueryWithProperties;	// 0x303b10d9
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0x303b142d
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForArtist:(ATVMediaCollectionRef)artist;	// 0x303b1239
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForComposer:(ATVMediaCollectionRef)composer;	// 0x303b137d
+ (void)initialize;	// 0x303b0fd9
+ (id)playlistMenuItemForPlaylist:(ATVMediaCollectionRef)playlist;	// 0x303b1eb9
+ (id)previewForAlbum:(ATVMediaCollectionRef)album preview:(id)preview;	// 0x303b2441
+ (id)previewForMediaItem:(ATVMediaItemRef)mediaItem preview:(id)preview;	// 0x303b2131
+ (id)songMenuItemForSong:(ATVMediaItemRef)song;	// 0x303b18ed
+ (id)songMenuItemForSong:(ATVMediaItemRef)song displaysArtist:(BOOL)artist;	// 0x303b190d
- (void)_handleContextMenuSelection:(id)selection;	// 0x303b285d
- (id)providersForContextMenu;	// 0x303b27a1
@end
