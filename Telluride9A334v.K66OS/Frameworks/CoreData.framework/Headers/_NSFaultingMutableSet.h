/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableSet.h> // Unknown library

@class NSManagedObject;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : NSMutableSet {
@private
	int _cd_rc;	// 4 = 0x4
	NSFaultingMutableSetFlags _flags;	// 8 = 0x8
	id _realSet;	// 12 = 0xc
	NSManagedObject *_source;	// 16 = 0x10
}
@property(readonly, retain) NSManagedObject *source;	// G=0x31e719cd; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x31e7199d
+ (id)alloc;	// 0x31e71e6d
+ (id)allocWithZone:(NSZone *)zone;	// 0x31e71e65
- (id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;	// 0x31e72ea5
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x31e72f65
- (BOOL)_isDeallocating;	// 0x31e72d69
- (BOOL)_isIdenticalFault:(id)fault;	// 0x31e72411
- (BOOL)_shouldProcessKVOChange;	// 0x31e719c9
- (BOOL)_tryRetain;	// 0x31e72d91
- (void)addObject:(id)object;	// 0x31e725c1
- (void)addObjectsFromArray:(id)array;	// 0x31e720cd
- (id)allObjects;	// 0x31e71c69
- (id)anyObject;	// 0x31e71ca1
- (Class)classForArchiver;	// 0x31e71e75
- (Class)classForCoder;	// 0x31e71eb9
- (BOOL)containsObject:(id)object;	// 0x31e72519
- (id)copyWithZone:(NSZone *)zone;	// 0x31e727a1
- (unsigned)count;	// 0x31e726f5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31e71b71
- (void)dealloc;	// 0x31e72cdd
- (id)description;	// 0x31e719dd
- (id)descriptionWithLocale:(id)locale;	// 0x31e71aa5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x31e71bb1
- (void)getObjects:(id *)objects;	// 0x31e72591
- (void)intersectSet:(id)set;	// 0x31e7208d
- (BOOL)intersectsSet:(id)set;	// 0x31e71d29
- (BOOL)isEqual:(id)equal;	// 0x31e724d5
- (BOOL)isEqualToSet:(id)set;	// 0x31e71d6d
- (BOOL)isFault;	// 0x31e719b5
- (BOOL)isSubsetOfSet:(id)set;	// 0x31e723cd
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x31e72391
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x31e72351
- (id)member:(id)member;	// 0x31e72685
- (void)minusSet:(id)set;	// 0x31e72039
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31e72721
- (id)objectEnumerator;	// 0x31e71c31
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x31e71bf1
- (id)relationship;	// 0x31e72981
- (oneway void)release;	// 0x31e72ded
- (void)removeAllObjects;	// 0x31e7200d
- (void)removeObject:(id)object;	// 0x31e72289
- (id)replacementObjectForCoder:(id)coder;	// 0x31e71e91
- (id)retain;	// 0x31e72e6d
- (unsigned)retainCount;	// 0x31e719a1
- (void)setSet:(id)set;	// 0x31e71f8d
- (void)setValue:(id)value forKey:(id)key;	// 0x31e71f4d
// converted property getter: - (id)source;	// 0x31e719cd
- (void)turnIntoFault;	// 0x31e729c1
- (void)unionSet:(id)set;	// 0x31e71fcd
- (id)valueForKey:(id)key;	// 0x31e71f11
- (id)valueForKeyPath:(id)keyPath;	// 0x31e71ed5
- (void)willRead;	// 0x31e72a49
@end

