/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentCalendarItem.h"

@class NSString, NSURL, NSDate;

@interface EKPersistentEvent : EKPersistentCalendarItem {
	XXStruct_mY3THC _cachedDurationUnits;	// 28 = 0x1c
}
@property(copy, nonatomic) NSURL *URL;	// G=0x30df9a11; S=0x30e64a31; 
@property(retain) id actions;	// G=0x30e6501d; S=0x30e65051; converted property
@property(assign, nonatomic) int availability;	// G=0x30e64db9; S=0x30e64dd5; 
@property(readonly, assign, nonatomic) int birthdayID;	// G=0x30e64a6d; 
@property(readonly, assign, nonatomic) double duration;	// G=0x30e64a89; 
@property(readonly, assign, nonatomic) XXStruct_mY3THC durationUnits;	// G=0x30df1d19; 
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x30e650cd; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x30df1fad; S=0x30e028e1; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x30df9675; 
@property(readonly, assign, nonatomic, getter=isFloating) BOOL floating;	// G=0x30dfa761; 
@property(readonly, assign, nonatomic, getter=isInvitation) BOOL invitation;	// G=0x30df9ef5; 
@property(readonly, assign, nonatomic) unsigned invitationChangedProperties;	// G=0x30e64d9d; 
@property(assign, nonatomic) unsigned invitationStatus;	// G=0x30e64d65; S=0x30e64d81; 
@property(readonly, assign, nonatomic, getter=isMeeting) BOOL meeting;	// G=0x30e64af1; 
@property(assign, nonatomic) unsigned modifiedProperties;	// G=0x30e64b4d; S=0x30e64b69; 
@property(assign, nonatomic) BOOL needsOccurrenceCacheUpdate;	// G=0x30e64b85; S=0x30e64ba5; 
@property(copy, nonatomic) NSDate *originalStartDate;	// G=0x30e64e61; S=0x30e64e7d; 
@property(assign, nonatomic) int participationStatus;	// G=0x30e64bc1; S=0x30e64bf1; 
@property(readonly, assign, nonatomic) int pendingParticipationStatus;	// G=0x30e64c25; 
@property(assign, nonatomic) unsigned privacyLevel;	// G=0x30e64df1; S=0x30e64e0d; 
@property(copy, nonatomic) NSString *responseComment;	// G=0x30e64e29; S=0x30e64e45; 
@property(assign, nonatomic) int status;	// G=0x30df3eed; S=0x30e64b31; 
+ (id)defaultPropertiesToLoad;	// 0x30df13f5
+ (id)generateUniqueIDWithEvent:(id)event originalEvent:(id)event2 calendar:(id)calendar;	// 0x30e0390d
+ (id)relations;	// 0x30df37f1
- (id)initCommon;	// 0x30df117d
// declared property getter: - (id)URL;	// 0x30df9a11
- (void)_adjustForNewCalendar;	// 0x30e03375
- (BOOL)_areDurationUnitsCached;	// 0x30df1e55
- (BOOL)_hasExternalIDOrDeliverySource;	// 0x30e64fe5
- (void)_invalidateCachedDurationUnits;	// 0x30df11c1
// converted property getter: - (id)actions;	// 0x30e6501d
- (void)addAction:(id)action;	// 0x30e65095
- (BOOL)allowsParticipationStatusModifications;	// 0x30df9d1d
// declared property getter: - (int)availability;	// 0x30e64db9
// declared property getter: - (int)birthdayID;	// 0x30e64a6d
- (int)birthdayId;	// 0x30e64c55
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;	// 0x30e028fd
- (id)committedStartDate;	// 0x30e64e99
- (id)copyWithZone:(NSZone *)zone;	// 0x30e65745
- (void)dealloc;	// 0x30e64941
- (void)deleteFromOccurrenceDateOnward:(id)occurrenceDateOnward;	// 0x30e652c9
- (id)description;	// 0x30e65139
- (id)detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x30e65945
// declared property getter: - (double)duration;	// 0x30e64a89
// declared property getter: - (XXStruct_mY3THC)durationUnits;	// 0x30df1d19
// declared property getter: - (id)endDate;	// 0x30df1fad
- (int)entityType;	// 0x30dfa705
// declared property getter: - (id)eventIdentifier;	// 0x30df9675
- (id)exportToICS;	// 0x30e6496d
- (void)filterExceptionDates;	// 0x30e6643d
- (BOOL)hasValidEventAction;	// 0x30e64f01
// declared property getter: - (unsigned)invitationChangedProperties;	// 0x30e64d9d
// declared property getter: - (unsigned)invitationStatus;	// 0x30e64d65
// declared property getter: - (BOOL)isEditable;	// 0x30e650cd
// declared property getter: - (BOOL)isFloating;	// 0x30dfa761
// declared property getter: - (BOOL)isInvitation;	// 0x30df9ef5
// declared property getter: - (BOOL)isMeeting;	// 0x30e64af1
// declared property getter: - (unsigned)modifiedProperties;	// 0x30e64b4d
// declared property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x30e64b85
- (id)organizer;	// 0x30df987d
// declared property getter: - (id)originalStartDate;	// 0x30e64e61
// declared property getter: - (int)participationStatus;	// 0x30e64bc1
// declared property getter: - (int)pendingParticipationStatus;	// 0x30e64c25
- (void)primitiveValueChangedForKey:(id)key;	// 0x30dfa4f5
// declared property getter: - (unsigned)privacyLevel;	// 0x30e64df1
- (BOOL)refresh;	// 0x30e054d9
- (void)removeAction:(id)action;	// 0x30e650b1
// declared property getter: - (id)responseComment;	// 0x30e64e29
- (BOOL)responseMustApplyToAll;	// 0x30e64c71
// converted property setter: - (void)setActions:(id)actions;	// 0x30e65051
// declared property setter: - (void)setAvailability:(int)availability;	// 0x30e64dd5
// declared property setter: - (void)setEndDate:(id)date;	// 0x30e028e1
// declared property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x30e64d81
// declared property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x30e64b69
// declared property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x30e64ba5
// declared property setter: - (void)setOriginalStartDate:(id)date;	// 0x30e64e7d
// declared property setter: - (void)setParticipationStatus:(int)status;	// 0x30e64bf1
// declared property setter: - (void)setPrivacyLevel:(unsigned)level;	// 0x30e64e0d
// declared property setter: - (void)setResponseComment:(id)comment;	// 0x30e64e45
// declared property setter: - (void)setStatus:(int)status;	// 0x30e64b31
// declared property setter: - (void)setURL:(id)url;	// 0x30e64a31
// declared property getter: - (int)status;	// 0x30df3eed
- (BOOL)validate:(id *)validate;	// 0x30e02ebd
@end

