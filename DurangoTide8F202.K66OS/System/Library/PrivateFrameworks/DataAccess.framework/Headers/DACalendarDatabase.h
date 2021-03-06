/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DACalendarObject.h"
#import "DataAccess-Structs.h"

@class DACalendar, NSArray;

@interface DACalendarDatabase : DACalendarObject {
	BOOL _isChangeLoggingEnabled;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) DACalendar *defaultCalendarForNewEvents;	// G=0x31ec3aa5; 
@property(readonly, assign, nonatomic) DACalendar *defaultLocalCalendar;	// G=0x31ec39f1; 
@property(assign, nonatomic) BOOL isChangeLoggingEnabled;	// G=0x31ec3895; S=0x31ec38d5; 
@property(readonly, assign, nonatomic) NSArray *stores;	// G=0x31ec3905; 
- (id)initWithRef:(CalDatabase *)ref;	// 0x31ec38a5
- (id)calendar;	// 0x31ec3bbd
// declared property getter: - (id)defaultCalendarForNewEvents;	// 0x31ec3aa5
// declared property getter: - (id)defaultLocalCalendar;	// 0x31ec39f1
- (id)event;	// 0x31ec3c29
// declared property getter: - (BOOL)isChangeLoggingEnabled;	// 0x31ec3895
- (id)recurrence;	// 0x31ec3c95
// declared property setter: - (void)setIsChangeLoggingEnabled:(BOOL)enabled;	// 0x31ec38d5
- (id)storeWithExternalID:(id)externalID;	// 0x31ec3b59
// declared property getter: - (id)stores;	// 0x31ec3905
@end

