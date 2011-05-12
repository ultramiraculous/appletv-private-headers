/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


@interface NSSimpleCString : NSString {
@private
	char *bytes;	// 4 = 0x4
	int numBytes;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x327bde69
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length;	// 0x327bd621
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x327bd67d
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x327bd699
- (unsigned)cStringLength;	// 0x327bd64d
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x327bd9e5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x327bd849
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x327bdd31
- (id)copyWithZone:(NSZone *)zone;	// 0x327bda29
- (void)dealloc;	// 0x327bde29
- (unsigned)fastestEncoding;	// 0x327bd65d
- (void)finalize;	// 0x327bdde9
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x327be0a1
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x327bd795
- (BOOL)hasPrefix:(id)prefix;	// 0x327bdb41
- (BOOL)hasSuffix:(id)suffix;	// 0x327bdaad
- (unsigned)hash;	// 0x327bddc5
- (BOOL)isEqual:(id)equal;	// 0x327bdc75
- (BOOL)isEqualToString:(id)string;	// 0x327bdbd1
- (unsigned)length;	// 0x327bd63d
- (unsigned)smallestEncoding;	// 0x327bd66d
- (id)stringByAppendingString:(id)string;	// 0x327bde75
@end
