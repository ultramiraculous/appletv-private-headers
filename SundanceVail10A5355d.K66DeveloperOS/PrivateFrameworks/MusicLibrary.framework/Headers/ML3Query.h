/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, ML3AggregateQuery, ML3MusicLibrary, NSString, ML3Predicate;

@interface ML3Query : NSObject <NSCoding> {
	ML3MusicLibrary *_library;	// 4 = 0x4
	Class _entityClass;	// 8 = 0x8
	ML3Predicate *_predicate;	// 12 = 0xc
	NSArray *_orderingTerms;	// 16 = 0x10
	NSString *_propertyToCount;	// 20 = 0x14
	ML3AggregateQuery *_nonDirectAggregateQuery;	// 24 = 0x18
	BOOL _usingSections;	// 28 = 0x1c
	BOOL _filtersOnDynamicProperties;	// 29 = 0x1d
}
@property(readonly, assign) unsigned countOfEntities;	// G=0x3545171d; 
@property(readonly, assign) BOOL distinctPersistentIDProperty;	// G=0x35447b59; 
@property(readonly, assign) Class entityClass;	// G=0x3544f789; @synthesize=_entityClass
@property(readonly, assign) BOOL filtersOnDynamicProperties;	// G=0x3547a829; @synthesize=_filtersOnDynamicProperties
@property(readonly, assign) BOOL hasEntities;	// G=0x35450075; 
@property(readonly, assign) ML3MusicLibrary *library;	// G=0x354484e1; @synthesize=_library
@property(readonly, assign) ML3AggregateQuery *nonDirectAggregateQuery;	// G=0x3547a815; @synthesize=_nonDirectAggregateQuery
@property(readonly, assign) NSArray *orderingTerms;	// G=0x3547a7ed; @synthesize=_orderingTerms
@property(readonly, assign) NSString *persistentIDProperty;	// G=0x35447b81; 
@property(readonly, assign) ML3Predicate *predicate;	// G=0x35450ded; @synthesize=_predicate
@property(readonly, assign) NSString *propertyToCount;	// G=0x3547a801; @synthesize=_propertyToCount
@property(readonly, assign) NSString *sectionProperty;	// G=0x3544f1c5; 
@property(readonly, assign) NSString *selectCountSQL;	// G=0x3547a679; 
@property(readonly, assign) NSString *selectPersistentIDsSQL;	// G=0x3547a465; 
@property(readonly, assign) BOOL usingSections;	// G=0x35450e01; @synthesize=_usingSections
- (id)initWithCoder:(id)coder;	// 0x35476e5d
- (id)initWithLibrary:(id)library entityClass:(Class)aClass predicate:(id)predicate orderingTerms:(id)terms usingSections:(BOOL)sections nonDirectAggregateQuery:(id)query propertyToCount:(id)count;	// 0x35476ced
- (void).cxx_destruct;	// 0x3547a841
- (void)bindToCountStatement:(id)countStatement bindingIndex:(inout int *)index;	// 0x3547a7cd
- (void)bindToLowerBoundStatement:(id)lowerBoundStatement bindingIndex:(inout int *)index orderingTerms:(id)terms lowerBoundPersistentID:(long long)anId;	// 0x35479421
- (void)bindToPersistentIDsStatement:(id)persistentIDsStatement bindingIndex:(inout int *)index;	// 0x3547a659
- (void)bindToSectionsStatement:(id)sectionsStatement bindingIndex:(inout int *)index;	// 0x3547a431
- (unsigned)countOfDistinctRowsForColumn:(id)column;	// 0x354776e9
// declared property getter: - (unsigned)countOfEntities;	// 0x3545171d
- (BOOL)deleteAllEntitiesFromLibrary;	// 0x354779f9
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)deletionType;	// 0x35477a11
- (id)description;	// 0x354773c9
// declared property getter: - (BOOL)distinctPersistentIDProperty;	// 0x35447b59
- (void)encodeWithCoder:(id)coder;	// 0x35476fed
// declared property getter: - (Class)entityClass;	// 0x3544f789
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered cancelBlock:(id)block usingBlock:(id)block5;	// 0x35447999
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered usingBlock:(id)block;	// 0x35447969
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 usingBlock:(id)block;	// 0x3544f79d
- (void)enumeratePersistentIDsAndProperties:(id)properties usingBlock:(id)block;	// 0x354783f1
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x35450495
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x3544ed7d
// declared property getter: - (BOOL)filtersOnDynamicProperties;	// 0x3547a829
// declared property getter: - (BOOL)hasEntities;	// 0x35450075
- (BOOL)hasRowForColumn:(id)column;	// 0x35477461
- (BOOL)isEqual:(id)equal;	// 0x35477155
// declared property getter: - (id)library;	// 0x354484e1
// declared property getter: - (id)nonDirectAggregateQuery;	// 0x3547a815
// declared property getter: - (id)orderingTerms;	// 0x3547a7ed
// declared property getter: - (id)persistentIDProperty;	// 0x35447b81
// declared property getter: - (id)predicate;	// 0x35450ded
// declared property getter: - (id)propertyToCount;	// 0x3547a801
// declared property getter: - (id)sectionProperty;	// 0x3544f1c5
- (id)sections;	// 0x35477949
// declared property getter: - (id)selectCountSQL;	// 0x3547a679
// declared property getter: - (id)selectPersistentIDsSQL;	// 0x3547a465
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x35447b5d
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered distinct:(BOOL)distinct;	// 0x3547a479
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by;	// 0x3544f825
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by distinct:(BOOL)distinct;	// 0x354792a1
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms;	// 0x354793b5
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms directionality:(id)directionality usingLowerBound:(BOOL)bound;	// 0x354793ed
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms directionality:(id)directionality usingLowerBound:(BOOL)bound distinct:(BOOL)distinct limit:(unsigned)limit;	// 0x35479acd
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms;	// 0x3547931d
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms directionality:(id)directionality;	// 0x354792e9
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms distinct:(BOOL)distinct;	// 0x35479381
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms limit:(unsigned)limit;	// 0x3547934d
- (id)selectSectionsSQLWithDistinctPersistentIDProperty:(BOOL)distinctPersistentIDProperty;	// 0x3544efcd
- (id)selectUnorderedPersistentIDsSQL;	// 0x3547a451
// declared property getter: - (BOOL)usingSections;	// 0x35450e01
- (id)valueForAggregateFunction:(id)aggregateFunction onEntitiesForProperty:(id)property;	// 0x35478f5d
@end

