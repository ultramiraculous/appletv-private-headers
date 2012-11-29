/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCalendar.h"


__attribute__((visibility("hidden")))
@interface __NSCFCalendar : NSCalendar {
}
@property(assign) unsigned firstWeekday;	// G=0x33b08a2d; S=0x33b08999; converted property
@property(retain) id gregorianStartDate;	// G=0x33b08d61; S=0x33b08bb1; converted property
@property(retain) id locale;	// G=0x33b08869; S=0x33a963f9; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x33b08b39; S=0x33b08aa5; converted property
@property(retain) id timeZone;	// G=0x33a96eb5; S=0x33a963ed; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33b087f5
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x33a963c1
- (BOOL)_isDeallocating;	// 0x33b087a5
- (BOOL)_tryRetain;	// 0x33b08795
- (id)calendarIdentifier;	// 0x33aa4559
- (id)components:(unsigned)components fromDate:(id)date;	// 0x33a8a9d1
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x33aa3439
- (id)copyWithZone:(NSZone *)zone;	// 0x33a97379
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x33a978b1
- (id)dateFromComponents:(id)components;	// 0x33a969e1
- (void)finalize;	// 0x33b087b5
// converted property getter: - (unsigned)firstWeekday;	// 0x33b08a2d
// converted property getter: - (id)gregorianStartDate;	// 0x33b08d61
- (unsigned)hash;	// 0x33b0878d
- (BOOL)isEqual:(id)equal;	// 0x33a97895
// converted property getter: - (id)locale;	// 0x33b08869
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x33aa2d75
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x33b08b39
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x33b08e0d
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x33b09041
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x33aa3e45
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x33b09549
- (oneway void)release;	// 0x33a8df61
- (id)retain;	// 0x33a96411
- (unsigned)retainCount;	// 0x33b087b1
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x33b08999
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x33b08bb1
// converted property setter: - (void)setLocale:(id)locale;	// 0x33a963f9
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x33b08aa5
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x33a963ed
// converted property getter: - (id)timeZone;	// 0x33a96eb5
@end
