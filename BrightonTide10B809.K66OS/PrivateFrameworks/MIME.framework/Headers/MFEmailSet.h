/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSMutableSet.h> // Unknown library


@interface MFEmailSet : NSMutableSet {
	CFSetRef _set;	// 4 = 0x4
}
+ (id)set;	// 0x3440f2a9
- (id)init;	// 0x3440f2e1
- (id)initWithCapacity:(unsigned)capacity;	// 0x3440f2f5
- (void)addObject:(id)object;	// 0x3440f885
- (id)allObjects;	// 0x3440f735
- (id)copyWithZone:(NSZone *)zone;	// 0x3440f3fd
- (unsigned)count;	// 0x3440f40d
- (unsigned)countByEnumeratingWithState:(XXStruct_t4MBZD *)state objects:(id *)objects count:(unsigned)count;	// 0x3440f81d
- (void)dealloc;	// 0x3440f355
- (void)intersectSet:(id)set;	// 0x3440fb95
- (BOOL)intersectsSet:(id)set;	// 0x3440f4f9
- (BOOL)isEqualToSet:(id)set;	// 0x3440f689
- (BOOL)isSubsetOfSet:(id)set;	// 0x3440f5c1
- (id)member:(id)member;	// 0x3440f421
- (void)minusSet:(id)set;	// 0x3440fb01
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3440f399
- (id)objectEnumerator;	// 0x3440f7d5
- (void)removeAllObjects;	// 0x3440fa59
- (void)removeObject:(id)object;	// 0x3440f995
- (void)setSet:(id)set;	// 0x3440fd3d
- (void)unionSet:(id)set;	// 0x3440fa6d
@end

