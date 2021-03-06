/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, GEOTileDBMRU, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface GEOTileDBWriter : NSObject {
	NSString *_path;	// 4 = 0x4
	sqlite3 *_db;	// 8 = 0x8
	sqlite3_stmt *_versionQuery;	// 12 = 0xc
	sqlite3_stmt *_versionInsert;	// 16 = 0x10
	sqlite3_stmt *_editionQuery;	// 20 = 0x14
	sqlite3_stmt *_editionDelete;	// 24 = 0x18
	sqlite3_stmt *_editionUpdate;	// 28 = 0x1c
	sqlite3_stmt *_tileInsert;	// 32 = 0x20
	sqlite3_stmt *_tileDelete;	// 36 = 0x24
	sqlite3_stmt *_tileSize;	// 40 = 0x28
	sqlite3_stmt *_sizeQuery;	// 44 = 0x2c
	long long _lastRowID;	// 48 = 0x30
	unsigned long long _databaseSize;	// 56 = 0x38
	unsigned long long _maxDatabaseSize;	// 64 = 0x40
	BOOL _closed;	// 72 = 0x48
	BOOL _defunct;	// 73 = 0x49
	NSMutableArray *_writeList;	// 76 = 0x4c
	NSMutableSet *_uncommitedWriteSet;	// 80 = 0x50
	unsigned _pendingWriteBytes;	// 84 = 0x54
	NSLock *_writeListLock;	// 88 = 0x58
	NSObject<OS_dispatch_queue> *_writeQueue;	// 92 = 0x5c
	void *_editionMap;	// 96 = 0x60
	long long _evictionRowsThreshold;	// 100 = 0x64
	GEOTileDBMRU *_tileDBMRU;	// 108 = 0x6c
	XXStruct_nbUehC *_expirationRecords;	// 112 = 0x70
	unsigned _expirationRecordCount;	// 116 = 0x74
	BOOL _preloading;	// 120 = 0x78
	double _lastCheckedGeneralExpiration;	// 124 = 0x7c
}
@property(assign) BOOL closed;	// G=0x34162a51; S=0x34162969; 
@property(readonly, assign, nonatomic) unsigned long long databaseSize;	// G=0x34165439; @synthesize=_databaseSize
@property(assign, nonatomic) unsigned long long maxDatabaseSize;	// G=0x34165451; S=0x34165469; @synthesize=_maxDatabaseSize
@property(readonly, assign, nonatomic) NSString *path;	// G=0x34165409; @synthesize=_path
@property(retain, nonatomic) GEOTileDBMRU *tileDBMRU;	// G=0x34165419; S=0x34165429; @synthesize=_tileDBMRU
- (id)initWithPath:(id)path;	// 0x34161519
- (void)_assertDatabaseSize;	// 0x3416248d
- (void)_closeDB;	// 0x34161edd
- (void)_createTables;	// 0x34161fe9
- (unsigned long long)_dbFileSize;	// 0x341638d5
- (void)_deleteKey:(GEOTileKey)key;	// 0x34164b09
- (void)_deviceLocked;	// 0x341617f9
- (void)_editionUpdate:(id)update;	// 0x341618a5
- (void)_evict;	// 0x34163bdd
- (void)_localeChanged:(id)changed;	// 0x34161769
- (void)_openDBForceRecreate:(BOOL)recreate;	// 0x34162491
- (void)_openIfNecessary;	// 0x34162941
- (void)_performWrites:(BOOL)writes;	// 0x34164255
- (void)_prepareStatements;	// 0x3416205d
- (void)_printDBStatus:(const char *)status;	// 0x34162a61
- (BOOL)_readEditions;	// 0x34162375
- (void)_shrinkToUnderSize:(unsigned long long)underSize vacuum:(BOOL)vacuum;	// 0x34162b01
- (BOOL)_tileSetExpires:(unsigned)expires;	// 0x34163c11
- (void)_updateEdition:(unsigned)edition forTileset:(unsigned)tileset provider:(unsigned)provider;	// 0x34163f35
- (void)_updateSize;	// 0x34162445
- (void)_writeEntry:(id)entry;	// 0x34163c5d
- (void)_writeVersion;	// 0x341622f5
- (void)addTile:(id)tile forKey:(GEOTileKey *)key edition:(unsigned)edition tileSet:(unsigned)set;	// 0x34164649
- (void)beginPreloadSessionOfSize:(unsigned long long)size;	// 0x34165145
// declared property getter: - (BOOL)closed;	// 0x34162a51
// declared property getter: - (unsigned long long)databaseSize;	// 0x34165439
- (void)dealloc;	// 0x341652e5
- (void)deleteTile:(const GEOTileKey *)tile;	// 0x34164d9d
- (void)endPreloadSession;	// 0x34165269
- (void)flushPendingWrites;	// 0x34161e4d
// declared property getter: - (unsigned long long)maxDatabaseSize;	// 0x34165451
// declared property getter: - (id)path;	// 0x34165409
- (id)pendingWriteForKey:(GEOTileKey *)key;	// 0x341647e9
- (void)pendingWritesForKeys:(id)keys handler:(id)handler;	// 0x3416495d
// declared property setter: - (void)setClosed:(BOOL)closed;	// 0x34162969
- (void)setExpirationRecords:(XXStruct_nbUehC *)records count:(unsigned)count;	// 0x34165089
// declared property setter: - (void)setMaxDatabaseSize:(unsigned long long)size;	// 0x34165469
// declared property setter: - (void)setTileDBMRU:(id)dbmru;	// 0x34165429
- (void)shrinkToSize:(unsigned long long)size finished:(id)finished;	// 0x3416392d
// declared property getter: - (id)tileDBMRU;	// 0x34165419
@end

