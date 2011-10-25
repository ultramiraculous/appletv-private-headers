/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"
#import "EventKit-Structs.h"

@class EKRecurrenceRule, NSString, EKParticipant, NSNumber, NSDate, EKCalendarDate;

@interface EKEvent : EKCalendarItem {
@private
	EKCalendarDate *_occurrenceStartDate;	// 4 = 0x4
	EKCalendarDate *_occurrenceEndDate;	// 8 = 0x8
	BOOL _occurrenceIsAllDay;	// 12 = 0xc
	EKCalendarDate *_originalOccurrenceStartDate;	// 16 = 0x10
	EKCalendarDate *_originalOccurrenceEndDate;	// 20 = 0x14
	NSNumber *_originalOccurrenceIsAllDay;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x3137e409; S=0x31387d89; 
@property(assign, nonatomic) int availability;	// G=0x313c1bd9; S=0x313c1c2d; 
@property(readonly, assign, nonatomic) int birthdayPersonID;	// G=0x313c1ab1; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x3137e645; S=0x313882f5; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x31385c21; 
@property(readonly, assign, nonatomic) BOOL isDetached;	// G=0x31387bb1; 
@property(assign) unsigned modifiedProperties;	// G=0x313c1859; S=0x313c188d; converted property
@property(assign) BOOL needsOccurrenceCacheUpdate;	// G=0x313c18d1; S=0x313c18f5; converted property
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate;	// G=0x3137dc91; S=0x3137e3e5; @synthesize=_occurrenceEndDate
@property(assign, nonatomic) BOOL occurrenceIsAllDay;	// G=0x313c4279; S=0x3137d735; @synthesize=_occurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate;	// G=0x3137e3d5; S=0x3137d6c1; @synthesize=_occurrenceStartDate
@property(readonly, assign, nonatomic) EKParticipant *organizer;	// G=0x31385de1; 
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate;	// G=0x31388b9d; S=0x31388229; @synthesize=_originalOccurrenceEndDate
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay;	// G=0x31388bc9; S=0x31386cd5; @synthesize=_originalOccurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate;	// G=0x31388b79; S=0x31388205; @synthesize=_originalOccurrenceStartDate
@property(assign) int participationStatus;	// G=0x3138652d; S=0x313c1939; converted property
@property(assign) unsigned readState;	// G=0x31386629; S=0x313c1cc9; converted property
@property(retain, nonatomic) EKRecurrenceRule *recurrenceRule;	// G=0x313c1b29; S=0x313c1b75; 
@property(retain) id responseComment;	// G=0x313c1c91; S=0x313c1cad; converted property
@property(copy, nonatomic) NSDate *startDate;	// G=0x3137e625; S=0x31388049; 
@property(readonly, assign, nonatomic) int status;	// G=0x3137ff11; 
+ (id)eventWithEventStore:(id)eventStore;	// 0x31389369
- (id)init;	// 0x313c1409
- (id)initWithEventStore:(id)eventStore;	// 0x31386679
- (id)initWithPersistentObject:(id)persistentObject;	// 0x313c1445
- (id)initWithPersistentObject:(id)persistentObject occurrenceDate:(id)date;	// 0x3137d1d5
- (BOOL)_cancelWithSpan:(int)span error:(id *)error;	// 0x313c357d
- (BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_lQVxyC)date timeZone:(id)zone error:(id *)error;	// 0x3138c2a9
- (BOOL)_deleteWithSpan:(int)span error:(id *)error;	// 0x31392209
- (void)_detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x313c3701
- (id)_effectiveTimeZone;	// 0x3138824d
- (BOOL)_isAllDay;	// 0x3137d6e5
- (BOOL)_isInitialOccurrenceDate:(id)date;	// 0x31392025
- (BOOL)_occurrenceExistsOnDate:(double)date timeZone:(id)zone;	// 0x313c3341
- (int)_parentParticipationStatus;	// 0x313c1a71
- (id)_persistentEvent;	// 0x3137dd4d
- (void)_sendModifiedNote;	// 0x313892d5
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)span;	// 0x31392109
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;	// 0x313c264d
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id *)error;	// 0x3138bea5
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;	// 0x313c248d
- (int)alarmCount;	// 0x313c1b01
- (BOOL)allowsAlarmModifications;	// 0x3138c3a5
- (BOOL)allowsCalendarModifications;	// 0x313c2011
- (BOOL)allowsRecurrenceModifications;	// 0x31387b2d
- (id)attachments;	// 0x31385ced
- (int)attendeeCount;	// 0x313c1ad9
- (id)attendees;	// 0x31385e81
// declared property getter: - (int)availability;	// 0x313c1bd9
// declared property getter: - (int)birthdayPersonID;	// 0x313c1ab1
- (id)birthdayTitleWithAddressBook:(void *)addressBook;	// 0x313c16a1
- (BOOL)canBeRespondedTo;	// 0x313862a9
- (BOOL)canDetachSingleOccurrence;	// 0x313c20ad
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x313c1de5
- (BOOL)canSetAvailability;	// 0x313c216d
- (void)clearReadState;	// 0x313c1d0d
- (BOOL)commitWithSpan:(int)span error:(id *)error;	// 0x3138c4d5
- (id)committedValueForKey:(id)key;	// 0x313872a1
- (int)compareStartDateWithEvent:(id)event;	// 0x3137e59d
- (void)dealloc;	// 0x31386e79
- (id)description;	// 0x313c21e9
- (void)didCommit;	// 0x31390681
- (id)dirtyPropertiesToSkip;	// 0x313c2329
- (double)duration;	// 0x31381361
- (id)endCalendarDate;	// 0x3137dc81
// declared property getter: - (id)endDate;	// 0x3137e645
- (XXStruct_lQVxyC)endDateGr;	// 0x313812d1
- (XXStruct_lQVxyC)endDatePinnedForAllDay;	// 0x313c17e5
// declared property getter: - (id)eventIdentifier;	// 0x31385c21
- (id)eventStore;	// 0x31380171
- (id)exportToICS;	// 0x313c1579
- (id)externalId;	// 0x313c211d
- (id)externalURL;	// 0x313c1459
- (BOOL)hasSelfAttendee;	// 0x313c21b9
- (unsigned)hash;	// 0x3137e419
- (id)initialEndDate;	// 0x313c1705
- (id)initialStartDate;	// 0x313c16b1
// declared property getter: - (BOOL)isAllDay;	// 0x3137e409
// declared property getter: - (BOOL)isDetached;	// 0x31387bb1
- (BOOL)isDirtyIgnoringCalendar;	// 0x313c1601
- (BOOL)isEndDateDirty;	// 0x313c15e1
- (BOOL)isEqual:(id)equal;	// 0x3137e4c5
- (BOOL)isStartDateDirty;	// 0x313c15c1
- (BOOL)isStatusDirty;	// 0x313c15a1
- (BOOL)isTentative;	// 0x313c1d41
// converted property getter: - (unsigned)modifiedProperties;	// 0x313c1859
// converted property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x313c18d1
- (id)occurrenceDate;	// 0x313879f1
// declared property getter: - (id)occurrenceEndDate;	// 0x3137dc91
// declared property getter: - (BOOL)occurrenceIsAllDay;	// 0x313c4279
// declared property getter: - (id)occurrenceStartDate;	// 0x3137e3d5
// declared property getter: - (id)organizer;	// 0x31385de1
// declared property getter: - (id)originalOccurrenceEndDate;	// 0x31388b9d
// declared property getter: - (id)originalOccurrenceIsAllDay;	// 0x31388bc9
// declared property getter: - (id)originalOccurrenceStartDate;	// 0x31388b79
// converted property getter: - (int)participationStatus;	// 0x3138652d
- (int)pendingParticipationStatus;	// 0x313c20f5
// converted property getter: - (unsigned)readState;	// 0x31386629
// declared property getter: - (id)recurrenceRule;	// 0x313c1b29
- (BOOL)refresh;	// 0x31388c5d
- (BOOL)removeWithSpan:(int)span error:(id *)error;	// 0x31391f55
- (BOOL)requiresDetach;	// 0x3138b0a9
// converted property getter: - (id)responseComment;	// 0x313c1c91
- (BOOL)responseMustApplyToAll;	// 0x313c2085
- (void)revert;	// 0x313c2385
- (void)rollback;	// 0x3138862d
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x31387d89
// declared property setter: - (void)setAvailability:(int)availability;	// 0x313c1c2d
// declared property setter: - (void)setEndDate:(id)date;	// 0x313882f5
// converted property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x313c188d
// converted property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x313c18f5
// declared property setter: - (void)setOccurrenceEndDate:(id)date;	// 0x3137e3e5
// declared property setter: - (void)setOccurrenceIsAllDay:(BOOL)day;	// 0x3137d735
// declared property setter: - (void)setOccurrenceStartDate:(id)date;	// 0x3137d6c1
// declared property setter: - (void)setOriginalOccurrenceEndDate:(id)date;	// 0x31388229
// declared property setter: - (void)setOriginalOccurrenceIsAllDay:(id)day;	// 0x31386cd5
// declared property setter: - (void)setOriginalOccurrenceStartDate:(id)date;	// 0x31388205
// converted property setter: - (void)setParticipationStatus:(int)status;	// 0x313c1939
// converted property setter: - (void)setReadState:(unsigned)state;	// 0x313c1cc9
// declared property setter: - (void)setRecurrenceRule:(id)rule;	// 0x313c1b75
// converted property setter: - (void)setResponseComment:(id)comment;	// 0x313c1cad
// declared property setter: - (void)setStartDate:(id)date;	// 0x31388049
- (void)setTimeZone:(id)zone;	// 0x31386cf9
- (id)startCalendarDate;	// 0x3137dc71
// declared property getter: - (id)startDate;	// 0x3137e625
- (XXStruct_lQVxyC)startDateGr;	// 0x31381241
- (XXStruct_lQVxyC)startDatePinnedForAllDay;	// 0x313c177d
// declared property getter: - (int)status;	// 0x3137ff11
- (id)uniqueId;	// 0x313c2145
- (BOOL)validateWithSpan:(int)span error:(id *)error;	// 0x3138b50d
@end

