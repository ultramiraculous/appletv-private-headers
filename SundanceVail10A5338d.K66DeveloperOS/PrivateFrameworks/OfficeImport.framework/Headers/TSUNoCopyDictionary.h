/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSMutableDictionary.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface TSUNoCopyDictionary : NSMutableDictionary {
	CFDictionaryRef mDictionary;	// 4 = 0x4
}
- (id)init;	// 0x33959fb9
- (id)initWithCFDictionary:(CFDictionaryRef)cfdictionary;	// 0x33b0b209
- (id)initWithCapacity:(unsigned)capacity;	// 0x33959fcd
- (id)allKeys;	// 0x33a4c3dd
- (id)allValues;	// 0x33ab4d5d
- (id)copyWithZone:(NSZone *)zone;	// 0x33c2d8ed
- (unsigned)count;	// 0x33c2d8fd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33c2d97d
- (void)dealloc;	// 0x339db77d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x33c2d911
- (id)keyEnumerator;	// 0x33c2d955
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33b0b1b9
- (id)objectEnumerator;	// 0x33ab4d35
- (id)objectForKey:(id)key;	// 0x339c6b61
- (void)removeAllObjects;	// 0x33a6f769
- (void)removeObjectForKey:(id)key;	// 0x33a0b50d
- (void)setObject:(id)object forKey:(id)key;	// 0x3397478d
@end

