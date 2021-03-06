/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSStoreMappingGenerator : NSObject {
}
+ (id)defaultMappingGenerator;	// 0x30fc0d9d
+ (void)invalidate;	// 0x30fc0de5
- (id)externalNameForEntityName:(id)entityName;	// 0x30fc0e0d
- (id)externalNameForPropertyName:(id)propertyName;	// 0x30fc0e21
- (id)internalNameForEntityName:(id)entityName version:(int)version;	// 0x30fc0e35
- (id)internalNameForPropertyName:(id)propertyName version:(int)version;	// 0x30fc0e59
- (id)joinsForRelationship:(id)relationship;	// 0x30fc11e9
- (id)mappingForAttribute:(id)attribute forConfigurationWithName:(id)name;	// 0x30fc112d
- (id)mappingForEntity:(id)entity forConfigurationWithName:(id)name;	// 0x30fc0e7d
- (id)mappingForRelationship:(id)relationship forConfigurationWithName:(id)name;	// 0x30fc1281
- (id)mappingsDictForConfigurationWithName:(id)name inModel:(id)model;	// 0x30fc1501
- (id)mappingsForConfigurationWithName:(id)name inModel:(id)model;	// 0x30fc13ed
- (id)primaryKeyForEntity:(id)entity;	// 0x30fc119d
@end

