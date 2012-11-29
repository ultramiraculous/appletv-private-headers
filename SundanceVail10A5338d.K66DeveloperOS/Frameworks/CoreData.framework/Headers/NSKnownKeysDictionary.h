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
+ (id)alloc;	// 0x36570941
+ (id)allocWithZone:(NSZone *)zone;	// 0x365d2839
+ (id)newInstanceWithSearchStrategy:(id)searchStrategy inData:(id)data;	// 0x365d2855
- (id)initForKeys:(id)keys;	// 0x365d285d
- (id)initWithSearchStrategy:(id)searchStrategy;	// 0x365d2859
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x365d2875
- (void)getKeys:(id *)keys;	// 0x365d2879
- (void)getObjects:(id *)objects;	// 0x365d287d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x365d2881
- (id)mapping;	// 0x365d2861
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x365d286d
- (void)setValues:(id *)values;	// 0x365d2871
- (id)valueAtIndex:(unsigned)index;	// 0x365d2869
- (const id *)values;	// 0x365d2865
@end
