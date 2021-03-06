/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
	NSMutableAttributedString *mutableAttributedString;	// 4 = 0x4
}
- (id)initWithMutableAttributedString:(id)mutableAttributedString;	// 0x373eed6d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x373eee71
- (void)dealloc;	// 0x373eedc1
- (void)finalize;	// 0x373eee0d
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x373eeea9
- (unsigned)length;	// 0x373eee39
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x373eeeed
@end

