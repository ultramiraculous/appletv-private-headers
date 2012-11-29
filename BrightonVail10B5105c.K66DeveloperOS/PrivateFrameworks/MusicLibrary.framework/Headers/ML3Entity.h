/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
	ML3MusicLibrary *_library;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign) BOOL existsInLibrary;	// G=0x34032cb1; 
@property(assign) __weak ML3MusicLibrary *library;	// G=0x3403ca5d; S=0x340510cd; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x340510e1; @synthesize=_persistentID
+ (BOOL)_deleteRowForPersistentIDs:(const long long *)persistentIDs count:(unsigned)count library:(id)library table:(id)table usingColumn:(id)column;	// 0x34050311
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x3403a545
+ (id)allProperties;	// 0x34050b65
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x340307f1
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x34050b61
+ (id)defaultOrderingProperties;	// 0x34050255
+ (BOOL)deleteFromLibrary:(id)library deletionType:(int)type persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x34050529
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x34061ee1
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x3402c8d9
+ (void)enumeratePersistentIDsInLibrary:(id)library afterRevision:(long long)revision usingBlock:(id)block;	// 0x34050f79
+ (void)enumeratePersistentIDsInLibrary:(id)library matchingPredicate:(id)predicate orderingTerms:(id)terms persistentIDs:(const long long *)ids count:(unsigned)count usingBlock:(id)block;	// 0x3404f895
+ (id)extraTablesToDelete;	// 0x34050b55
+ (id)extraTablesToInsert;	// 0x34050b59
+ (id)foreignColumnForProperty:(id)property;	// 0x34050261
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x3405025d
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x3403aaa9
+ (BOOL)incrementRevisionWithLibrary:(id)library persistentID:(long long)anId deletionType:(int)type revisionType:(int)type4;	// 0x3403d545
+ (id)indexableSQLForProperties:(id)properties;	// 0x34050b69
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x3404e541
+ (BOOL)insertionChangesLibraryContents;	// 0x3404f4f5
+ (id)joinClausesForProperty:(id)property;	// 0x3402ca89
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x34039c19
+ (BOOL)libraryDynamicChangeForProperty:(id)property;	// 0x3405030d
+ (id)newSelectSQLForProperties:(const id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x34032409
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x34050181
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x340501e5
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x34032c5d
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x34050d05
+ (id)persistentIDColumnForTable:(id)table;	// 0x34050b5d
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x3402c7dd
+ (id)predisambiguatedProperties;	// 0x34039c1d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x3403f03d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x34061dd9
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x340336d9
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms;	// 0x34061fc1
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms propertyToCount:(id)count;	// 0x3406204d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms usingSections:(BOOL)sections;	// 0x340620e9
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x34061e31
+ (id)replacerWithProperties:(id)properties databaseConnection:(id)connection;	// 0x340896c5
+ (int)revisionTrackingCode;	// 0x34050f71
+ (id)sectionPropertyForProperty:(id)property;	// 0x34050259
+ (id)subselectPropertyForProperty:(id)property;	// 0x3405017d
+ (id)subselectStatementForProperty:(id)property;	// 0x34039cc1
+ (id)unsettableProperties;	// 0x3404ea9d
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x3404eaed
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x34032065
- (void).cxx_destruct;	// 0x34032fa9
- (id)copyInLibrary:(id)library;	// 0x3404f4f9
- (id)copyWithZone:(NSZone *)zone;	// 0x3404f6dd
- (BOOL)deleteFromLibrary;	// 0x34050af5
- (id)description;	// 0x3404f819
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x3403dab9
// declared property getter: - (BOOL)existsInLibrary;	// 0x34032cb1
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x3403222d
- (unsigned)hash;	// 0x3404f809
- (void)incrementRevision;	// 0x3405106d
- (BOOL)isEqual:(id)equal;	// 0x3404f751
// declared property getter: - (id)library;	// 0x3403ca5d
- (BOOL)matchesPredicate:(id)predicate;	// 0x3404ff15
// declared property getter: - (long long)persistentID;	// 0x340510e1
// declared property setter: - (void)setLibrary:(id)library;	// 0x340510cd
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x3403b085
- (BOOL)setValues:(const id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x3403b0cd
- (BOOL)setValuesForPropertiesWithDictionary:(id)dictionary;	// 0x3403c8ad
- (id)valueForProperty:(id)property;	// 0x340321e5
@end
