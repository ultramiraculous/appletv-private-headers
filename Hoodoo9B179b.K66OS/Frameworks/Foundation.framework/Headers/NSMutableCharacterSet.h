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
+ (id)alphanumericCharacterSet;	// 0x31064251
+ (id)capitalizedLetterCharacterSet;	// 0x31064371
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x31064449
+ (id)characterSetWithCharactersInString:(id)string;	// 0x3102a3f9
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x31064491
+ (id)characterSetWithRange:(NSRange)range;	// 0x31063df1
+ (id)controlCharacterSet;	// 0x31064059
+ (id)decimalDigitCharacterSet;	// 0x31043629
+ (id)decomposableCharacterSet;	// 0x31064299
+ (id)illegalCharacterSet;	// 0x310642e1
+ (id)letterCharacterSet;	// 0x31064131
+ (id)lowercaseLetterCharacterSet;	// 0x31064179
+ (id)newlineCharacterSet;	// 0x31064401
+ (id)nonBaseCharacterSet;	// 0x31064209
+ (id)punctuationCharacterSet;	// 0x31064329
+ (id)symbolCharacterSet;	// 0x310643b9
+ (id)uppercaseLetterCharacterSet;	// 0x310641c1
+ (id)whitespaceAndNewlineCharacterSet;	// 0x310640e9
+ (id)whitespaceCharacterSet;	// 0x310640a1
- (id)init;	// 0x31042ef1
- (id)initWithCoder:(id)coder;	// 0x310644d9
- (void)addCharactersInRange:(NSRange)range;	// 0x31063e95
- (void)addCharactersInString:(id)string;	// 0x31063f15
- (id)copyWithZone:(NSZone *)zone;	// 0x31063e29
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x31063fd5
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x31063f95
- (void)invert;	// 0x31064015
- (BOOL)isMutable;	// 0x31064055
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31063e55
- (void)removeCharactersInRange:(NSRange)range;	// 0x31063ed5
- (void)removeCharactersInString:(id)string;	// 0x31063f55
@end

