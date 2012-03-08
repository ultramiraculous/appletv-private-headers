/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDate;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x31392b45; S=0x31395149; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x31392b65; S=0x3139518d; 
@property(readonly, assign, nonatomic) NSDate *dueDate;	// G=0x31392a29; 
@property(retain) id dueDateComponents;	// G=0x31383b19; S=0x31392f35; converted property
@property(retain) id startDateComponents;	// G=0x31393179; S=0x313932e9; converted property
+ (id)reminderWithEventStore:(id)eventStore;	// 0x31393515
- (id)initWithPersistentObject:(id)persistentObject;	// 0x31383985
- (id)_persistentReminder;	// 0x31392bc1
- (void)_sendModifiedNote;	// 0x313cd6d1
- (void)clearParentUUID;	// 0x313978ed
- (BOOL)commit:(id *)commit;	// 0x31393bc1
- (int)compareDueDateWithReminder:(id)reminder;	// 0x313cd799
// declared property getter: - (id)completionDate;	// 0x31392b65
- (void)dealloc;	// 0x31392cc9
- (id)description;	// 0x313cd879
// declared property getter: - (id)dueDate;	// 0x31392a29
// converted property getter: - (id)dueDateComponents;	// 0x31383b19
- (id)externalURI;	// 0x313cd715
// declared property getter: - (BOOL)isCompleted;	// 0x31392b45
- (id)parentUUID;	// 0x313970bd
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x31395149
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x3139518d
// converted property setter: - (void)setDueDateComponents:(id)components;	// 0x31392f35
// converted property setter: - (void)setStartDateComponents:(id)components;	// 0x313932e9
// converted property getter: - (id)startDateComponents;	// 0x31393179
- (BOOL)validate:(id *)validate;	// 0x31393955
@end
