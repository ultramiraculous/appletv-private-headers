/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSMutableCopying.h"
#import "EventKit-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
	XXStruct_lQVxyC _dateGr;	// 4 = 0x4
	double _dateAbs;	// 20 = 0x14
	EKTimeZone *_timeZone;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, retain) EKTimeZone *timeZone;	// G=0x2da9905d; converted property
+ (id)calendarDateWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x2da8bf19
+ (id)calendarDateWithDate:(id)date timeZone:(id)zone;	// 0x2da8d629
+ (id)calendarDateWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x2da89e6d
+ (id)calendarDateWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x2da99a59
- (id)initWithAbsoluteTime:(double)absoluteTime internalTimeZone:(id)zone;	// 0x2daf6931
- (id)initWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x2da8bf61
- (id)initWithDate:(id)date timeZone:(id)zone;	// 0x2da8d66d
- (id)initWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x2da89eb1
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate internalTimeZone:(id)zone;	// 0x2da8b605
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x2da99aad
- (double)absoluteTime;	// 0x2da8b7d9
- (id)calendarDateByAddingDays:(int)days;	// 0x2da8aa91
- (id)calendarDateByAddingGregorianUnits:(XXStruct_mY3THC)units;	// 0x2da8aae5
- (id)calendarDateByAddingMonths:(int)months;	// 0x2daf6d2d
- (id)calendarDateByAddingWeeks:(int)weeks;	// 0x2daf6cd5
- (id)calendarDateForDay;	// 0x2da8a921
- (id)calendarDateForEndOfDay;	// 0x2da8b6a1
- (id)calendarDateForEndOfMonth;	// 0x2da91985
- (id)calendarDateForEndOfWeekWithWeekStart:(long)weekStart;	// 0x2da91a85
- (id)calendarDateForMonth;	// 0x2da916a1
- (id)calendarDateForWeekWithWeekStart:(long)weekStart;	// 0x2da91789
- (id)calendarDateForWeekWithWeekStart:(long)weekStart daysSinceWeekStart:(int *)start;	// 0x2da9179d
- (id)calendarDateForYear;	// 0x2daf717d
- (id)calendarDateInTimeZone:(id)timeZone;	// 0x2daf6d81
- (id)calendarDateWithDate:(id)date;	// 0x2daf6e35
- (int)compare:(id)compare;	// 0x2da99865
- (id)components;	// 0x2daf6b55
- (id)copyWithZone:(NSZone *)zone;	// 0x2da8d6d5
- (id)date;	// 0x2da8b79d
- (unsigned)day;	// 0x2daf6f75
- (long)dayOfWeek;	// 0x2daf7051
- (unsigned)dayOfYear;	// 0x2daf7081
- (unsigned)daysInMonth;	// 0x2da91a49
- (unsigned)daysInYear;	// 0x2daf70e5
- (void)dealloc;	// 0x2da8c021
- (id)description;	// 0x2daf6a45
- (XXStruct_mY3THC)differenceAsGregorianUnits:(id)units flags:(unsigned long)flags;	// 0x2da908d9
- (int)differenceInDays:(id)days;	// 0x2da91661
- (int)differenceInMonths:(id)months;	// 0x2daf6eb5
- (int)differenceInYears:(id)years;	// 0x2daf6e75
- (id)earlierDate:(id)date;	// 0x2daf727d
- (XXStruct_lQVxyC)gregorianDate;	// 0x2da8a9f9
- (unsigned)hour;	// 0x2daf6fa9
- (BOOL)isEqual:(id)equal;	// 0x2da997a5
- (id)laterDate:(id)date;	// 0x2daf72c5
- (unsigned)minute;	// 0x2daf6fdd
- (unsigned)month;	// 0x2daf6f41
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2daf69ad
- (double)second;	// 0x2daf7011
- (int)secondsFromGMT;	// 0x2daf6c95
// converted property getter: - (id)timeZone;	// 0x2da9905d
- (unsigned)weekOfYear;	// 0x2daf70b1
- (unsigned)weeksInYear;	// 0x2daf712d
- (unsigned)year;	// 0x2daf6f11
@end

