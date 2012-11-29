/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
	NSMutableSet *_componentSets;	// 28 = 0x1c
}
+ (BOOL)allowedCalendars:(id)calendars contains:(id)contains;	// 0x32ed3565
- (id)init;	// 0x32ed32e5
- (void)addCompSet:(id)set;	// 0x32ed369d
- (id)childrenToWrite;	// 0x32ed3709
- (id)componentsAsString;	// 0x32ed335d
- (id)copyParseRules;	// 0x32ed31e1
- (void)dealloc;	// 0x32ed3311
- (id)description;	// 0x32ed34e1
@end
