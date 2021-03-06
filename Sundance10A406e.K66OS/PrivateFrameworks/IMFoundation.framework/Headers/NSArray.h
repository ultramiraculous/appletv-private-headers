/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSArray.h> // Unknown library


@interface NSArray (FezAdditions)
- (id)__imArrayByApplyingBlock:(id)block;	// 0x36875a65
- (id)__imArrayByApplyingBlock:(id)block filter:(id)filter;	// 0x36875b99
- (id)__imArrayByFilteringWithBlock:(id)block;	// 0x3687592d
- (id)__imDeepCopy;	// 0x368756d9
- (id)__imFirstObject;	// 0x368758f5
- (BOOL)__imIsMutable;	// 0x36875689
- (id)__imSetFromArray;	// 0x36875645
- (id)_copyForEnumerating;	// 0x368758c5
- (BOOL)_hasSameMembers:(id)members;	// 0x36875721
- (BOOL)containsObject:(id)object matchingComparison:(SEL)comparison;	// 0x36870865
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x3686f7f5
- (int)indexOfObject:(id)object matchingComparison:(SEL)comparison;	// 0x36870891
@end

@interface NSArray (IMArrayRandomization)
- (id)__imRandomizedArray;	// 0x3687a811
@end

