/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentCalendarItem.h"
#import "EventKit-Structs.h"

@class NSString, NSDate, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem {
@private
	NSString *_parentUUID;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x345a9af5; S=0x345a9ab1; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x34554bbd; S=0x34558edd; 
@property(copy, nonatomic) NSDate *dueDate;	// G=0x34545c7d; S=0x34556771; 
@property(assign, nonatomic) BOOL dueDateAllDay;	// G=0x34545cf1; S=0x345567e9; 
@property(copy, nonatomic) NSTimeZone *dueDateTimeZone;	// G=0x34545c99; S=0x3455678d; 
@property(copy, nonatomic) NSString *parentUUID;	// G=0x345590d1; S=0x34558f15; @synthesize=_parentUUID
+ (id)defaultPropertiesToLoad;	// 0x34545a6d
+ (id)generateUniqueIDWithReminder:(id)reminder calendar:(id)calendar;	// 0x345568f9
- (void)_sendModifiedNote;	// 0x345a9921
// declared property getter: - (id)completionDate;	// 0x34554bbd
- (id)copyWithZone:(NSZone *)zone;	// 0x34558c91
- (void)dealloc;	// 0x345a98d5
- (id)description;	// 0x345a99ed
// declared property getter: - (id)dueDate;	// 0x34545c7d
// declared property getter: - (BOOL)dueDateAllDay;	// 0x34545cf1
// declared property getter: - (id)dueDateTimeZone;	// 0x34545c99
- (int)entityType;	// 0x34555595
- (id)externalURI;	// 0x345a9969
// declared property getter: - (BOOL)isCompleted;	// 0x345a9af5
// declared property getter: - (id)parentUUID;	// 0x345590d1
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x345a9ab1
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x34558edd
// declared property setter: - (void)setDueDate:(id)date;	// 0x34556771
// declared property setter: - (void)setDueDateAllDay:(BOOL)day;	// 0x345567e9
// declared property setter: - (void)setDueDateTimeZone:(id)zone;	// 0x3455678d
// declared property setter: - (void)setParentUUID:(id)uuid;	// 0x34558f15
- (BOOL)validate:(id *)validate;	// 0x34556805
@end
