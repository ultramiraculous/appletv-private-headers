/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithHrefChildItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet, CoreDAVLeafItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {
	CoreDAVLeafItem *_uid;	// 28 = 0x1c
	CoreDAVHrefItem *_href;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_inviteStatus;	// 36 = 0x24
	CalDAVCalendarServerAccessItem *_access;	// 40 = 0x28
	CoreDAVItemWithHrefChildItem *_hostURL;	// 44 = 0x2c
	CalDAVCalendarServerOrganizerItem *_organizer;	// 48 = 0x30
	CoreDAVLeafItem *_summary;	// 52 = 0x34
	CalDAVSupportedCalendarComponentSet *_supportedCalendarComponentSet;	// 56 = 0x38
}
@property(retain) CalDAVCalendarServerAccessItem *access;	// G=0x347086d9; S=0x347086ed; @synthesize=_access
@property(retain) CoreDAVItemWithHrefChildItem *hostURL;	// G=0x347086fd; S=0x34708711; @synthesize=_hostURL
@property(retain) CoreDAVHrefItem *href;	// G=0x34708691; S=0x347086a5; @synthesize=_href
@property(retain) CoreDAVItemWithNoChildren *inviteStatus;	// G=0x347086b5; S=0x347086c9; @synthesize=_inviteStatus
@property(retain) CalDAVCalendarServerOrganizerItem *organizer;	// G=0x34708721; S=0x34708735; @synthesize=_organizer
@property(retain) CoreDAVLeafItem *summary;	// G=0x34708745; S=0x34708759; @synthesize=_summary
@property(retain) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet;	// G=0x34708769; S=0x3470877d; @synthesize=_supportedCalendarComponentSet
@property(retain) CoreDAVLeafItem *uid;	// G=0x3470866d; S=0x34708681; @synthesize=_uid
- (id)init;	// 0x34707c85
- (id)initForReplyWithUID:(id)uid href:(id)href hostURL:(id)url summary:(id)summary;	// 0x34707cb1
// declared property getter: - (id)access;	// 0x347086d9
- (id)copyParseRules;	// 0x34707fd9
- (void)dealloc;	// 0x34707edd
- (id)description;	// 0x34707fad
// declared property getter: - (id)hostURL;	// 0x347086fd
// declared property getter: - (id)href;	// 0x34708691
// declared property getter: - (id)inviteStatus;	// 0x347086b5
- (BOOL)isComponentSupportedForString:(id)string;	// 0x34708619
// declared property getter: - (id)organizer;	// 0x34708721
// declared property setter: - (void)setAccess:(id)access;	// 0x347086ed
// declared property setter: - (void)setHostURL:(id)url;	// 0x34708711
// declared property setter: - (void)setHref:(id)href;	// 0x347086a5
// declared property setter: - (void)setInviteStatus:(id)status;	// 0x347086c9
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x34708735
// declared property setter: - (void)setSummary:(id)summary;	// 0x34708759
// declared property setter: - (void)setSupportedCalendarComponentSet:(id)set;	// 0x3470877d
// declared property setter: - (void)setUid:(id)uid;	// 0x34708681
// declared property getter: - (id)summary;	// 0x34708745
// declared property getter: - (id)supportedCalendarComponentSet;	// 0x34708769
// declared property getter: - (id)uid;	// 0x3470866d
@end

