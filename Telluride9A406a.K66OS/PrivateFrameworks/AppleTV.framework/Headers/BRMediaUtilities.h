/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRMediaUtilities : NSObject {
}
+ (void)_logDownloadKeyCookies;	// 0x33147b01
+ (id)defaultImageForMediaCollection:(ATVMediaCollectionRef)mediaCollection imageSize:(int)size;	// 0x33146e51
+ (id)defaultImageForMediaItem:(ATVMediaItemRef)mediaItem imageSize:(int)size;	// 0x33146e15
+ (void)deleteAllPlaybackCookies;	// 0x33147a05
+ (void)deleteCookiesForAsset:(id)asset;	// 0x331478c5
+ (BOOL)iTunesServerID:(id)anId isEqualToITunesServerID:(id)itunesServerID;	// 0x33147609
+ (BOOL)isAirPlayAsset:(id)asset;	// 0x33147385
+ (BOOL)isHomeShareRental:(id)rental;	// 0x331473e5
+ (BOOL)isSagaMediaAsset:(id)asset;	// 0x331475ad
+ (BOOL)isSagaMediaItem:(ATVMediaItemRef)item;	// 0x33147589
+ (BOOL)isTrilogyMediaAsset:(id)asset;	// 0x3314752d
+ (BOOL)isTrilogyMediaItem:(ATVMediaItemRef)item;	// 0x33147501
+ (BOOL)isiTunesAsset:(id)asset;	// 0x33147305
+ (BOOL)isiTunesMediaItem:(ATVMediaItemRef)item;	// 0x33147361
+ (id)mediaAssetsFromMediaItems:(id)mediaItems;	// 0x3314724d
+ (id)mediaTypeForATVMediaType:(ATVMediaTypeRef)atvmediaType;	// 0x33146f3d
+ (id)mediaTypeForMediaCollection:(ATVMediaCollectionRef)mediaCollection;	// 0x33146ef9
+ (id)mediaTypeForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x33146eb5
+ (double)playedThresholdForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x33146b9d
+ (double)playedThresholdForMediaType:(ATVMediaTypeRef)mediaType duration:(double)duration;	// 0x33146c55
+ (void)setCookiesForAsset:(id)asset;	// 0x33147715
+ (float)soundCheckValueForMediaAsset:(id)mediaAsset;	// 0x33146cf1
+ (float)soundCheckValueForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x33146d65
+ (int)watchedStateForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x331469dd
+ (int)watchedStateForMediaType:(ATVMediaTypeRef)mediaType duration:(double)duration bookmarkInMS:(long)ms hasBeenPlayed:(BOOL)played playCount:(long)count;	// 0x33146b15
@end

