/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem {
	CoreDAVLeafItem *_dtstamp;	// 28 = 0x1c
	CalDAVCalendarServerActionItem *_action;	// 32 = 0x20
}
@property(retain) CalDAVCalendarServerActionItem *action;	// G=0x3421922d; S=0x34219241; @synthesize=_action
@property(retain) CoreDAVLeafItem *dtstamp;	// G=0x34219209; S=0x3421921d; @synthesize=_dtstamp
- (id)init;	// 0x34218f71
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x34218f9d
// declared property getter: - (id)action;	// 0x3421922d
- (id)copyParseRules;	// 0x3421907d
- (void)dealloc;	// 0x34218ff9
- (id)description;	// 0x34219051
// declared property getter: - (id)dtstamp;	// 0x34219209
// declared property setter: - (void)setAction:(id)action;	// 0x34219241
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x3421921d
@end

