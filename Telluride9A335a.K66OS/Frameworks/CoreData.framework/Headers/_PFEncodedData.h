/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSData.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData {
@private
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x331bccd9
- (id)initWithCoder:(id)coder;	// 0x331bc495
- (BOOL)_isDeallocating;	// 0x331bc54d
- (BOOL)_tryRetain;	// 0x331bc575
- (const void *)bytes;	// 0x331bc3f1
- (id)copyWithZone:(NSZone *)zone;	// 0x331bc60d
- (id)description;	// 0x331bc59d
- (void)encodeWithCoder:(id)coder;	// 0x331bc4a5
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x331bcd2d
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x331bcd41
- (BOOL)isEqualToData:(id)data;	// 0x331bcd59
- (unsigned)length;	// 0x331bc3e1
- (id)mutableCopy;	// 0x331bc61d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x331bc631
- (id)privateCopy;	// 0x331bc679
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x331bce85
- (void)release;	// 0x331bc50d
- (id)retain;	// 0x331bc4e5
- (unsigned)retainCount;	// 0x331bc52d
- (id)subdataWithRange:(NSRange)range;	// 0x331bc6c1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x331bc739
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x331bc6e9
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x331bc7a9
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x331bc759
@end
