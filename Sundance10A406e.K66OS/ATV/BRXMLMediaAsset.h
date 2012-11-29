/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"
#import "BRSecureResource.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRXMLMediaAsset : BRBaseMediaAsset <BRSecureResource> {
	NSMutableDictionary *_info;	// 8 = 0x8
}
@property(retain) id dictionary;	// G=0x2a1d19; S=0x2a1d29; converted property
- (id)init;	// 0x2a0dcd
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x2a0de1
- (id)artist;	// 0x2a0f3d
- (id)assetID;	// 0x2a0f11
- (unsigned)bookmarkTimeInMS;	// 0x2a1c31
- (unsigned)bookmarkTimeInSeconds;	// 0x2a1c01
- (id)cast;	// 0x2a16bd
- (id)composer;	// 0x2a120d
- (id)copyright;	// 0x2a0fc1
- (id)coverArt;	// 0x2a16e9
- (id)coverArtID;	// 0x2a18b9
- (id)dateAcquired;	// 0x2a11a5
- (id)dateCreated;	// 0x2a11fd
- (id)datePublished;	// 0x2a114d
- (void)dealloc;	// 0x2a0e4d
- (id)description;	// 0x2a1be1
// converted property getter: - (id)dictionary;	// 0x2a1d19
- (id)directors;	// 0x2a1211
- (long)duration;	// 0x2a1375
- (BOOL)forceHDCPProtection;	// 0x2a1cd1
- (id)genres;	// 0x2a1691
- (BOOL)hasCoverArt;	// 0x2a1bb5
- (BOOL)hasVideoContent;	// 0x2a1601
- (id)imageProxy;	// 0x2a0e99
- (BOOL)isExplicit;	// 0x2a1555
- (id)mediaSummary;	// 0x2a0f95
- (id)mediaType;	// 0x2a15d5
- (id)mediaURL;	// 0x2a109d
- (id)merchant;	// 0x2a1e0d
- (long)parentalControlRatingRank;	// 0x2a14d5
- (long)parentalControlRatingSystemID;	// 0x2a1455
- (id)playbackMetadata;	// 0x2a1c7d
- (id)previewURL;	// 0x2a1071
- (id)primaryCollectionTitle;	// 0x2a0f69
- (id)primaryGenre;	// 0x2a1649
- (id)publisher;	// 0x2a1121
- (id)rating;	// 0x2a1429
- (id)resolution;	// 0x2a0ee5
- (id)secondScreenURL;	// 0x2a10c9
- (id)secureResourceAuthenticator;	// 0x2a1d65
// converted property setter: - (void)setDictionary:(id)dictionary;	// 0x2a1d29
- (void)setObject:(id)object forKey:(id)key;	// 0x2a0eb9
- (id)thumbnailArt;	// 0x2a17d1
- (id)thumbnailArtID;	// 0x2a1a39
- (id)thumbnailURL;	// 0x2a1045
- (id)title;	// 0x2a10f5
- (id)trickPlayConfig;	// 0x2a1019
- (id)trickPlayURL;	// 0x2a0fed
@end
