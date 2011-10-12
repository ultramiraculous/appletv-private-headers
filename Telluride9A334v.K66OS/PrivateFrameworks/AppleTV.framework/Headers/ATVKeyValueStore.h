/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ATVKeyValueStore : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	dispatch_queue_s *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
+ (id)defaultStore;	// 0x331535b5
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x331558fd
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x33155fc5
- (void)_dbDropAllWithCompletionHandler:(id)completionHandler;	// 0x33156141
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x331555bd
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x331552d1
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x33154eb5
- (id)_initWithDomain:(id)domain withCacheFilename:(id)cacheFilename;	// 0x33153d61
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x33154881
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x331545b5
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x33154839
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x331540fd
- (void)dealloc;	// 0x33153695
- (id)objectForKey:(id)key;	// 0x33153969
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x33153809
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x33153851
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x3315382d
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x3315371d
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x33153c29
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x33153ccd
- (void)setObject:(id)object forKey:(id)key;	// 0x3315372d
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x331537ad
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x33153789
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x3315370d
@end

