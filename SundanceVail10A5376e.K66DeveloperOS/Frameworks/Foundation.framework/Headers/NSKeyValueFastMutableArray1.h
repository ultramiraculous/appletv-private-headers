/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableArray.h"

@class NSKeyValueNonmutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
	NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x34db04fd
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x34db050d
- (void)_proxyNonGCFinalize;	// 0x34db0575
- (unsigned)count;	// 0x34db05c5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x34db05f5
- (id)objectAtIndex:(unsigned)index;	// 0x34db066d
- (id)objectsAtIndexes:(id)indexes;	// 0x34db0731
@end

