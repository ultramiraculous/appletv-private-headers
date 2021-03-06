/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDate, NSDateComponents;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x30e07009; S=0x30e096c5; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x30e07025; S=0x30e09709; 
@property(assign) unsigned displayOrder;	// G=0x30e4ae7d; S=0x30e4af19; converted property
@property(copy, nonatomic) NSDateComponents *dueDateComponents;	// G=0x30df7a99; S=0x30e073d5; 
@property(copy, nonatomic) NSDateComponents *startDateComponents;	// G=0x30e07621; S=0x30e0778d; 
+ (id)reminderWithEventStore:(id)eventStore;	// 0x30e079a1
- (id)initWithPersistentObject:(id)persistentObject;	// 0x30df799d
- (id)_persistentReminder;	// 0x30e07081
- (void)_sendModifiedNote;	// 0x30e4ad1d
- (void)clearParentID;	// 0x30e4b071
- (BOOL)commit:(id *)commit;	// 0x30e07ff5
// declared property getter: - (id)completionDate;	// 0x30e07025
- (void)dealloc;	// 0x30e07165
- (id)description;	// 0x30e4af5d
// converted property getter: - (unsigned)displayOrder;	// 0x30e4ae7d
- (id)dueDate;	// 0x30e06ee5
// declared property getter: - (id)dueDateComponents;	// 0x30df7a99
- (id)externalURI;	// 0x30e4ad71
// declared property getter: - (BOOL)isCompleted;	// 0x30e07009
- (id)parentID;	// 0x30e4b049
- (id)reminderIdentifier;	// 0x30e4ad61
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x30e096c5
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x30e09709
// converted property setter: - (void)setDisplayOrder:(unsigned)order;	// 0x30e4af19
// declared property setter: - (void)setDueDateComponents:(id)components;	// 0x30e073d5
// declared property setter: - (void)setStartDateComponents:(id)components;	// 0x30e0778d
- (void)setTimeZone:(id)zone;	// 0x30e4adf5
// declared property getter: - (id)startDateComponents;	// 0x30e07621
- (BOOL)validate:(id *)validate;	// 0x30e07d8d
@end

