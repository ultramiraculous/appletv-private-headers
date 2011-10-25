/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign) BOOL existsInLibrary;	// G=0x30e0a23d; 
@property(assign) ML3MusicLibrary *library;	// G=0x30df882d; S=0x30e0bc21; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x30dfe1c1; @synthesize=_persistentID
+ (BOOL)_deleteRowForPersistentIDs:(const long long *)persistentIDs count:(unsigned)count library:(id)library table:(id)table usingColumn:(id)column;	// 0x30e0b1c9
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x30df9355
+ (id)allProperties;	// 0x30e0b905
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x30df0969
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x30e0b901
+ (id)defaultOrderingProperties;	// 0x30e0a811
+ (BOOL)deleteFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x30e0b389
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x30e18af5
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x30df0f11
+ (void)enumeratePersistentIDsInLibrary:(id)library afterRevision:(long long)revision usingBlock:(id)block;	// 0x30e0ba39
+ (id)extraTablesToDelete;	// 0x30e0b8f9
+ (id)extraTablesToInsert;	// 0x30dfde99
+ (id)foreignColumnForProperty:(id)property;	// 0x30e0a81d
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x30e0a819
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x30df97a5
+ (BOOL)incrementRevisionWithLibrary:(id)library persistentID:(long long)anId deleted:(BOOL)deleted;	// 0x30dfde9d
+ (id)indexableSQLForProperties:(id)properties;	// 0x30e0b909
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x30dfdabd
+ (BOOL)insertionChangesLibraryContents;	// 0x30dfe00d
+ (id)joinClauseForProperty:(id)property;	// 0x30df0ff5
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x30e0b1c5
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x30dfb6ad
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x30e0a73d
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x30df818d
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x30df7839
+ (id)persistentIDColumnForTable:(id)table;	// 0x30e0b8fd
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x30df6785
+ (id)predisambiguatedProperties;	// 0x30df0f9d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x30df9be5
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x30df89c1
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x30df6a55
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x30e18a79
+ (id)replacerWithProperties:(id)properties databaseHandle:(sqlite3 *)handle;	// 0x30e32989
+ (int)revisionTrackingCode;	// 0x30e0ba31
+ (id)sectionPropertyForProperty:(id)property;	// 0x30e0a815
+ (id)subselectPropertyForProperty:(id)property;	// 0x30e0a739
+ (id)subselectStatementForProperty:(id)property;	// 0x30df164d
+ (id)unsettableProperties;	// 0x30dfda99
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x30dfc539
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x30df81bd
- (id)copyInLibrary:(id)library;	// 0x30e09f61
- (id)copyWithZone:(NSZone *)zone;	// 0x30e0a0e9
- (BOOL)deleteFromLibrary;	// 0x30e0b8a5
- (id)description;	// 0x30e0a1e1
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x30dff029
// declared property getter: - (BOOL)existsInLibrary;	// 0x30e0a23d
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x30df8299
- (unsigned)hash;	// 0x30e0a1d1
- (void)incrementRevision;	// 0x30e0bbc9
- (BOOL)isEqual:(id)equal;	// 0x30e0a14d
// declared property getter: - (id)library;	// 0x30df882d
- (BOOL)matchesPredicate:(id)predicate;	// 0x30e0a51d
- (id)newSelectSQLForProperties:(id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x30df8419
// declared property getter: - (long long)persistentID;	// 0x30dfe1c1
// declared property setter: - (void)setLibrary:(id)library;	// 0x30e0bc21
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x30dfe6fd
- (BOOL)setValues:(const id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x30dfe725
- (BOOL)setValuesForPropertiesWithDictionary:(id)dictionary;	// 0x30dfef05
- (id)valueForProperty:(id)property;	// 0x30df9bb9
@end

