/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
	XXStruct_lQVxyC _dateGr;	// 4 = 0x4
	double _dateAbs;	// 20 = 0x14
	EKTimeZone *_timeZone;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, retain) EKTimeZone *timeZone;	// G=0x31387f99; converted property
+ (id)calendarDateWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x3137a99d
+ (id)calendarDateWithDate:(id)date timeZone:(id)zone;	// 0x3137d631
+ (id)calendarDateWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x3137bfd1
+ (id)calendarDateWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x31389789
- (id)initWithAbsoluteTime:(double)absoluteTime internalTimeZone:(id)zone;	// 0x313d4c0d
- (id)initWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x3137a9e5
- (id)initWithDate:(id)date timeZone:(id)zone;	// 0x3137d671
- (id)initWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x3137c011
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate internalTimeZone:(id)zone;	// 0x3137bf3d
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x313897dd
- (double)absoluteTime;	// 0x3137b3a5
- (id)calendarDateByAddingDays:(int)days;	// 0x3137c339
- (id)calendarDateByAddingGregorianUnits:(XXStruct_mY3THC)units;	// 0x3137c365
- (id)calendarDateByAddingWeeks:(int)weeks;	// 0x313d4dc9
- (id)calendarDateForDay;	// 0x3137c1c9
- (id)calendarDateForEndOfDay;	// 0x3137c455
- (id)calendarDateForEndOfMonth;	// 0x313810ed
- (id)calendarDateForEndOfWeekWithWeekStart:(unsigned)weekStart;	// 0x31380f1d
- (id)calendarDateForMonth;	// 0x31380ff9
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart;	// 0x3137b2f1
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart daysSinceWeekStart:(int *)start;	// 0x3137b305
- (id)calendarDateForYear;	// 0x313d4fc5
- (id)calendarDateInTimeZone:(id)timeZone;	// 0x31392cf5
- (id)calendarDateWithDate:(id)date;	// 0x313d4df9
- (int)compare:(id)compare;	// 0x3137e5d5
- (id)components;	// 0x31392df9
- (id)copyWithZone:(NSZone *)zone;	// 0x3137b2e1
- (id)date;	// 0x3137c559
- (unsigned)day;	// 0x31397759
- (unsigned)dayOfWeek;	// 0x313969fd
- (unsigned)dayOfYear;	// 0x313d4ed1
- (unsigned)daysInMonth;	// 0x313811f9
- (unsigned)daysInYear;	// 0x313d4f31
- (void)dealloc;	// 0x3137d87d
- (id)description;	// 0x313d4c89
- (XXStruct_mY3THC)differenceAsGregorianUnits:(id)units flags:(unsigned long)flags;	// 0x3137dfd1
- (int)differenceInDays:(id)days;	// 0x31380ee5
- (int)differenceInMonths:(id)months;	// 0x31397701
- (int)differenceInYears:(id)years;	// 0x313d4e35
- (id)earlierDate:(id)date;	// 0x31397c6d
- (XXStruct_lQVxyC)gregorianDate;	// 0x3137c2ad
- (unsigned)hour;	// 0x31396135
- (BOOL)isEqual:(id)equal;	// 0x31388bd9
- (id)laterDate:(id)date;	// 0x313d50c5
- (unsigned)minute;	// 0x31396169
- (unsigned)month;	// 0x313d4e9d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31396959
- (double)second;	// 0x3139619d
- (int)secondsFromGMT;	// 0x313d4d8d
// converted property getter: - (id)timeZone;	// 0x31387f99
- (unsigned)weekOfYear;	// 0x313d4f01
- (unsigned)weeksInYear;	// 0x313d4f79
- (unsigned)year;	// 0x313d4e6d
@end

