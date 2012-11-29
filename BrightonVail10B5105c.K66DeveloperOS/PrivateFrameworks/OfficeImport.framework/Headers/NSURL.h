/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSURL.h> // Unknown library


@interface NSURL (OCPURLAdditions)
+ (id)URLWithPackagePart:(id)packagePart;	// 0x3797f521
- (id)initWithPackagePart:(id)packagePart;	// 0x3797f55d
- (BOOL)isInternalToPackage;	// 0x3797f6c9
@end

@interface NSURL (SFUtilityAdditions)
+ (id)filePathURLWithEscapes:(id)escapes;	// 0x37b6939d
+ (id)improperlyEscapedString:(id)string;	// 0x37b691d9
+ (id)properlyEscapedString:(id)string;	// 0x37b6919d
+ (id)relativeURLWithEscapes:(id)escapes;	// 0x37b69345
- (BOOL)isRelative;	// 0x37b69449
@end
