/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import </libobjc.A.h>
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSCalendar : NSObject <NSCopying, NSSecureCoding> {
}
@property(assign) unsigned firstWeekday;	// G=0x2d303709; S=0x2d3036e5; converted property
@property(retain) id gregorianStartDate;	// G=0x2d303779; S=0x2d303775; converted property
@property(retain) id locale;	// G=0x2d303679; S=0x2d303655; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x2d303751; S=0x2d30372d; converted property
@property(retain) id timeZone;	// G=0x2d3036c1; S=0x2d30369d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d285069
+ (id)currentCalendar;	// 0x2d279399
+ (void)initialize;	// 0x2d279371
+ (BOOL)supportsSecureCoding;	// 0x2d3035fd
- (id)init;	// 0x2d303405
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x2d30360d
- (id)initWithCoder:(id)coder;	// 0x2d303601
- (id)AMSymbol;	// 0x2d303bd5
- (id)PMSymbol;	// 0x2d303c59
- (unsigned char)_addComponents:(double *)components :(unsigned long)arg2 :(const char *)arg3 :(void *)arg4;	// 0x2d304ad5
- (unsigned long)_cfTypeID;	// 0x2d303409
- (unsigned char)_composeAbsoluteTime:(double *)time :(const char *)arg2 :(void *)arg3;	// 0x2d304585
- (id)_copyLocale;	// 0x2d3038b9
- (id)_copyTimeZone;	// 0x2d3038e1
- (unsigned char)_decomposeAbsoluteTime:(double)time :(const char *)arg2 :(void *)arg3;	// 0x2d3047d5
- (unsigned char)_diffComponents:(double)components :(double)arg2 :(unsigned long)arg3 :(const char *)arg4 :(void *)arg5;	// 0x2d304d51
- (id)_gregorianStartDate;	// 0x2d303919
- (XXStruct_K5nmsA)_maximumRangeOfUnit:(unsigned)unit;	// 0x2d3043d5
- (XXStruct_K5nmsA)_minimumRangeOfUnit:(unsigned)unit;	// 0x2d304391
- (long)_ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;	// 0x2d304495
- (XXStruct_K5nmsA)_rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;	// 0x2d304419
- (unsigned char)_rangeOfUnit:(unsigned)unit startTime:(double *)time interval:(double *)interval forAT:(double)at;	// 0x2d3044e9
- (void)_setGregorianStartDate:(id)date;	// 0x2d303909
- (id)calendarIdentifier;	// 0x2d303631
- (id)components:(unsigned)components fromDate:(id)date;	// 0x2d30384d
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x2d303895
- (id)copyWithZone:(NSZone *)zone;	// 0x2d3034e5
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x2d303871
- (id)dateFromComponents:(id)components;	// 0x2d303829
- (void)encodeWithCoder:(id)coder;	// 0x2d303605
- (id)eraSymbols;	// 0x2d303941
// converted property getter: - (unsigned)firstWeekday;	// 0x2d303709
// converted property getter: - (id)gregorianStartDate;	// 0x2d303779
- (unsigned)hash;	// 0x2d303439
- (BOOL)isEqual:(id)equal;	// 0x2d303461
// converted property getter: - (id)locale;	// 0x2d303679
- (id)longEraSymbols;	// 0x2d303cdd
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x2d3037a9
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x2d303751
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x2d30377d
- (id)monthSymbols;	// 0x2d3039c5
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x2d303801
- (id)quarterSymbols;	// 0x2d304181
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x2d3037d5
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x2d303825
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x2d3036e5
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x2d303775
// converted property setter: - (void)setLocale:(id)locale;	// 0x2d303655
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x2d30372d
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x2d30369d
- (id)shortMonthSymbols;	// 0x2d303a49
- (id)shortQuarterSymbols;	// 0x2d304205
- (id)shortStandaloneMonthSymbols;	// 0x2d303e69
- (id)shortStandaloneQuarterSymbols;	// 0x2d30430d
- (id)shortStandaloneWeekdaySymbols;	// 0x2d304079
- (id)shortWeekdaySymbols;	// 0x2d303b51
- (id)standaloneMonthSymbols;	// 0x2d303de5
- (id)standaloneQuarterSymbols;	// 0x2d304289
- (id)standaloneWeekdaySymbols;	// 0x2d303ff5
// converted property getter: - (id)timeZone;	// 0x2d3036c1
- (id)veryShortMonthSymbols;	// 0x2d303d61
- (id)veryShortStandaloneMonthSymbols;	// 0x2d303eed
- (id)veryShortStandaloneWeekdaySymbols;	// 0x2d3040fd
- (id)veryShortWeekdaySymbols;	// 0x2d303f71
- (id)weekdaySymbols;	// 0x2d303acd
@end

