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
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1e0435
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1e0471
- (id)_flattenMoreInfoSection:(id)section;	// 0x1e0721
- (void)_loadMoreInfoData;	// 0x1e0651
- (void)_loadMoreInfoFromURL:(id)url;	// 0x1e0831
- (void)_supplementalResponseReceived:(id)received;	// 0x1e0975
- (id)controlFactory;	// 0x1e05f1
- (id)dataAtIndex:(long)index;	// 0x1e062d
- (long)dataCount;	// 0x1e060d
- (void)dealloc;	// 0x1e0561
- (id)hashForDataAtIndex:(long)index;	// 0x1e064d
@end
