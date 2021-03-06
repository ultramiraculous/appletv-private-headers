/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"
#import "MusicLibrary-Structs.h"

@class NSArray, NSString, ML3Predicate;

@interface ML3Container : ML3Entity {
}
@property(readonly, assign) NSArray *cloudDisplayOrderingTerms;	// G=0x305c99c9; 
@property(readonly, assign) NSArray *displayOrderingTerms;	// G=0x305c9a45; 
@property(readonly, assign) ML3Predicate *dynamicPredicate;	// G=0x305c9595; 
@property(readonly, assign, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;	// G=0x305c9695; 
@property(readonly, assign) NSArray *limitOrderingTerms;	// G=0x305c9885; 
@property(readonly, assign) long long limitValue;	// G=0x305c9901; 
@property(readonly, assign, getter=isLimitedByCount) BOOL limitedByCount;	// G=0x305c9649; 
@property(readonly, assign) NSString *limitingProperty;	// G=0x305c9781; 
@property(readonly, assign) ML3Predicate *staticPredicate;	// G=0x305c9539; 
+ (void)_insertNewSmartPlaylist:(id)playlist criteriaBlob:(id)blob evaluationOrder:(unsigned long)order limited:(BOOL)limited trackOrder:(unsigned long)order5 distinguishedKind:(int)kind inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x305c8351
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)smartPlaylistsPIDs;	// 0x305c8f29
+ (BOOL)createMissingBuiltInSmartPlaylists:(id)smartPlaylists;	// 0x305c877d
+ (id)databaseTable;	// 0x30598159
+ (id)defaultOrderingProperties;	// 0x3059d5b9
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)smartPlaylistsPIDs inLibrary:(id)library;	// 0x305c9271
+ (id)extraTablesToDelete;	// 0x305c6e99
+ (id)foreignColumnForProperty:(id)property;	// 0x305c6e7d
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x305c6e61
+ (BOOL)hasCriterionInCriteriaList:(SearchCriteriaList *)criteriaList forITDBTrackField:(int)itdbtrackField;	// 0x305c7fc1
+ (void)initialize;	// 0x30596635
+ (id)joinClausesForProperty:(id)property;	// 0x305980d1
+ (id)nextFilepathForPlaylistType:(int)playlistType withPersistentID:(unsigned long long)persistentID inLibrary:(id)library;	// 0x305c6ec5
+ (id)persistentIDColumnForTable:(id)table;	// 0x305c6ea9
+ (void)populateDynamicContainersInLibrary:(id)library;	// 0x305ca775
+ (void)populateDynamicContainersInLibrary:(id)library createBuiltinSmartPlaylists:(BOOL)playlists;	// 0x305ca799
+ (void)populateDynamicContainersWithTrackPersistentID:(id)trackPersistentID inLibrary:(id)library;	// 0x305ca7bd
+ (void)populateDynamicContainersWithTrackPersistentID:(id)trackPersistentID inLibrary:(id)library createBuiltinSmartPlaylists:(BOOL)playlists;	// 0x305ca7f5
+ (void)populateSortOrdersOfPropertyValues:(id)propertyValues inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x305c70b1
+ (void)populateStaticItemsOfDynamicContainersInLibrary:(id)library;	// 0x305c9ecd
+ (id)predicateForCriteriaList:(SearchCriteriaList *)criteriaList dynamicCriteria:(BOOL)criteria;	// 0x305c8071
+ (int)revisionTrackingCode;	// 0x305c6e41
+ (id)sectionPropertyForProperty:(id)property;	// 0x305c6e45
+ (BOOL)smartCriteriaCanBeEvaluated:(id)evaluated;	// 0x305c700d
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x305c7301
- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)block;	// 0x305cb2b5
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)ids size:(int)size;	// 0x305cb26d
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)ids size:(int)size notify:(BOOL)notify;	// 0x305caf81
- (BOOL)addTrackWithPersistentID:(long long)persistentID;	// 0x305cbff9
- (BOOL)addTracksWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count;	// 0x305cc025
- (BOOL)addTracksWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count notify:(BOOL)notify;	// 0x305cc049
- (void)bindPopulateStatement:(id)statement withStaticTrackPersistentID:(id)staticTrackPersistentID;	// 0x305c9e41
// declared property getter: - (id)cloudDisplayOrderingTerms;	// 0x305c99c9
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x305c7e39
// declared property getter: - (id)displayOrderingTerms;	// 0x305c9a45
// declared property getter: - (id)dynamicPredicate;	// 0x305c9595
- (id)evaluationOrderingTerms;	// 0x305c9809
- (SearchCriteriaList *)importedCriteriaList;	// 0x305c94a5
- (BOOL)isCustomContainerOrderingDescending;	// 0x305c9735
- (BOOL)isEvaluationOrderingDescending;	// 0x305c95f1
// declared property getter: - (BOOL)isLimitOrderingDescending;	// 0x305c9695
// declared property getter: - (BOOL)isLimitedByCount;	// 0x305c9649
// declared property getter: - (id)limitOrderingTerms;	// 0x305c9885
// declared property getter: - (long long)limitValue;	// 0x305c9901
// declared property getter: - (id)limitingProperty;	// 0x305c9781
- (BOOL)moveTrackFromIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x305cc415
- (id)populateSQLWithStaticTrackPersistentID:(id)staticTrackPersistentID;	// 0x305c9c49
- (BOOL)removeAllTracks;	// 0x305cb291
- (BOOL)removeTracksAtIndexes:(id)indexes;	// 0x305cbe6d
- (BOOL)removeTracksAtIndexes:(id)indexes notify:(BOOL)notify;	// 0x305cbe49
- (BOOL)removeTracksAtIndexes:(id)indexes notify:(BOOL)notify indexesTransformBlock:(id)block;	// 0x305cb625
- (BOOL)removeTracksWithPersistentIDs:(const long long *)persistentIDs atFilteredIndexes:(id)filteredIndexes;	// 0x305cbe8d
- (BOOL)setContainsTrack:(BOOL)track forPersistentID:(long long)persistentID notify:(BOOL)notify;	// 0x305cbb49
- (BOOL)setTracksWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count;	// 0x305cc855
- (BOOL)setTracksWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count notify:(BOOL)notify;	// 0x305cc879
- (BOOL)setTracksWithSwappedPersistentIDData:(id)swappedPersistentIDData;	// 0x305ccbf1
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x305c7959
// declared property getter: - (id)staticPredicate;	// 0x305c9539
@end

