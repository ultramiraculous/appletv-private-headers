/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAReminderRecurrence : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x3795f1fd; S=0x3795f219; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x3795f269; S=0x3795f285; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x3795f2d5; S=0x3795f2f1; 
@property(copy, nonatomic) NSString *frequencyTimeUnit;	// G=0x3795f341; S=0x3795f35d; 
@property(assign, nonatomic) int interval;	// G=0x3795f3ad; S=0x3795f41d; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x3795f461; S=0x3795f47d; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x3795f4cd; S=0x3795f4e9; 
+ (id)recurrence;	// 0x3795f16d
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;	// 0x3795f1b1
// declared property getter: - (id)daysOfTheMonth;	// 0x3795f1fd
// declared property getter: - (id)daysOfTheWeek;	// 0x3795f269
// declared property getter: - (id)daysOfTheYear;	// 0x3795f2d5
- (id)encodedClassName;	// 0x3795f161
// declared property getter: - (id)frequencyTimeUnit;	// 0x3795f341
- (id)groupIdentifier;	// 0x3795f151
// declared property getter: - (int)interval;	// 0x3795f3ad
// declared property getter: - (id)monthsOfTheYear;	// 0x3795f461
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x3795f219
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x3795f285
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x3795f2f1
// declared property setter: - (void)setFrequencyTimeUnit:(id)unit;	// 0x3795f35d
// declared property setter: - (void)setInterval:(int)interval;	// 0x3795f41d
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x3795f47d
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x3795f4e9
// declared property getter: - (id)weeksOfTheYear;	// 0x3795f4cd
@end

