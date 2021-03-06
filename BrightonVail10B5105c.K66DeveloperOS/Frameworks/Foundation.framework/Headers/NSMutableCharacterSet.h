/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCharacterSet.h"
#import "Foundation-Structs.h"


@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {
}
+ (id)alphanumericCharacterSet;	// 0x360d3d55
+ (id)capitalizedLetterCharacterSet;	// 0x360d3e75
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x360d3f4d
+ (id)characterSetWithCharactersInString:(id)string;	// 0x360b3d81
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x360d3f95
+ (id)characterSetWithRange:(NSRange)range;	// 0x360d38f5
+ (id)controlCharacterSet;	// 0x360d3b5d
+ (id)decimalDigitCharacterSet;	// 0x360b0459
+ (id)decomposableCharacterSet;	// 0x360d3d9d
+ (id)illegalCharacterSet;	// 0x360d3de5
+ (id)letterCharacterSet;	// 0x360d3c35
+ (id)lowercaseLetterCharacterSet;	// 0x360d3c7d
+ (id)newlineCharacterSet;	// 0x360d3f05
+ (id)nonBaseCharacterSet;	// 0x360d3d0d
+ (id)punctuationCharacterSet;	// 0x360d3e2d
+ (id)symbolCharacterSet;	// 0x360d3ebd
+ (id)uppercaseLetterCharacterSet;	// 0x360d3cc5
+ (id)whitespaceAndNewlineCharacterSet;	// 0x360d3bed
+ (id)whitespaceCharacterSet;	// 0x360d3ba5
- (id)init;	// 0x360b9861
- (id)initWithCoder:(id)coder;	// 0x360d3fdd
- (void)addCharactersInRange:(NSRange)range;	// 0x360d3999
- (void)addCharactersInString:(id)string;	// 0x360d3a19
- (id)copyWithZone:(NSZone *)zone;	// 0x360d392d
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x360d3ad9
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x360d3a99
- (void)invert;	// 0x360d3b19
- (BOOL)isMutable;	// 0x360d3b59
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x360d3959
- (void)removeCharactersInRange:(NSRange)range;	// 0x360d39d9
- (void)removeCharactersInString:(id)string;	// 0x360d3a59
@end

