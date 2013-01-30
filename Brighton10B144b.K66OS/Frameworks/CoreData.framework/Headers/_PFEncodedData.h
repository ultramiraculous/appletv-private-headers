/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSData.h> // Unknown library
#import "CoreData-Structs.h"


@interface _PFEncodedData : NSData {
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x30f87729
- (id)initWithCoder:(id)coder;	// 0x30f8777d
- (BOOL)_isDeallocating;	// 0x30f877f1
- (BOOL)_tryRetain;	// 0x30f87815
- (const void *)bytes;	// 0x30e90fb9
- (id)copyWithZone:(NSZone *)zone;	// 0x30eb0e9d
- (id)description;	// 0x30f87839
- (void)encodeWithCoder:(id)coder;	// 0x30f8778d
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x30f8794d
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x30f87961
- (BOOL)isEqualToData:(id)data;	// 0x30ea095d
- (unsigned)length;	// 0x30e90fbd
- (id)mutableCopy;	// 0x30f878a9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30f878bd
- (id)privateCopy;	// 0x30f87905
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x30f8799d
- (void)release;	// 0x30e90fcd
- (id)retain;	// 0x30e8f249
- (unsigned)retainCount;	// 0x30f877d1
- (id)subdataWithRange:(NSRange)range;	// 0x30f87979
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x30f87a99
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x30f87a49
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x30f87b09
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x30f87ab9
@end
