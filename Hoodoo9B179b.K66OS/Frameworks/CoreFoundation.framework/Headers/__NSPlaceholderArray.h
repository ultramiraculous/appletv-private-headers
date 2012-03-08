/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d89345
+ (id)immutablePlaceholder;	// 0x30ce8959
+ (void)initialize;	// 0x30d0d131
+ (id)mutablePlaceholder;	// 0x30cecda1
- (id)init;	// 0x30cf5519
- (id)initWithCapacity:(unsigned)capacity;	// 0x30ceff81
- (id)initWithContentsOfFile:(id)file;	// 0x30d31745
- (id)initWithContentsOfURL:(id)url;	// 0x30d8926d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x30ce8969
- (unsigned)count;	// 0x30d8936d
- (void)dealloc;	// 0x30d89369
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30d894f5
- (id)objectAtIndex:(unsigned)index;	// 0x30d89431
- (oneway void)release;	// 0x30d8935d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x30d895b9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30d8967d
- (id)retain;	// 0x30d89359
- (unsigned)retainCount;	// 0x30d89361
@end
