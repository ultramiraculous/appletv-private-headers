/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVProxyArray : XXUnknownSuperclass {
	id _owner;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	SEL _countSelector;	// 12 = 0xc
	/*function-pointer*/ void *_countIMP;	// 16 = 0x10
	SEL _objectAtIndexSelector;	// 20 = 0x14
	/*function-pointer*/ void *_objectAtIndexIMP;	// 24 = 0x18
	SEL _indexOfObjectSelector;	// 28 = 0x1c
	/*function-pointer*/ void *_indexOfObjectIMP;	// 32 = 0x20
}
- (id)initWithOwner:(id)owner key:(id)key;	// 0x36d7b9
- (unsigned)count;	// 0x36db6d
- (void)dealloc;	// 0x36db21
- (unsigned)indexOfObject:(id)object;	// 0x36dc41
- (id)objectAtIndex:(unsigned)index;	// 0x36db9d
@end

