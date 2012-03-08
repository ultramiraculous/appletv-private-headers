/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"


@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x3100a289
+ (id)allocWithZone:(NSZone *)zone;	// 0x3106f2ed
+ (id)mapTableWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options;	// 0x3106eb1d
+ (id)mapTableWithStrongToStrongObjects;	// 0x31039291
+ (id)mapTableWithStrongToWeakObjects;	// 0x3106ead5
+ (id)mapTableWithWeakToStrongObjects;	// 0x3100a241
+ (id)mapTableWithWeakToWeakObjects;	// 0x3106ea8d
- (id)init;	// 0x3106ef71
- (id)initWithCoder:(id)coder;	// 0x3106ec75
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x3106ef89
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x3106ef7d
- (id)allKeys;	// 0x3106ee99
- (id)allValues;	// 0x3106ee8d
- (id)copy;	// 0x3106ef29
- (id)copyWithZone:(NSZone *)zone;	// 0x3106ea65
- (unsigned)count;	// 0x3106ef4d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3106ef1d
- (id)description;	// 0x3106ef65
- (id)dictionaryRepresentation;	// 0x3106f145
- (void)encodeWithCoder:(id)coder;	// 0x3106ef59
- (id)enumerator;	// 0x3106ee75
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x3106eeb1
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x3106ee5d
- (id)keyEnumerator;	// 0x3106ef41
- (id)keyPointerFunctions;	// 0x3106ef11
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x3106ee69
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3106ea51
- (id)mutableDictionary;	// 0x3106f219
- (id)objectEnumerator;	// 0x3106ef35
- (id)objectForKey:(id)key;	// 0x3106eef9
- (void)removeAllItems;	// 0x3106ee81
- (void)removeAllObjects;	// 0x3106ea79
- (void)removeObjectForKey:(id)key;	// 0x3106eee1
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x3106eea5
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x3106eec9
- (void)setItem:(const void *)item forKey:(const void *)key;	// 0x3106eed5
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x3106eebd
- (void)setObject:(id)object forKey:(id)key;	// 0x3106eeed
- (id)valuePointerFunctions;	// 0x3106ef05
@end
