/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x201ab5
- (id)initWithCatalogItem:(id)catalogItem;	// 0x201af1
- (id)_flattenMoreInfoSection:(id)section;	// 0x201da1
- (void)_loadMoreInfoData;	// 0x201cd1
- (void)_loadMoreInfoFromURL:(id)url;	// 0x201eb1
- (void)_supplementalResponseReceived:(id)received;	// 0x201ff9
- (id)controlFactory;	// 0x201c71
- (id)dataAtIndex:(long)index;	// 0x201cad
- (long)dataCount;	// 0x201c8d
- (void)dealloc;	// 0x201be1
- (id)hashForDataAtIndex:(long)index;	// 0x201ccd
@end
