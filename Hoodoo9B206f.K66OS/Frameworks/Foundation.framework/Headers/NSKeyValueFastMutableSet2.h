/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueFastMutableSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31d6bcb1
- (id)_nonNilSetValueWithSelector:(SEL)selector;	// 0x31d6bd7d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31d6bcc1
- (void)_proxyNonGCFinalize;	// 0x31d6bd29
- (unsigned)count;	// 0x31d6be19
- (id)member:(id)member;	// 0x31d6be45
- (id)objectEnumerator;	// 0x31d6be75
@end
