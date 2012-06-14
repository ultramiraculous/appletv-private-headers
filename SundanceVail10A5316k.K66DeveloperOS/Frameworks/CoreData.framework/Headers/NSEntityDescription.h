/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"

@class NSString, NSManagedObjectModel, NSData, NSMutableDictionary;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
@private
	int _cd_rc;	// 4 = 0x4
	id _snapshotClass;	// 8 = 0x8
	NSString *_versionHashModifier;	// 12 = 0xc
	NSData *_versionHash;	// 16 = 0x10
	NSManagedObjectModel *_model;	// 20 = 0x14
	NSString *_classNameForEntity;	// 24 = 0x18
	Class _instanceClass;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSEntityDescription *_rootentity;	// 36 = 0x24
	NSEntityDescription *_superentity;	// 40 = 0x28
	NSMutableDictionary *_subentities;	// 44 = 0x2c
	NSMutableDictionary *_properties;	// 48 = 0x30
	id _propertyMapping;	// 52 = 0x34
	NSRange *_propertyRanges;	// 56 = 0x38
	entityDescriptionFlags _entityDescriptionFlags;	// 60 = 0x3c
	void *_extraIvars;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
	id _flattenedSubentities;	// 72 = 0x48
	id **_kvcPropertyAccessors;	// 76 = 0x4c
	long _modelsReferenceIDForEntity;	// 80 = 0x50
}
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x32d13605; S=0x32d5970d; converted property
@property(retain) id compoundIndexes;	// G=0x32d5a0fd; S=0x32d03cfd; converted property
@property(retain) id elementID;	// G=0x32d59cf9; S=0x32d59ce9; converted property
@property(retain) id managedObjectClassName;	// G=0x32d23e21; S=0x32d59671; converted property
@property(retain) NSString *name;	// G=0x32d03ced; S=0x32d5973d; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x32d13619; S=0x32d594e5; converted property
@property(retain) id renamingIdentifier;	// G=0x32d59cbd; S=0x32d03c59; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x32d0af7d; S=0x32d58d89; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x32d05725; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x32d58d49; S=0x32d58c61; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x32d135f1; converted property
@property(retain) NSString *versionHashModifier;	// G=0x32d59b75; S=0x32d59b85; converted property
+ (id)_MOClassName;	// 0x32d5a5cd
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x32d149f5
+ (void)initialize;	// 0x32d32c95
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x32d57ef5
- (id)init;	// 0x32d58355
- (id)initWithCoder:(id)coder;	// 0x32d032a9
- (void)_addProperty:(id)property;	// 0x32d59e61
- (void)_addSubentity:(id)subentity;	// 0x32d59d09
- (id)_allPropertyNames;	// 0x32d5b5e5
- (id)_attributeNamed:(id)named;	// 0x32d5ac69
- (CFSetRef)_collectSubentities;	// 0x32d07375
- (id)_compoundIndexes;	// 0x32d5c851
- (void)_createCachesAndOptimizeState;	// 0x32d057b5
- (Class)_entityClass;	// 0x32d25f41
- (void)_flattenProperties;	// 0x32d05409
- (id)_flattenedSubentities;	// 0x32d5b375
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x32d0a6f9
- (BOOL)_hasCustomPrimitiveProperties;	// 0x32d5ac05
- (BOOL)_hasPotentialHashSkew;	// 0x32d5b251
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x32d5bac5
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x32d5bbc9
- (id)_initWithName:(id)name;	// 0x32d5a619
- (BOOL)_isDeallocating;	// 0x32d59c91
- (BOOL)_isEditable;	// 0x32d0a815
- (BOOL)_isFlattened;	// 0x32d05711
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x32d5b4f9
- (void *)_leopardStyleAttributesByName;	// 0x32d0be31
- (void *)_leopardStyleRelationshipsByName;	// 0x32d0c4ed
- (id)_localRelationshipNamed:(id)named;	// 0x32d5ad1d
- (long)_modelsReferenceID;	// 0x32d2304d
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x32d075b9
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x32d5b60d
- (id)_newVersionHashInStyle:(unsigned)style;	// 0x32d598c1
- (id)_new_implicitlyObservedKeys;	// 0x32d5b7e9
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x32d5b56d
- (id)_propertiesOfType:(unsigned)type;	// 0x32d5a855
- (id)_propertyNamed:(id)named;	// 0x32d1eb69
- (NSRange *)_propertyRangesByType;	// 0x32d5b4e9
- (id)_propertySearchMapping;	// 0x32d07665
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x32d5a465
- (id)_relationshipNamed:(id)named;	// 0x32d5ad5d
- (id)_relationshipNamesByType:(BOOL)type;	// 0x32d5aac1
- (void)_removeProperty:(id)property;	// 0x32d5b729
- (void)_removePropertyNamed:(id)named;	// 0x32d5b685
- (void)_removeSubentity:(id)subentity;	// 0x32d5b0d1
- (void)_restoreValidation;	// 0x32d5b9e9
- (id)_rootEntity;	// 0x32d5b08d
- (void)_setIsEditable:(BOOL)editable;	// 0x32d5ae6d
- (void)_setIsFlattened:(BOOL)flattened;	// 0x32d05735
- (void)_setManagedObjectModel:(id)model;	// 0x32d5a7dd
- (void)_setModelsReferenceID:(long)anId;	// 0x32d057a5
- (void)_setSuperentity:(id)superentity;	// 0x32d5b029
- (BOOL)_skipValidation;	// 0x32d5b9d5
- (Class)_snapshotClass;	// 0x32d5ac01
- (id)_sortedSubentities;	// 0x32d0aeb1
- (void)_stripForMigration;	// 0x32d5b8e1
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x32d5b385
- (id)_subentityNamed:(id)named;	// 0x32d5affd
- (void)_throwIfNotEditable;	// 0x32d05765
- (BOOL)_tryRetain;	// 0x32d59c41
- (id)_versionHashInStyle:(unsigned)style;	// 0x32d5b185
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x32d5c869
- (id)attributeKeys;	// 0x32d58b6d
- (id)attributesByName;	// 0x32d58bf9
// converted property getter: - (id)compoundIndexes;	// 0x32d5a0fd
- (id)copyWithZone:(NSZone *)zone;	// 0x32d5866d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32d59409
- (void)dealloc;	// 0x32d2e301
- (id)description;	// 0x32d58a35
// converted property getter: - (id)elementID;	// 0x32d59cf9
- (void)encodeWithCoder:(id)coder;	// 0x32d58409
- (void)finalize;	// 0x32d583a5
- (unsigned)hash;	// 0x32d34ac1
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x32d5933d
// converted property getter: - (BOOL)isAbstract;	// 0x32d13605
- (BOOL)isEqual:(id)equal;	// 0x32d34ae9
- (BOOL)isKindOfEntity:(id)entity;	// 0x32d58d6d
- (id)knownKeysMappingStrategy;	// 0x32d5a07d
// converted property getter: - (id)managedObjectClassName;	// 0x32d23e21
- (id)managedObjectModel;	// 0x32d58f25
// converted property getter: - (id)name;	// 0x32d03ced
// converted property getter: - (id)properties;	// 0x32d13619
- (id)propertiesByName;	// 0x32d07675
- (id)relationshipsByName;	// 0x32d58c2d
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x32d591a5
- (oneway void)release;	// 0x32d03be5
// converted property getter: - (id)renamingIdentifier;	// 0x32d59cbd
- (id)retain;	// 0x32d03b01
- (unsigned)retainCount;	// 0x32d59c2d
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x32d5970d
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x32d03cfd
// converted property setter: - (void)setElementID:(id)anId;	// 0x32d59ce9
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x32d59671
// converted property setter: - (void)setName:(id)name;	// 0x32d5973d
// converted property setter: - (void)setProperties:(id)properties;	// 0x32d594e5
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x32d03c59
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x32d58d89
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32d58c61
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x32d59b85
// converted property getter: - (id)subentities;	// 0x32d0af7d
- (id)subentitiesByName;	// 0x32d58f15
// converted property getter: - (id)superentity;	// 0x32d05725
- (id)toManyRelationshipKeys;	// 0x32d58f35
- (id)toOneRelationshipKeys;	// 0x32d5906d
// converted property getter: - (id)userInfo;	// 0x32d58d49
// converted property getter: - (id)versionHash;	// 0x32d135f1
// converted property getter: - (id)versionHashModifier;	// 0x32d59b75
@end
