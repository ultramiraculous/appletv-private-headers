/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItemWithNoChildren.h> // Unknown library

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren {
	NSString *_nameAttribute;	// 24 = 0x18
}
@property(retain) NSString *nameAttribute;	// G=0x302dba35; S=0x302dba11; @synthesize=_nameAttribute
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x302db9c5
- (void)dealloc;	// 0x302dbb35
// declared property getter: - (id)nameAttribute;	// 0x302dba35
- (void)parserFoundAttributes:(id)attributes;	// 0x302dba4d
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x302dba11
@end
