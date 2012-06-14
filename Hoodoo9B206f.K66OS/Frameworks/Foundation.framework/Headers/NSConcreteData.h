/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteData : NSData {
@private
	unsigned _isInline : 1;	// 4 = 0x4
	unsigned _shouldFree : 1;	// 4 = 0x4
	unsigned _hasVM : 1;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _capacity;	// 12 = 0xc
	void *_bytes;	// 16 = 0x10
	unsigned char _space[12];	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x31cf54fd; converted property
- (id)init;	// 0x31d0cbfd
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x31cf4db1
- (BOOL)_bytesAreVM;	// 0x31d4f5a9
- (const void *)bytes;	// 0x31cf50a9
- (id)copyWithZone:(NSZone *)zone;	// 0x31d24725
- (void)dealloc;	// 0x31cf550d
- (void)finalize;	// 0x31d4f5bd
- (void)getBytes:(void *)bytes;	// 0x31d39c79
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x31d16d05
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x31d34ae1
// converted property getter: - (unsigned)length;	// 0x31cf54fd
@end
