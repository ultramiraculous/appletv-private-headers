/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableSet.h"

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {
@private
	_NSFaultingMutableSetMutationMethods *_mutationMethods;	// 16 = 0x10
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set mutationMethods:(id)methods;	// 0x31e77159
- (void)addObject:(id)object;	// 0x31e770a5
- (void)addObjectsFromArray:(id)array;	// 0x31e77005
- (void)dealloc;	// 0x31e76c3d
- (void)intersectSet:(id)set;	// 0x31e76f01
- (void)minusSet:(id)set;	// 0x31e76ea9
- (void)removeAllObjects;	// 0x31e76e39
- (void)removeObject:(id)object;	// 0x31e76d85
- (void)setSet:(id)set;	// 0x31e76ce9
- (void)unionSet:(id)set;	// 0x31e76c91
@end

