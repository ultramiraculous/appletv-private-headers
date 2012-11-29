/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray {
	NSKeyValueMutatingArrayMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35583f95
- (void)_proxyNonGCFinalize;	// 0x35583ffd
- (void)addObject:(id)object;	// 0x3558404d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35584081
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x35584175
- (void)removeLastObject;	// 0x355841e5
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35584215
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x355842c1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35584321
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3558444d
@end
