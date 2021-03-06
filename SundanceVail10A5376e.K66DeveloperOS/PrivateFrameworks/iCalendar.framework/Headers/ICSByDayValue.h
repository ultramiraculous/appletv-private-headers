/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSNumber;

@interface ICSByDayValue : NSObject <NSCoding> {
	NSNumber *_number;	// 4 = 0x4
	int _weekday;	// 8 = 0x8
}
@property(retain) NSNumber *number;	// G=0x35db1d29; S=0x35db1d39; 
@property(assign) int weekday;	// G=0x35db1e99; S=0x35db1ead; @synthesize=_weekday
+ (id)byDayValueFromICSString:(id)icsstring;	// 0x35d99df5
+ (int)weekdayFromICSString:(id)icsstring;	// 0x35d99d15
- (id)initWithCoder:(id)coder;	// 0x35db1e05
- (id)initWithWeekday:(int)weekday;	// 0x35db1cb5
- (id)initWithWeekday:(int)weekday number:(id)number;	// 0x35db1cc9
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x35d8d499
- (void)encodeWithCoder:(id)coder;	// 0x35db1da5
// declared property getter: - (id)number;	// 0x35db1d29
// declared property setter: - (void)setNumber:(id)number;	// 0x35db1d39
// declared property setter: - (void)setWeekday:(int)weekday;	// 0x35db1ead
// declared property getter: - (int)weekday;	// 0x35db1e99
@end

