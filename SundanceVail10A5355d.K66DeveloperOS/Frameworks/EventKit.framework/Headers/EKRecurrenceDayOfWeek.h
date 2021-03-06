/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
	int _dayOfTheWeek;	// 4 = 0x4
	int _weekNumber;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int dayOfTheWeek;	// G=0x31fbce81; @synthesize=_dayOfTheWeek
@property(readonly, assign, nonatomic) int weekNumber;	// G=0x31fbce91; @synthesize=_weekNumber
+ (id)dayOfWeek:(int)week;	// 0x31fbca6d
+ (id)dayOfWeek:(int)week weekNumber:(int)number;	// 0x31fbcaad
- (id)initWithCoder:(id)coder;	// 0x31fbcb89
- (id)initWithDayOfTheWeek:(int)theWeek weekNumber:(int)number;	// 0x31fbcaed
- (id)copyWithZone:(NSZone *)zone;	// 0x31fbce71
// declared property getter: - (int)dayOfTheWeek;	// 0x31fbce81
- (id)description;	// 0x31fbcd59
- (void)encodeWithCoder:(id)coder;	// 0x31fbcc09
- (unsigned)hash;	// 0x31fbcdb9
- (id)iCalendarDescription;	// 0x31fbccd1
- (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x31fbcc61
- (BOOL)isEqual:(id)equal;	// 0x31fbcde9
// declared property getter: - (int)weekNumber;	// 0x31fbce91
@end

