/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <NSObject.h> // Unknown library
#import "DataDetectorsCore-Structs.h"


@interface DDURLifier : NSObject {
}
+ (void)initialize;	// 0x3718d919
+ (BOOL)urlIfyNode:(id)node;	// 0x3718e149
+ (BOOL)urlIfyNode:(id)node phoneNumberTypes:(unsigned)types;	// 0x3718dfcd
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types;	// 0x3718e161
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types withReferenceDate:(id)referenceDate andTimeZone:(id)zone;	// 0x3718e191
+ (BOOL)urlIfyTextNode:(id)node inNode:(id)node2 forMatches:(id)matches;	// 0x3718de15
+ (id)urlMatchesForString:(id)string;	// 0x3718d959
+ (id)urlMatchesForString:(id)string includingTel:(BOOL)tel;	// 0x3718d96d
+ (id)urlMatchesForString:(id)string phoneNumberTypes:(unsigned)types;	// 0x3718d985
+ (id)urlMatchesForString:(id)string usingScanner:(DDScannerRef)scanner withPhoneNumberTypes:(unsigned)phoneNumberTypes referenceDate:(id)date timeZone:(id)zone storingResultsIn:(id)anIn;	// 0x3718dcb5
@end

