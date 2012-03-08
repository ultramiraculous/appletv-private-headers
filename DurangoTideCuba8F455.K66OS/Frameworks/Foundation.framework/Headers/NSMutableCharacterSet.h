/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "NSCharacterSet.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"


@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {
}
+ (id)alphanumericCharacterSet;	// 0x310465b1
+ (id)capitalizedLetterCharacterSet;	// 0x310464c1
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x3104640d
+ (id)characterSetWithCharactersInString:(id)string;	// 0x31047969
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x310463d1
+ (id)characterSetWithRange:(NSRange)range;	// 0x31047931
+ (id)controlCharacterSet;	// 0x31046791
+ (id)decimalDigitCharacterSet;	// 0x310466dd
+ (id)decomposableCharacterSet;	// 0x31046575
+ (id)illegalCharacterSet;	// 0x31046539
+ (id)letterCharacterSet;	// 0x310466a1
+ (id)lowercaseLetterCharacterSet;	// 0x31046665
+ (id)newlineCharacterSet;	// 0x31046449
+ (id)nonBaseCharacterSet;	// 0x310465ed
+ (id)punctuationCharacterSet;	// 0x310464fd
+ (id)symbolCharacterSet;	// 0x31046485
+ (id)uppercaseLetterCharacterSet;	// 0x31046629
+ (id)whitespaceAndNewlineCharacterSet;	// 0x31046719
+ (id)whitespaceCharacterSet;	// 0x31046755
- (id)init;	// 0x31047995
- (id)initWithCoder:(id)coder;	// 0x31047105
- (void)addCharactersInRange:(NSRange)range;	// 0x31046c61
- (void)addCharactersInString:(id)string;	// 0x31046bd9
- (id)copyWithZone:(NSZone *)zone;	// 0x310467cd
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x31046b0d
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x31046b51
- (void)invert;	// 0x31046ac9
- (BOOL)isMutable;	// 0x31046219
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31046ca5
- (void)removeCharactersInRange:(NSRange)range;	// 0x31046c1d
- (void)removeCharactersInString:(id)string;	// 0x31046b95
@end
