/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVScheduleTask.h"

@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask {
	NSString *_maskedUID;	// 160 = 0xa0
}
@property(retain) NSString *maskedUID;	// G=0x35fb0a1d; S=0x35fb09f9; @synthesize=_maskedUID
+ (id)_icsDate:(id)date calendar:(id)calendar;	// 0x35fb04c1
+ (id)freeBusyDocumentWithOrganizer:(id)organizer attendees:(id)attendees start:(id)start end:(id)end maskedUID:(id)uid;	// 0x35fb069d
- (id)initWithOrganizer:(id)organizer originator:(id)originator attendees:(id)attendees start:(id)start end:(id)end outboxURL:(id)url maskedUID:(id)uid;	// 0x35fb05f5
- (void)dealloc;	// 0x35fb0a35
// declared property getter: - (id)maskedUID;	// 0x35fb0a1d
// declared property setter: - (void)setMaskedUID:(id)uid;	// 0x35fb09f9
@end
