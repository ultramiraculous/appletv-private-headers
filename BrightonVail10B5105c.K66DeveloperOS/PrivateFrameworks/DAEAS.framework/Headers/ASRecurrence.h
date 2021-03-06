/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSNumber, ASEvent, NSDate;

@interface ASRecurrence : ASItem <NSCoding> {
	NSNumber *_type;	// 40 = 0x28
	NSNumber *_interval;	// 44 = 0x2c
	NSNumber *_dayOfWeek;	// 48 = 0x30
	NSNumber *_dayOfMonth;	// 52 = 0x34
	NSNumber *_weekOfMonth;	// 56 = 0x38
	NSNumber *_monthOfYear;	// 60 = 0x3c
	NSDate *_until;	// 64 = 0x40
	NSNumber *_occurrences;	// 68 = 0x44
	NSNumber *_firstDayOfWeek;	// 72 = 0x48
	NSNumber *_calendarType;	// 76 = 0x4c
	ASEvent *_parentEvent;	// 80 = 0x50
}
@property(retain) NSNumber *calendarType;	// G=0x336a90f1; S=0x336a9105; @synthesize=_calendarType
@property(retain) NSNumber *dayOfMonth;	// G=0x336a9019; S=0x336a902d; @synthesize=_dayOfMonth
@property(retain) NSNumber *dayOfWeek;	// G=0x336a8ff5; S=0x336a9009; @synthesize=_dayOfWeek
@property(retain) NSNumber *firstDayOfWeek;	// G=0x336a90cd; S=0x336a90e1; @synthesize=_firstDayOfWeek
@property(retain) NSNumber *interval;	// G=0x336a8fd1; S=0x336a8fe5; @synthesize=_interval
@property(retain) NSNumber *monthOfYear;	// G=0x336a9061; S=0x336a9075; @synthesize=_monthOfYear
@property(retain) NSNumber *occurrences;	// G=0x336a90a9; S=0x336a90bd; @synthesize=_occurrences
@property(retain) NSNumber *type;	// G=0x336a8fad; S=0x336a8fc1; @synthesize=_type
@property(retain) NSDate *until;	// G=0x336a9085; S=0x336a9099; @synthesize=_until
@property(retain) NSNumber *weekOfMonth;	// G=0x336a903d; S=0x336a9051; @synthesize=_weekOfMonth
+ (BOOL)acceptsTopLevelLeaves;	// 0x336a6ca1
+ (id)asParseRules;	// 0x336a7085
+ (BOOL)frontingBasicTypes;	// 0x336a6d9d
+ (BOOL)notifyOfUnknownTokens;	// 0x336a6df1
+ (BOOL)parsingLeafNode;	// 0x336a6cf5
+ (BOOL)parsingWithSubItems;	// 0x336a6d49
- (id)initWithCalRecurrence:(void *)calRecurrence parentEvent:(id)event;	// 0x336a86b5
- (id)initWithCoder:(id)coder;	// 0x336a8b65
- (BOOL)_loadAttributesFromCalRecurrence:(void *)calRecurrence parentStartDate:(id)date parentItem:(id)item;	// 0x336a7e5d
- (void *)_newRecurrenceWithParentStartDate:(id)parentStartDate;	// 0x336a7859
- (BOOL)_requiresParentEvent;	// 0x336a7641
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x336a6f75
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x336a6e55
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x336a8741
// declared property getter: - (id)calendarType;	// 0x336a90f1
// declared property getter: - (id)dayOfMonth;	// 0x336a9019
// declared property getter: - (id)dayOfWeek;	// 0x336a8ff5
- (void)dealloc;	// 0x336a8a61
- (void)encodeWithCoder:(id)coder;	// 0x336a8dc1
// declared property getter: - (id)firstDayOfWeek;	// 0x336a90cd
// declared property getter: - (id)interval;	// 0x336a8fd1
// declared property getter: - (id)monthOfYear;	// 0x336a9061
// declared property getter: - (id)occurrences;	// 0x336a90a9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x336a7645
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x336a7ddd
// declared property setter: - (void)setCalendarType:(id)type;	// 0x336a9105
// declared property setter: - (void)setDayOfMonth:(id)month;	// 0x336a902d
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x336a9009
// declared property setter: - (void)setFirstDayOfWeek:(id)week;	// 0x336a90e1
// declared property setter: - (void)setInterval:(id)interval;	// 0x336a8fe5
// declared property setter: - (void)setMonthOfYear:(id)year;	// 0x336a9075
// declared property setter: - (void)setOccurrences:(id)occurrences;	// 0x336a90bd
- (void)setParentEvent:(id)event;	// 0x336a6e45
// declared property setter: - (void)setType:(id)type;	// 0x336a8fc1
// declared property setter: - (void)setUntil:(id)until;	// 0x336a9099
- (void)setUntilString:(id)string;	// 0x336a8a25
// declared property setter: - (void)setWeekOfMonth:(id)month;	// 0x336a9051
// declared property getter: - (id)type;	// 0x336a8fad
// declared property getter: - (id)until;	// 0x336a9085
// declared property getter: - (id)weekOfMonth;	// 0x336a903d
@end

