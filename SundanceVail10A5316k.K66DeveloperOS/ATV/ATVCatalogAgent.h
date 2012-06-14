/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol ATVCatalogAgent
+ (void)acquireItem:(id)item;
+ (id)allLeafItemsForItem:(id)item;
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response;
+ (id)catalogHandler;
+ (void)checkForPurchases;
+ (id)checkForPurchasesRequestsForPageDictionary:(id)pageDictionary;
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;
+ (id)controlForItem:(id)item;
+ (void)controlForObject:(id)object;
+ (id)controlForObject:(id)object merchant:(id)merchant;
+ (id)coverArtForItem:(id)item;
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;
+ (long)downloadItem:(id)item;
+ (id)episodeArtURLForItem:(id)item;
+ (BOOL)isItemFeatured:(id)featured;
+ (BOOL)isItemOrdered:(id)ordered;
+ (BOOL)isPurchaseAllowedForItem:(id)item;
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;
+ (long)itemIDForItem:(id)item;
+ (int)itemType:(id)type;
+ (id)mediaAssetForStoreOffer:(id)storeOffer;
+ (id)mediaTypeForItem:(id)item;
+ (void)playItem:(id)item;
+ (void)playStoreItem:(id)item;
+ (void)processResponseDocument:(id)document;
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;
+ (long)repurchaseItem:(id)item context:(void *)context;
+ (void)sendPingForItem:(id)item;
+ (void)setDownloadFunction:(/*function-pointer*/ void *)function;
+ (void)setPurchaseFunction:(/*function-pointer*/ void *)function;
+ (void)setRentalFunction:(/*function-pointer*/ void *)function;
+ (void)setRepurchaseFunction:(/*function-pointer*/ void *)function;
+ (void)setSubscribeFunction:(/*function-pointer*/ void *)function;
+ (BOOL)showAllTitles:(id)titles;
+ (BOOL)showTitleAndSubtitle:(id)subtitle;
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;
+ (void)subscribeToItem:(id)item;
@end

