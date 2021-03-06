/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSHashTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
@private
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
}
@property(readonly, assign) unsigned count;	// G=0x31a2cd75; converted property
- (id)init;	// 0x31a58e11
- (id)initWithCoder:(id)coder;	// 0x31a58e5d
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x319e8601
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x31a1ce2d
- (void)_initBlock;	// 0x319e872d
- (void)addObject:(id)object;	// 0x319e8ad1
- (id)allObjects;	// 0x31a593e5
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x319e8cc1
- (Class)classForCoder;	// 0x31a58e41
- (id)copy;	// 0x31a214d1
// converted property getter: - (unsigned)count;	// 0x31a2cd75
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319fecdd
- (void)dealloc;	// 0x319e9745
- (id)description;	// 0x31a59581
- (void)encodeWithCoder:(id)coder;	// 0x31a58ef1
- (void)finalize;	// 0x31a5952d
- (void *)getItem:(const void *)item;	// 0x319e8efd
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x31a594b9
- (unsigned)hash;	// 0x31a590d1
- (void)hashGrow;	// 0x319e8d1d
- (void)insertItem:(const void *)item;	// 0x31a2166d
- (void)insertKnownAbsentItem:(const void *)item;	// 0x31a592dd
- (BOOL)isEqual:(id)equal;	// 0x31a590f9
- (id)objectEnumerator;	// 0x31a59659
- (id)pointerFunctions;	// 0x31a5906d
- (void)raiseCountUnderflowException;	// 0x31a59229
- (void)rehash;	// 0x31a5926d
- (unsigned)rehashAround:(unsigned)around;	// 0x319e9595
- (void)removeAllItems;	// 0x31a59399
- (void)removeItem:(const void *)item;	// 0x319e8e35
@end

