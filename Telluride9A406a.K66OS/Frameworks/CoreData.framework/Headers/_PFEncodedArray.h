/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSArray.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : NSArray {
@private
	NSData *_sourceData;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x3479ca75; converted property
- (id)init;	// 0x347a045d
- (BOOL)_isDeallocating;	// 0x3479f84d
- (void)_replaceObject:(id)object atIndex:(unsigned)index;	// 0x3479d82d
- (BOOL)_tryRetain;	// 0x3479f9d1
- (const id *)_values;	// 0x3479ca8d
- (Class)classForCoder:(id)coder;	// 0x3479d7c9
- (id)copy;	// 0x3479d7b9
// converted property getter: - (unsigned)count;	// 0x3479ca75
- (void)dealloc;	// 0x3479d735
- (id)description;	// 0x3479d791
- (id)mutableCopy;	// 0x3479d7e5
- (id)objectAtIndex:(unsigned)index;	// 0x3479ca85
- (oneway void)release;	// 0x3479f951
- (id)retain;	// 0x3479f815
- (unsigned)retainCount;	// 0x3479ca61
@end

