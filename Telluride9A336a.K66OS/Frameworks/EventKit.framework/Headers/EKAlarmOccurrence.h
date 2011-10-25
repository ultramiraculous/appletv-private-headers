/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKObjectID, NSDate, NSTimeZone;

@interface EKAlarmOccurrence : NSObject {
@private
	EKObjectID *_alarmID;	// 4 = 0x4
	EKObjectID *_ownerID;	// 8 = 0x8
	NSDate *_ownerDate;	// 12 = 0xc
	NSTimeZone *_ownerTimeZone;	// 16 = 0x10
	NSDate *_fireDate;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) EKObjectID *alarmID;	// G=0x313dbc75; @synthesize=_alarmID
@property(readonly, assign, nonatomic) NSDate *fireDate;	// G=0x313dbcb5; @synthesize=_fireDate
@property(readonly, assign, nonatomic) NSDate *ownerDate;	// G=0x313dbc95; @synthesize=_ownerDate
@property(readonly, assign, nonatomic) EKObjectID *ownerID;	// G=0x313dbc85; @synthesize=_ownerID
@property(readonly, assign, nonatomic) NSTimeZone *ownerTimeZone;	// G=0x313dbca5; @synthesize=_ownerTimeZone
+ (id)alarmOccurrenceWithAlarmID:(id)alarmID ownerID:(id)anId ownerDate:(id)date ownerTimeZone:(id)zone fireDate:(id)date5;	// 0x313db8e5
- (id)initWithAlarmID:(id)alarmID ownerID:(id)anId ownerDate:(id)date ownerTimeZone:(id)zone fireDate:(id)date5;	// 0x313db939
- (id)initWithCoder:(id)coder;	// 0x313dbaa1
// declared property getter: - (id)alarmID;	// 0x313dbc75
- (void)dealloc;	// 0x313dba05
- (void)encodeWithCoder:(id)coder;	// 0x313dbbbd
// declared property getter: - (id)fireDate;	// 0x313dbcb5
// declared property getter: - (id)ownerDate;	// 0x313dbc95
// declared property getter: - (id)ownerID;	// 0x313dbc85
// declared property getter: - (id)ownerTimeZone;	// 0x313dbca5
@end

