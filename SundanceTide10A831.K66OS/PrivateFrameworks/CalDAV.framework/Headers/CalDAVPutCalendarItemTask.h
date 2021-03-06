/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPutTask.h> // Unknown library

@class NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask {
	NSString *_previousScheduleTag;	// 172 = 0xac
}
@property(assign, nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousScheduleTag;	// G=0x346fe445; S=0x346fe459; @synthesize=_previousScheduleTag
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x346fe251
- (id)additionalHeaderValues;	// 0x346fe355
- (void)dealloc;	// 0x346fe2a1
- (id)description;	// 0x346fe2e5
// declared property getter: - (id)previousScheduleTag;	// 0x346fe445
// declared property setter: - (void)setPreviousScheduleTag:(id)tag;	// 0x346fe459
@end

