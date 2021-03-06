/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library
#import "Foundation-Structs.h"

@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
@private
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x3245a1e9; S=0x3243f025; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x3241183d; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x3245a1d9; S=0x3243efd1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x324116b1
+ (id)calendarDate;	// 0x3245a7c5
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x3245d0f5
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x3245a45d
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x3245a419
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x32442731
+ (id)distantFuture;	// 0x3245a83d
+ (id)distantPast;	// 0x3245a7f9
- (id)init;	// 0x32411735
- (id)initWithCoder:(id)coder;	// 0x3245a525
- (id)initWithString:(id)string;	// 0x3245a9d5
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x3245a4a1
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x3245bacd
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x32411759
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x32442785
- (id)addTimeInterval:(double)interval;	// 0x3243ef49
// converted property getter: - (id)calendarFormat;	// 0x3245a1e9
- (Class)classForCoder;	// 0x3245aa01
- (id)copyWithZone:(NSZone *)zone;	// 0x3245aa0d
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x3245aba5
- (int)dayOfCommonEra;	// 0x3245a739
- (int)dayOfMonth;	// 0x3245aa81
- (int)dayOfWeek;	// 0x3245aae1
- (int)dayOfYear;	// 0x3245ab29
- (void)dealloc;	// 0x324118e9
- (id)description;	// 0x3245a501
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x3245a4c5
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x3245ae21
- (id)descriptionWithLocale:(id)locale;	// 0x3245a4dd
- (void)encodeWithCoder:(id)coder;	// 0x3245a635
- (int)hourOfDay;	// 0x3245e189
- (int)microsecondOfSecond;	// 0x3245ab51
- (int)minuteOfHour;	// 0x3243eec9
- (int)monthOfYear;	// 0x3245aab1
- (oneway void)release;	// 0x3241184d
- (int)secondOfMinute;	// 0x324117c1
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x3243f025
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3243efd1
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x3241183d
// converted property getter: - (id)timeZone;	// 0x3245a1d9
- (id)timeZoneDetail;	// 0x3245a7b1
- (int)yearOfCommonEra;	// 0x32442701
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x3245ac89
@end

