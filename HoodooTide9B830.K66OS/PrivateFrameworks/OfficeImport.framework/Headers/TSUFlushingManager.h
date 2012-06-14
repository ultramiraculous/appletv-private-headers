/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSCondition, NSThread, TSUMemoryWatcher, TSURetainedPointerKeyDictionary, TSUPointerKeyDictionary;
@protocol TSUFlushable;

__attribute__((visibility("hidden")))
@interface TSUFlushingManager : NSObject {
@private
	TSURetainedPointerKeyDictionary *_objects;	// 4 = 0x4
	set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > *_sortedObjects;	// 8 = 0x8
	set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > *_sortedNewObjects;	// 12 = 0xc
	TSUPointerKeyDictionary *_inactiveObjects;	// 16 = 0x10
	unsigned _clock;	// 20 = 0x14
	BOOL _alwaysFlushing;	// 24 = 0x18
	BOOL _stopFlushing;	// 25 = 0x19
	BOOL _stopFlushingWhenQueueEmpty;	// 26 = 0x1a
	BOOL _isFlushing;	// 27 = 0x1b
	id<TSUFlushable> _flushingObject;	// 28 = 0x1c
	BOOL _isWaitingForFlush;	// 32 = 0x20
	NSCondition *_cond;	// 36 = 0x24
	NSCondition *_isFlushingCond;	// 40 = 0x28
	TSUMemoryWatcher *_memoryWatcher;	// 44 = 0x2c
	NSThread *_bgThread;	// 48 = 0x30
}
+ (id)_singletonAlloc;	// 0x311d1f05
+ (id)allocWithZone:(NSZone *)zone;	// 0x313b6361
+ (id)sharedManager;	// 0x311d1d79
- (id)init;	// 0x311d1f35
- (void)_backgroundThread:(id)thread;	// 0x313b70dd
- (void)_didUseObject:(id)object;	// 0x313b6f25
- (void)_flushAllEligible;	// 0x313b6b69
- (void)_startFlushingObjects;	// 0x313b6c85
- (void)_stopFlushingObjects;	// 0x313b6d55
- (void)addObject:(id)object;	// 0x311d62a1
- (void)advanceClock;	// 0x311d64ad
- (id)autorelease;	// 0x313b6355
- (BOOL)controlsActiveObject:(id)object;	// 0x313b6ebd
- (BOOL)controlsInactiveObject:(id)object;	// 0x313b6ef1
- (id)copyWithZone:(NSZone *)zone;	// 0x313b6359
- (void)dealloc;	// 0x313b75b5
- (void)didEnterBackground;	// 0x313b6b59
- (void)doneWithObject:(id)object;	// 0x313b6649
- (TSUFlushableObjectInfo *)eraseInfoForObject:(id)object;	// 0x311d2495
- (void)insertObjectInfo:(TSUFlushableObjectInfo *)info;	// 0x313b7009
- (BOOL)isNewObject:(TSUFlushableObjectInfo *)object;	// 0x311db631
- (void)memoryLevelDecreased:(int)decreased was:(int)was;	// 0x313b740d
- (void)memoryLevelIncreased:(int)increased was:(int)was;	// 0x313b74e1
- (void)protectObject:(id)object;	// 0x313b63e9
- (void)release;	// 0x313b6351
- (void)removeObject:(id)object;	// 0x311d2291
- (id)retain;	// 0x313b6345
- (unsigned)retainCount;	// 0x313b6349
- (void)safeToFlush:(id)flush wasAccessed:(BOOL)accessed;	// 0x313b699d
- (void)stopProtectingObject:(id)object;	// 0x313b64dd
- (void)transferNewObjects;	// 0x311d64d1
- (void)unsafeToFlush:(id)flush;	// 0x313b673d
- (void)willEnterForeground;	// 0x313b635d
@end
