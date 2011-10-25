/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class NSDictionary, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemController : BRController {
@private
	NSDictionary *_itemDictionary;	// 80 = 0x50
	BRMerchant *_merchant;	// 84 = 0x54
	BOOL _isDirty;	// 88 = 0x58
}
@property(retain) NSDictionary *itemDictionary;	// G=0x3397734d; S=0x3397735d; converted property
@property(readonly, retain) BRMerchant *merchant;	// G=0x3397739d; converted property
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x33977179
- (void)augmentRelatedContentItemsFromPage:(id)page;	// 0x33977821
- (void)dealloc;	// 0x339772d1
- (void)fetchRelatedContent;	// 0x339774e1
- (void)fetchRelatedContentFromURL:(id)url;	// 0x33977585
// converted property getter: - (id)itemDictionary;	// 0x3397734d
- (void)markAsDirty;	// 0x33977471
// converted property getter: - (id)merchant;	// 0x3397739d
- (id)refreshURL;	// 0x33977485
- (void)relatedContentLoaded:(id)loaded;	// 0x339774b1
- (void)relatedContentReceived:(id)received;	// 0x339776a1
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x3397735d
- (void)wasExhumed;	// 0x339773ad
@end

