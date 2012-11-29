/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVCatalogAgent.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogAgent : XXUnknownSuperclass <ATVCatalogAgent> {
}
+ (void)_augmentStoreOffers:(id)offers purchaseOfferParams:(id)params isCMS:(BOOL)cms;	// 0x1e165d
+ (id)_backgroundGradientImageForItem:(id)item;	// 0x1e4d39
+ (id)_backgroundImageForItem:(id)item;	// 0x1e4d19
+ (id)_backgroundImageForItem:(id)item imageName:(id)name;	// 0x1e4d59
+ (CGSize)_backgroundImageSizeForItem:(id)item inset:(float *)inset;	// 0x1e4bc1
+ (id)_catalogPageControlForItem:(id)item;	// 0x1e2159
+ (BOOL)_checkForPurchases:(id)purchases metadata:(id)metadata userInfo:(id)info;	// 0x1e12c9
+ (id)_collectionControlsForPageItem:(id)pageItem requestedBy:(id)by dividerSeparated:(BOOL)separated;	// 0x1e356d
+ (id)_controlForItem:(id)item;	// 0x1e1bed
+ (void)_controlForMediaItem:(id)mediaItem;	// 0x1e2055
+ (id)_controlForRequestParameters:(id)requestParameters identifier:(id)identifier merchant:(id)merchant;	// 0x1e1a45
+ (id)_controlForURL:(id)url identifier:(id)identifier merchant:(id)merchant;	// 0x1e1b89
+ (id)_createItemTypeMap;	// 0x1de34d
+ (id)_firstControlOfType:(Class)type inArray:(id)array;	// 0x1e4611
+ (id)_formattedPageContentCountString:(id)string;	// 0x1e3f6d
+ (id)_headerControlsForPageItem:(id)pageItem;	// 0x1e3a81
+ (id)_listPageForItem:(id)item;	// 0x1e2659
+ (id)_mediaTypeForStoreLink:(id)storeLink;	// 0x1e0ce9
+ (id)_mediaTypeForStoreMediaCollectionType:(id)storeMediaCollectionType;	// 0x1e0b7d
+ (id)_mediaTypeForStoreMediaType:(id)storeMediaType;	// 0x1e09c9
+ (id)_moreInfoHeaderControlsForPageItem:(id)pageItem;	// 0x1e3c8d
+ (void)_playEventMediaAsset:(id)asset swapCatalogApplianceController:(BOOL)controller;	// 0x1e103d
+ (void)_playVideoClip:(id)clip;	// 0x1e0d51
+ (id)_roomDescriptionControlsForPageItem:(id)pageItem;	// 0x1e46d9
+ (id)_roomPageContainerForItem:(id)item withScroller:(id)scroller;	// 0x1e2a65
+ (id)_roomPageForItem:(id)item;	// 0x1e2821
+ (id)_scrollerControlsFromHeaderControls:(id)headerControls collectionControls:(id)controls;	// 0x1e3edd
+ (id)_setupScroller;	// 0x1e2439
+ (id)_supplementPageForItem:(id)item;	// 0x1e25b1
+ (id)_tabbedPageForItem:(id)item;	// 0x1e2ed1
+ (void)acquireItem:(id)item;	// 0x1dd739
+ (id)allLeafItemsForItem:(id)item;	// 0x1df359
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response;	// 0x1e00d9
+ (id)catalogHandler;	// 0x1dd305
+ (void)checkForPurchases;	// 0x1dd6a5
+ (id)checkForPurchasesRequestsForPageDictionary:(id)pageDictionary;	// 0x1df9e9
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;	// 0x1df781
+ (id)controlForItem:(id)item;	// 0x1de33d
+ (void)controlForObject:(id)object;	// 0x1ddfe1
+ (id)controlForObject:(id)object merchant:(id)merchant;	// 0x1de021
+ (id)coverArtForItem:(id)item;	// 0x1dee95
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;	// 0x1df0a5
+ (long)downloadItem:(id)item;	// 0x1dda5d
+ (id)episodeArtURLForItem:(id)item;	// 0x1df195
+ (void)initialize;	// 0x1dd069
+ (BOOL)isItemFeatured:(id)featured;	// 0x1df249
+ (BOOL)isItemOrdered:(id)ordered;	// 0x1df271
+ (BOOL)isPurchaseAllowedForItem:(id)item;	// 0x1dd621
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;	// 0x1df299
+ (long)itemIDForItem:(id)item;	// 0x1ded09
+ (int)itemType:(id)type;	// 0x1de5f1
+ (id)mediaAssetForStoreOffer:(id)storeOffer;	// 0x1de809
+ (id)mediaTypeForItem:(id)item;	// 0x1de761
+ (void)playItem:(id)item;	// 0x1df69d
+ (void)playStoreItem:(id)item;	// 0x1df525
+ (void)processResponseDocument:(id)document;	// 0x1e0539
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;	// 0x1ddbf5
+ (long)repurchaseItem:(id)item context:(void *)context;	// 0x1dd951
+ (void)sendPingForItem:(id)item;	// 0x1ddd31
+ (void)setDownloadFunction:(/*function-pointer*/ void *)function;	// 0x1dd719
+ (void)setPurchaseFunction:(/*function-pointer*/ void *)function;	// 0x1dd6e9
+ (void)setRentalFunction:(/*function-pointer*/ void *)function;	// 0x1dd6f9
+ (void)setRepurchaseFunction:(/*function-pointer*/ void *)function;	// 0x1dd729
+ (void)setSubscribeFunction:(/*function-pointer*/ void *)function;	// 0x1dd709
+ (BOOL)showAllTitles:(id)titles;	// 0x1df1f9
+ (BOOL)showTitleAndSubtitle:(id)subtitle;	// 0x1df221
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;	// 0x1dded5
+ (void)subscribeToItem:(id)item;	// 0x1dd9c1
+ (void)updateTrilogyFeature;	// 0x1dd371
@end
