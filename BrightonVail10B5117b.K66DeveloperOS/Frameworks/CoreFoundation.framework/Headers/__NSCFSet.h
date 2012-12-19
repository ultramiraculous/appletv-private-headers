/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31160275
- (BOOL)_isDeallocating;	// 0x31160225
- (unsigned)_trueCount;	// 0x311602b1
- (BOOL)_tryRetain;	// 0x31160215
- (void)addObject:(id)object;	// 0x310ce949
- (Class)classForCoder;	// 0x31160279
- (id)copyWithZone:(NSZone *)zone;	// 0x310fd635
- (unsigned)count;	// 0x310f0dd5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x310deee1
- (void)finalize;	// 0x31160235
- (void)getObjects:(id *)objects;	// 0x310fd611
- (unsigned)hash;	// 0x31160211
- (BOOL)isEqual:(id)equal;	// 0x311601c5
- (id)member:(id)member;	// 0x310ce89d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310fb865
- (id)objectEnumerator;	// 0x310fb565
- (oneway void)release;	// 0x310efde1
- (void)removeAllObjects;	// 0x310efd85
- (void)removeObject:(id)object;	// 0x310df45d
- (id)retain;	// 0x310fb5b1
- (unsigned)retainCount;	// 0x31160231
@end
