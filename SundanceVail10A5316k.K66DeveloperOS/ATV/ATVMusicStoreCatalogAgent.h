/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVCatalogAgent.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogAgent : XXUnknownSuperclass <ATVCatalogAgent> {
}
+ (void)_augmentStoreOffers:(id)offers purchaseOfferParams:(id)params isCMS:(BOOL)cms;	// 0x1b9e45
+ (id)_backgroundGradientImageForItem:(id)item;	// 0x1bd53d
+ (id)_backgroundImageForItem:(id)item;	// 0x1bd51d
+ (id)_backgroundImageForItem:(id)item imageName:(id)name;	// 0x1bd55d
+ (CGSize)_backgroundImageSizeForItem:(id)item inset:(float *)inset;	// 0x1bd3c5
+ (id)_catalogPageControlForItem:(id)item;	// 0x1ba969
+ (BOOL)_checkForPurchases:(id)purchases metadata:(id)metadata userInfo:(id)info;	// 0x1b9ab1
+ (id)_collectionControlsForPageItem:(id)pageItem requestedBy:(id)by dividerSeparated:(BOOL)separated;	// 0x1bbd71
+ (id)_controlForItem:(id)item;	// 0x1ba3d5
+ (void)_controlForMediaItem:(id)mediaItem;	// 0x1ba865
+ (id)_controlForRequestParameters:(id)requestParameters identifier:(id)identifier merchant:(id)merchant;	// 0x1ba22d
+ (id)_controlForURL:(id)url identifier:(id)identifier merchant:(id)merchant;	// 0x1ba371
+ (id)_createItemTypeMap;	// 0x1b6af5
+ (id)_firstControlOfType:(Class)type inArray:(id)array;	// 0x1bce15
+ (id)_formattedPageContentCountString:(id)string;	// 0x1bc771
+ (id)_headerControlsForPageItem:(id)pageItem;	// 0x1bc285
+ (id)_listPageForItem:(id)item;	// 0x1bae65
+ (id)_mediaTypeForStoreLink:(id)storeLink;	// 0x1b94d5
+ (id)_mediaTypeForStoreMediaCollectionType:(id)storeMediaCollectionType;	// 0x1b9369
+ (id)_mediaTypeForStoreMediaType:(id)storeMediaType;	// 0x1b91b5
+ (id)_moreInfoHeaderControlsForPageItem:(id)pageItem;	// 0x1bc491
+ (void)_playEventMediaAsset:(id)asset swapCatalogApplianceController:(BOOL)controller;	// 0x1b9825
+ (void)_playVideoClip:(id)clip;	// 0x1b953d
+ (void)_popToItemController:(id)itemController;	// 0x1b9161
+ (id)_roomDescriptionControlsForPageItem:(id)pageItem;	// 0x1bcedd
+ (id)_roomPageContainerForItem:(id)item withScroller:(id)scroller;	// 0x1bb271
+ (id)_roomPageForItem:(id)item;	// 0x1bb02d
+ (id)_scrollerControlsFromHeaderControls:(id)headerControls collectionControls:(id)controls;	// 0x1bc6e1
+ (id)_setupScroller;	// 0x1bac45
+ (id)_supplementPageForItem:(id)item;	// 0x1badbd
+ (id)_tabbedPageForItem:(id)item;	// 0x1bb6dd
+ (void)acquireItem:(id)item;	// 0x1b5edd
+ (id)allLeafItemsForItem:(id)item;	// 0x1b7b01
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response;	// 0x1b8871
+ (id)catalogHandler;	// 0x1b5ce1
+ (void)checkForPurchases;	// 0x1b5e49
+ (id)checkForPurchasesRequestsForPageDictionary:(id)pageDictionary;	// 0x1b8189
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;	// 0x1b7f25
+ (id)controlForItem:(id)item;	// 0x1b6ae5
+ (void)controlForObject:(id)object;	// 0x1b677d
+ (id)controlForObject:(id)object merchant:(id)merchant;	// 0x1b67bd
+ (id)coverArtForItem:(id)item;	// 0x1b763d
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;	// 0x1b784d
+ (long)downloadItem:(id)item;	// 0x1b61fd
+ (id)episodeArtURLForItem:(id)item;	// 0x1b793d
+ (void)initialize;	// 0x1b5a91
+ (BOOL)isItemFeatured:(id)featured;	// 0x1b79f1
+ (BOOL)isItemOrdered:(id)ordered;	// 0x1b7a19
+ (BOOL)isPurchaseAllowedForItem:(id)item;	// 0x1b5dd1
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;	// 0x1b7a41
+ (long)itemIDForItem:(id)item;	// 0x1b74b1
+ (int)itemType:(id)type;	// 0x1b6d99
+ (id)mediaAssetForStoreOffer:(id)storeOffer;	// 0x1b6fb1
+ (id)mediaTypeForItem:(id)item;	// 0x1b6f09
+ (void)playItem:(id)item;	// 0x1b7e45
+ (void)playStoreItem:(id)item;	// 0x1b7ccd
+ (void)processResponseDocument:(id)document;	// 0x1b8cd1
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;	// 0x1b6395
+ (long)repurchaseItem:(id)item context:(void *)context;	// 0x1b60f5
+ (void)sendPingForItem:(id)item;	// 0x1b64d1
+ (void)setDownloadFunction:(/*function-pointer*/ void *)function;	// 0x1b5ebd
+ (void)setPurchaseFunction:(/*function-pointer*/ void *)function;	// 0x1b5e8d
+ (void)setRentalFunction:(/*function-pointer*/ void *)function;	// 0x1b5e9d
+ (void)setRepurchaseFunction:(/*function-pointer*/ void *)function;	// 0x1b5ecd
+ (void)setSubscribeFunction:(/*function-pointer*/ void *)function;	// 0x1b5ead
+ (BOOL)showAllTitles:(id)titles;	// 0x1b79a1
+ (BOOL)showTitleAndSubtitle:(id)subtitle;	// 0x1b79c9
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;	// 0x1b6671
+ (void)subscribeToItem:(id)item;	// 0x1b6165
@end

