/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSArray.h> // Unknown library
#import "NSKeyValueProxyCaching.h"

@class NSObject, NSKeyValueNonmutatingArrayMethodSet, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSKeyValueNonmutatingArrayMethodSet *_methods;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32581841
+ (id)_proxyShare;	// 0x32581851
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32581881
- (XXStruct_OzJQfB)_proxyLocator;	// 0x3258192d
- (void)_proxyNonGCFinalize;	// 0x32581951
- (unsigned)count;	// 0x325819f5
- (void)dealloc;	// 0x325819bd
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32581a25
- (id)objectAtIndex:(unsigned)index;	// 0x32581a9d
- (id)objectsAtIndexes:(id)indexes;	// 0x32581b61
@end

