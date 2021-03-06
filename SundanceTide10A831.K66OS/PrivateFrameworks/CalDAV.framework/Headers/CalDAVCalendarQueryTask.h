/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPropFindTask.h> // Unknown library

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {
	BOOL _syncEvents;	// 144 = 0x90
	BOOL _syncTodos;	// 145 = 0x91
	NSDateComponents *_eventFilterStartDate;	// 148 = 0x94
	NSDateComponents *_eventFilterEndDate;	// 152 = 0x98
	NSDateComponents *_todoFilterStartDate;	// 156 = 0x9c
	NSDateComponents *_todoFilterEndDate;	// 160 = 0xa0
}
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x347192b1; S=0x347192c5; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x3471928d; S=0x347192a1; @synthesize=_eventFilterStartDate
@property(assign) BOOL syncEvents;	// G=0x3471922d; S=0x34719245; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x3471925d; S=0x34719275; @synthesize=_syncTodos
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x347192f9; S=0x3471930d; @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x347192d5; S=0x347192e9; @synthesize=_todoFilterStartDate
- (void)_appendComponentFiltersToXMLData:(id)xmldata;	// 0x34718d75
- (void)_appendTimeRangeFilterToXMLData:(id)xmldata startDate:(id)date endDate:(id)date3;	// 0x34718c61
- (id)_icsDateStringForNSDateComponents:(id)nsdateComponents;	// 0x34718b3d
- (void)dealloc;	// 0x34718759
- (id)description;	// 0x347187e5
// declared property getter: - (id)eventFilterEndDate;	// 0x347192b1
// declared property getter: - (id)eventFilterStartDate;	// 0x3471928d
- (id)httpMethod;	// 0x34718b31
- (id)requestBody;	// 0x34718fc9
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x347192c5
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x347192a1
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x34719245
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x34719275
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x3471930d
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x347192e9
// declared property getter: - (BOOL)syncEvents;	// 0x3471922d
// declared property getter: - (BOOL)syncTodos;	// 0x3471925d
// declared property getter: - (id)todoFilterEndDate;	// 0x347192f9
// declared property getter: - (id)todoFilterStartDate;	// 0x347192d5
@end

