/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFavoritesControlFactory, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFavoritesProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_favorites;	// 4 = 0x4
	ATVFavoritesControlFactory *_factory;	// 8 = 0x8
}
+ (id)provider;	// 0x14e4ad
+ (id)providerWithFavorites:(id)favorites;	// 0x14e589
+ (id)providerWithItemType:(int)itemType;	// 0x14e519
- (id)initWithFavorites:(id)favorites;	// 0x14e5c5
- (void)_favoritesChanged:(id)changed;	// 0x14e789
- (id)controlFactory;	// 0x14e775
- (id)dataAtIndex:(long)index;	// 0x14e735
- (long)dataCount;	// 0x14e755
- (void)dealloc;	// 0x14e6a5
- (id)hashForDataAtIndex:(long)index;	// 0x14e785
@end

