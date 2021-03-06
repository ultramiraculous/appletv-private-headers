/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSStoreMappingGenerator : NSObject {
}
+ (id)defaultMappingGenerator;	// 0x35cb1a25
+ (void)invalidate;	// 0x35cb1a6d
- (id)externalNameForEntityName:(id)entityName;	// 0x35cb1a95
- (id)externalNameForPropertyName:(id)propertyName;	// 0x35cb1aa9
- (id)internalNameForEntityName:(id)entityName version:(int)version;	// 0x35cb1abd
- (id)internalNameForPropertyName:(id)propertyName version:(int)version;	// 0x35cb1ae1
- (id)joinsForRelationship:(id)relationship;	// 0x35cb1e71
- (id)mappingForAttribute:(id)attribute forConfigurationWithName:(id)name;	// 0x35cb1db5
- (id)mappingForEntity:(id)entity forConfigurationWithName:(id)name;	// 0x35cb1b05
- (id)mappingForRelationship:(id)relationship forConfigurationWithName:(id)name;	// 0x35cb1f09
- (id)mappingsDictForConfigurationWithName:(id)name inModel:(id)model;	// 0x35cb2189
- (id)mappingsForConfigurationWithName:(id)name inModel:(id)model;	// 0x35cb2075
- (id)primaryKeyForEntity:(id)entity;	// 0x35cb1e25
@end

