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
@property(assign) unsigned length;	// G=0x360d84bd; S=0x360d84c9; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x360d8465
- (BOOL)allowsWeakReference;	// 0x360d83fd
- (const void *)bytes;	// 0x360d84c1
- (id)copyWithZone:(NSZone *)zone;	// 0x360d8469
- (void)finalize;	// 0x360d8425
- (unsigned)hash;	// 0x360d83e5
- (BOOL)isEqual:(id)equal;	// 0x360d83cd
// converted property getter: - (unsigned)length;	// 0x360d84bd
- (void *)mutableBytes;	// 0x360d84c5
- (oneway void)release;	// 0x360d83f9
- (id)retain;	// 0x360d83e9
- (unsigned)retainCount;	// 0x360d8421
- (BOOL)retainWeakReference;	// 0x360d8411
// converted property setter: - (void)setLength:(unsigned)length;	// 0x360d84c9
@end

