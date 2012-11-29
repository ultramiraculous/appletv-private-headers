/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1cd715
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1cd751
- (id)_flattenMoreInfoSection:(id)section;	// 0x1cda01
- (void)_loadMoreInfoData;	// 0x1cd931
- (void)_loadMoreInfoFromURL:(id)url;	// 0x1cdb11
- (void)_supplementalResponseReceived:(id)received;	// 0x1cdc59
- (id)controlFactory;	// 0x1cd8d1
- (id)dataAtIndex:(long)index;	// 0x1cd90d
- (long)dataCount;	// 0x1cd8ed
- (void)dealloc;	// 0x1cd841
- (id)hashForDataAtIndex:(long)index;	// 0x1cd92d
@end
