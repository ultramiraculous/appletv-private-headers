/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class ATVMusicStoreOtherSeasonsControlFactory, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x328de9d1
- (id)initWithCatalogItem:(id)catalogItem;	// 0x328dea0d
- (id)controlFactory;	// 0x328deb89
- (id)dataAtIndex:(long)index;	// 0x328deaf1
- (long)dataCount;	// 0x328deb01
- (void)dealloc;	// 0x328dea91
- (id)hashForDataAtIndex:(long)index;	// 0x328deb99
@end
