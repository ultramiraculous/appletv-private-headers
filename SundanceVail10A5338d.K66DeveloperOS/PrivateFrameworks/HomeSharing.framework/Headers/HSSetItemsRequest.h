/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSSetItemsRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned)anId properties:(id)properties;	// 0x31df5cc9
+ (id)requestWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids properties:(id)properties;	// 0x31df5d71
- (id)initWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids properties:(id)properties;	// 0x31df5c01
- (id)_bodyDataForItemIDs:(id)itemIDs properties:(id)properties;	// 0x31df5dc5
- (id)_propertyCodeForPropertyName:(id)propertyName valueLength:(unsigned *)length;	// 0x31df63fd
@end

