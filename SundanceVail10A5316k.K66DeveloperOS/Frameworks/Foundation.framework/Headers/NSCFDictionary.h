/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableDictionary.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFDictionary : NSMutableDictionary {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a4b061
- (BOOL)_isDeallocating;	// 0x31a4aca9
- (BOOL)_tryRetain;	// 0x31a4ac99
- (Class)classForCoder;	// 0x31a4acf5
- (id)copyWithZone:(NSZone *)zone;	// 0x31a4ad2d
- (unsigned)count;	// 0x31a4ad89
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31a4ad9d
- (void)finalize;	// 0x31a4acb5
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x31a4afdd
- (unsigned)hash;	// 0x31a4ac7d
- (BOOL)isEqual:(id)equal;	// 0x31a4ac31
- (id)keyEnumerator;	// 0x31a4adad
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31a4ad69
- (id)objectForKey:(id)key;	// 0x31a4ad8d
- (oneway void)release;	// 0x31a4ac91
- (void)removeAllObjects;	// 0x31a4b005
- (void)removeObjectForKey:(id)key;	// 0x31a4af2d
- (id)retain;	// 0x31a4ac81
- (unsigned)retainCount;	// 0x31a4ac95
- (void)setObject:(id)object forKey:(id)key;	// 0x31a4ae09
- (void)setObservationInfo:(void *)info;	// 0x31a4b065
@end

