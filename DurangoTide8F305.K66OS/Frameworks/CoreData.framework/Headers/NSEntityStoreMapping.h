/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSDictionary, NSEntityDescription, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSEntityStoreMapping : NSStoreMapping {
@private
	NSEntityDescription *_entity;	// 8 = 0x8
	NSDictionary *_propertyMappings;	// 12 = 0xc
	NSArray *_primaryKeys;	// 16 = 0x10
	BOOL _isSingleTableEntity;	// 20 = 0x14
	NSString *_subentityColumn;	// 24 = 0x18
	unsigned _subentityID;	// 28 = 0x1c
}
@property(retain) NSEntityDescription *entity;	// G=0x342f6d4d; S=0x342f6d5d; converted property
@property(retain) NSArray *primaryKeys;	// G=0x342f6d7d; S=0x342f6f41; converted property
@property(retain) NSDictionary *propertyMappings;	// G=0x342f6d6d; S=0x342f6f81; converted property
@property(assign, getter=isSingleTableEntity) BOOL singleTableEntity;	// G=0x342f6d8d; S=0x342f6d9d; converted property
@property(retain) NSString *subentityColumn;	// G=0x342f6dad; S=0x342f6f05; converted property
@property(assign) unsigned subentityID;	// G=0x342f6dbd; S=0x342f6dcd; converted property
- (id)initWithEntity:(id)entity;	// 0x342f7249
- (id)attributeColumnDefinitions;	// 0x342f6ed9
- (id)attributeMappings;	// 0x342f77b1
- (id)createTableStatement;	// 0x342f6ddd
- (void)dealloc;	// 0x342f71d5
- (id)description;	// 0x342f7155
// converted property getter: - (id)entity;	// 0x342f6d4d
- (id)foreignKeyColumnDefinitions;	// 0x342f7425
- (id)foreignKeyConstraintDefinitions;	// 0x342f7331
- (BOOL)isEqual:(id)equal;	// 0x342f6fbd
// converted property getter: - (BOOL)isSingleTableEntity;	// 0x342f6d8d
- (id)primaryKeyColumnDefinitions;	// 0x342f7519
// converted property getter: - (id)primaryKeys;	// 0x342f6d7d
// converted property getter: - (id)propertyMappings;	// 0x342f6d6d
- (id)relationshipMappings;	// 0x342f7619
// converted property setter: - (void)setEntity:(id)entity;	// 0x342f6d5d
// converted property setter: - (void)setPrimaryKeys:(id)keys;	// 0x342f6f41
// converted property setter: - (void)setPropertyMappings:(id)mappings;	// 0x342f6f81
// converted property setter: - (void)setSingleTableEntity:(BOOL)entity;	// 0x342f6d9d
// converted property setter: - (void)setSubentityColumn:(id)column;	// 0x342f6f05
// converted property setter: - (void)setSubentityID:(unsigned)anId;	// 0x342f6dcd
// converted property getter: - (id)subentityColumn;	// 0x342f6dad
// converted property getter: - (unsigned)subentityID;	// 0x342f6dbd
@end
