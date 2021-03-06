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
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x2d10c455
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x2d10c40d
- (id)initWithEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x2d055b85
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x2d10c541
- (void)dealloc;	// 0x2d10c501
- (id)toOneRelationship;	// 0x2d06d655
@end

