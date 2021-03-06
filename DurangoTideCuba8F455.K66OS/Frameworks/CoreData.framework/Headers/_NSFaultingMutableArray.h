/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableArray.h> // Unknown library

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableArray : NSMutableArray {
@private
	int _cd_rc;	// 4 = 0x4
	NSMutableArray *_realArray;	// 8 = 0x8
	NSManagedObject *_source;	// 12 = 0xc
	NSPropertyDescription *_relationship;	// 16 = 0x10
	NSFaultingMutableArrayFlags _flags;	// 20 = 0x14
}
@property(readonly, retain) NSPropertyDescription *relationship;	// G=0x33e668a1; converted property
@property(readonly, retain) NSManagedObject *source;	// G=0x33e66891; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33e66869
+ (id)alloc;	// 0x33e67129
+ (id)allocWithZone:(NSZone *)zone;	// 0x33e6711d
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x33e67001
- (void)addObject:(id)object;	// 0x33e66ae9
- (id)copyWithZone:(NSZone *)zone;	// 0x33e66df9
- (unsigned)count;	// 0x33e66b51
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33e66aa5
- (void)dealloc;	// 0x33e670d5
- (id)description;	// 0x33e66d19
- (id)descriptionWithLocale:(id)locale;	// 0x33e66c4d
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x33e66b81
- (void)getObjects:(id *)objects;	// 0x33e6696d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33e66a3d
- (BOOL)isFault;	// 0x33e6687d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33e66de5
- (id)objectAtIndex:(unsigned)index;	// 0x33e66b1d
- (id)objectEnumerator;	// 0x33e66a75
// converted property getter: - (id)relationship;	// 0x33e668a1
- (void)release;	// 0x33e66fcd
- (void)removeLastObject;	// 0x33e66a0d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33e669d9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33e669a1
- (id)retain;	// 0x33e668b1
- (unsigned)retainCount;	// 0x33e6686d
- (void)setValue:(id)value forKey:(id)key;	// 0x33e66935
// converted property getter: - (id)source;	// 0x33e66891
- (void)turnIntoFault;	// 0x33e66ec5
- (id)valueForKey:(id)key;	// 0x33e66901
- (id)valueForKeyPath:(id)keyPath;	// 0x33e668cd
- (void)willRead;	// 0x33e66f01
@end

