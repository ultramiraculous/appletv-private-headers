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
@property(assign) BOOL allowsFloats;	// G=0x361356a9; S=0x360851e1; converted property
@property(assign) BOOL alwaysShowsDecimalSeparator;	// G=0x3613585d; S=0x36135925; converted property
@property(retain) id currencyCode;	// G=0x36136be1; S=0x36136ca1; converted property
@property(retain) id currencyDecimalSeparator;	// G=0x361359a9; S=0x36135a69; converted property
@property(retain) id currencyGroupingSeparator;	// G=0x36138825; S=0x361388e5; converted property
@property(retain) id currencySymbol;	// G=0x36136d41; S=0x36136e01; converted property
@property(retain) id decimalSeparator;	// G=0x361356e9; S=0x361357a9; converted property
@property(retain) id exponentSymbol;	// G=0x36137581; S=0x36137641; converted property
@property(assign) unsigned formatWidth;	// G=0x36137979; S=0x36137a45; converted property
@property(assign) unsigned formatterBehavior;	// G=0x36134ff5; S=0x36135035; converted property
@property(assign) BOOL generatesDecimalNumbers;	// G=0x36134fad; S=0x360adcb1; converted property
@property(retain) id groupingSeparator;	// G=0x36135c55; S=0x36135d15; converted property
@property(assign) unsigned groupingSize;	// G=0x361376e1; S=0x361377ad; converted property
@property(retain) id internationalCurrencySymbol;	// G=0x36136ea1; S=0x36136f61; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x36138985; S=0x36138a61; converted property
@property(retain) id locale;	// G=0x36134f05; S=0x360adc45; converted property
@property(retain) id maximum;	// G=0x36138769; S=0x36138791; converted property
@property(assign) unsigned maximumFractionDigits;	// G=0x36138561; S=0x3613862d; converted property
@property(assign) unsigned maximumIntegerDigits;	// G=0x361382c9; S=0x36138395; converted property
@property(assign) unsigned maximumSignificantDigits;	// G=0x36138d91; S=0x36138e5d; converted property
@property(retain) id minimum;	// G=0x361386ad; S=0x361386d5; converted property
@property(assign) unsigned minimumFractionDigits;	// G=0x36138415; S=0x361384e1; converted property
@property(assign) unsigned minimumIntegerDigits;	// G=0x3613817d; S=0x36138249; converted property
@property(assign) unsigned minimumSignificantDigits;	// G=0x36138c45; S=0x36138d11; converted property
@property(retain) id minusSign;	// G=0x361372c1; S=0x36137381; converted property
@property(retain) id multiplier;	// G=0x36137ac5; S=0x36137b85; converted property
@property(retain) id negativeFormat;	// G=0x36135099; S=0x3613516d; converted property
@property(retain) id negativeInfinitySymbol;	// G=0x36136501; S=0x36085189; converted property
@property(retain) id negativePrefix;	// G=0x36136921; S=0x361369e1; converted property
@property(retain) id negativeSuffix;	// G=0x36136a81; S=0x36136b41; converted property
@property(retain) id nilSymbol;	// G=0x36136005; S=0x360850d9; converted property
@property(retain) id notANumberSymbol;	// G=0x36136165; S=0x36136225; converted property
@property(assign) unsigned numberStyle;	// G=0x36134e65; S=0x36085261; converted property
@property(retain) id paddingCharacter;	// G=0x36137c25; S=0x36137ce5; converted property
@property(assign) unsigned paddingPosition;	// G=0x36137d85; S=0x36137e51; converted property
@property(assign, getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;	// G=0x36138edd; S=0x36138f25; converted property
@property(retain) id perMillSymbol;	// G=0x36137161; S=0x36137221; converted property
@property(retain) id percentSymbol;	// G=0x36137001; S=0x361370c1; converted property
@property(retain) id plusSign;	// G=0x36137421; S=0x361374e1; converted property
@property(retain) id positiveFormat;	// G=0x361353c9; S=0x36135481; converted property
@property(retain) id positiveInfinitySymbol;	// G=0x361363a1; S=0x36085131; converted property
@property(retain) id positivePrefix;	// G=0x36136661; S=0x36136721; converted property
@property(retain) id positiveSuffix;	// G=0x361367c1; S=0x36136881; converted property
@property(retain) id roundingIncrement;	// G=0x3613801d; S=0x361380dd; converted property
@property(assign) unsigned roundingMode;	// G=0x36137ed1; S=0x36137f9d; converted property
@property(assign) unsigned secondaryGroupingSize;	// G=0x3613782d; S=0x361378f9; converted property
@property(retain) id textAttributesForNegativeInfinity;	// G=0x36136585; S=0x36136609; converted property
@property(retain) id textAttributesForNegativeValues;	// G=0x361352ed; S=0x36135371; converted property
@property(retain) id textAttributesForNil;	// G=0x36136089; S=0x3613610d; converted property
@property(retain) id textAttributesForNotANumber;	// G=0x361362c5; S=0x36136349; converted property
@property(retain) id textAttributesForPositiveInfinity;	// G=0x36136425; S=0x361364a9; converted property
@property(retain) id textAttributesForPositiveValues;	// G=0x361355cd; S=0x36135651; converted property
@property(retain) id textAttributesForZero;	// G=0x36135f29; S=0x36135fad; converted property
@property(assign) BOOL usesGroupingSeparator;	// G=0x36135b09; S=0x36135bd1; converted property
@property(assign) BOOL usesSignificantDigits;	// G=0x36138ae5; S=0x36138bc1; converted property
@property(retain) id zeroSymbol;	// G=0x36135dc9; S=0x36135e89; converted property
+ (unsigned)defaultFormatterBehavior;	// 0x360850a5
+ (void)initialize;	// 0x360a4f15
+ (id)localizedStringFromNumber:(id)number numberStyle:(unsigned)style;	// 0x36134ded
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x360a4f39
- (id)init;	// 0x36084d25
- (id)initWithCoder:(id)coder;	// 0x361343b1
- (void *)__Keynote_NOOP;	// 0x361340e1
- (void)_clearFormatter;	// 0x3608523d
- (void)_regenerateFormatter;	// 0x3608540d
- (void)_reset;	// 0x361340e5
- (void)_setUsesCharacterDirection:(BOOL)direction;	// 0x3613905d
- (BOOL)_usesCharacterDirection;	// 0x36138f81
// converted property getter: - (BOOL)allowsFloats;	// 0x361356a9
// converted property getter: - (BOOL)alwaysShowsDecimalSeparator;	// 0x3613585d
- (id)attributedStringForObjectValue:(id)objectValue withDefaultAttributes:(id)defaultAttributes;	// 0x36134531
- (id)copyWithZone:(NSZone *)zone;	// 0x361342a1
// converted property getter: - (id)currencyCode;	// 0x36136be1
// converted property getter: - (id)currencyDecimalSeparator;	// 0x361359a9
// converted property getter: - (id)currencyGroupingSeparator;	// 0x36138825
// converted property getter: - (id)currencySymbol;	// 0x36136d41
- (void)dealloc;	// 0x360ae831
// converted property getter: - (id)decimalSeparator;	// 0x361356e9
- (void)encodeWithCoder:(id)coder;	// 0x36134309
// converted property getter: - (id)exponentSymbol;	// 0x36137581
- (void)finalize;	// 0x3613425d
// converted property getter: - (unsigned)formatWidth;	// 0x36137979
// converted property getter: - (unsigned)formatterBehavior;	// 0x36134ff5
// converted property getter: - (BOOL)generatesDecimalNumbers;	// 0x36134fad
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x36134535
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x36134d95
// converted property getter: - (id)groupingSeparator;	// 0x36135c55
// converted property getter: - (unsigned)groupingSize;	// 0x361376e1
// converted property getter: - (id)internationalCurrencySymbol;	// 0x36136ea1
// converted property getter: - (BOOL)isLenient;	// 0x36138985
// converted property getter: - (BOOL)isPartialStringValidationEnabled;	// 0x36138edd
// converted property getter: - (id)locale;	// 0x36134f05
// converted property getter: - (id)maximum;	// 0x36138769
// converted property getter: - (unsigned)maximumFractionDigits;	// 0x36138561
// converted property getter: - (unsigned)maximumIntegerDigits;	// 0x361382c9
// converted property getter: - (unsigned)maximumSignificantDigits;	// 0x36138d91
// converted property getter: - (id)minimum;	// 0x361386ad
// converted property getter: - (unsigned)minimumFractionDigits;	// 0x36138415
// converted property getter: - (unsigned)minimumIntegerDigits;	// 0x3613817d
// converted property getter: - (unsigned)minimumSignificantDigits;	// 0x36138c45
// converted property getter: - (id)minusSign;	// 0x361372c1
// converted property getter: - (id)multiplier;	// 0x36137ac5
// converted property getter: - (id)negativeFormat;	// 0x36135099
// converted property getter: - (id)negativeInfinitySymbol;	// 0x36136501
// converted property getter: - (id)negativePrefix;	// 0x36136921
// converted property getter: - (id)negativeSuffix;	// 0x36136a81
// converted property getter: - (id)nilSymbol;	// 0x36136005
// converted property getter: - (id)notANumberSymbol;	// 0x36136165
- (id)numberFromString:(id)string;	// 0x36134db5
// converted property getter: - (unsigned)numberStyle;	// 0x36134e65
// converted property getter: - (id)paddingCharacter;	// 0x36137c25
// converted property getter: - (unsigned)paddingPosition;	// 0x36137d85
// converted property getter: - (id)perMillSymbol;	// 0x36137161
// converted property getter: - (id)percentSymbol;	// 0x36137001
// converted property getter: - (id)plusSign;	// 0x36137421
// converted property getter: - (id)positiveFormat;	// 0x361353c9
// converted property getter: - (id)positiveInfinitySymbol;	// 0x361363a1
// converted property getter: - (id)positivePrefix;	// 0x36136661
// converted property getter: - (id)positiveSuffix;	// 0x361367c1
// converted property getter: - (id)roundingIncrement;	// 0x3613801d
// converted property getter: - (unsigned)roundingMode;	// 0x36137ed1
// converted property getter: - (unsigned)secondaryGroupingSize;	// 0x3613782d
// converted property setter: - (void)setAllowsFloats:(BOOL)floats;	// 0x360851e1
// converted property setter: - (void)setAlwaysShowsDecimalSeparator:(BOOL)separator;	// 0x36135925
// converted property setter: - (void)setCurrencyCode:(id)code;	// 0x36136ca1
// converted property setter: - (void)setCurrencyDecimalSeparator:(id)separator;	// 0x36135a69
// converted property setter: - (void)setCurrencyGroupingSeparator:(id)separator;	// 0x361388e5
// converted property setter: - (void)setCurrencySymbol:(id)symbol;	// 0x36136e01
// converted property setter: - (void)setDecimalSeparator:(id)separator;	// 0x361357a9
// converted property setter: - (void)setExponentSymbol:(id)symbol;	// 0x36137641
// converted property setter: - (void)setFormatWidth:(unsigned)width;	// 0x36137a45
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x36135035
// converted property setter: - (void)setGeneratesDecimalNumbers:(BOOL)numbers;	// 0x360adcb1
// converted property setter: - (void)setGroupingSeparator:(id)separator;	// 0x36135d15
// converted property setter: - (void)setGroupingSize:(unsigned)size;	// 0x361377ad
// converted property setter: - (void)setInternationalCurrencySymbol:(id)symbol;	// 0x36136f61
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x36138a61
// converted property setter: - (void)setLocale:(id)locale;	// 0x360adc45
// converted property setter: - (void)setMaximum:(id)maximum;	// 0x36138791
// converted property setter: - (void)setMaximumFractionDigits:(unsigned)digits;	// 0x3613862d
// converted property setter: - (void)setMaximumIntegerDigits:(unsigned)digits;	// 0x36138395
// converted property setter: - (void)setMaximumSignificantDigits:(unsigned)digits;	// 0x36138e5d
// converted property setter: - (void)setMinimum:(id)minimum;	// 0x361386d5
// converted property setter: - (void)setMinimumFractionDigits:(unsigned)digits;	// 0x361384e1
// converted property setter: - (void)setMinimumIntegerDigits:(unsigned)digits;	// 0x36138249
// converted property setter: - (void)setMinimumSignificantDigits:(unsigned)digits;	// 0x36138d11
// converted property setter: - (void)setMinusSign:(id)sign;	// 0x36137381
// converted property setter: - (void)setMultiplier:(id)multiplier;	// 0x36137b85
// converted property setter: - (void)setNegativeFormat:(id)format;	// 0x3613516d
// converted property setter: - (void)setNegativeInfinitySymbol:(id)symbol;	// 0x36085189
// converted property setter: - (void)setNegativePrefix:(id)prefix;	// 0x361369e1
// converted property setter: - (void)setNegativeSuffix:(id)suffix;	// 0x36136b41
// converted property setter: - (void)setNilSymbol:(id)symbol;	// 0x360850d9
// converted property setter: - (void)setNotANumberSymbol:(id)symbol;	// 0x36136225
// converted property setter: - (void)setNumberStyle:(unsigned)style;	// 0x36085261
// converted property setter: - (void)setPaddingCharacter:(id)character;	// 0x36137ce5
// converted property setter: - (void)setPaddingPosition:(unsigned)position;	// 0x36137e51
// converted property setter: - (void)setPartialStringValidationEnabled:(BOOL)enabled;	// 0x36138f25
// converted property setter: - (void)setPerMillSymbol:(id)symbol;	// 0x36137221
// converted property setter: - (void)setPercentSymbol:(id)symbol;	// 0x361370c1
// converted property setter: - (void)setPlusSign:(id)sign;	// 0x361374e1
// converted property setter: - (void)setPositiveFormat:(id)format;	// 0x36135481
// converted property setter: - (void)setPositiveInfinitySymbol:(id)symbol;	// 0x36085131
// converted property setter: - (void)setPositivePrefix:(id)prefix;	// 0x36136721
// converted property setter: - (void)setPositiveSuffix:(id)suffix;	// 0x36136881
// converted property setter: - (void)setRoundingIncrement:(id)increment;	// 0x361380dd
// converted property setter: - (void)setRoundingMode:(unsigned)mode;	// 0x36137f9d
// converted property setter: - (void)setSecondaryGroupingSize:(unsigned)size;	// 0x361378f9
// converted property setter: - (void)setTextAttributesForNegativeInfinity:(id)negativeInfinity;	// 0x36136609
// converted property setter: - (void)setTextAttributesForNegativeValues:(id)negativeValues;	// 0x36135371
// converted property setter: - (void)setTextAttributesForNil:(id)aNil;	// 0x3613610d
// converted property setter: - (void)setTextAttributesForNotANumber:(id)notANumber;	// 0x36136349
// converted property setter: - (void)setTextAttributesForPositiveInfinity:(id)positiveInfinity;	// 0x361364a9
// converted property setter: - (void)setTextAttributesForPositiveValues:(id)positiveValues;	// 0x36135651
// converted property setter: - (void)setTextAttributesForZero:(id)zero;	// 0x36135fad
// converted property setter: - (void)setUsesGroupingSeparator:(BOOL)separator;	// 0x36135bd1
// converted property setter: - (void)setUsesSignificantDigits:(BOOL)digits;	// 0x36138bc1
// converted property setter: - (void)setZeroSymbol:(id)symbol;	// 0x36135e89
- (id)stringForObjectValue:(id)objectValue;	// 0x360852c5
- (id)stringFromNumber:(id)number;	// 0x360add0d
// converted property getter: - (id)textAttributesForNegativeInfinity;	// 0x36136585
// converted property getter: - (id)textAttributesForNegativeValues;	// 0x361352ed
// converted property getter: - (id)textAttributesForNil;	// 0x36136089
// converted property getter: - (id)textAttributesForNotANumber;	// 0x361362c5
// converted property getter: - (id)textAttributesForPositiveInfinity;	// 0x36136425
// converted property getter: - (id)textAttributesForPositiveValues;	// 0x361355cd
// converted property getter: - (id)textAttributesForZero;	// 0x36135f29
// converted property getter: - (BOOL)usesGroupingSeparator;	// 0x36135b09
// converted property getter: - (BOOL)usesSignificantDigits;	// 0x36138ae5
// converted property getter: - (id)zeroSymbol;	// 0x36135dc9
@end

