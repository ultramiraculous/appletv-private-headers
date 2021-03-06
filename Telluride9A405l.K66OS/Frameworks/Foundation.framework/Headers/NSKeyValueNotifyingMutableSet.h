/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
@private
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x302d0a41
+ (id)_proxyShare;	// 0x302d0a51
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x302d0a81
- (void)_proxyNonGCFinalize;	// 0x302d0afd
- (void)addObject:(id)object;	// 0x302d0bb1
- (void)addObjectsFromArray:(id)array;	// 0x302d0c7d
- (unsigned)count;	// 0x302d0b51
- (void)intersectSet:(id)set;	// 0x302d0d4d
- (id)member:(id)member;	// 0x302d0b71
- (void)minusSet:(id)set;	// 0x302d0dd5
- (id)objectEnumerator;	// 0x302d0b91
- (void)removeAllObjects;	// 0x302d0e5d
- (void)removeObject:(id)object;	// 0x302d0efd
- (void)setSet:(id)set;	// 0x302d0fc9
- (void)unionSet:(id)set;	// 0x302d1051
@end

