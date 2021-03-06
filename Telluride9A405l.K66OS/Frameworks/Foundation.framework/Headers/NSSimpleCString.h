/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSSimpleCString : NSString {
@private
	char *bytes;	// 4 = 0x4
	int numBytes;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x302ebc69
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length;	// 0x302ebc71
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x302ebec5
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x302ec411
- (unsigned)cStringLength;	// 0x302ebdc5
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x302ebdf5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x302ebc91
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x302ec171
- (id)copyWithZone:(NSZone *)zone;	// 0x302ebe39
- (void)dealloc;	// 0x302ec729
- (unsigned)fastestEncoding;	// 0x302ebdd5
- (void)finalize;	// 0x302ec76d
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x302ec361
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x302ebd11
- (BOOL)hasPrefix:(id)prefix;	// 0x302ec20d
- (BOOL)hasSuffix:(id)suffix;	// 0x302ec2a5
- (unsigned)hash;	// 0x302ec341
- (BOOL)isEqual:(id)equal;	// 0x302ebee1
- (BOOL)isEqualToString:(id)string;	// 0x302ec0c5
- (unsigned)length;	// 0x302ebdb5
- (unsigned)smallestEncoding;	// 0x302ebde5
- (id)stringByAppendingString:(id)string;	// 0x302ec509
@end

