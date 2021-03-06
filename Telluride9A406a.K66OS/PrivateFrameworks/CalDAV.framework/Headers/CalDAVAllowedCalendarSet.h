/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVAllowedCalendarSet : CoreDAVItem {
	NSMutableSet *_componentSets;	// 24 = 0x18
}
+ (BOOL)allowedCalendars:(id)calendars contains:(id)contains;	// 0x35fc93c9
- (id)init;	// 0x35fc9281
- (void)addCompSet:(id)set;	// 0x35fc92bd
- (id)childrenToWrite;	// 0x35fc9329
- (id)componentsAsString;	// 0x35fc9539
- (id)copyParseRules;	// 0x35fc9175
- (void)dealloc;	// 0x35fc937d
- (id)description;	// 0x35fc94b5
@end

