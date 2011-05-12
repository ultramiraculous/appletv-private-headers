/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableDictionary.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSKnownKeysDictionary : NSMutableDictionary {
}
+ (id)alloc;	// 0x330f0139
+ (id)allocWithZone:(NSZone *)zone;	// 0x33133ddd
+ (id)newInstanceWithSearchStrategy:(id)searchStrategy inData:(id)data;	// 0x3314fe21
- (id)initForKeys:(id)keys;	// 0x33133db9
- (id)initWithSearchStrategy:(id)searchStrategy;	// 0x33133db5
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x33129a51
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x3314fe25
- (void)getKeys:(id *)keys;	// 0x33133dd1
- (void)getObjects:(id *)objects;	// 0x33133dd5
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x33133dd9
- (const id)mapping;	// 0x33133dbd
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x33133dc9
- (void)setValues:(id *)values;	// 0x33133dcd
- (id)valueAtIndex:(unsigned)index;	// 0x33133dc5
- (const id *)values;	// 0x33133dc1
@end
