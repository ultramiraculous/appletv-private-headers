/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"


@interface NSCalendar : NSObject <NSCopying, NSCoding> {
}
@property(assign) unsigned firstWeekday;	// G=0x32eb8a8d; S=0x32eb8aad; converted property
@property(retain) id gregorianStartDate;	// G=0x32eb7389; S=0x32eb7385; converted property
@property(retain) id locale;	// G=0x32eb8b0d; S=0x32eb8b2d; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x32eb8a4d; S=0x32eb8a6d; converted property
@property(retain) id timeZone;	// G=0x32eb8acd; S=0x32eb8aed; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32e5da8d
+ (id)currentCalendar;	// 0x32e58ae5
+ (void)initialize;	// 0x32e58abd
- (id)init;	// 0x32eb7379
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x32eb8b6d
- (id)initWithCoder:(id)coder;	// 0x32eb737d
- (id)AMSymbol;	// 0x32ebae99
- (id)PMSymbol;	// 0x32ebaf0d
- (unsigned char)_addComponents:(double *)components :(unsigned long)arg2 :(const char *)arg3 :(void *)arg4;	// 0x32eb7d95
- (unsigned long)_cfTypeID;	// 0x32eba885
- (unsigned char)_composeAbsoluteTime:(double *)time :(const char *)arg2 :(void *)arg3;	// 0x32eb84c5
- (id)_copyLocale;	// 0x32eb88dd
- (id)_copyTimeZone;	// 0x32eb88b9
- (unsigned char)_decomposeAbsoluteTime:(double)time :(const char *)arg2 :(void *)arg3;	// 0x32eb808d
- (unsigned char)_diffComponents:(double)components :(double)arg2 :(unsigned long)arg3 :(const char *)arg4 :(void *)arg5;	// 0x32eb7941
- (id)_gregorianStartDate;	// 0x32eb8881
- (XXStruct_K5nmsA)_maximumRangeOfUnit:(unsigned)unit;	// 0x32eba901
- (XXStruct_K5nmsA)_minimumRangeOfUnit:(unsigned)unit;	// 0x32eba8c5
- (long)_ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;	// 0x32eb8825
- (XXStruct_K5nmsA)_rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;	// 0x32eba93d
- (unsigned char)_rangeOfUnit:(unsigned)unit startTime:(double *)time interval:(double *)interval forAT:(double)at;	// 0x32eb8795
- (void)_setGregorianStartDate:(id)date;	// 0x32eb88a5
- (id)calendarIdentifier;	// 0x32eb8b4d
- (id)components:(unsigned)components fromDate:(id)date;	// 0x32eb89ed
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x32eb89ad
- (id)copyWithZone:(NSZone *)zone;	// 0x32e5d985
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x32eb89cd
- (id)dateFromComponents:(id)components;	// 0x32eb8a0d
- (void)encodeWithCoder:(id)coder;	// 0x32eb7381
- (id)eraSymbols;	// 0x32ebac55
// converted property getter: - (unsigned)firstWeekday;	// 0x32eb8a8d
// converted property getter: - (id)gregorianStartDate;	// 0x32eb7389
- (unsigned)hash;	// 0x32eb8989
- (BOOL)isEqual:(id)equal;	// 0x32eb8901
// converted property getter: - (id)locale;	// 0x32eb8b0d
- (id)longEraSymbols;	// 0x32ebaf81
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x32eba9d5
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x32eb8a4d
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x32eba9ad
- (id)monthSymbols;	// 0x32ebacc9
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x32eb8a2d
- (id)quarterSymbols;	// 0x32ebb395
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x32eba9fd
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x32eb738d
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x32eb8aad
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x32eb7385
// converted property setter: - (void)setLocale:(id)locale;	// 0x32eb8b2d
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x32eb8a6d
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x32eb8aed
- (id)shortMonthSymbols;	// 0x32ebad3d
- (id)shortQuarterSymbols;	// 0x32ebb409
- (id)shortStandaloneMonthSymbols;	// 0x32ebb0dd
- (id)shortStandaloneQuarterSymbols;	// 0x32ebb4f1
- (id)shortStandaloneWeekdaySymbols;	// 0x32ebb2ad
- (id)shortWeekdaySymbols;	// 0x32ebae25
- (id)standaloneMonthSymbols;	// 0x32ebb069
- (id)standaloneQuarterSymbols;	// 0x32ebb47d
- (id)standaloneWeekdaySymbols;	// 0x32ebb239
// converted property getter: - (id)timeZone;	// 0x32eb8acd
- (id)veryShortMonthSymbols;	// 0x32ebaff5
- (id)veryShortStandaloneMonthSymbols;	// 0x32ebb151
- (id)veryShortStandaloneWeekdaySymbols;	// 0x32ebb321
- (id)veryShortWeekdaySymbols;	// 0x32ebb1c5
- (id)weekdaySymbols;	// 0x32ebadb1
@end

