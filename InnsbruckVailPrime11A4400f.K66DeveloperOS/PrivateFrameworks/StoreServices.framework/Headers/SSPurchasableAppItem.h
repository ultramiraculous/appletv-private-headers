/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSPurchasableItem.h"


@interface SSPurchasableAppItem : SSPurchasableItem {
}
+ (id)allItemsFromDatabase:(id)database forAccount:(long long)account sortedBy:(id)by sortAscending:(BOOL)ascending;	// 0x32856c5d
+ (id)allPropertyKeys;	// 0x32857631
+ (id)databaseTable;	// 0x32857615
+ (id)itemsFromDatabase:(id)database forAccount:(long long)account matching:(id)matching sortedBy:(id)by sortAscending:(BOOL)ascending;	// 0x32856ca1
+ (id)sortByNameKey;	// 0x32857621
- (id)bundleID;	// 0x328572f1
- (id)category;	// 0x32857245
- (id)companyName;	// 0x32857279
- (unsigned char)contentRatingFlags;	// 0x328572ad
- (id)description;	// 0x3285759d
- (id)humanReadableVersion;	// 0x32857525
- (long long)iTunesVersion;	// 0x32857559
- (id)iconTitle;	// 0x32857325
- (id)iconURL;	// 0x32857359
- (BOOL)isNewsstand;	// 0x328573ad
- (id)longTitle;	// 0x328573f1
- (unsigned)minimumOS;	// 0x32857425
- (id)redownloadParams;	// 0x328574f1
- (BOOL)supportsIPad;	// 0x32857469
- (BOOL)supportsIPhone;	// 0x328574ad
@end
