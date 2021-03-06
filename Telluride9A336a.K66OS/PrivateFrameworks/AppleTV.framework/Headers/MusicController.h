/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataQueryController.h"
#import "AppleTV-Structs.h"


@interface MusicController : BRDataQueryController {
}
+ (void)addGenre:(id)genre toQuery:(ATVMediaQueryRef)query;	// 0x33b9b9d5
+ (void)addPropertiesForAlbumQuery:(ATVMediaQueryRef)albumQuery;	// 0x33b9bec5
+ (void)addPropertiesForSongsQuery:(ATVMediaQueryRef)songsQuery;	// 0x33b9bdc5
+ (void)addiTunesLPFilterToQuery:(ATVMediaQueryRef)query;	// 0x33b9b991
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album;	// 0x33b9c62d
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album displaysArtistName:(BOOL)name;	// 0x33b9c641
+ (id)artistMenuItemForArtist:(ATVMediaCollectionRef)artist;	// 0x33b9c5b1
+ (ATVMediaQueryRef)createAudiobooksQueryWithProperties:(BOOL)properties;	// 0x33b9bf49
+ (ATVMediaQueryRef)createItemsQueryForAlbum:(ATVMediaCollectionRef)album;	// 0x33b9c161
+ (ATVMediaQueryRef)createItemsQueryForPlaylist:(ATVMediaCollectionRef)playlist;	// 0x33b9c1d1
+ (ATVMediaQueryRef)createMusicVideosQueryWithProperties:(BOOL)properties;	// 0x33b9bfbd
+ (ATVMediaQueryRef)createMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0x33b9c031
+ (ATVMediaQueryRef)createPlaylistsQueryWithProperties:(BOOL)properties;	// 0x33b9c089
+ (ATVMediaCompoundFilterRef)createSongsAndMusicVideosFilter;	// 0x33b9bd15
+ (ATVMediaQueryRef)createSongsQuery;	// 0x33b9ba15
+ (ATVMediaQueryRef)createSongsQueryForAlbumID:(id)albumID;	// 0x33b9bbd1
+ (ATVMediaQueryRef)createSongsQueryForArtist:(ATVMediaCollectionRef)artist;	// 0x33b9ba71
+ (ATVMediaQueryRef)createSongsQueryForComposer:(ATVMediaCollectionRef)composer;	// 0x33b9bc59
+ (ATVMediaQueryRef)createSongsQueryWithProperties;	// 0x33b9ba35
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0x33b9bd89
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForArtist:(ATVMediaCollectionRef)artist;	// 0x33b9bb95
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForComposer:(ATVMediaCollectionRef)composer;	// 0x33b9bcd9
+ (void)initialize;	// 0x33b9b935
+ (id)playlistMenuItemForPlaylist:(ATVMediaCollectionRef)playlist;	// 0x33b9c815
+ (id)previewForAlbum:(ATVMediaCollectionRef)album preview:(id)preview;	// 0x33b9cd9d
+ (id)previewForMediaItem:(ATVMediaItemRef)mediaItem preview:(id)preview;	// 0x33b9ca8d
+ (id)songMenuItemForSong:(ATVMediaItemRef)song;	// 0x33b9c249
+ (id)songMenuItemForSong:(ATVMediaItemRef)song displaysArtist:(BOOL)artist;	// 0x33b9c269
- (void)_handleContextMenuSelection:(id)selection;	// 0x33b9d165
- (id)providersForContextMenu;	// 0x33b9d0a9
@end

