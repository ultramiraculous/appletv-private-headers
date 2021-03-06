/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface NSMutableData (NSMutableData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x32505c95
+ (id)dataWithCapacity:(unsigned)capacity;	// 0x32568235
+ (id)dataWithLength:(unsigned)length;	// 0x325127c5
- (id)initWithCapacity:(unsigned)capacity;	// 0x32568275
- (id)initWithLength:(unsigned)length;	// 0x32568299
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x32567a75
- (void)appendData:(id)data;	// 0x32567c05
- (Class)classForCoder;	// 0x32511245
- (void)increaseLengthBy:(unsigned)by;	// 0x32567dcd
- (void *)mutableBytes;	// 0x32567785
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x32567ec5
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes length:(unsigned)length;	// 0x325677cd
- (void)resetBytesInRange:(NSRange)range;	// 0x325680c1
- (void)setData:(id)data;	// 0x325681d1
- (void)setLength:(unsigned)length;	// 0x325677a9
@end

