/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSMutableDictionary, NSError;
@protocol CalDAVCalendarPropertyRefreshDelegate;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation {
	NSError *_savedError;	// 56 = 0x38
	NSMutableDictionary *_ctags;	// 60 = 0x3c
	BOOL _didFinish;	// 64 = 0x40
	BOOL _didMakeCalendars;	// 65 = 0x41
	BOOL _isSecondRefresh;	// 66 = 0x42
	int _nextCalendarOrder;	// 68 = 0x44
}
@property(assign, nonatomic) id<CalDAVCalendarPropertyRefreshDelegate> delegate;	// @dynamic
- (void)_continueHandleContainerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x31420a41
- (void)_finishRefresh;	// 0x3141ec41
- (id)_generateTimeZoneString:(id)string;	// 0x314201ad
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)principal tasks:(id)tasks;	// 0x31422e8d
- (id)_getDefaultMkCalendarForPrincipalTask:(id)principalTask isEventCalendar:(BOOL)calendar;	// 0x31422c71
- (id)_getMkcalendarTaskForCalendar:(id)calendar;	// 0x31420375
- (id)_getSetPropertyStringTask:(id)task forName:(id)name andNamespace:(id)aNamespace atURL:(id)url;	// 0x3141ffa5
- (void)_handleCalendarPublish;	// 0x3141ef39
- (void)_prepareCalendarsBeforeRefresh;	// 0x3141f439
- (void)_reallyRefreshCalendarProperties;	// 0x3141edb9
- (int)_sharingStatusForContainer:(id)container;	// 0x3141ff51
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x314231d5
- (void)dealloc;	// 0x3141ebdd
- (void)refreshCalendarProperties;	// 0x3141f6a1
@end
