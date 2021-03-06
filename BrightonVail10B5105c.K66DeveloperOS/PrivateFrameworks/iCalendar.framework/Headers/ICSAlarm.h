/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class ICSDateTimeUTCValue, NSArray, ICSTrigger, NSString, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent {
}
@property(retain) ICSDateTimeUTCValue *acknowledged;	// G=0x31b69bd1; S=0x31b69c19; 
@property(assign) int action;	// G=0x31b69ac1; S=0x31b69b19; 
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) NSString *relatedTo;	// G=0x31b69c49; S=0x31b69c91; 
@property(retain) NSString *summary;	// @dynamic
@property(retain) ICSTrigger *trigger;	// @dynamic
@property(retain) NSString *uid;	// @dynamic
@property(assign) BOOL x_apple_default_alarm;	// G=0x31b69d99; S=0x31b69d19; 
@property(assign) BOOL x_apple_local_default_alarm;	// G=0x31b69e6d; S=0x31b69ded; 
@property(retain) NSString *x_apple_proximity;	// G=0x31b69cb1; S=0x31b69cf9; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// @dynamic
@property(retain) NSString *x_wr_alarmuid;	// G=0x31b69b69; S=0x31b69bb1; 
+ (id)ICSStringFromAction:(int)action;	// 0x31b698f1
+ (int)actionFromICSString:(id)icsstring;	// 0x31b6984d
+ (id)createNoneAlarm;	// 0x31b699fd
+ (id)name;	// 0x31b69841
+ (id)parseableDocumentFromICS:(id)ics;	// 0x31b6993d
// declared property getter: - (id)acknowledged;	// 0x31b69bd1
// declared property getter: - (int)action;	// 0x31b69ac1
- (void)fixAlarm;	// 0x31b42f65
// declared property getter: - (id)relatedTo;	// 0x31b69c49
// declared property setter: - (void)setAcknowledged:(id)acknowledged;	// 0x31b69c19
// declared property setter: - (void)setAction:(int)action;	// 0x31b69b19
// declared property setter: - (void)setRelatedTo:(id)to;	// 0x31b69c91
// declared property setter: - (void)setX_apple_default_alarm:(BOOL)alarm;	// 0x31b69d19
// declared property setter: - (void)setX_apple_local_default_alarm:(BOOL)alarm;	// 0x31b69ded
// declared property setter: - (void)setX_apple_proximity:(id)proximity;	// 0x31b69cf9
// declared property setter: - (void)setX_wr_alarmuid:(id)alarmuid;	// 0x31b69bb1
// declared property getter: - (BOOL)x_apple_default_alarm;	// 0x31b69d99
// declared property getter: - (BOOL)x_apple_local_default_alarm;	// 0x31b69e6d
// declared property getter: - (id)x_apple_proximity;	// 0x31b69cb1
// declared property getter: - (id)x_wr_alarmuid;	// 0x31b69b69
@end

