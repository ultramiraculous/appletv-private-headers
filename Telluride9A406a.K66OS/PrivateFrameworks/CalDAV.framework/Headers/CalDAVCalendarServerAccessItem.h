/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_accessLevel;	// 24 = 0x18
}
@property(retain) CoreDAVItemWithNoChildren *accessLevel;	// G=0x35fba13d; S=0x35fba119; @synthesize=_accessLevel
- (id)init;	// 0x35fb9ced
- (id)initWithAccess:(int)access;	// 0x35fb9d29
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35fba0cd
// declared property getter: - (id)accessLevel;	// 0x35fba13d
- (id)copyParseRules;	// 0x35fb9e49
- (void)dealloc;	// 0x35fba181
- (id)description;	// 0x35fba155
// declared property setter: - (void)setAccessLevel:(id)level;	// 0x35fba119
@end

