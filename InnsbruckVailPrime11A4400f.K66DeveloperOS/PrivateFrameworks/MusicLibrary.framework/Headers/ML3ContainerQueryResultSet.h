/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3QueryResultSet.h"

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {
	BOOL _needsSorting;	// 32 = 0x20
	BOOL _needsReversing;	// 33 = 0x21
	ML3QueryResultSet_BackingStore *_sortedBackingStore;	// 36 = 0x24
	long long _containerPID;	// 40 = 0x28
	unsigned _entityLimit;	// 48 = 0x30
}
@property(readonly, assign) unsigned entityLimit;	// G=0x31589a15; converted property
- (id)initWithQuery:(id)query;	// 0x315886d1
- (void).cxx_destruct;	// 0x31589c81
- (void)_loadCurrentFullResults;	// 0x31588981
- (BOOL)_updateToLibraryCurrentRevision;	// 0x31589a25
- (id)copyWithZone:(NSZone *)zone;	// 0x31588c21
// converted property getter: - (unsigned)entityLimit;	// 0x31589a15
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x31589415
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x315896d9
- (long long)persistentIDAtIndex:(unsigned)index;	// 0x31589261
- (id)sortedBackingStoreForDisplayOrdering;	// 0x31588cb9
@end

