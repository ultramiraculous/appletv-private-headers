/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
@private
	int _dayOfTheWeek;	// 4 = 0x4
	int _weekNumber;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int dayOfTheWeek;	// G=0x327a0eb9; @synthesize=_dayOfTheWeek
@property(readonly, assign, nonatomic) int weekNumber;	// G=0x327a0ec9; @synthesize=_weekNumber
+ (id)dayOfWeek:(int)week;	// 0x327a0aad
+ (id)dayOfWeek:(int)week weekNumber:(int)number;	// 0x327a0aed
- (id)initWithCoder:(id)coder;	// 0x327a0bc9
- (id)initWithDayOfTheWeek:(int)theWeek weekNumber:(int)number;	// 0x327a0b2d
- (id)copyWithZone:(NSZone *)zone;	// 0x327a0ea9
// declared property getter: - (int)dayOfTheWeek;	// 0x327a0eb9
- (id)description;	// 0x327a0d95
- (void)encodeWithCoder:(id)coder;	// 0x327a0c49
- (unsigned)hash;	// 0x327a0df5
- (id)iCalendarDescription;	// 0x327a0d11
- (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x327a0ca1
- (BOOL)isEqual:(id)equal;	// 0x327a0e25
// declared property getter: - (int)weekNumber;	// 0x327a0ec9
@end

