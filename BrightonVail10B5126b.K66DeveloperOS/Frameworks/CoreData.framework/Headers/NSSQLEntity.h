/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSStoreMapping.h"

@class NSString, NSArray, NSMutableArray, NSSQLStatement, NSSQLStoreMappingGenerator, NSSQLModel, NSSQLEntityKey, NSKnownKeysMappingStrategy, NSEntityDescription, NSSQLOptLockKey, NSSQLPrimaryKey, NSMutableDictionary;

@interface NSSQLEntity : NSStoreMapping {
	NSSQLModel *_model;	// 8 = 0x8
	NSEntityDescription *_entityDescription;	// 12 = 0xc
	NSString *_tableName;	// 16 = 0x10
	NSMutableDictionary *_properties;	// 20 = 0x14
	NSArray *_propertyAllCache;	// 24 = 0x18
	NSArray *_propertiesAllToManysCache;	// 28 = 0x1c
	NSArray *_propertyManyToManyCache;	// 32 = 0x20
	NSMutableArray *_columnsToFetch;	// 36 = 0x24
	NSMutableArray *_ekColumns;	// 40 = 0x28
	NSMutableArray *_fkColumns;	// 44 = 0x2c
	NSMutableArray *_fokColumns;	// 48 = 0x30
	NSMutableArray *_attrColumns;	// 52 = 0x34
	NSMutableArray *_virtualFKs;	// 56 = 0x38
	NSSQLPrimaryKey *_primaryKey;	// 60 = 0x3c
	NSSQLEntityKey *_entityKey;	// 64 = 0x40
	NSSQLOptLockKey *_optLockKey;	// 68 = 0x44
	NSMutableArray *_subentities;	// 72 = 0x48
	NSSQLEntity *_superentity;	// 76 = 0x4c
	NSSQLEntity *_rootEntity;	// 80 = 0x50
	NSSQLStoreMappingGenerator *_mappingGenerator;	// 84 = 0x54
	unsigned _entityID;	// 88 = 0x58
	unsigned _subentityMaxID;	// 92 = 0x5c
	NSRange _toOneRange;	// 96 = 0x60
	long long _maxPK;	// 104 = 0x68
	NSSQLStatement *_insertStatementCache;	// 112 = 0x70
	NSSQLStatement *_deletionStatementCache;	// 116 = 0x74
	NSSQLStatement *_faultingStatementCache;	// 120 = 0x78
	NSMutableDictionary *_toManyRelationshipStatementCache;	// 124 = 0x7c
	void *_fetch_entity_plan;	// 128 = 0x80
	NSKnownKeysMappingStrategy *_propertyMapping;	// 132 = 0x84
	void *_odiousHashHackStorage;	// 136 = 0x88
	unsigned _pkCount;	// 140 = 0x8c
	sqlentityFlags _sqlentityFlags;	// 144 = 0x90
}
@property(readonly, retain) NSMutableArray *columnsToFetch;	// G=0x30ea9459; converted property
@property(readonly, retain) NSEntityDescription *entityDescription;	// G=0x30e96e0d; converted property
@property(readonly, assign) unsigned entityID;	// G=0x30f479c5; converted property
@property(readonly, retain) NSSQLStoreMappingGenerator *mappingGenerator;	// G=0x30e988d1; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x30e96fb5; converted property
@property(readonly, retain) NSSQLOptLockKey *optLockKey;	// G=0x30eaedcd; converted property
@property(readonly, retain) NSSQLPrimaryKey *primaryKey;	// G=0x30f478d1; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x30f474fd; converted property
@property(readonly, retain) NSKnownKeysMappingStrategy *propertyMapping;	// G=0x30f48e81; converted property
@property(readonly, retain) NSSQLEntity *rootEntity;	// G=0x30f482e9; converted property
@property(retain) NSMutableArray *subentities;	// G=0x30e997d9; S=0x30f478e1; converted property
@property(readonly, assign) unsigned subentityMaxID;	// G=0x30f479d5; converted property
@property(retain) NSSQLEntity *superentity;	// G=0x30e97f55; S=0x30f47975; converted property
@property(readonly, retain) NSString *tableName;	// G=0x30eac515; converted property
- (id)initWithModel:(id)model entityDescription:(id)description;	// 0x30e9652d
- (void)_addColumnToFetch:(id)fetch;	// 0x30e981a5
- (void)_addForeignOrderKeyForToOne:(id)one entity:(id)entity;	// 0x30e9a5f9
- (void)_addRootColumnToFetch:(id)fetch;	// 0x30e98271
- (void)_addSubentity:(id)subentity;	// 0x30f47909
- (id)_addVirtualToOneForToMany:(id)many withInheritedProperty:(id)inheritedProperty;	// 0x30f47bd1
- (BOOL)_collectFKSlots:(id)slots error:(id *)error;	// 0x30f47f79
- (void)_doPostModelGenerationCleanup;	// 0x30e9a7dd
- (BOOL)_entityIsBroken:(id *)broken;	// 0x30f48269
- (unsigned)_generateIDWithSuperEntity:(id)superEntity nextID:(unsigned)anId;	// 0x30e96e1d
- (void)_generateInverseRelationshipsAndMore;	// 0x30e997e9
- (void)_generateProperties;	// 0x30e970f9
- (void *)_odiousHashHack;	// 0x30f47f69
- (unsigned)_pkCount;	// 0x30f482f9
- (id)_propertySearchMapping;	// 0x30e98dbd
- (void)_resetPKCount;	// 0x30f48309
- (void)_setMaxPK:(long long)pk;	// 0x30f4831d
- (id)_sqlPropertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x30f47a4d
- (NSRange)_toOneRange;	// 0x30e993f9
- (void)addInsertedObject:(id)object toArray:(id)array;	// 0x30f483d5
- (BOOL)addPropertiesForReadOnlyFetch:(id)readOnlyFetch keys:(id)keys context:(id)context;	// 0x30f48c19
- (id)attributeColumns;	// 0x30eaedbd
- (id)attributeNamed:(id)named;	// 0x30f47a3d
- (id)attributes;	// 0x30f48ea1
- (void)cacheDeletionStatement:(id)statement;	// 0x30f48745
- (void)cacheFaultingStatement:(id)statement;	// 0x30f487a9
- (void)cacheFaultingStatement:(id)statement andFetchRequest:(id)request forRelationship:(id)relationship;	// 0x30f48839
- (void)cacheInsertStatement:(id)statement;	// 0x30f486e1
- (void)clearCachedStatements;	// 0x30f48539
- (id)columnsToCreate;	// 0x30f478c1
// converted property getter: - (id)columnsToFetch;	// 0x30ea9459
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x30f489a1
- (void)dealloc;	// 0x30f47211
- (id)deletionStatement;	// 0x30f48735
- (id)description;	// 0x30f484d9
// converted property getter: - (id)entityDescription;	// 0x30e96e0d
// converted property getter: - (unsigned)entityID;	// 0x30f479c5
- (id)externalName;	// 0x30f48e91
- (id)faultingStatement;	// 0x30f48799
- (unsigned)fetchIndexForKey:(id)key;	// 0x30f47875
- (void)finalize;	// 0x30f47175
- (id)foreignEntityKeyColumns;	// 0x30eaed9d
- (id)foreignKeyColumns;	// 0x30eaed8d
- (id)foreignOrderKeyColumns;	// 0x30eaedad
- (BOOL)hasAttributesWithExternalDataReferences;	// 0x30e9fca5
- (BOOL)hasInheritance;	// 0x30ea948d
- (BOOL)hasSubentities;	// 0x30e99741
- (id)insertStatement;	// 0x30f486d1
- (BOOL)isKindOfSQLEntity:(id)sqlentity;	// 0x30f479e5
- (BOOL)isRootEntity;	// 0x30e970e1
- (id)manyToManyRelationships;	// 0x30f47735
// converted property getter: - (id)mappingGenerator;	// 0x30e988d1
// converted property getter: - (id)model;	// 0x30e96fb5
- (id)name;	// 0x30e968d9
- (long long)nextPrimaryKey64;	// 0x30f48331
// converted property getter: - (id)optLockKey;	// 0x30eaedcd
- (id)preparedFaultingCachesForRelationship:(id)relationship;	// 0x30f487fd
// converted property getter: - (id)primaryKey;	// 0x30f478d1
// converted property getter: - (id)properties;	// 0x30f474fd
- (id)propertiesByName;	// 0x30f47855
// converted property getter: - (id)propertyMapping;	// 0x30f48e81
- (id)propertyNamed:(id)named;	// 0x30e9a489
- (id)relationshipNamed:(id)named;	// 0x30e9a479
// converted property getter: - (id)rootEntity;	// 0x30f482e9
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x30f478e1
// converted property setter: - (void)setSuperentity:(id)superentity;	// 0x30f47975
// converted property getter: - (id)subentities;	// 0x30e997d9
- (id)subentityKey;	// 0x30f47865
// converted property getter: - (unsigned)subentityMaxID;	// 0x30f479d5
// converted property getter: - (id)superentity;	// 0x30e97f55
// converted property getter: - (id)tableName;	// 0x30eac515
- (id)toManyRelationships;	// 0x30f47615
- (id)virtualForeignKeyColumns;	// 0x30eb043d
@end
