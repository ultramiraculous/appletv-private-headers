/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface RUIYTMediaAsset : BRXMLMediaAsset {
	unsigned char _validThumbnailsFound;	// 12 = 0xc
	ATVImage *_smallThumbnailArtImage;	// 16 = 0x10
	BOOL _isFavorite;	// 20 = 0x14
}
@property(assign) BOOL isFavorite;	// G=0x291769; S=0x291759; converted property
@property(readonly, retain) ATVImage *smallThumbnailArtImage;	// G=0x291691; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x290e39
- (void).cxx_destruct;	// 0x291779
- (void)addThumbnailAttribute:(id)attribute;	// 0x290ea5
- (id)authorName;	// 0x291331
- (id)category;	// 0x291551
- (void)clearSmallCoverArtImage;	// 0x2916d5
- (id)datePublished;	// 0x2914fd
- (long)duration;	// 0x291265
- (int)grFormat;	// 0x291629
// converted property getter: - (BOOL)isFavorite;	// 0x291769
- (BOOL)isInappropriate;	// 0x2915bd
- (id)keywords;	// 0x2914a9
- (id)mediaType;	// 0x290e89
- (void)numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x2912cd
- (id)objectForKey:(id)key;	// 0x2916ed
// converted property setter: - (void)setIsFavorite:(BOOL)favorite;	// 0x291759
// converted property getter: - (id)smallThumbnailArtImage;	// 0x291691
- (id)viewCount;	// 0x291385
@end

