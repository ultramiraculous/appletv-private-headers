/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCharacterSet.h"
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"


@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {
}
+ (id)alphanumericCharacterSet;	// 0x315cd251
+ (id)capitalizedLetterCharacterSet;	// 0x315cd371
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x315cd449
+ (id)characterSetWithCharactersInString:(id)string;	// 0x315933f9
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x315cd491
+ (id)characterSetWithRange:(NSRange)range;	// 0x315ccdf1
+ (id)controlCharacterSet;	// 0x315cd059
+ (id)decimalDigitCharacterSet;	// 0x315ac629
+ (id)decomposableCharacterSet;	// 0x315cd299
+ (id)illegalCharacterSet;	// 0x315cd2e1
+ (id)letterCharacterSet;	// 0x315cd131
+ (id)lowercaseLetterCharacterSet;	// 0x315cd179
+ (id)newlineCharacterSet;	// 0x315cd401
+ (id)nonBaseCharacterSet;	// 0x315cd209
+ (id)punctuationCharacterSet;	// 0x315cd329
+ (id)symbolCharacterSet;	// 0x315cd3b9
+ (id)uppercaseLetterCharacterSet;	// 0x315cd1c1
+ (id)whitespaceAndNewlineCharacterSet;	// 0x315cd0e9
+ (id)whitespaceCharacterSet;	// 0x315cd0a1
- (id)init;	// 0x315abef1
- (id)initWithCoder:(id)coder;	// 0x315cd4d9
- (void)addCharactersInRange:(NSRange)range;	// 0x315cce95
- (void)addCharactersInString:(id)string;	// 0x315ccf15
- (id)copyWithZone:(NSZone *)zone;	// 0x315cce29
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x315ccfd5
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x315ccf95
- (void)invert;	// 0x315cd015
- (BOOL)isMutable;	// 0x315cd055
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x315cce55
- (void)removeCharactersInRange:(NSRange)range;	// 0x315cced5
- (void)removeCharactersInString:(id)string;	// 0x315ccf55
@end

