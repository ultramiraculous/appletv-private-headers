/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSExternalRefCountedData.h"

@class _CDSnapshot;

@interface NSSQLRow : NSExternalRefCountedData {
	_CDSnapshot *_snapshot;	// 28 = 0x1c
}
@property(assign) NSScalarObjectID *objectID;	// G=0x3354a4b1; S=0x3354a52d; converted property
@property(assign) long long optLock;	// G=0x3354abe9; S=0x334931a5; converted property
+ (id)allocForSQLEntity:(id)sqlentity;	// 0x33549b1d
+ (id)allocWithZone:(NSZone *)zone;	// 0x33549b99
+ (void)initialize;	// 0x334a39c9
+ (unsigned)newBatchRowAllocation:(id *)allocation count:(unsigned)count forSQLEntity:(id)sqlentity withOwnedObjectIDs:(NSScalarObjectID **)ownedObjectIDs andTimestamp:(double)timestamp;	// 0x334923bd
- (id)initWithSQLEntity:(id)sqlentity objectID:(NSScalarObjectID *)anId;	// 0x33549b9d
- (id)initWithSQLEntity:(id)sqlentity ownedObjectID:(NSScalarObjectID *)anId andTimestamp:(double)timestamp;	// 0x33549be1
- (id)_snapshot_;	// 0x33498799
- (void)_validateToOnes;	// 0x3354a729
- (unsigned)_versionNumber;	// 0x3354ac15
- (id)attributeValueForSlot:(unsigned)slot;	// 0x3354aa9d
- (id)copy;	// 0x33549e85
- (void)dealloc;	// 0x33549d31
- (id)description;	// 0x3354a021
- (id)entity;	// 0x33549e41
- (unsigned)entityID;	// 0x3354a4f1
- (unsigned)foreignEntityKeyForSlot:(unsigned)slot;	// 0x3354a6a5
- (long long)foreignKeyForSlot:(unsigned)slot;	// 0x3354a605
- (unsigned)foreignOrderKeyForSlot:(unsigned)slot;	// 0x3354a6e5
- (BOOL)isEqual:(id)equal;	// 0x3354a71d
- (const id *)knownKeyValuesPointer;	// 0x33497bb1
- (CFBitVectorRef)newCalculatedDeltaMaskFrom:(id)from;	// 0x3354ac29
- (NSScalarObjectID *)newObjectIDForToOne:(id)one;	// 0x33549d35
// converted property getter: - (NSScalarObjectID *)objectID;	// 0x3354a4b1
// converted property getter: - (long long)optLock;	// 0x3354abe9
- (long long)pk64;	// 0x3354a4c5
- (void)setForeignEntityKeySlot:(unsigned)slot unsigned:(unsigned)anUnsigned;	// 0x3354a575
- (void)setForeignKeySlot:(unsigned)slot int64:(long long)a64;	// 0x334a3aad
- (void)setForeignOrderKeySlot:(unsigned)slot unsigned:(unsigned)anUnsigned;	// 0x3354a5c1
// converted property setter: - (void)setObjectID:(NSScalarObjectID *)anId;	// 0x3354a52d
// converted property setter: - (void)setOptLock:(long long)lock;	// 0x334931a5
- (id)valueForKey:(id)key;	// 0x3354a8c1
- (long long)version;	// 0x3354ac05
@end

