/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVCalendar.h"


@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {
}
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x348aea55
- (void *)_copyEventActionWithURL:(id)url;	// 0x348aec29
- (BOOL)_removeInvitationWithURL:(id)url;	// 0x348af565
- (id)allItemURLs;	// 0x348aeac5
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x348af6b1
- (id)etagsForItemURLs:(id)itemURLs;	// 0x348af069
- (BOOL)isScheduleInbox;	// 0x348aeac1
- (void)removeInvitationWithURL:(id)url;	// 0x348aece1
- (void)setETag:(id)tag forInvitationAtURL:(id)url uniqueIdentifier:(id)identifier;	// 0x348aeda9
- (BOOL)updateResourcesFromServer:(id)server;	// 0x348af23d
@end
