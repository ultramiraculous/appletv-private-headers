/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import "SSDownloadManagerObserver.h"
#import <NSObject.h> // Unknown library

@class MPMediaPlaylist, MPMediaQuery, NSString, NSArray;

@interface MPGeniusMix : NSObject <SSDownloadManagerObserver, NSCoding, NSCopying> {
	MPMediaPlaylist *_playlist;	// 4 = 0x4
	MPMediaQuery *_seedTracksQuery;	// 8 = 0x8
	NSArray *_representativeArtists;	// 12 = 0xc
	NSArray *_representativeImageItems;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) float downloadProgress;	// G=0x31d2fccd; 
@property(readonly, assign, nonatomic) BOOL isCloudMix;	// G=0x31d30029; 
@property(readonly, assign, nonatomic) BOOL isDownloading;	// G=0x31d30071; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31d30379; 
@property(readonly, assign, nonatomic) MPMediaPlaylist *playlist;	// G=0x31d32009; @synthesize=_playlist
@property(readonly, assign, nonatomic) NSArray *representativeArtists;	// G=0x31d303a5; 
@property(readonly, assign, nonatomic) MPMediaQuery *seedTracksQuery;	// G=0x31d31991; 
+ (id)artworkCacheDirectoryPath;	// 0x31d2ecc1
+ (id)artworkImageForMediaItem:(id)mediaItem;	// 0x31d2ecc5
+ (id)artworkImageForMediaItem:(id)mediaItem scaleMode:(int)mode;	// 0x31d2f141
+ (id)mixQueue;	// 0x31d2e75d
- (id)initWithCoder:(id)coder;	// 0x31d2eaad
- (id)initWithMPMediaPlaylist:(id)mpmediaPlaylist;	// 0x31d2e7c9
- (id)_cacheDirectoryPath;	// 0x31d31a4d
- (id)_cachedRepresentativeImagePath;	// 0x31d31b09
- (unsigned long long)_entityArtworkCacheHashForRepresentativeItems:(id)representativeItems ensureItemArtworkFilesExist:(BOOL)exist;	// 0x31d31b3d
- (void)_generateMixImageWithTileLength:(float)tileLength imageDidLoadBlock:(id)image;	// 0x31d313bd
- (CGImageRef)_getAlreadyLoadedRepresentativeImageWithTileLength:(float)tileLength loadCompletionBlock:(id)block;	// 0x31d31561
- (BOOL)_observeMixImageLoadingWithImageDidLoadBlock:(id)_observeMixImageLoadingWithImage;	// 0x31d312b5
- (void)_onQueueLoadRepresentativeImageWithTileLength:(float)tileLength;	// 0x31d30c35
- (CGImageRef)_placeholderImageWithTileLength:(float)tileLength;	// 0x31d30639
- (CGImageRef)_placeholderMixImageWithTileLength:(float)tileLength;	// 0x31d30871
- (id)_representativeImageItemsWithMaxCount:(unsigned)maxCount;	// 0x31d31d2d
- (BOOL)canPlayUsingNetworkType:(int)type;	// 0x31d2f019
- (void)cancelDownload;	// 0x31d2ed35
- (id)copyWithZone:(NSZone *)zone;	// 0x31d2ec7d
- (void)dealloc;	// 0x31d2e895
- (id)description;	// 0x31d2e921
- (void)downloadMixWithPermissionHandler:(id)permissionHandler completionHandler:(id)handler;	// 0x31d2f2b9
// declared property getter: - (float)downloadProgress;	// 0x31d2fccd
- (void)encodeWithCoder:(id)coder;	// 0x31d2ec11
- (unsigned)hash;	// 0x31d2e9b1
// declared property getter: - (BOOL)isCloudMix;	// 0x31d30029
// declared property getter: - (BOOL)isDownloading;	// 0x31d30071
- (BOOL)isEqual:(id)equal;	// 0x31d2e9f5
- (CGImageRef)loadRepresentativeImageWithTileLength:(float)tileLength completionBlock:(id)block;	// 0x31d318b1
// declared property getter: - (id)name;	// 0x31d30379
// declared property getter: - (id)playlist;	// 0x31d32009
- (void)preloadRepresentativeImageWithTileLength:(float)tileLength completionBlock:(id)block;	// 0x31d31761
// declared property getter: - (id)representativeArtists;	// 0x31d303a5
// declared property getter: - (id)seedTracksQuery;	// 0x31d31991
@end

