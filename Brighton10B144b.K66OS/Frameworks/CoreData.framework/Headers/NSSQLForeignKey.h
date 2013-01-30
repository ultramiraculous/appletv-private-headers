/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {
	NSSQLToOne *_toOne;	// 52 = 0x34
}
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x30f49f69
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x30f49f21
- (id)initWithEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x30e99411
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x30f4a055
- (void)dealloc;	// 0x30f4a015
- (id)toOneRelationship;	// 0x30eb0585
@end
