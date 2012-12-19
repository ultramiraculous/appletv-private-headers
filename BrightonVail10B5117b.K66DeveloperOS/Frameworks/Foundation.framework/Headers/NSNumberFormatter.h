/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFormatter.h"
#import "Foundation-Structs.h"

@class NSMutableDictionary;

@interface NSNumberFormatter : NSFormatter {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	CFNumberFormatterRef _formatter;	// 8 = 0x8
	unsigned _counter;	// 12 = 0xc
	void *_reserved[12];	// 16 = 0x10
}
@property(assign) BOOL allowsFloats;	// G=0x31a116a9; S=0x319611e1; converted property
@property(assign) BOOL alwaysShowsDecimalSeparator;	// G=0x31a1185d; S=0x31a11925; converted property
@property(retain) id currencyCode;	// G=0x31a12be1; S=0x31a12ca1; converted property
@property(retain) id currencyDecimalSeparator;	// G=0x31a119a9; S=0x31a11a69; converted property
@property(retain) id currencyGroupingSeparator;	// G=0x31a14825; S=0x31a148e5; converted property
@property(retain) id currencySymbol;	// G=0x31a12d41; S=0x31a12e01; converted property
@property(retain) id decimalSeparator;	// G=0x31a116e9; S=0x31a117a9; converted property
@property(retain) id exponentSymbol;	// G=0x31a13581; S=0x31a13641; converted property
@property(assign) unsigned formatWidth;	// G=0x31a13979; S=0x31a13a45; converted property
@property(assign) unsigned formatterBehavior;	// G=0x31a10ff5; S=0x31a11035; converted property
@property(assign) BOOL generatesDecimalNumbers;	// G=0x31a10fad; S=0x31989cb1; converted property
@property(retain) id groupingSeparator;	// G=0x31a11c55; S=0x31a11d15; converted property
@property(assign) unsigned groupingSize;	// G=0x31a136e1; S=0x31a137ad; converted property
@property(retain) id internationalCurrencySymbol;	// G=0x31a12ea1; S=0x31a12f61; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x31a14985; S=0x31a14a61; converted property
@property(retain) id locale;	// G=0x31a10f05; S=0x31989c45; converted property
@property(retain) id maximum;	// G=0x31a14769; S=0x31a14791; converted property
@property(assign) unsigned maximumFractionDigits;	// G=0x31a14561; S=0x31a1462d; converted property
@property(assign) unsigned maximumIntegerDigits;	// G=0x31a142c9; S=0x31a14395; converted property
@property(assign) unsigned maximumSignificantDigits;	// G=0x31a14d91; S=0x31a14e5d; converted property
@property(retain) id minimum;	// G=0x31a146ad; S=0x31a146d5; converted property
@property(assign) unsigned minimumFractionDigits;	// G=0x31a14415; S=0x31a144e1; converted property
@property(assign) unsigned minimumIntegerDigits;	// G=0x31a1417d; S=0x31a14249; converted property
@property(assign) unsigned minimumSignificantDigits;	// G=0x31a14c45; S=0x31a14d11; converted property
@property(retain) id minusSign;	// G=0x31a132c1; S=0x31a13381; converted property
@property(retain) id multiplier;	// G=0x31a13ac5; S=0x31a13b85; converted property
@property(retain) id negativeFormat;	// G=0x31a11099; S=0x31a1116d; converted property
@property(retain) id negativeInfinitySymbol;	// G=0x31a12501; S=0x31961189; converted property
@property(retain) id negativePrefix;	// G=0x31a12921; S=0x31a129e1; converted property
@property(retain) id negativeSuffix;	// G=0x31a12a81; S=0x31a12b41; converted property
@property(retain) id nilSymbol;	// G=0x31a12005; S=0x319610d9; converted property
@property(retain) id notANumberSymbol;	// G=0x31a12165; S=0x31a12225; converted property
@property(assign) unsigned numberStyle;	// G=0x31a10e65; S=0x31961261; converted property
@property(retain) id paddingCharacter;	// G=0x31a13c25; S=0x31a13ce5; converted property
@property(assign) unsigned paddingPosition;	// G=0x31a13d85; S=0x31a13e51; converted property
@property(assign, getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;	// G=0x31a14edd; S=0x31a14f25; converted property
@property(retain) id perMillSymbol;	// G=0x31a13161; S=0x31a13221; converted property
@property(retain) id percentSymbol;	// G=0x31a13001; S=0x31a130c1; converted property
@property(retain) id plusSign;	// G=0x31a13421; S=0x31a134e1; converted property
@property(retain) id positiveFormat;	// G=0x31a113c9; S=0x31a11481; converted property
@property(retain) id positiveInfinitySymbol;	// G=0x31a123a1; S=0x31961131; converted property
@property(retain) id positivePrefix;	// G=0x31a12661; S=0x31a12721; converted property
@property(retain) id positiveSuffix;	// G=0x31a127c1; S=0x31a12881; converted property
@property(retain) id roundingIncrement;	// G=0x31a1401d; S=0x31a140dd; converted property
@property(assign) unsigned roundingMode;	// G=0x31a13ed1; S=0x31a13f9d; converted property
@property(assign) unsigned secondaryGroupingSize;	// G=0x31a1382d; S=0x31a138f9; converted property
@property(retain) id textAttributesForNegativeInfinity;	// G=0x31a12585; S=0x31a12609; converted property
@property(retain) id textAttributesForNegativeValues;	// G=0x31a112ed; S=0x31a11371; converted property
@property(retain) id textAttributesForNil;	// G=0x31a12089; S=0x31a1210d; converted property
@property(retain) id textAttributesForNotANumber;	// G=0x31a122c5; S=0x31a12349; converted property
@property(retain) id textAttributesForPositiveInfinity;	// G=0x31a12425; S=0x31a124a9; converted property
@property(retain) id textAttributesForPositiveValues;	// G=0x31a115cd; S=0x31a11651; converted property
@property(retain) id textAttributesForZero;	// G=0x31a11f29; S=0x31a11fad; converted property
@property(assign) BOOL usesGroupingSeparator;	// G=0x31a11b09; S=0x31a11bd1; converted property
@property(assign) BOOL usesSignificantDigits;	// G=0x31a14ae5; S=0x31a14bc1; converted property
@property(retain) id zeroSymbol;	// G=0x31a11dc9; S=0x31a11e89; converted property
+ (unsigned)defaultFormatterBehavior;	// 0x319610a5
+ (void)initialize;	// 0x31980f15
+ (id)localizedStringFromNumber:(id)number numberStyle:(unsigned)style;	// 0x31a10ded
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x31980f39
- (id)init;	// 0x31960d25
- (id)initWithCoder:(id)coder;	// 0x31a103b1
- (void *)__Keynote_NOOP;	// 0x31a100e1
- (void)_clearFormatter;	// 0x3196123d
- (void)_regenerateFormatter;	// 0x3196140d
- (void)_reset;	// 0x31a100e5
- (void)_setUsesCharacterDirection:(BOOL)direction;	// 0x31a1505d
- (BOOL)_usesCharacterDirection;	// 0x31a14f81
// converted property getter: - (BOOL)allowsFloats;	// 0x31a116a9
// converted property getter: - (BOOL)alwaysShowsDecimalSeparator;	// 0x31a1185d
- (id)attributedStringForObjectValue:(id)objectValue withDefaultAttributes:(id)defaultAttributes;	// 0x31a10531
- (id)copyWithZone:(NSZone *)zone;	// 0x31a102a1
// converted property getter: - (id)currencyCode;	// 0x31a12be1
// converted property getter: - (id)currencyDecimalSeparator;	// 0x31a119a9
// converted property getter: - (id)currencyGroupingSeparator;	// 0x31a14825
// converted property getter: - (id)currencySymbol;	// 0x31a12d41
- (void)dealloc;	// 0x3198a831
// converted property getter: - (id)decimalSeparator;	// 0x31a116e9
- (void)encodeWithCoder:(id)coder;	// 0x31a10309
// converted property getter: - (id)exponentSymbol;	// 0x31a13581
- (void)finalize;	// 0x31a1025d
// converted property getter: - (unsigned)formatWidth;	// 0x31a13979
// converted property getter: - (unsigned)formatterBehavior;	// 0x31a10ff5
// converted property getter: - (BOOL)generatesDecimalNumbers;	// 0x31a10fad
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x31a10535
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x31a10d95
// converted property getter: - (id)groupingSeparator;	// 0x31a11c55
// converted property getter: - (unsigned)groupingSize;	// 0x31a136e1
// converted property getter: - (id)internationalCurrencySymbol;	// 0x31a12ea1
// converted property getter: - (BOOL)isLenient;	// 0x31a14985
// converted property getter: - (BOOL)isPartialStringValidationEnabled;	// 0x31a14edd
// converted property getter: - (id)locale;	// 0x31a10f05
// converted property getter: - (id)maximum;	// 0x31a14769
// converted property getter: - (unsigned)maximumFractionDigits;	// 0x31a14561
// converted property getter: - (unsigned)maximumIntegerDigits;	// 0x31a142c9
// converted property getter: - (unsigned)maximumSignificantDigits;	// 0x31a14d91
// converted property getter: - (id)minimum;	// 0x31a146ad
// converted property getter: - (unsigned)minimumFractionDigits;	// 0x31a14415
// converted property getter: - (unsigned)minimumIntegerDigits;	// 0x31a1417d
// converted property getter: - (unsigned)minimumSignificantDigits;	// 0x31a14c45
// converted property getter: - (id)minusSign;	// 0x31a132c1
// converted property getter: - (id)multiplier;	// 0x31a13ac5
// converted property getter: - (id)negativeFormat;	// 0x31a11099
// converted property getter: - (id)negativeInfinitySymbol;	// 0x31a12501
// converted property getter: - (id)negativePrefix;	// 0x31a12921
// converted property getter: - (id)negativeSuffix;	// 0x31a12a81
// converted property getter: - (id)nilSymbol;	// 0x31a12005
// converted property getter: - (id)notANumberSymbol;	// 0x31a12165
- (id)numberFromString:(id)string;	// 0x31a10db5
// converted property getter: - (unsigned)numberStyle;	// 0x31a10e65
// converted property getter: - (id)paddingCharacter;	// 0x31a13c25
// converted property getter: - (unsigned)paddingPosition;	// 0x31a13d85
// converted property getter: - (id)perMillSymbol;	// 0x31a13161
// converted property getter: - (id)percentSymbol;	// 0x31a13001
// converted property getter: - (id)plusSign;	// 0x31a13421
// converted property getter: - (id)positiveFormat;	// 0x31a113c9
// converted property getter: - (id)positiveInfinitySymbol;	// 0x31a123a1
// converted property getter: - (id)positivePrefix;	// 0x31a12661
// converted property getter: - (id)positiveSuffix;	// 0x31a127c1
// converted property getter: - (id)roundingIncrement;	// 0x31a1401d
// converted property getter: - (unsigned)roundingMode;	// 0x31a13ed1
// converted property getter: - (unsigned)secondaryGroupingSize;	// 0x31a1382d
// converted property setter: - (void)setAllowsFloats:(BOOL)floats;	// 0x319611e1
// converted property setter: - (void)setAlwaysShowsDecimalSeparator:(BOOL)separator;	// 0x31a11925
// converted property setter: - (void)setCurrencyCode:(id)code;	// 0x31a12ca1
// converted property setter: - (void)setCurrencyDecimalSeparator:(id)separator;	// 0x31a11a69
// converted property setter: - (void)setCurrencyGroupingSeparator:(id)separator;	// 0x31a148e5
// converted property setter: - (void)setCurrencySymbol:(id)symbol;	// 0x31a12e01
// converted property setter: - (void)setDecimalSeparator:(id)separator;	// 0x31a117a9
// converted property setter: - (void)setExponentSymbol:(id)symbol;	// 0x31a13641
// converted property setter: - (void)setFormatWidth:(unsigned)width;	// 0x31a13a45
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x31a11035
// converted property setter: - (void)setGeneratesDecimalNumbers:(BOOL)numbers;	// 0x31989cb1
// converted property setter: - (void)setGroupingSeparator:(id)separator;	// 0x31a11d15
// converted property setter: - (void)setGroupingSize:(unsigned)size;	// 0x31a137ad
// converted property setter: - (void)setInternationalCurrencySymbol:(id)symbol;	// 0x31a12f61
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x31a14a61
// converted property setter: - (void)setLocale:(id)locale;	// 0x31989c45
// converted property setter: - (void)setMaximum:(id)maximum;	// 0x31a14791
// converted property setter: - (void)setMaximumFractionDigits:(unsigned)digits;	// 0x31a1462d
// converted property setter: - (void)setMaximumIntegerDigits:(unsigned)digits;	// 0x31a14395
// converted property setter: - (void)setMaximumSignificantDigits:(unsigned)digits;	// 0x31a14e5d
// converted property setter: - (void)setMinimum:(id)minimum;	// 0x31a146d5
// converted property setter: - (void)setMinimumFractionDigits:(unsigned)digits;	// 0x31a144e1
// converted property setter: - (void)setMinimumIntegerDigits:(unsigned)digits;	// 0x31a14249
// converted property setter: - (void)setMinimumSignificantDigits:(unsigned)digits;	// 0x31a14d11
// converted property setter: - (void)setMinusSign:(id)sign;	// 0x31a13381
// converted property setter: - (void)setMultiplier:(id)multiplier;	// 0x31a13b85
// converted property setter: - (void)setNegativeFormat:(id)format;	// 0x31a1116d
// converted property setter: - (void)setNegativeInfinitySymbol:(id)symbol;	// 0x31961189
// converted property setter: - (void)setNegativePrefix:(id)prefix;	// 0x31a129e1
// converted property setter: - (void)setNegativeSuffix:(id)suffix;	// 0x31a12b41
// converted property setter: - (void)setNilSymbol:(id)symbol;	// 0x319610d9
// converted property setter: - (void)setNotANumberSymbol:(id)symbol;	// 0x31a12225
// converted property setter: - (void)setNumberStyle:(unsigned)style;	// 0x31961261
// converted property setter: - (void)setPaddingCharacter:(id)character;	// 0x31a13ce5
// converted property setter: - (void)setPaddingPosition:(unsigned)position;	// 0x31a13e51
// converted property setter: - (void)setPartialStringValidationEnabled:(BOOL)enabled;	// 0x31a14f25
// converted property setter: - (void)setPerMillSymbol:(id)symbol;	// 0x31a13221
// converted property setter: - (void)setPercentSymbol:(id)symbol;	// 0x31a130c1
// converted property setter: - (void)setPlusSign:(id)sign;	// 0x31a134e1
// converted property setter: - (void)setPositiveFormat:(id)format;	// 0x31a11481
// converted property setter: - (void)setPositiveInfinitySymbol:(id)symbol;	// 0x31961131
// converted property setter: - (void)setPositivePrefix:(id)prefix;	// 0x31a12721
// converted property setter: - (void)setPositiveSuffix:(id)suffix;	// 0x31a12881
// converted property setter: - (void)setRoundingIncrement:(id)increment;	// 0x31a140dd
// converted property setter: - (void)setRoundingMode:(unsigned)mode;	// 0x31a13f9d
// converted property setter: - (void)setSecondaryGroupingSize:(unsigned)size;	// 0x31a138f9
// converted property setter: - (void)setTextAttributesForNegativeInfinity:(id)negativeInfinity;	// 0x31a12609
// converted property setter: - (void)setTextAttributesForNegativeValues:(id)negativeValues;	// 0x31a11371
// converted property setter: - (void)setTextAttributesForNil:(id)aNil;	// 0x31a1210d
// converted property setter: - (void)setTextAttributesForNotANumber:(id)notANumber;	// 0x31a12349
// converted property setter: - (void)setTextAttributesForPositiveInfinity:(id)positiveInfinity;	// 0x31a124a9
// converted property setter: - (void)setTextAttributesForPositiveValues:(id)positiveValues;	// 0x31a11651
// converted property setter: - (void)setTextAttributesForZero:(id)zero;	// 0x31a11fad
// converted property setter: - (void)setUsesGroupingSeparator:(BOOL)separator;	// 0x31a11bd1
// converted property setter: - (void)setUsesSignificantDigits:(BOOL)digits;	// 0x31a14bc1
// converted property setter: - (void)setZeroSymbol:(id)symbol;	// 0x31a11e89
- (id)stringForObjectValue:(id)objectValue;	// 0x319612c5
- (id)stringFromNumber:(id)number;	// 0x31989d0d
// converted property getter: - (id)textAttributesForNegativeInfinity;	// 0x31a12585
// converted property getter: - (id)textAttributesForNegativeValues;	// 0x31a112ed
// converted property getter: - (id)textAttributesForNil;	// 0x31a12089
// converted property getter: - (id)textAttributesForNotANumber;	// 0x31a122c5
// converted property getter: - (id)textAttributesForPositiveInfinity;	// 0x31a12425
// converted property getter: - (id)textAttributesForPositiveValues;	// 0x31a115cd
// converted property getter: - (id)textAttributesForZero;	// 0x31a11f29
// converted property getter: - (BOOL)usesGroupingSeparator;	// 0x31a11b09
// converted property getter: - (BOOL)usesSignificantDigits;	// 0x31a14ae5
// converted property getter: - (id)zeroSymbol;	// 0x31a11dc9
@end
