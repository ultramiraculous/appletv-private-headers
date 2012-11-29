/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


__attribute__((visibility("hidden")))
@interface EKSourceConstraints : NSObject {
	int _maxAlarms;	// 4 = 0x4
	int _maxRecurrences;	// 8 = 0x8
	XXStruct_R691tD _flags;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval;	// G=0x367b4211; S=0x368261cd; 
@property(assign, nonatomic) BOOL allowsCalendarAddDeleteModify;	// G=0x367ac651; S=0x36826411; 
@property(assign, nonatomic) BOOL allowsEvents;	// G=0x367a2885; S=0x36826459; 
@property(assign, nonatomic) BOOL allowsTasks;	// G=0x367ac639; S=0x36826435; 
@property(assign, nonatomic) BOOL canSetAvailability;	// G=0x367b0275; S=0x368262c5; 
@property(assign, nonatomic) BOOL declinedStatusChangeRequiresNoPendingStatus;	// G=0x36826189; S=0x3682619d; 
@property(assign, nonatomic) BOOL deliverySourceOrExternalIDRequiredForResponse;	// G=0x36826131; S=0x36826145; 
@property(assign, nonatomic) BOOL eventAvalabilityLimited;	// G=0x367b028d; S=0x368262dd; 
@property(assign, nonatomic) BOOL eventDurationConstrainedToRecurrenceInterval;	// G=0x367b41f9; S=0x368261b5; 
@property(assign, nonatomic) XXStruct_R691tD flags;	// G=0x36826599; S=0x368265b5; @synthesize=_flags
@property(assign, nonatomic) BOOL futureStartDateLimitedToOccurrenceCacheBounds;	// G=0x367b5f19; S=0x368261fd; 
@property(assign, nonatomic) BOOL inviteesCanSeeAttendeeStatuses;	// G=0x36826061; S=0x36826075; 
@property(assign, nonatomic) BOOL isFacebook;	// G=0x367aa05d; S=0x36826519; 
@property(assign, nonatomic) int maxAlarmsAllowed;	// G=0x367b22dd; S=0x36826579; @synthesize=_maxAlarms
@property(assign, nonatomic) int maxRecurrencesAllowed;	// G=0x367b1eed; S=0x36826589; @synthesize=_maxRecurrences
@property(assign, nonatomic) BOOL mustAcknowledgeMasterEvent;	// G=0x36826299; S=0x368262ad; 
@property(assign, nonatomic) BOOL occurrencesMustOccurOnSeparateDays;	// G=0x367b5f2d; S=0x368261e5; 
@property(assign, nonatomic) BOOL organizerCanSeeAttendeeStatuses;	// G=0x367af70d; S=0x36826049; 
@property(assign, nonatomic) BOOL proposedStatusRequiredForResponse;	// G=0x3682615d; S=0x36826171; 
@property(assign, nonatomic) BOOL recurrenceSeriesMustIncludeMoreThanFirstOccurrence;	// G=0x3682653d; S=0x36826555; 
@property(assign, nonatomic) BOOL recurrencesShouldPinToMonthDays;	// G=0x36826241; S=0x36826255; 
@property(assign, nonatomic) BOOL requiresAttendeeSearchInSingleAccount;	// G=0x3682626d; S=0x36826281; 
@property(assign, nonatomic) BOOL requiresMSFormattedUID;	// G=0x367b9c51; S=0x368262f5; 
@property(assign, nonatomic) BOOL requiresOutgoingInvitationsInDefaultCalendar;	// G=0x367affdd; S=0x368260d5; 
@property(assign, nonatomic) BOOL shouldCancelDeletedEvents;	// G=0x3682630d; S=0x36826321; 
@property(assign, nonatomic) BOOL shouldDeclineDeletedInvitations;	// G=0x36826339; S=0x3682634d; 
@property(assign, nonatomic) BOOL statusesAreAccurate;	// G=0x367ab0a1; S=0x3682608d; 
@property(assign, nonatomic) BOOL supportsAlarmProximity;	// G=0x368263d9; S=0x368263f1; 
@property(assign, nonatomic) BOOL supportsAlarmTriggerDates;	// G=0x36825ff1; S=0x36826005; 
@property(assign, nonatomic) BOOL supportsAlarmTriggerIntervals;	// G=0x36825fc5; S=0x36825fd9; 
@property(assign, nonatomic) BOOL supportsAlarmsTriggeringAfterStartDate;	// G=0x3682601d; S=0x36826031; 
@property(assign, nonatomic) BOOL supportsAllDayDueDates;	// G=0x368264a1; S=0x368264b9; 
@property(assign, nonatomic) BOOL supportsIncomingInvitations;	// G=0x367a7309; S=0x368260a5; 
@property(assign, nonatomic) BOOL supportsInvitationModifications;	// G=0x367b092d; S=0x368260ed; 
@property(assign, nonatomic) BOOL supportsOutgoingInvitations;	// G=0x367b225d; S=0x368260bd; 
@property(assign, nonatomic) BOOL supportsRecurrencesOnDetachedEvents;	// G=0x36826215; S=0x36826229; 
@property(assign, nonatomic) BOOL supportsReminderActions;	// G=0x3682637d; S=0x36826391; 
@property(assign, nonatomic) BOOL supportsReminderLocations;	// G=0x368263a9; S=0x368263bd; 
@property(assign, nonatomic) BOOL supportsResponseComments;	// G=0x36826105; S=0x36826119; 
@property(assign, nonatomic) BOOL supportsSharedCalendars;	// G=0x368264dd; S=0x368264f5; 
@property(assign, nonatomic) BOOL supportsStructuredLocations;	// G=0x367b5759; S=0x36826365; 
@property(assign, nonatomic) BOOL supportsURLField;	// G=0x367b22c5; S=0x3682647d; 
- (id)init;	// 0x367a2839
- (id)initWithMaxAlarms:(int)maxAlarms maxRecurrences:(int)recurrences constraintFlags:(unsigned long long)flags;	// 0x367a25ed
// declared property getter: - (BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;	// 0x367b4211
// declared property getter: - (BOOL)allowsCalendarAddDeleteModify;	// 0x367ac651
// declared property getter: - (BOOL)allowsEvents;	// 0x367a2885
// declared property getter: - (BOOL)allowsTasks;	// 0x367ac639
// declared property getter: - (BOOL)canSetAvailability;	// 0x367b0275
// declared property getter: - (BOOL)declinedStatusChangeRequiresNoPendingStatus;	// 0x36826189
// declared property getter: - (BOOL)deliverySourceOrExternalIDRequiredForResponse;	// 0x36826131
// declared property getter: - (BOOL)eventAvalabilityLimited;	// 0x367b028d
// declared property getter: - (BOOL)eventDurationConstrainedToRecurrenceInterval;	// 0x367b41f9
// declared property getter: - (XXStruct_R691tD)flags;	// 0x36826599
// declared property getter: - (BOOL)futureStartDateLimitedToOccurrenceCacheBounds;	// 0x367b5f19
// declared property getter: - (BOOL)inviteesCanSeeAttendeeStatuses;	// 0x36826061
// declared property getter: - (BOOL)isFacebook;	// 0x367aa05d
// declared property getter: - (int)maxAlarmsAllowed;	// 0x367b22dd
// declared property getter: - (int)maxRecurrencesAllowed;	// 0x367b1eed
// declared property getter: - (BOOL)mustAcknowledgeMasterEvent;	// 0x36826299
// declared property getter: - (BOOL)occurrencesMustOccurOnSeparateDays;	// 0x367b5f2d
// declared property getter: - (BOOL)organizerCanSeeAttendeeStatuses;	// 0x367af70d
// declared property getter: - (BOOL)proposedStatusRequiredForResponse;	// 0x3682615d
// declared property getter: - (BOOL)recurrenceSeriesMustIncludeMoreThanFirstOccurrence;	// 0x3682653d
// declared property getter: - (BOOL)recurrencesShouldPinToMonthDays;	// 0x36826241
// declared property getter: - (BOOL)requiresAttendeeSearchInSingleAccount;	// 0x3682626d
// declared property getter: - (BOOL)requiresMSFormattedUID;	// 0x367b9c51
// declared property getter: - (BOOL)requiresOutgoingInvitationsInDefaultCalendar;	// 0x367affdd
// declared property setter: - (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x368261cd
// declared property setter: - (void)setAllowsCalendarAddDeleteModify:(BOOL)modify;	// 0x36826411
// declared property setter: - (void)setAllowsEvents:(BOOL)events;	// 0x36826459
// declared property setter: - (void)setAllowsTasks:(BOOL)tasks;	// 0x36826435
// declared property setter: - (void)setCanSetAvailability:(BOOL)availability;	// 0x368262c5
// declared property setter: - (void)setDeclinedStatusChangeRequiresNoPendingStatus:(BOOL)status;	// 0x3682619d
// declared property setter: - (void)setDeliverySourceOrExternalIDRequiredForResponse:(BOOL)response;	// 0x36826145
// declared property setter: - (void)setEventAvalabilityLimited:(BOOL)limited;	// 0x368262dd
// declared property setter: - (void)setEventDurationConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x368261b5
// declared property setter: - (void)setFlags:(XXStruct_R691tD)flags;	// 0x368265b5
// declared property setter: - (void)setFutureStartDateLimitedToOccurrenceCacheBounds:(BOOL)occurrenceCacheBounds;	// 0x368261fd
// declared property setter: - (void)setInviteesCanSeeAttendeeStatuses:(BOOL)statuses;	// 0x36826075
// declared property setter: - (void)setIsFacebook:(BOOL)facebook;	// 0x36826519
// declared property setter: - (void)setMaxAlarmsAllowed:(int)allowed;	// 0x36826579
// declared property setter: - (void)setMaxRecurrencesAllowed:(int)allowed;	// 0x36826589
// declared property setter: - (void)setMustAcknowledgeMasterEvent:(BOOL)event;	// 0x368262ad
// declared property setter: - (void)setOccurrencesMustOccurOnSeparateDays:(BOOL)days;	// 0x368261e5
// declared property setter: - (void)setOrganizerCanSeeAttendeeStatuses:(BOOL)statuses;	// 0x36826049
// declared property setter: - (void)setProposedStatusRequiredForResponse:(BOOL)response;	// 0x36826171
// declared property setter: - (void)setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:(BOOL)occurrence;	// 0x36826555
// declared property setter: - (void)setRecurrencesShouldPinToMonthDays:(BOOL)pinToMonthDays;	// 0x36826255
// declared property setter: - (void)setRequiresAttendeeSearchInSingleAccount:(BOOL)singleAccount;	// 0x36826281
// declared property setter: - (void)setRequiresMSFormattedUID:(BOOL)uid;	// 0x368262f5
// declared property setter: - (void)setRequiresOutgoingInvitationsInDefaultCalendar:(BOOL)defaultCalendar;	// 0x368260d5
// declared property setter: - (void)setShouldCancelDeletedEvents:(BOOL)cancelDeletedEvents;	// 0x36826321
// declared property setter: - (void)setShouldDeclineDeletedInvitations:(BOOL)declineDeletedInvitations;	// 0x3682634d
// declared property setter: - (void)setStatusesAreAccurate:(BOOL)accurate;	// 0x3682608d
// declared property setter: - (void)setSupportsAlarmProximity:(BOOL)proximity;	// 0x368263f1
// declared property setter: - (void)setSupportsAlarmTriggerDates:(BOOL)dates;	// 0x36826005
// declared property setter: - (void)setSupportsAlarmTriggerIntervals:(BOOL)intervals;	// 0x36825fd9
// declared property setter: - (void)setSupportsAlarmsTriggeringAfterStartDate:(BOOL)date;	// 0x36826031
// declared property setter: - (void)setSupportsAllDayDueDates:(BOOL)dates;	// 0x368264b9
// declared property setter: - (void)setSupportsIncomingInvitations:(BOOL)invitations;	// 0x368260a5
// declared property setter: - (void)setSupportsInvitationModifications:(BOOL)modifications;	// 0x368260ed
// declared property setter: - (void)setSupportsOutgoingInvitations:(BOOL)invitations;	// 0x368260bd
// declared property setter: - (void)setSupportsRecurrencesOnDetachedEvents:(BOOL)events;	// 0x36826229
// declared property setter: - (void)setSupportsReminderActions:(BOOL)actions;	// 0x36826391
// declared property setter: - (void)setSupportsReminderLocations:(BOOL)locations;	// 0x368263bd
// declared property setter: - (void)setSupportsResponseComments:(BOOL)comments;	// 0x36826119
// declared property setter: - (void)setSupportsSharedCalendars:(BOOL)calendars;	// 0x368264f5
// declared property setter: - (void)setSupportsStructuredLocations:(BOOL)locations;	// 0x36826365
// declared property setter: - (void)setSupportsURLField:(BOOL)field;	// 0x3682647d
// declared property getter: - (BOOL)shouldCancelDeletedEvents;	// 0x3682630d
// declared property getter: - (BOOL)shouldDeclineDeletedInvitations;	// 0x36826339
// declared property getter: - (BOOL)statusesAreAccurate;	// 0x367ab0a1
// declared property getter: - (BOOL)supportsAlarmProximity;	// 0x368263d9
// declared property getter: - (BOOL)supportsAlarmTriggerDates;	// 0x36825ff1
// declared property getter: - (BOOL)supportsAlarmTriggerIntervals;	// 0x36825fc5
// declared property getter: - (BOOL)supportsAlarmsTriggeringAfterStartDate;	// 0x3682601d
// declared property getter: - (BOOL)supportsAllDayDueDates;	// 0x368264a1
// declared property getter: - (BOOL)supportsIncomingInvitations;	// 0x367a7309
// declared property getter: - (BOOL)supportsInvitationModifications;	// 0x367b092d
// declared property getter: - (BOOL)supportsOutgoingInvitations;	// 0x367b225d
// declared property getter: - (BOOL)supportsRecurrencesOnDetachedEvents;	// 0x36826215
// declared property getter: - (BOOL)supportsReminderActions;	// 0x3682637d
// declared property getter: - (BOOL)supportsReminderLocations;	// 0x368263a9
// declared property getter: - (BOOL)supportsResponseComments;	// 0x36826105
// declared property getter: - (BOOL)supportsSharedCalendars;	// 0x368264dd
// declared property getter: - (BOOL)supportsStructuredLocations;	// 0x367b5759
// declared property getter: - (BOOL)supportsURLField;	// 0x367b22c5
@end
