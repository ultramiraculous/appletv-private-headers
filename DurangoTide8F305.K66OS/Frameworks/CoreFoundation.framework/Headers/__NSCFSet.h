/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32eb2659
- (unsigned)_trueCount;	// 0x32eb3d31
- (void)addObject:(id)object;	// 0x32e22ff1
- (Class)classForCoder;	// 0x32e556e9
- (id)copyWithZone:(NSZone *)zone;	// 0x32e436f5
- (unsigned)count;	// 0x32e230b1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32e16809
- (void)finalize;	// 0x32eb3cf5
- (void)getObjects:(id *)objects;	// 0x32e27f05
- (unsigned)hash;	// 0x32e5d6a9
- (BOOL)isEqual:(id)equal;	// 0x32e513fd
- (id)member:(id)member;	// 0x32e20675
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32e230bd
- (id)objectEnumerator;	// 0x32e5a625
- (oneway void)release;	// 0x32e16869
- (void)removeAllObjects;	// 0x32e20ef1
- (void)removeObject:(id)object;	// 0x32e23211
- (id)retain;	// 0x32e43725
- (unsigned)retainCount;	// 0x32eb3ce9
@end

