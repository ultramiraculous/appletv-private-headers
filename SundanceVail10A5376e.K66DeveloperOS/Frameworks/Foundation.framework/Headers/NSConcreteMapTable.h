/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMapTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable {
	NSSlice keys;	// 4 = 0x4
	NSSlice values;	// 68 = 0x44
	unsigned count;	// 132 = 0x84
	unsigned capacity;	// 136 = 0x88
	unsigned keyOptions;	// 140 = 0x8c
	unsigned valueOptions;	// 144 = 0x90
	unsigned mutations;	// 148 = 0x94
	int growLock;	// 152 = 0x98
	bool shouldRehash;	// 156 = 0x9c
}
@property(readonly, assign) unsigned count;	// G=0x34d341f9; converted property
- (id)init;	// 0x34dbe8c5
- (id)initWithCoder:(id)coder;	// 0x34dbefd1
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x34d31c49
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x34dbedc1
- (void)_initBlock;	// 0x34d31db5
- (void)_setBackingStore;	// 0x34d31dd9
- (id)allKeys;	// 0x34dbfbf1
- (id)allValues;	// 0x34dbfcb1
- (void)assign:(unsigned)assign key:(const void *)key value:(const void *)value isNew:(BOOL)aNew;	// 0x34d31ef5
- (void)checkCount:(const char *)count;	// 0x34dbe9c5
- (Class)classForCoder;	// 0x34dbefb5
- (BOOL)containsKeys:(const void **)keys values:(const void **)values count:(unsigned)count;	// 0x34dbf319
- (id)copy;	// 0x34dbeb61
// converted property getter: - (unsigned)count;	// 0x34d341f9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34d61d09
- (void)dealloc;	// 0x34d3263d
- (id)description;	// 0x34dbf909
- (id)dump;	// 0x34dbf3fd
- (void)encodeWithCoder:(id)coder;	// 0x34dbf079
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x34dbf5fd
- (void)finalize;	// 0x34dbf8a5
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x34d6258d
- (void)grow;	// 0x34d61ad5
- (unsigned)hash;	// 0x34dbfa85
- (BOOL)isEqual:(id)equal;	// 0x34dbfabd
- (id)keyEnumerator;	// 0x34dbfa29
- (id)keyPointerFunctions;	// 0x34dbf251
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x34dbf6a1
- (id)objectEnumerator;	// 0x34d76c71
- (id)objectForKey:(id)key;	// 0x34d2deb5
- (void)raiseCountUnderflowException;	// 0x34dbe8e9
- (unsigned)realCount;	// 0x34dbe92d
- (void)rehash;	// 0x34dbf78d
- (unsigned)rehashAround:(unsigned)around;	// 0x34d33fe5
- (void)removeAllItems;	// 0x34dbf80d
- (void)removeObjectForKey:(id)key;	// 0x34d33f1d
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x34dbf719
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x34dbf4b9
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x34dbf545
- (void)setObject:(id)object forKey:(id)key;	// 0x34d31e61
- (id)valuePointerFunctions;	// 0x34dbf2b5
- (void)zeroPairedEntries;	// 0x34dbea4d
@end
