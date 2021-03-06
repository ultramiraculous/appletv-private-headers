/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
	NSMutableArray *mObjects;	// 4 = 0x4
}
+ (id)collection;	// 0x31c464b5
+ (id)collectionWithObject:(id)object;	// 0x31daa55d
- (id)init;	// 0x31c14ead
- (id)initWithObject:(id)object;	// 0x31d06c7d
- (unsigned)addObject:(id)object;	// 0x31c156ed
- (unsigned)addOrEquivalentObject:(id)object;	// 0x31c1a1bd
- (id)copyWithZone:(NSZone *)zone;	// 0x31d39a95
- (unsigned)count;	// 0x31c15ac9
- (void)dealloc;	// 0x31c1e1a5
- (unsigned)hash;	// 0x31daa5a9
- (unsigned)indexOfObject:(id)object;	// 0x31c1a1f9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31c2c44d
- (BOOL)isEqual:(id)equal;	// 0x31d048f9
- (BOOL)isEqualToCollection:(id)collection;	// 0x31d0700d
- (id)objectAtIndex:(unsigned)index;	// 0x31c25f29
- (void)removeAllObjects;	// 0x31daa5c9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31d58401
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31daa5e9
@end

