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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31930cc5
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31930cd5
- (void)_proxyNonGCFinalize;	// 0x31930d3d
- (unsigned)count;	// 0x31930d8d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31930dbd
- (id)objectAtIndex:(unsigned)index;	// 0x31930e35
- (id)objectsAtIndexes:(id)indexes;	// 0x31930ef9
@end
