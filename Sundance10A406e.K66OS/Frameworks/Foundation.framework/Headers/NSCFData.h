/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFData : NSMutableData {
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x355684bd; S=0x355684c9; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35568465
- (BOOL)allowsWeakReference;	// 0x355683fd
- (const void *)bytes;	// 0x355684c1
- (id)copyWithZone:(NSZone *)zone;	// 0x35568469
- (void)finalize;	// 0x35568425
- (unsigned)hash;	// 0x355683e5
- (BOOL)isEqual:(id)equal;	// 0x355683cd
// converted property getter: - (unsigned)length;	// 0x355684bd
- (void *)mutableBytes;	// 0x355684c5
- (oneway void)release;	// 0x355683f9
- (id)retain;	// 0x355683e9
- (unsigned)retainCount;	// 0x35568421
- (BOOL)retainWeakReference;	// 0x35568411
// converted property setter: - (void)setLength:(unsigned)length;	// 0x355684c9
@end

