/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFormatter.h"

@class NSMutableDictionary;

@interface NSDateFormatter : NSFormatter {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	CFDateFormatterRef _formatter;	// 8 = 0x8
	unsigned _counter;	// 12 = 0xc
}
@property(retain) id AMSymbol;	// G=0x33738abd; S=0x33738b89; converted property
@property(retain) id PMSymbol;	// G=0x33738c25; S=0x33738cf1; converted property
@property(retain) id calendar;	// G=0x33737dc1; S=0x33737ecd; converted property
@property(retain) id dateFormat;	// G=0x33737a6d; S=0x33675ad5; converted property
@property(assign) unsigned dateStyle;	// G=0x33737715; S=0x33671579; converted property
@property(retain) id defaultDate;	// G=0x3373824d; S=0x33738319; converted property
@property(assign) BOOL doesRelativeDateFormatting;	// G=0x3373a071; S=0x3373a131; converted property
@property(retain) id eraSymbols;	// G=0x337383b5; S=0x33738481; converted property
@property(assign) unsigned formatterBehavior;	// G=0x337379c9; S=0x33737a09; converted property
@property(assign) BOOL generatesCalendarDates;	// G=0x33737925; S=0x3373796d; converted property
@property(retain) id gregorianStartDate;	// G=0x33739f09; S=0x33739fd5; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x33737f69; S=0x33738029; converted property
@property(retain) id locale;	// G=0x33737825; S=0x337378b9; converted property
@property(retain) id longEraSymbols;	// G=0x33738d8d; S=0x33738e59; converted property
@property(retain) id monthSymbols;	// G=0x3373851d; S=0x337385e9; converted property
@property(retain) id quarterSymbols;	// G=0x33739969; S=0x33739a35; converted property
@property(retain) id shortMonthSymbols;	// G=0x33738685; S=0x33738751; converted property
@property(retain) id shortQuarterSymbols;	// G=0x33739ad1; S=0x33739b9d; converted property
@property(retain) id shortStandaloneMonthSymbols;	// G=0x337391c5; S=0x33739291; converted property
@property(retain) id shortStandaloneQuarterSymbols;	// G=0x33739da1; S=0x33739e6d; converted property
@property(retain) id shortStandaloneWeekdaySymbols;	// G=0x33739699; S=0x33739765; converted property
@property(retain) id shortWeekdaySymbols;	// G=0x33738955; S=0x33738a21; converted property
@property(retain) id standaloneMonthSymbols;	// G=0x3373905d; S=0x33739129; converted property
@property(retain) id standaloneQuarterSymbols;	// G=0x33739c39; S=0x33739d05; converted property
@property(retain) id standaloneWeekdaySymbols;	// G=0x33696b59; S=0x337395fd; converted property
@property(assign) unsigned timeStyle;	// G=0x3373779d; S=0x33671601; converted property
@property(retain) id timeZone;	// G=0x33737c3d; S=0x33737d25; converted property
@property(retain) id twoDigitStartDate;	// G=0x337380e5; S=0x337381b1; converted property
@property(retain) id veryShortMonthSymbols;	// G=0x33738ef5; S=0x33738fc1; converted property
@property(retain) id veryShortStandaloneMonthSymbols;	// G=0x3373932d; S=0x337393f9; converted property
@property(retain) id veryShortStandaloneWeekdaySymbols;	// G=0x33739801; S=0x337398cd; converted property
@property(retain) id veryShortWeekdaySymbols;	// G=0x33739495; S=0x33739561; converted property
@property(retain) id weekdaySymbols;	// G=0x337387ed; S=0x337388b9; converted property
+ (id)dateFormatFromTemplate:(id)aTemplate options:(unsigned)options locale:(id)locale;	// 0x337376cd
+ (unsigned)defaultFormatterBehavior;	// 0x33670f0d
+ (void)initialize;	// 0x33670de9
+ (id)localizedStringFromDate:(id)date dateStyle:(unsigned)style timeStyle:(unsigned)style3;	// 0x33737639
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x33670e15
- (id)init;	// 0x33670e2d
- (id)initWithCoder:(id)coder;	// 0x33737119
// converted property getter: - (id)AMSymbol;	// 0x33738abd
// converted property getter: - (id)PMSymbol;	// 0x33738c25
- (id)_dateFormat;	// 0x33737ae9
- (void)_regenerateFormatter;	// 0x33670f1d
- (void)_reset;	// 0x33736efd
- (void)_setDateFormat:(id)format;	// 0x33737b4d
- (void)_setIsLenient:(BOOL)lenient;	// 0x33737bbd
// converted property getter: - (id)calendar;	// 0x33737dc1
- (id)copyWithZone:(NSZone *)zone;	// 0x33737009
// converted property getter: - (id)dateFormat;	// 0x33737a6d
- (id)dateFromString:(id)string;	// 0x337375fd
// converted property getter: - (unsigned)dateStyle;	// 0x33737715
- (void)dealloc;	// 0x33696c25
// converted property getter: - (id)defaultDate;	// 0x3373824d
// converted property getter: - (BOOL)doesRelativeDateFormatting;	// 0x3373a071
- (void)encodeWithCoder:(id)coder;	// 0x33737071
// converted property getter: - (id)eraSymbols;	// 0x337383b5
- (void)finalize;	// 0x33736fc5
// converted property getter: - (unsigned)formatterBehavior;	// 0x337379c9
// converted property getter: - (BOOL)generatesCalendarDates;	// 0x33737925
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x337372b9
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x337375dd
// converted property getter: - (id)gregorianStartDate;	// 0x33739f09
// converted property getter: - (BOOL)isLenient;	// 0x33737f69
// converted property getter: - (id)locale;	// 0x33737825
// converted property getter: - (id)longEraSymbols;	// 0x33738d8d
// converted property getter: - (id)monthSymbols;	// 0x3373851d
// converted property getter: - (id)quarterSymbols;	// 0x33739969
// converted property setter: - (void)setAMSymbol:(id)symbol;	// 0x33738b89
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x33737ecd
// converted property setter: - (void)setDateFormat:(id)format;	// 0x33675ad5
// converted property setter: - (void)setDateStyle:(unsigned)style;	// 0x33671579
// converted property setter: - (void)setDefaultDate:(id)date;	// 0x33738319
// converted property setter: - (void)setDoesRelativeDateFormatting:(BOOL)formatting;	// 0x3373a131
// converted property setter: - (void)setEraSymbols:(id)symbols;	// 0x33738481
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x33737a09
// converted property setter: - (void)setGeneratesCalendarDates:(BOOL)dates;	// 0x3373796d
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x33739fd5
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x33738029
// converted property setter: - (void)setLocale:(id)locale;	// 0x337378b9
// converted property setter: - (void)setLongEraSymbols:(id)symbols;	// 0x33738e59
// converted property setter: - (void)setMonthSymbols:(id)symbols;	// 0x337385e9
// converted property setter: - (void)setPMSymbol:(id)symbol;	// 0x33738cf1
// converted property setter: - (void)setQuarterSymbols:(id)symbols;	// 0x33739a35
// converted property setter: - (void)setShortMonthSymbols:(id)symbols;	// 0x33738751
// converted property setter: - (void)setShortQuarterSymbols:(id)symbols;	// 0x33739b9d
// converted property setter: - (void)setShortStandaloneMonthSymbols:(id)symbols;	// 0x33739291
// converted property setter: - (void)setShortStandaloneQuarterSymbols:(id)symbols;	// 0x33739e6d
// converted property setter: - (void)setShortStandaloneWeekdaySymbols:(id)symbols;	// 0x33739765
// converted property setter: - (void)setShortWeekdaySymbols:(id)symbols;	// 0x33738a21
// converted property setter: - (void)setStandaloneMonthSymbols:(id)symbols;	// 0x33739129
// converted property setter: - (void)setStandaloneQuarterSymbols:(id)symbols;	// 0x33739d05
// converted property setter: - (void)setStandaloneWeekdaySymbols:(id)symbols;	// 0x337395fd
// converted property setter: - (void)setTimeStyle:(unsigned)style;	// 0x33671601
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x33737d25
// converted property setter: - (void)setTwoDigitStartDate:(id)date;	// 0x337381b1
// converted property setter: - (void)setVeryShortMonthSymbols:(id)symbols;	// 0x33738fc1
// converted property setter: - (void)setVeryShortStandaloneMonthSymbols:(id)symbols;	// 0x337393f9
// converted property setter: - (void)setVeryShortStandaloneWeekdaySymbols:(id)symbols;	// 0x337398cd
// converted property setter: - (void)setVeryShortWeekdaySymbols:(id)symbols;	// 0x33739561
// converted property setter: - (void)setWeekdaySymbols:(id)symbols;	// 0x337388b9
// converted property getter: - (id)shortMonthSymbols;	// 0x33738685
// converted property getter: - (id)shortQuarterSymbols;	// 0x33739ad1
// converted property getter: - (id)shortStandaloneMonthSymbols;	// 0x337391c5
// converted property getter: - (id)shortStandaloneQuarterSymbols;	// 0x33739da1
// converted property getter: - (id)shortStandaloneWeekdaySymbols;	// 0x33739699
// converted property getter: - (id)shortWeekdaySymbols;	// 0x33738955
// converted property getter: - (id)standaloneMonthSymbols;	// 0x3373905d
// converted property getter: - (id)standaloneQuarterSymbols;	// 0x33739c39
// converted property getter: - (id)standaloneWeekdaySymbols;	// 0x33696b59
- (id)stringForObjectValue:(id)objectValue;	// 0x336716a9
- (id)stringFromDate:(id)date;	// 0x33671689
// converted property getter: - (unsigned)timeStyle;	// 0x3373779d
// converted property getter: - (id)timeZone;	// 0x33737c3d
// converted property getter: - (id)twoDigitStartDate;	// 0x337380e5
// converted property getter: - (id)veryShortMonthSymbols;	// 0x33738ef5
// converted property getter: - (id)veryShortStandaloneMonthSymbols;	// 0x3373932d
// converted property getter: - (id)veryShortStandaloneWeekdaySymbols;	// 0x33739801
// converted property getter: - (id)veryShortWeekdaySymbols;	// 0x33739495
// converted property getter: - (id)weekdaySymbols;	// 0x337387ed
@end
