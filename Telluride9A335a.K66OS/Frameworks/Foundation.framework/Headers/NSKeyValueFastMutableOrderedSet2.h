/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32107761
- (id)_nonNilOrderedSetValueWithSelector:(SEL)selector;	// 0x3210782d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32107771
- (void)_proxyNonGCFinalize;	// 0x321077d9
- (unsigned)count;	// 0x321078c9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x321078f5
- (unsigned)indexOfObject:(id)object;	// 0x3210792d
- (id)objectAtIndex:(unsigned)index;	// 0x3210795d
- (id)objectsAtIndexes:(id)indexes;	// 0x3210798d
@end

