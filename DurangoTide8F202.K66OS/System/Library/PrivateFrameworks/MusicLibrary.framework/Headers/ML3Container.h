/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"
#import "MusicLibrary-Structs.h"

@class NSString, NSArray, ML3Predicate;

@interface ML3Container : ML3Entity {
}
@property(readonly, assign) ML3Predicate *dynamicPredicate;	// G=0x3181dcc1; 
@property(readonly, assign, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;	// G=0x3181c599; 
@property(readonly, assign) NSArray *limitOrderingDirectionality;	// G=0x3181c491; 
@property(readonly, assign) NSArray *limitOrderingProperties;	// G=0x3181c4d9; 
@property(readonly, assign) long long limitValue;	// G=0x3181c3f9; 
@property(readonly, assign, getter=isLimitedByCount) BOOL limitedByCount;	// G=0x3181c625; 
@property(readonly, assign) NSString *limitingProperty;	// G=0x3181c51d; 
@property(readonly, assign) ML3Predicate *staticPredicate;	// G=0x3181dd0d; 
+ (id)databaseTable;	// 0x317e11ad
+ (id)defaultOrderingProperties;	// 0x317eb7b9
+ (id)extraTablesToDelete;	// 0x3181bfd9
+ (id)foreignColumnForProperty:(id)property;	// 0x317eccf1
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x317eccd1
+ (BOOL)hasCriterionInCriteriaList:(OpaqueSearchCriteriaList *)criteriaList forITDBTrackField:(int)itdbtrackField;	// 0x3181ee95
+ (void)initialize;	// 0x317dfe71
+ (id)joinClauseForProperty:(id)property;	// 0x317e118d
+ (id)nextFilepathForPlaylistType:(int)playlistType withPersistentID:(unsigned long long)persistentID inLibrary:(id)library;	// 0x317ec95d
+ (id)persistentIDColumnForTable:(id)table;	// 0x3181c729
+ (void)populateDynamicContainersWithTrackPersistentID:(id)trackPersistentID inLibrary:(id)library;	// 0x3181c17d
+ (void)populateStaticItemsOfDynamicContainersOnHandle:(sqlite3 *)dynamicContainersOnHandle;	// 0x3181f0d5
+ (id)predicateForCriteriaList:(OpaqueSearchCriteriaList *)criteriaList dynamicCriteria:(BOOL)criteria;	// 0x3181ef3d
+ (id)sectionPropertyForProperty:(id)property;	// 0x3181c749
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x317ec5dd
- (BOOL)_computeBeginPhysicalOrder:(long long *)order andIncrement:(long long *)increment forCount:(unsigned)count afterPhysicalOrder:(long long)order4 forceReorder:(BOOL)reorder;	// 0x3181cb4d
- (BOOL)_insertTracksWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count afterPhysicalOrder:(long long)order insertedPhysicalOrdersOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut5 forceReorder:(BOOL)reorder;	// 0x3181e1f5
- (BOOL)_isDescendingForTrackOrderProperty:(id)trackOrderProperty reverseOrderProperty:(id)property;	// 0x3181c5c1
- (BOOL)_removeTrackAtPhysicalOrderNoSave:(long long)physicalOrderNoSave;	// 0x3181ca2d
- (BOOL)addTrackWithPersistentID:(long long)persistentID;	// 0x3181c0e1
- (BOOL)addTrackWithPersistentID:(long long)persistentID insertedPhysicalOrderOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut3;	// 0x3181cd59
- (void)bindPopulateStatement:(sqlite3_stmt *)statement withStaticTrackPersistentID:(id)staticTrackPersistentID;	// 0x3181d885
- (BOOL)deleteFromLibrary;	// 0x3181d1a5
// declared property getter: - (id)dynamicPredicate;	// 0x3181dcc1
- (void)getDisplayOrderingProperties:(id *)properties isDescending:(BOOL *)descending;	// 0x3181c311
- (OpaqueSearchCriteriaList *)importedCriteriaList;	// 0x3181dc55
- (BOOL)insertTrackWithPersistentID:(long long)persistentID afterPhysicalOrder:(long long)order;	// 0x3181c0b1
- (BOOL)insertTrackWithPersistentID:(long long)persistentID afterPhysicalOrder:(long long)order insertedPhysicalOrderOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut4;	// 0x3181c07d
- (BOOL)insertTracksWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count afterPhysicalOrder:(long long)order insertedPhysicalOrdersOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut5;	// 0x3181c041
- (BOOL)isCustomContainerOrderingDescending;	// 0x3181c571
// declared property getter: - (BOOL)isLimitOrderingDescending;	// 0x3181c599
// declared property getter: - (BOOL)isLimitedByCount;	// 0x3181c625
// declared property getter: - (id)limitOrderingDirectionality;	// 0x3181c491
// declared property getter: - (id)limitOrderingProperties;	// 0x3181c4d9
// declared property getter: - (long long)limitValue;	// 0x3181c3f9
// declared property getter: - (id)limitingProperty;	// 0x3181c51d
- (BOOL)moveTrackFromPhysicalOrder:(long long)physicalOrder toAfterPhysicalOrder:(long long)afterPhysicalOrder;	// 0x3181bfe5
- (BOOL)moveTrackFromPhysicalOrder:(long long)physicalOrder toAfterPhysicalOrder:(long long)afterPhysicalOrder insertedPhysicalOrderOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut4;	// 0x3181c855
- (long long)nextPhysicalOrderAfterPhysicalOrder:(long long)order;	// 0x3181cca5
- (id)populateSQLWithStaticTrackPersistentID:(id)staticTrackPersistentID;	// 0x3181dd59
- (void)removeAllTracks;	// 0x3181c109
- (void)removeTrackAtPhysicalOrder:(long long)physicalOrder;	// 0x3181c015
- (void)setNeedsSave;	// 0x3181ce41
- (void)setValue:(id)value forProperty:(id)property;	// 0x3181d529
// declared property getter: - (id)staticPredicate;	// 0x3181dd0d
@end

