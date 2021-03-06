/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
@private
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptySets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x327a0fc5
- (id)_createMutableSetValueWithSelector:(SEL)selector;	// 0x327a2075
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x327a1701
- (void)_proxyNonGCFinalize;	// 0x327a168d
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x327a211d
- (id)_setValueWithSelector:(SEL)selector;	// 0x327a20d1
- (void)addObject:(id)object;	// 0x327a254d
- (void)addObjectsFromArray:(id)array;	// 0x327a24c1
- (unsigned)count;	// 0x327a1669
- (void)intersectSet:(id)set;	// 0x327a2461
- (id)member:(id)member;	// 0x327a163d
- (void)minusSet:(id)set;	// 0x327a2401
- (id)objectEnumerator;	// 0x327a15e5
- (void)removeAllObjects;	// 0x327a2361
- (void)removeObject:(id)object;	// 0x327a2301
- (void)setSet:(id)set;	// 0x327a2299
- (void)unionSet:(id)set;	// 0x327a2225
@end

