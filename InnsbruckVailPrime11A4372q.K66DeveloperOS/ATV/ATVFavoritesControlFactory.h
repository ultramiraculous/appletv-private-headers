/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVFavoritesControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x10478d
- (id)_collectionTypeForFavorite:(id)favorite;	// 0x1050cd
- (id)_menuItemForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x1049ed
- (id)_placeholderImageForFavorite:(id)favorite;	// 0x10502d
- (id)_previewForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x104d6d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1047c5
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x1048a5
@end
