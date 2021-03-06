/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysMappingStrategy.h"


__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
@private
	int _cd_rc;	// 4 = 0x4
	void *_table;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	id *_keys;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x330b6769; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3311fa6d
+ (id)alloc;	// 0x3311fcb9
+ (id)allocWithZone:(NSZone *)zone;	// 0x3311fcb1
+ (void)initialize;	// 0x330eaf2d
- (id)initForKeys:(id)keys;	// 0x330be4f9
- (id)initForKeys:(const id *)keys count:(unsigned)count;	// 0x330b5d69
- (id)initWithCoder:(id)coder;	// 0x3311fda1
- (void)_coreCreationForKeys:(const id *)keys count:(unsigned long)count;	// 0x330b5db9
- (void)_coreDealloc:(BOOL)dealloc;	// 0x330c1b31
- (BOOL)_isDeallocating;	// 0x3311ffbd
- (CFArrayRef)_makeBranchTableForKeys:(const char **)keys count:(unsigned long)count;	// 0x330b60a5
- (BOOL)_tryRetain;	// 0x3311ffe5
- (id)allKeys;	// 0x3311fbb1
- (Class)classForCoder;	// 0x3311ff5d
- (id)copyWithZone:(NSZone *)zone;	// 0x3311fcc1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3311fa95
- (void)dealloc;	// 0x330c1b1d
- (void)encodeWithCoder:(id)coder;	// 0x3311fcd1
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x330c19e9
- (unsigned)hash;	// 0x3311ff79
- (unsigned)indexForKey:(id)key;	// 0x330dc6e1
- (BOOL)isEqual:(id)equal;	// 0x3311fbf9
- (const id *)keys;	// 0x330b92d5
// converted property getter: - (unsigned)length;	// 0x330b6769
- (oneway void)release;	// 0x330b67b1
- (id)retain;	// 0x330b6779
- (unsigned)retainCount;	// 0x3311fa71
@end

