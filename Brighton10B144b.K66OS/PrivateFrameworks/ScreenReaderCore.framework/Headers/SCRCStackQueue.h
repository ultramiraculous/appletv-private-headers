/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface SCRCStackQueue : NSObject {
	SCRCStackNode *_firstNode;	// 4 = 0x4
	SCRCStackNode *_lastNode;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x354161d1; converted property
// converted property getter: - (unsigned)count;	// 0x354161d1
- (void)dealloc;	// 0x35414fd1
- (id)dequeueObject;	// 0x35422b0d
- (id)dequeueObjectRetained;	// 0x35414119
- (id)description;	// 0x35422b35
- (void)enqueueObject:(id)object;	// 0x35413db1
- (BOOL)isEmpty;	// 0x354141a1
- (id)objectEnumerator;	// 0x35415f11
- (id)popObject;	// 0x35422ae5
- (id)popObjectRetained;	// 0x354161f5
- (void)pushArray:(id)array;	// 0x35416255
- (void)pushObject:(id)object;	// 0x35413dc1
- (void)removeAllObjects;	// 0x35415011
- (id)topObject;	// 0x354161e1
@end

