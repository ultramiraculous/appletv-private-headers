/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVSettingsSaver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStore : XXUnknownSuperclass <ATVSettingsSaver> {
	sqlite3 *_db;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
	BOOL _usesCompression;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL usesCompression;	// G=0x1a0979; S=0x1a0989; @synthesize=_usesCompression
+ (id)_databaseDirectory;	// 0x1a1819
+ (id)defaultStore;	// 0x1a0475
+ (void)initialize;	// 0x1a03fd
- (id)initWithDomain:(id)domain;	// 0x1a0525
- (id)_databasePath;	// 0x1a1869
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1a2ad1
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1a3215
- (void)_dbDropAllTables;	// 0x1a33c5
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x1a2739
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x1a23f9
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x1a1fcd
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x1a1901
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1a153d
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x1a18ad
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x1a100d
- (void)addPathsToSaveTo:(id)to;	// 0x1a0925
- (void)dealloc;	// 0x1a088d
- (BOOL)deleteStoreCacheFile;	// 0x1a0e9d
- (id)objectForKey:(id)key;	// 0x1a0be9
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x1a0a71
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a0ad1
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x1a0aa1
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a0915
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1a0e15
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x1a0f41
- (void)setObject:(id)object forKey:(id)key;	// 0x1a0999
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a0a19
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x1a09f1
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a0905
// declared property setter: - (void)setUsesCompression:(BOOL)compression;	// 0x1a0989
// declared property getter: - (BOOL)usesCompression;	// 0x1a0979
@end

