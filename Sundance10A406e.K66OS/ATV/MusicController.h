/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface MusicController : BRDataQueryController {
}
+ (void)addGenre:(id)genre toQuery:(id)query;	// 0x1bf661
+ (void)addPropertiesForAlbumQuery:(id)albumQuery;	// 0x1bfce9
+ (void)addPropertiesForSongsQuery:(id)songsQuery;	// 0x1bfbc5
+ (void)addiTunesLPFilterToQuery:(id)query;	// 0x1bf5f9
+ (id)albumMenuItemForAlbum:(id)album;	// 0x1c05c5
+ (id)albumMenuItemForAlbum:(id)album displaysArtistName:(BOOL)name;	// 0x1c05d9
+ (id)artistMenuItemForArtist:(id)artist;	// 0x1c0551
+ (void)initialize;	// 0x1bf535
+ (id)newAudiobooksQueryWithProperties:(BOOL)properties;	// 0x1bfd85
+ (id)newItemsQueryForAlbum:(id)album;	// 0x1c008d
+ (id)newItemsQueryForPlaylist:(id)playlist;	// 0x1c0131
+ (id)newMusicVideosQueryWithProperties:(BOOL)properties;	// 0x1bfe39
+ (id)newMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0x1bfeed
+ (id)newPlaylistsQueryWithProperties:(BOOL)properties;	// 0x1bff61
+ (id)newSongsQuery;	// 0x1bf6c1
+ (id)newSongsQueryForAlbumID:(id)albumID;	// 0x1bf8b5
+ (id)newSongsQueryForArtist:(id)artist;	// 0x1bf71d
+ (id)newSongsQueryForComposer:(id)composer;	// 0x1bf979
+ (id)newSongsQueryWithProperties;	// 0x1bf6e1
+ (id)newSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0x1bfb89
+ (id)newSongsQueryWithPropertiesForArtist:(id)artist;	// 0x1bf879
+ (id)newSongsQueryWithPropertiesForComposer:(id)composer;	// 0x1bfa39
+ (id)playlistMenuItemForPlaylist:(id)playlist;	// 0x1c077d
+ (id)previewForAlbum:(id)album preview:(id)preview;	// 0x1c0c6d
+ (id)previewForMediaItem:(id)mediaItem preview:(id)preview;	// 0x1c09a5
+ (id)songMenuItemForSong:(id)song;	// 0x1c01f9
+ (id)songMenuItemForSong:(id)song displaySpeakerIfPlaying:(BOOL)playing;	// 0x1c01cd
+ (id)songMenuItemForSong:(id)song displaysArtist:(BOOL)artist;	// 0x1c0225
+ (id)songMenuItemForSong:(id)song displaysArtist:(BOOL)artist displaySpeakerIfPlaying:(BOOL)playing;	// 0x1c0249
+ (id)songsAndMusicVideosFilterWithAudiobook:(BOOL)audiobook;	// 0x1bfa75
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1bf595
- (void)_handleContextMenuSelection:(id)selection;	// 0x1c103d
- (id)cancelProviderForContextMenu;	// 0x1c1039
- (id)providersForContextMenu;	// 0x1c0f7d
@end

