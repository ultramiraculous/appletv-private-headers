/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import "AppleTV-Structs.h"
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
@property(assign, nonatomic) BOOL usesCompression;	// G=0x1b0919; S=0x1b0929; @synthesize=_usesCompression
+ (id)_databaseDirectory;	// 0x1b180d
+ (id)defaultStore;	// 0x1b0415
+ (void)initialize;	// 0x1b039d
- (id)initWithDomain:(id)domain;	// 0x1b04c5
- (id)_databasePath;	// 0x1b185d
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1b2ac5
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1b3209
- (void)_dbDropAllTables;	// 0x1b33b9
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x1b272d
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x1b23ed
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x1b1fc1
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x1b18f5
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1b14dd
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x1b18a1
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x1b0fad
- (void)addPathsToSaveTo:(id)to;	// 0x1b08c5
- (void)dealloc;	// 0x1b082d
- (BOOL)deleteStoreCacheFile;	// 0x1b0e3d
- (id)objectForKey:(id)key;	// 0x1b0b89
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x1b0a11
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1b0a71
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x1b0a41
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1b08b5
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1b0db5
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x1b0ee1
- (void)setObject:(id)object forKey:(id)key;	// 0x1b0939
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1b09b9
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x1b0991
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1b08a5
// declared property setter: - (void)setUsesCompression:(BOOL)compression;	// 0x1b0929
// declared property getter: - (BOOL)usesCompression;	// 0x1b0919
@end

