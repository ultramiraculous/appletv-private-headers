/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import <NSObject.h> // Unknown library

@class NSString, NSManagedObjectModel, NSData, NSMutableDictionary;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
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
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x35c1f295; S=0x35c1fc49; converted property
@property(retain) id compoundIndexes;	// G=0x35c206cd; S=0x35c20a35; converted property
@property(retain) id elementID;	// G=0x35c202c9; S=0x35c202b9; converted property
@property(retain) id managedObjectClassName;	// G=0x35bf6dcd; S=0x35c1fbad; converted property
@property(retain) NSString *name;	// G=0x35bdb745; S=0x35c1fc79; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x35bf81fd; S=0x35c1fa21; converted property
@property(retain) id renamingIdentifier;	// G=0x35c2028d; S=0x35c201f9; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x35bdcfe9; S=0x35c1f2c5; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x35bdc689; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x35c1f271; S=0x35c1f189; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x35bf6da9; converted property
@property(retain) NSString *versionHashModifier;	// G=0x35c200b1; S=0x35c200c1; converted property
+ (id)_MOClassName;	// 0x35c20e09
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x35be886d
+ (void)initialize;	// 0x35bd4c7d
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x35c1dc29
- (id)init;	// 0x35c1e101
- (id)initWithCoder:(id)coder;	// 0x35c1e6f5
- (void)_addProperty:(id)property;	// 0x35c20431
- (void)_addSubentity:(id)subentity;	// 0x35c202d9
- (id)_allPropertyNames;	// 0x35c232fd
- (id)_attributeNamed:(id)named;	// 0x35c21595
- (CFSetRef)_collectSubentities;	// 0x35c21c25
- (id)_compoundIndexes;	// 0x35c23f89
- (void)_createCachesAndOptimizeState;	// 0x35c2201d
- (Class)_entityClass;	// 0x35c21441
- (void)_flattenProperties;	// 0x35c23895
- (id)_flattenedSubentities;	// 0x35c21c15
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x35bdc6cd
- (BOOL)_hasCustomPrimitiveProperties;	// 0x35c21445
- (BOOL)_hasPotentialHashSkew;	// 0x35c21af1
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x35c23d81
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x35c23e85
- (id)_initWithName:(id)name;	// 0x35c20e55
- (BOOL)_isDeallocating;	// 0x35c201cd
- (BOOL)_isEditable;	// 0x35bdc7e9
- (BOOL)_isFlattened;	// 0x35bde5c9
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x35c21f31
- (void *)_leopardStyleAttributesByName;	// 0x35c234b5
- (void *)_leopardStyleRelationshipsByName;	// 0x35c2339d
- (id)_localRelationshipNamed:(id)named;	// 0x35c21649
- (long)_modelsReferenceID;	// 0x35bdfea9
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x35bde35d
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x35c23325
- (id)_newVersionHashInStyle:(unsigned)style;	// 0x35c1fdfd
- (id)_new_implicitlyObservedKeys;	// 0x35c2375d
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x35c21fa5
- (id)_propertiesOfType:(unsigned)type;	// 0x35c21091
- (id)_propertyNamed:(id)named;	// 0x35c235cd
- (NSRange *)_propertyRangesByType;	// 0x35c21f21
- (id)_propertySearchMapping;	// 0x35bde409
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x35c20ca1
- (id)_relationshipNamed:(id)named;	// 0x35c21689
- (id)_relationshipNamesByType:(BOOL)type;	// 0x35c212fd
- (void)_removeProperty:(id)property;	// 0x35c2369d
- (void)_removePropertyNamed:(id)named;	// 0x35c235f9
- (void)_removeSubentity:(id)subentity;	// 0x35c21a3d
- (void)_restoreValidation;	// 0x35c23ca5
- (id)_rootEntity;	// 0x35c219f9
- (void)_setIsEditable:(BOOL)editable;	// 0x35c21799
- (void)_setIsFlattened:(BOOL)flattened;	// 0x35c23865
- (void)_setManagedObjectModel:(id)model;	// 0x35c21019
- (void)_setModelsReferenceID:(long)anId;	// 0x35c23855
- (void)_setSuperentity:(id)superentity;	// 0x35c21995
- (BOOL)_skipValidation;	// 0x35c23c91
- (Class)_snapshotClass;	// 0x35c2143d
- (id)_sortedSubentities;	// 0x35bdcf1d
- (void)_stripForMigration;	// 0x35c23b9d
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x35c21dbd
- (id)_subentityNamed:(id)named;	// 0x35c21969
- (void)_throwIfNotEditable;	// 0x35c21929
- (BOOL)_tryRetain;	// 0x35c2017d
- (id)_versionHashInStyle:(unsigned)style;	// 0x35be67ad
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x35c23fa1
- (id)attributeKeys;	// 0x35c1f095
- (id)attributesByName;	// 0x35c1f121
// converted property getter: - (id)compoundIndexes;	// 0x35c206cd
- (id)copyWithZone:(NSZone *)zone;	// 0x35c1e995
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35c1f945
- (void)dealloc;	// 0x35c1e1b5
- (id)description;	// 0x35c1ef5d
// converted property getter: - (id)elementID;	// 0x35c202c9
- (void)encodeWithCoder:(id)coder;	// 0x35c1e491
- (void)finalize;	// 0x35c1e151
- (unsigned)hash;	// 0x35c1ed5d
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x35c1f879
// converted property getter: - (BOOL)isAbstract;	// 0x35c1f295
- (BOOL)isEqual:(id)equal;	// 0x35c1ed85
- (BOOL)isKindOfEntity:(id)entity;	// 0x35c1f2a9
- (id)knownKeysMappingStrategy;	// 0x35c2064d
// converted property getter: - (id)managedObjectClassName;	// 0x35bf6dcd
- (id)managedObjectModel;	// 0x35c1f461
// converted property getter: - (id)name;	// 0x35bdb745
// converted property getter: - (id)properties;	// 0x35bf81fd
- (id)propertiesByName;	// 0x35bde419
- (id)relationshipsByName;	// 0x35c1f155
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x35c1f6e1
- (oneway void)release;	// 0x35bd66f5
// converted property getter: - (id)renamingIdentifier;	// 0x35c2028d
- (id)retain;	// 0x35bd65cd
- (unsigned)retainCount;	// 0x35c20169
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x35c1fc49
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x35c20a35
// converted property setter: - (void)setElementID:(id)anId;	// 0x35c202b9
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x35c1fbad
// converted property setter: - (void)setName:(id)name;	// 0x35c1fc79
// converted property setter: - (void)setProperties:(id)properties;	// 0x35c1fa21
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x35c201f9
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x35c1f2c5
// converted property setter: - (void)setUserInfo:(id)info;	// 0x35c1f189
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x35c200c1
// converted property getter: - (id)subentities;	// 0x35bdcfe9
- (id)subentitiesByName;	// 0x35c1f451
// converted property getter: - (id)superentity;	// 0x35bdc689
- (id)toManyRelationshipKeys;	// 0x35c1f471
- (id)toOneRelationshipKeys;	// 0x35c1f5a9
// converted property getter: - (id)userInfo;	// 0x35c1f271
// converted property getter: - (id)versionHash;	// 0x35bf6da9
// converted property getter: - (id)versionHashModifier;	// 0x35c200b1
@end
