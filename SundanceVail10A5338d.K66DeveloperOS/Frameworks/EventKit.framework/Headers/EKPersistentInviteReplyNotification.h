/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class EKPersistentCalendar, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface EKPersistentInviteReplyNotification : EKPersistentObject {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x34ba87cd; 
@property(readonly, assign, nonatomic) EKPersistentCalendar *calendar;	// G=0x34ba87ed; 
@property(readonly, assign, nonatomic) NSString *calendarName;	// G=0x34ba86f1; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x34ba87b1; 
@property(readonly, assign, nonatomic) NSString *shareeAddress;	// G=0x34ba8729; 
@property(readonly, assign, nonatomic) NSString *shareeName;	// G=0x34ba870d; 
@property(readonly, assign, nonatomic) int status;	// G=0x34ba8795; 
+ (id)defaultPropertiesToLoad;	// 0x34ba85fd
+ (id)relations;	// 0x34ba8669
// declared property getter: - (BOOL)alerted;	// 0x34ba87cd
// declared property getter: - (id)calendar;	// 0x34ba87ed
// declared property getter: - (id)calendarName;	// 0x34ba86f1
// declared property getter: - (id)creationDate;	// 0x34ba87b1
// declared property getter: - (id)shareeAddress;	// 0x34ba8729
// declared property getter: - (id)shareeName;	// 0x34ba870d
// declared property getter: - (int)status;	// 0x34ba8795
@end
