/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "EKIdentityProtocol.h"

@class NSURL, EKCalendar, NSNumber, NSDate, EKCalendarItem, NSString;

__attribute__((visibility("hidden")))
@interface EKResourceChange : EKObject <EKIdentityProtocol> {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x31fe0e1d; 
@property(readonly, assign, nonatomic) EKCalendar *calendar;	// G=0x31fe0c21; 
@property(readonly, assign, nonatomic) EKCalendarItem *calendarItem;	// G=0x31fe0c55; 
@property(readonly, assign, nonatomic) unsigned changeType;	// G=0x31fe0c7d; 
@property(readonly, assign, nonatomic) NSURL *changedByAddress;	// G=0x31fe0b6d; 
@property(readonly, assign, nonatomic) NSString *changedByName;	// G=0x31fe0b45; 
@property(readonly, assign, nonatomic) NSNumber *createCount;	// G=0x31fe0d7d; 
@property(readonly, assign, nonatomic) BOOL dateChanged;	// G=0x31fe0ccd; 
@property(readonly, assign, nonatomic) NSNumber *deleteCount;	// G=0x31fe0dcd; 
@property(readonly, assign, nonatomic) NSString *deletedTitle;	// G=0x31fe0df5; 
@property(readonly, assign, nonatomic) BOOL locationChanged;	// G=0x31fe0d51; 
@property(readonly, assign, nonatomic) unsigned publicStatus;	// G=0x31fe0e45; 
@property(readonly, assign, nonatomic) BOOL timeChanged;	// G=0x31fe0cf9; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x31fe0ca5; 
@property(readonly, assign, nonatomic) BOOL titleChanged;	// G=0x31fe0d25; 
@property(readonly, assign, nonatomic) NSNumber *updateCount;	// G=0x31fe0da5; 
- (id)_calendarItemRelation;	// 0x31fe0b29
- (id)_persistentResourceChange;	// 0x31fe0a4d
// declared property getter: - (BOOL)alerted;	// 0x31fe0e1d
// declared property getter: - (id)calendar;	// 0x31fe0c21
// declared property getter: - (id)calendarItem;	// 0x31fe0c55
// declared property getter: - (unsigned)changeType;	// 0x31fe0c7d
// declared property getter: - (id)changedByAddress;	// 0x31fe0b6d
// declared property getter: - (id)changedByName;	// 0x31fe0b45
- (void)clearAlertedStatus;	// 0x31fe0e6d
// declared property getter: - (id)createCount;	// 0x31fe0d7d
// declared property getter: - (BOOL)dateChanged;	// 0x31fe0ccd
// declared property getter: - (id)deleteCount;	// 0x31fe0dcd
// declared property getter: - (id)deletedTitle;	// 0x31fe0df5
- (id)emailAddress;	// 0x31fe0ba5
- (id)lazyLoadRelationForKey:(id)key;	// 0x31fe0a5d
// declared property getter: - (BOOL)locationChanged;	// 0x31fe0d51
- (id)name;	// 0x31fe0b95
// declared property getter: - (unsigned)publicStatus;	// 0x31fe0e45
// declared property getter: - (BOOL)timeChanged;	// 0x31fe0cf9
// declared property getter: - (id)timestamp;	// 0x31fe0ca5
// declared property getter: - (BOOL)titleChanged;	// 0x31fe0d25
// declared property getter: - (id)updateCount;	// 0x31fe0da5
@end

