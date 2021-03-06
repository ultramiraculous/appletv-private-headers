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
+ (id)alloc;	// 0x33d14761
+ (id)allocWithZone:(NSZone *)zone;	// 0x33d69401
+ (id)newInstanceWithSearchStrategy:(id)searchStrategy inData:(id)data;	// 0x33d6941d
- (id)initForKeys:(id)keys;	// 0x33d69425
- (id)initWithSearchStrategy:(id)searchStrategy;	// 0x33d69421
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x33d6943d
- (void)getKeys:(id *)keys;	// 0x33d69441
- (void)getObjects:(id *)objects;	// 0x33d69445
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x33d69449
- (id)mapping;	// 0x33d69429
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x33d69435
- (void)setValues:(id *)values;	// 0x33d69439
- (id)valueAtIndex:(unsigned)index;	// 0x33d69431
- (const id *)values;	// 0x33d6942d
@end

