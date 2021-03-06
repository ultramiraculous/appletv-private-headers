/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

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
@property(assign) BOOL closed;	// G=0x3392e9fd; S=0x3392ea0d; 
@property(retain, nonatomic) GEOTileDBMRU *tileDBMRU;	// G=0x3392f5f5; S=0x3392f605; @synthesize=_tileDBMRU
- (id)initWithPath:(id)path;	// 0x3392e3f1
- (void)_closeDB;	// 0x3392e809
- (id)_dataForKey:(GEOTileKey)key;	// 0x3392eab9
- (void)_databaseReset:(id)reset;	// 0x3392e669
- (void)_deviceLocking;	// 0x3392e761
- (void)_editionUpdateBegin:(id)begin;	// 0x3392e7dd
- (void)_editionUpdateEnd:(id)end;	// 0x3392e7f1
- (void)_openDB;	// 0x3392e85d
// declared property getter: - (BOOL)closed;	// 0x3392e9fd
- (id)dataForKey:(GEOTileKey *)key;	// 0x3392ed05
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x3392eef1
- (void)dataForKeys:(id)keys asyncHandler:(id)handler;	// 0x3392f111
- (void)dealloc;	// 0x3392e59d
// declared property setter: - (void)setClosed:(BOOL)closed;	// 0x3392ea0d
- (void)setExpirationRecords:(XXStruct_nbUehC *)records count:(unsigned)count;	// 0x3392f539
// declared property setter: - (void)setTileDBMRU:(id)dbmru;	// 0x3392f605
// declared property getter: - (id)tileDBMRU;	// 0x3392f5f5
@end

