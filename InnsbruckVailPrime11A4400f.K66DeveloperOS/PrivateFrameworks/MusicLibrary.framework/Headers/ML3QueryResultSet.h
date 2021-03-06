/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class ML3Query, ML3QueryResultSet_BackingStore, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ML3QueryResultSet : NSObject <NSCopying> {
	ML3QueryResultSet_BackingStore *_backingStore;	// 4 = 0x4
	ML3Query *_query;	// 8 = 0x8
	long long _revision;	// 12 = 0xc
	BOOL _supportsIncrementalUpdate;	// 20 = 0x14
	NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_queue;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31511485; 
@property(readonly, assign, nonatomic) ML3Query *query;	// G=0x31510df9; @synthesize=_query
@property(readonly, assign, nonatomic) long long revision;	// G=0x315886b9; @synthesize=_revision
- (id)initWithQuery:(id)query;	// 0x3150ef49
- (void).cxx_destruct;	// 0x31514e99
- (id)_initWithQuery:(id)query supportsIncrementalUpdate:(BOOL)update;	// 0x3150f22d
- (void)_loadCurrentFullResults;	// 0x3150fd49
- (void)_mergeChangesWithFromNewPIDs:(const vector<long long, std::__1::allocator<long long> > *)newPIDs changedPIDs:(unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > *)pids;	// 0x315870a5
- (void)_onQueueAddUpdateFinishedBlock:(id)block;	// 0x3150f78d
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)_onQueueInvokeAndClearUpdateFinishedBlocksWith;	// 0x31510c15
- (BOOL)_updateToLibraryCurrentRevision;	// 0x3150f999
- (id)copyWithZone:(NSZone *)zone;	// 0x31510d35
// declared property getter: - (unsigned)count;	// 0x31511485
- (unsigned)entityLimit;	// 0x315886b1
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x31588689
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x31510e3d
- (long long)persistentIDAtIndex:(unsigned)index;	// 0x315114bd
// declared property getter: - (id)query;	// 0x31510df9
// declared property getter: - (long long)revision;	// 0x315886b9
- (BOOL)updateToLibraryCurrentRevision;	// 0x3150f6c9
@end

