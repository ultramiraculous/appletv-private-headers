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
@property(retain) NSDictionary *itemDictionary;	// G=0x330f234d; S=0x330f235d; converted property
@property(readonly, retain) BRMerchant *merchant;	// G=0x330f239d; converted property
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x330f2179
- (void)augmentRelatedContentItemsFromPage:(id)page;	// 0x330f2821
- (void)dealloc;	// 0x330f22d1
- (void)fetchRelatedContent;	// 0x330f24e1
- (void)fetchRelatedContentFromURL:(id)url;	// 0x330f2585
// converted property getter: - (id)itemDictionary;	// 0x330f234d
- (void)markAsDirty;	// 0x330f2471
// converted property getter: - (id)merchant;	// 0x330f239d
- (id)refreshURL;	// 0x330f2485
- (void)relatedContentLoaded:(id)loaded;	// 0x330f24b1
- (void)relatedContentReceived:(id)received;	// 0x330f26a1
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x330f235d
- (void)wasExhumed;	// 0x330f23ad
@end

