/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"
#import "Computers-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MusicController : XXUnknownSuperclass {
}
+ (void)addGenre:(id)genre toQuery:(ATVMediaQueryRef)query;	// 0xbd85
+ (void)addPropertiesForAlbumQuery:(ATVMediaQueryRef)albumQuery;	// 0xc1ed
+ (void)addPropertiesForSongsQuery:(ATVMediaQueryRef)songsQuery;	// 0xc261
+ (void)addiTunesLPFilterToQuery:(ATVMediaQueryRef)query;	// 0xbdc9
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album;	// 0xbba9
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album displaysArtistName:(BOOL)name;	// 0xcd59
+ (id)artistMenuItemForArtist:(ATVMediaCollectionRef)artist;	// 0xbfd5
+ (ATVMediaQueryRef)createAudiobooksQueryWithProperties:(BOOL)properties;	// 0xbe6d
+ (ATVMediaQueryRef)createMusicVideosQueryWithProperties:(BOOL)properties;	// 0xbe05
+ (ATVMediaQueryRef)createMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0xbd35
+ (ATVMediaQueryRef)createPlaylistsQueryWithProperties:(BOOL)properties;	// 0xc12d
+ (ATVMediaCompoundFilterRef)createSongsAndMusicVideosFilter;	// 0xc0bd
+ (ATVMediaQueryRef)createSongsQuery;	// 0xbcc1
+ (ATVMediaQueryRef)createSongsQueryForAlbumID:(id)albumID;	// 0xbed5
+ (ATVMediaQueryRef)createSongsQueryForArtistID:(id)artistID;	// 0xbf55
+ (ATVMediaQueryRef)createSongsQueryForComposer:(ATVMediaCollectionRef)composer;	// 0xc045
+ (ATVMediaQueryRef)createSongsQueryWithProperties;	// 0xbc89
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0xbbe1
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForArtistID:(id)artistID;	// 0xbc51
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForComposer:(ATVMediaCollectionRef)composer;	// 0xbc19
+ (void)initialize;	// 0xbce1
+ (id)playlistMenuItemForPlaylist:(ATVMediaCollectionRef)playlist;	// 0xcb05
+ (id)previewForAlbum:(ATVMediaCollectionRef)album preview:(id)preview;	// 0xc5b9
+ (id)previewForMediaItem:(ATVMediaItemRef)mediaItem preview:(id)preview;	// 0xc841
+ (id)songMenuItemForSong:(ATVMediaItemRef)song;	// 0xbbc1
+ (id)songMenuItemForSong:(ATVMediaItemRef)song displaysArtist:(BOOL)artist;	// 0xc335
- (id)providersForContextMenu;	// 0xbb05
@end

@interface MusicController (Private)
- (void)_handleContextMenuSelection:(id)selection;	// 0xba89
@end

