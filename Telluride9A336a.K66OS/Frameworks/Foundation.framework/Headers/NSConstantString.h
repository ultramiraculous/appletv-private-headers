/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSSimpleCString.h"


@interface NSConstantString : NSSimpleCString {
}
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length;	// 0x336ab5d9
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x336ab7b5
- (BOOL)_isDeallocating;	// 0x336ab9cd
- (BOOL)_tryRetain;	// 0x336ab9c9
- (id)autorelease;	// 0x336ab9c1
- (const char *)cString;	// 0x336aba15
- (unsigned)cStringLength;	// 0x336ab735
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x336ab769
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x336ab5f5
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x336ab95d
- (id)copy;	// 0x336ab7ad
- (id)copyWithZone:(NSZone *)zone;	// 0x336ab7b1
- (void)dealloc;	// 0x336ab9dd
- (unsigned)fastestEncoding;	// 0x336ab749
- (void)finalize;	// 0x336ab9f9
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x336ab679
- (unsigned)hash;	// 0x336ab99d
- (BOOL)isEqual:(id)equal;	// 0x336ab7d1
- (BOOL)isEqualToString:(id)string;	// 0x336ab8a5
- (unsigned)length;	// 0x336ab721
- (const char *)lossyCString;	// 0x336aba29
- (oneway void)release;	// 0x336ab9d9
- (id)retain;	// 0x336ab9c5
- (unsigned)retainCount;	// 0x336ab9d1
- (unsigned)smallestEncoding;	// 0x336ab759
@end

