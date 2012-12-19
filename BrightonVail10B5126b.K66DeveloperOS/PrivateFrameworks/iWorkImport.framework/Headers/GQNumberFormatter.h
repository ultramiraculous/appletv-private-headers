/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray;

@interface GQNumberFormatter : NSObject {
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;	// 32 = 0x20
	NSString *mCurrencyString;	// 36 = 0x24
	NSString *mPercentageString;	// 40 = 0x28
	NSString *mScientificString;	// 44 = 0x2c
	NSString *mDecimalString;	// 48 = 0x30
	NSString *mPercentSymbol;	// 52 = 0x34
	NSMutableArray *mTransformedDecimalStrings;	// 56 = 0x38
	NSMutableArray *mTransformedCurrencyStrings;	// 60 = 0x3c
	NSMutableArray *mTransformedPercentageStrings;	// 64 = 0x40
	NSMutableArray *mTransformedScientificStrings;	// 68 = 0x44
	CFStringRef mAdditionalCurrencyCode;	// 72 = 0x48
	CFArrayRef mAdditionalCurrencyCodeFormatters;	// 76 = 0x4c
}
+ (id)availableCurrencyCodes;	// 0x36925879
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x369258c5
+ (id)currentLocaleCurrencyCode;	// 0x36925925
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x369258f5
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x369259e1
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x369259ad
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x36925895
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x36925671
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x369253b1
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x36925c51
+ (id)localizedPercentSymbol;	// 0x36925a11
+ (id)numberFormatStringSpecialSymbols;	// 0x36925951
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x3692531d
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x36925369
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x369252c1
+ (id)userVisibleCurrencyCodes;	// 0x36925a3d
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x36925cc9
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x36926299
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x36926a5d
- (id)currentLocaleCurrencyCode;	// 0x36926bed
- (void)dealloc;	// 0x3692608d
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x3692625d
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x36926c8d
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x36926c35
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x36926a25
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code successfulString:(const CFStringRef *)string3;	// 0x36926879
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x36926449
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x36926b5d
- (id)localizedPercentSymbol;	// 0x36926cd1
- (void)numberPreferencesChanged:(id)changed;	// 0x3692623d
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x369263cd
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x36926409
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x369267e1
@end
