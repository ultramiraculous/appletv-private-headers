/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, EKCalendar, NSArray;

@interface EKCalendarItem : NSObject {
}
@property(copy) NSArray *alarms;	// G=0x3168210d; S=0x31682109; 
@property(retain) EKCalendar *calendar;	// G=0x316820f1; S=0x316820ed; 
@property(readonly, copy) NSDate *lastModifiedDate;	// G=0x31682105; 
@property(copy) NSString *notes;	// G=0x316820f9; S=0x316820f5; 
@property(copy) NSString *title;	// G=0x31682101; S=0x316820fd; 
- (void)addAlarm:(id)alarm;	// 0x31682111
// declared property getter: - (id)alarms;	// 0x3168210d
// declared property getter: - (id)calendar;	// 0x316820f1
// declared property getter: - (id)lastModifiedDate;	// 0x31682105
// declared property getter: - (id)notes;	// 0x316820f9
- (void)removeAlarm:(id)alarm;	// 0x31682115
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x31682109
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x316820ed
// declared property setter: - (void)setNotes:(id)notes;	// 0x316820f5
// declared property setter: - (void)setTitle:(id)title;	// 0x316820fd
// declared property getter: - (id)title;	// 0x31682101
@end
