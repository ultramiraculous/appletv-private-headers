/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"


@interface NSPlaceholderMutableString : NSMutableString {
}
- (id)init;	// 0x36073ef9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x3608d565
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x361056a1
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x36105785
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x36105831
- (id)initWithCapacity:(unsigned)capacity;	// 0x3608a1c9
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3610574d
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x36091381
- (id)initWithString:(id)string;	// 0x3608a10d
- (id)initWithUTF8String:(const char *)utf8String;	// 0x361055c1
- (BOOL)_isDeallocating;	// 0x361055b5
- (BOOL)_tryRetain;	// 0x361055b9
- (id)autorelease;	// 0x361055a1
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x361058b9
- (void)dealloc;	// 0x361055bd
- (unsigned)length;	// 0x36105889
- (oneway void)release;	// 0x361055b1
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x361058e9
- (id)retain;	// 0x361055a5
- (unsigned)retainCount;	// 0x361055a9
@end

