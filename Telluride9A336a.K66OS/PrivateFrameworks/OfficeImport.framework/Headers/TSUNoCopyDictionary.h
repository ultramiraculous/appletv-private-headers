/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSMutableDictionary.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface TSUNoCopyDictionary : NSMutableDictionary {
@private
	CFDictionaryRef mDictionary;	// 4 = 0x4
}
- (id)init;	// 0x34c2a501
- (id)initWithCFDictionary:(CFDictionaryRef)cfdictionary;	// 0x34d770bd
- (id)initWithCapacity:(unsigned)capacity;	// 0x34c2a515
- (id)allKeys;	// 0x34d1e2a9
- (id)allValues;	// 0x34d484b9
- (id)copyWithZone:(NSZone *)zone;	// 0x34e52039
- (unsigned)count;	// 0x34e52145
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34e52071
- (void)dealloc;	// 0x34c0a0a5
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x34e52105
- (id)keyEnumerator;	// 0x34e52049
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34d77071
- (id)objectEnumerator;	// 0x34d48491
- (id)objectForKey:(id)key;	// 0x34c42719
- (void)removeAllObjects;	// 0x34ca099d
- (void)removeObjectForKey:(id)key;	// 0x34c756c9
- (void)setObject:(id)object forKey:(id)key;	// 0x34c07d49
@end

