/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableSet.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x3247afb9
- (id)_nonNilSetValueWithSelector:(SEL)selector;	// 0x3247c191
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3247b871
- (void)_proxyNonGCFinalize;	// 0x3247b825
- (unsigned)count;	// 0x3247b801
- (id)member:(id)member;	// 0x3247b7d5
- (id)objectEnumerator;	// 0x3247b7b1
@end

