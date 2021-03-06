/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOTileDBMRU, NSString;
@protocol OS_dispatch_queue;

@interface GEOTileDBReader : NSObject {
	BOOL _defunct;	// 4 = 0x4
	BOOL _closed;	// 5 = 0x5
	int _editionUpdating;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_readQueue;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	sqlite3 *_db;	// 20 = 0x14
	sqlite3_stmt *_tileQuery;	// 24 = 0x18
	sqlite3_stmt *_versionQuery;	// 28 = 0x1c
	GEOTileDBMRU *_tileDBMRU;	// 32 = 0x20
	XXStruct_nbUehC *_expirationRecords;	// 36 = 0x24
	unsigned _expirationRecordCount;	// 40 = 0x28
}
@property(assign) BOOL closed;	// G=0x37a0dd85; S=0x37a0dd95; 
@property(retain, nonatomic) GEOTileDBMRU *tileDBMRU;	// G=0x37a0e97d; S=0x37a0e98d; @synthesize=_tileDBMRU
- (id)initWithPath:(id)path;	// 0x37a0d779
- (void)_closeDB;	// 0x37a0db91
- (id)_dataForKey:(GEOTileKey)key;	// 0x37a0de41
- (void)_databaseReset:(id)reset;	// 0x37a0d9f1
- (void)_deviceLocking;	// 0x37a0dae9
- (void)_editionUpdateBegin:(id)begin;	// 0x37a0db65
- (void)_editionUpdateEnd:(id)end;	// 0x37a0db79
- (void)_openDB;	// 0x37a0dbe5
// declared property getter: - (BOOL)closed;	// 0x37a0dd85
- (id)dataForKey:(GEOTileKey *)key;	// 0x37a0e08d
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x37a0e279
- (void)dataForKeys:(id)keys asyncHandler:(id)handler;	// 0x37a0e499
- (void)dealloc;	// 0x37a0d925
// declared property setter: - (void)setClosed:(BOOL)closed;	// 0x37a0dd95
- (void)setExpirationRecords:(XXStruct_nbUehC *)records count:(unsigned)count;	// 0x37a0e8c1
// declared property setter: - (void)setTileDBMRU:(id)dbmru;	// 0x37a0e98d
// declared property getter: - (id)tileDBMRU;	// 0x37a0e97d
@end

