/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemProviderFactory : XXUnknownSuperclass {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSDictionary *_actionItems;	// 8 = 0x8
	NSDictionary *_dateItems;	// 12 = 0xc
	id<BRProvider> _previewProvider;	// 16 = 0x10
	BOOL _purchased;	// 20 = 0x14
}
@property(readonly, retain) NSDictionary *actionItems;	// G=0x1e0589; converted property
@property(assign, nonatomic) BOOL purchased;	// G=0x1e11ed; S=0x1e11fd; @synthesize=_purchased
+ (id)providerFactoryWithCatalogItem:(id)catalogItem;	// 0x1e0479
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1e04b5
- (id)_actionButtonProviders;	// 0x1e2829
- (id)_decomposeDateAvailableStoreOffers;	// 0x1e1e41
- (id)_decomposeStoreOffers;	// 0x1e120d
- (id)_initWithCatalogItem:(id)catalogItem;	// 0x1e0379
- (id)_itemDetailWishListProvider;	// 0x1e2641
- (id)_largestSizeInCollection;	// 0x1e21a1
- (id)_metadataProviderWithAbbreviatedForm:(BOOL)abbreviatedForm;	// 0x1e2319
- (id)_storeOfferMetadataProvider;	// 0x1e2581
- (id)abbreviatedMetadataProvider;	// 0x1e0721
// converted property getter: - (id)actionItems;	// 0x1e0589
- (id)actionProviders;	// 0x1e0901
- (id)copyrightProvider;	// 0x1e0bb1
- (id)dateAvailableProvider;	// 0x1e0795
- (void)dealloc;	// 0x1e04fd
- (id)imageProxy;	// 0x1e05b9
- (id)itemDetailMoreInfoProvider;	// 0x1e109d
- (id)listProviders;	// 0x1e0c9d
- (id)metadataProvider;	// 0x1e06d9
- (id)metadataProviderWithExpandedSummary:(BOOL)expandedSummary;	// 0x1e06ed
- (id)moreInfoProvider;	// 0x1e0735
- (id)previewBrowserProvider;	// 0x1e1099
// declared property getter: - (BOOL)purchased;	// 0x1e11ed
- (id)relatedProvider;	// 0x1e0c71
- (id)rentalActionProvidersForItem:(id)item;	// 0x1e0a5d
// declared property setter: - (void)setPurchased:(BOOL)purchased;	// 0x1e11fd
- (id)storeOffersProvider;	// 0x1e0761
- (id)storeOffersSansPreviewsProvider;	// 0x1e07c9
@end
