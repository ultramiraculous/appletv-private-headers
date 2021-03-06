/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOffer : XXUnknownSuperclass {
	NSString *_storeOfferType;	// 4 = 0x4
	int _offerCategory;	// 8 = 0x8
	NSDictionary *_storeOfferInfo;	// 12 = 0xc
}
@property(readonly, assign) int offerCategory;	// G=0x1e88f1; converted property
@property(readonly, retain) NSString *storeOfferType;	// G=0x1e88e1; converted property
+ (void)_swizzlePreviewsToSD:(id)sd;	// 0x1e9701
+ (BOOL)anyOfferHasDigitalExtras:(id)extras;	// 0x1e85b5
+ (id)normalizeOffersDictionary:(id)dictionary;	// 0x1e7e7d
+ (id)normalizeOffersDictionary:(id)dictionary preferHD:(BOOL)hd;	// 0x1e7ecd
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1e81b9
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary preferHD:(BOOL)hd;	// 0x1e8209
+ (id)priceRangeFromStoreOffers:(id)storeOffers;	// 0x1e842d
+ (id)priceRangeFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1e8585
+ (id)primaryOfferFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1e838d
+ (id)redownloadOffersDictionary:(id)dictionary;	// 0x1e7d85
+ (id)storeOfferFromDictionary:(id)dictionary forType:(id)type;	// 0x1e83e1
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary forType:(id)type;	// 0x1e8615
- (id)_flavorForPlaybackResolution:(int)playbackResolution;	// 0x1e95f5
- (id)_storeOfferObjectForKey:(id)key;	// 0x1e9661
- (id)_storeOfferObjectForKey:(id)key playbackResolution:(int)resolution;	// 0x1e96b1
- (id)actionDisplayName;	// 0x1e9051
- (id)dateAvailable;	// 0x1e8d89
- (void)dealloc;	// 0x1e887d
- (id)dolbyDigitalLanguages;	// 0x1e9109
- (id)downloadURL;	// 0x1e8e05
- (long)duration;	// 0x1e891d
- (id)fileSize;	// 0x1e8a3d
- (BOOL)hasDateAvailable;	// 0x1e8d3d
- (BOOL)hasDigitalExtras;	// 0x1e8ff5
- (BOOL)hasDownload;	// 0x1e8db9
- (BOOL)hasPreview;	// 0x1e8e35
- (BOOL)hasPurchase;	// 0x1e8b25
- (BOOL)hasRedownload;	// 0x1e8a8d
- (BOOL)hasRental;	// 0x1e8cbd
- (BOOL)isCMS:(BOOL *)cms;	// 0x1e8b41
- (BOOL)isClosedCaptioned;	// 0x1e8ea1
- (BOOL)isDolbyDigital;	// 0x1e8fad
- (BOOL)isHD;	// 0x1e8f2d
- (BOOL)isWideScreen;	// 0x1e8ee9
// converted property getter: - (int)offerCategory;	// 0x1e88f1
- (id)originalPurchasePrice;	// 0x1e8c8d
- (id)preActionWarning;	// 0x1e9081
- (long)previewDuration;	// 0x1e89fd
- (id)previewURL;	// 0x1e8e71
- (id)price;	// 0x1e8a5d
- (id)purchaseParams;	// 0x1e8bcd
- (id)purchasePrice;	// 0x1e8c5d
- (id)redownloadParams;	// 0x1e8af5
- (id)rentalParams;	// 0x1e8cdd
- (id)rentalPrice;	// 0x1e8d0d
- (id)stereoLanguages;	// 0x1e9285
// converted property getter: - (id)storeOfferType;	// 0x1e88e1
- (id)subtitleLanguages;	// 0x1e9401
- (BOOL)supportsPlaybackResolution:(int)resolution;	// 0x1e8901
- (BOOL)usesStoreDrivenFlow;	// 0x1e90b1
@end

