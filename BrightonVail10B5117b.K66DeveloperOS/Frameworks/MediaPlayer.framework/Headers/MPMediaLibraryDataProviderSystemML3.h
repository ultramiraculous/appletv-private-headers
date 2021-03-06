/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"


@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
	long long _currentRevision;	// 36 = 0x24
}
+ (BOOL)_isGeniusEnabled;	// 0x31df1a9d
+ (id)_localizedCloudGeniusErrorForError:(id)error;	// 0x31df20d9
+ (id)_localizedGeniusErrorForError:(id)error;	// 0x31df245d
- (id)initWithLibrary:(id)library;	// 0x31df1a41
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier;	// 0x31df3735
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier atPlaybackTime:(double)playbackTime;	// 0x31df37b9
- (void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId completionBlock:(id)block;	// 0x31df2dbd
- (void)_loadArtworkImageForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x31df2efd
- (void)_seedCloudPlaylistWithTrack:(id)track container:(id)container completionBlock:(id)block;	// 0x31df2691
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;	// 0x31df1f15
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x31df4229
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;	// 0x31df2021
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x31df40bd
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x31df415d
- (BOOL)isGeniusEnabled;	// 0x31df1b01
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x31df3a61
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID completionBlock:(id)block;	// 0x31df3a2d
- (void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31df39e1
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31df3831
- (void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31df3a95
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x31df3905
- (void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x31df3b2d
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31df3bcd
- (void)releaseGeniusClusterPlaylist:(void *)playlist;	// 0x31df20c5
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x31df1b29
- (BOOL)supportsEntityChangeTracking;	// 0x31df4379
- (void)updateEntitesToCurrentRevision;	// 0x31df4271
@end

