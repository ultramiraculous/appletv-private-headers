/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"
#import "OfficeImport-Structs.h"

@class TSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection {
	TSUPointerKeyDictionary *mMap;	// 8 = 0x8
}
- (unsigned)addObject:(id)object;	// 0x348946e5
- (id)copyWithZone:(NSZone *)zone;	// 0x349b8a5d
- (void)dealloc;	// 0x348c355d
- (void)insertIntoMap:(id)map;	// 0x348947b5
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x348ab435
- (bool)isObjectInMap:(id)map;	// 0x34a2c7b5
- (bool)isOverwritingKeyOK;	// 0x34a2c825
- (id)objectWithKey:(int)key;	// 0x348c027d
- (void)removeAllObjects;	// 0x34a2c765
- (void)removeFromMap:(id)map;	// 0x34a2c7e9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x34a2c6f5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34a2c695
@end

