/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface ATVMusicStoreCatalogItemProviderFactory : NSObject {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSDictionary *_actionItems;	// 8 = 0x8
	NSDictionary *_dateItems;	// 12 = 0xc
}
@property(readonly, retain) NSDictionary *actionItems;	// G=0x33977b89; converted property
+ (id)providerFactoryWithCatalogItem:(id)catalogItem;	// 0x33977a25
- (id)initWithCatalogItem:(id)catalogItem;	// 0x33977a61
- (id)_actionButtonProviders;	// 0x33979ab9
- (id)_decomposeDateAvailableStoreOffers;	// 0x33979215
- (id)_decomposeStoreOffers;	// 0x33978529
- (id)_initWithCatalogItem:(id)catalogItem;	// 0x33977925
- (id)_itemDetailWishListProvider;	// 0x3397989d
- (id)_largestSizeInCollection;	// 0x3397953d
- (id)_metadataProviderWithAbbreviatedForm:(BOOL)abbreviatedForm;	// 0x339796a5
- (id)_storeOfferMetadataProvider;	// 0x339797dd
- (id)abbreviatedMetadataProvider;	// 0x33977ce5
// converted property getter: - (id)actionItems;	// 0x33977b89
- (id)actionProviders;	// 0x33977ec5
- (id)copyrightProvider;	// 0x339780cd
- (id)dateAvailableProvider;	// 0x33977d5d
- (void)dealloc;	// 0x33977b15
- (id)imageProxy;	// 0x33977bb5
- (id)itemDetailMoreInfoProvider;	// 0x339783ad
- (id)listProviders;	// 0x339781b5
- (id)metadataProvider;	// 0x33977cd1
- (id)moreInfoProvider;	// 0x33977cf9
- (id)previewBrowserProvider;	// 0x339783a9
- (id)relatedProvider;	// 0x33978189
- (id)rentalActionProviders;	// 0x33978009
- (id)storeOffersProvider;	// 0x33977d25
- (id)storeOffersSansPreviewsProvider;	// 0x33977d95
@end

