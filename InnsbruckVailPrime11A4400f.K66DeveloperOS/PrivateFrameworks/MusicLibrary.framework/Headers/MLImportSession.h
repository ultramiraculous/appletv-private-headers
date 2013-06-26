/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import </libobjc.A.h>

@class MLMediaLibraryServiceStatementAccumulator, ML3MusicLibrary, ML3DatabaseConnection, NSDictionary, ML3SortMap, NSCache;

@interface MLImportSession : NSObject {
	ML3DatabaseConnection *_readerConnection;	// 4 = 0x4
	MLMediaLibraryServiceStatementAccumulator *_accumulator;	// 8 = 0x8
	ML3SortMap *_sortMap;	// 12 = 0xc
	unordered_map<long long, CollectionPIDSet, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, CollectionPIDSet> > > collectionPIDSetForTrackPID;	// 16 = 0x10
	struct {
		unsigned addCount;
		unsigned updateCount;
		unsigned deleteCount;
		double importStartTime;
	} _stats;	// 36 = 0x24
	int _sourceType;	// 56 = 0x38
	BOOL _rebuildIndexes;	// 60 = 0x3c
	NSCache *_artistPIDsForGroupingKeys;	// 64 = 0x40
	NSCache *_albumArtistPIDsForGroupingKeys;	// 68 = 0x44
	NSCache *_composerPIDsForGroupingKeys;	// 72 = 0x48
	NSCache *_genrePIDsForGroupingKeys;	// 76 = 0x4c
	NSCache *_albumDataForGroupingIdentifier;	// 80 = 0x50
	vector<MLRowDataSource *, std::__1::allocator<MLRowDataSource *> > _rowDataSources;	// 84 = 0x54
	ML3MusicLibrary *_library;	// 96 = 0x60
	ML3DatabaseConnection *_connection;	// 100 = 0x64
	NSDictionary *_cachedNameOrders;	// 104 = 0x68
}
@property(retain, nonatomic) NSDictionary *cachedNameOrders;	// G=0x31599055; S=0x31599065; @synthesize=_cachedNameOrders
@property(retain, nonatomic) ML3DatabaseConnection *connection;	// G=0x3159901d; S=0x3159902d; @synthesize=_connection
@property(retain, nonatomic) ML3MusicLibrary *library;	// G=0x31598fe5; S=0x31598ff5; @synthesize=_library
- (id)initWithLibrary:(id)library onConnection:(id)connection;	// 0x31591385
- (id).cxx_construct;	// 0x31599199
- (void).cxx_destruct;	// 0x3159908d
- (id)_albumArtistGroupingNameFromDataSource:(id)dataSource;	// 0x31594dd5
- (long long)_albumArtistPIDForTrack:(id)track;	// 0x31595d85
- (id)_albumGroupingIdentifierWithAlbumArtistPersistentID:(long long)albumArtistPersistentID withTrack:(id)track;	// 0x315962fd
- (long long)_albumPIDForTrack:(id)track albumArtistPID:(long long)pid isUpdate:(BOOL)update;	// 0x31596a71
- (id)_artistGroupingNameFromDataSource:(id)dataSource;	// 0x31594c99
- (long long)_artistPIDForTrack:(id)track;	// 0x31595571
- (id)_composerGroupingNameFromDataSource:(id)dataSource;	// 0x31594fb1
- (long long)_composerPIDForTrack:(id)track;	// 0x31597f8d
- (id)_existingAlbumStateForGroupingIdentifier:(id)groupingIdentifier;	// 0x31596551
- (id)_existingCollectionPidForTable:(id)table groupingKey:(id)key;	// 0x31595009
- (id)_generateInsertionSQLWithInsertPart:(id)insertPart numberOfValues:(unsigned)values;	// 0x31595345
- (id)_genreGroupingNameFromDataSource:(id)dataSource;	// 0x31594fdd
- (long long)_genrePIDForTrack:(id)track;	// 0x315984d1
- (id)_insertIntoAlbumArtistSQL;	// 0x315954b1
- (id)_insertIntoAlbumSQL;	// 0x315954e1
- (id)_insertIntoComposerSQL;	// 0x31595511
- (id)_insertIntoGenreSQL;	// 0x31595541
- (id)_insertIntoItemArtistSQL;	// 0x31595481
- (long long)_locationKindPIDForTrack:(id)track;	// 0x31598995
- (void)_populateNameOrderWithNameOrderForPIDMap:(unordered_map<long long, ML3NameOrder, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, ML3NameOrder> > > *)pidmap tableName:(id)name nameSQL:(id)sql;	// 0x31598b91
- (void)_populatePidForGroupingKey:(id)groupingKey groupingName:(id)name databaseTable:(id)table;	// 0x315934d1
- (BOOL)_prepareCollectionsForTrack:(id)track isUpdate:(BOOL)update;	// 0x315930a1
- (BOOL)_prepareSortDataForTrack:(id)track isUpdate:(BOOL)update;	// 0x31592a5d
- (BOOL)_updateAlbumEntry:(id)entry albumArtistPID:(long long)pid albumPid:(long long)pid3;	// 0x3159781d
- (BOOL)_updateTrackData:(id)data isUpdate:(BOOL)update;	// 0x3159243d
- (BOOL)addTrack:(id)track;	// 0x3159218d
- (BOOL)begin;	// 0x31591d45
- (BOOL)begin:(unsigned)begin;	// 0x31591d5d
// declared property getter: - (id)cachedNameOrders;	// 0x31599055
- (XXStruct_Jd0CAB)collectionPIDSetForTrackPID:(long long)trackPID;	// 0x31591ce5
// declared property getter: - (id)connection;	// 0x3159901d
- (void)dealloc;	// 0x31591aad
- (BOOL)finish;	// 0x315938a1
- (int)importLogLevel;	// 0x31591c29
// declared property getter: - (id)library;	// 0x31598fe5
- (long long)persistentIdentifierForItem:(id)item existing:(BOOL *)existing;	// 0x31594901
- (BOOL)removeSource:(int)source fromTracksWithPersistentIDs:(id)persistentIDs;	// 0x31593c25
- (BOOL)removeTrack:(id)track;	// 0x31593689
// declared property setter: - (void)setCachedNameOrders:(id)orders;	// 0x31599065
// declared property setter: - (void)setConnection:(id)connection;	// 0x3159902d
// declared property setter: - (void)setLibrary:(id)library;	// 0x31598ff5
- (BOOL)updateCollectionRepresentativePIDs;	// 0x315946e1
- (BOOL)updateEntityRevisionTable;	// 0x315942f1
- (BOOL)updateTrack:(id)track;	// 0x315922e5
@end
