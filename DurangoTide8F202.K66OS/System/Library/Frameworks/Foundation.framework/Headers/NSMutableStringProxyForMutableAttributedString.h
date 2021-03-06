/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableString.h"
#import "Foundation-Structs.h"

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
@private
	NSMutableAttributedString *mutableAttributedString;	// 4 = 0x4
}
- (id)initWithMutableAttributedString:(id)mutableAttributedString;	// 0x324d9f2d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x324d8755
- (void)dealloc;	// 0x324d9ee5
- (void)finalize;	// 0x324d9eb9
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x324d8709
- (unsigned)length;	// 0x324d8789
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x324d86d9
@end

