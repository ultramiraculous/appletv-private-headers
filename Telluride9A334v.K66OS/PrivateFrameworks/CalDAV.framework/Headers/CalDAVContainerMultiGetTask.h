/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerMultiGetTask.h> // Unknown library


@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
	BOOL _getScheduleTags;	// 160 = 0xa0
	BOOL _getScheduleChanges;	// 161 = 0xa1
}
@property(assign) BOOL getScheduleChanges;	// G=0x3594e895; S=0x3594e8a5; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x3594e8b5; S=0x3594e8c5; @synthesize=_getScheduleTags
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes;	// 0x3594e8d5
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes appSpecificCalendarItemClass:(Class)aClass;	// 0x3594eabd
- (id)copyAdditionalPropElements;	// 0x3594e92d
// declared property getter: - (BOOL)getScheduleChanges;	// 0x3594e895
// declared property getter: - (BOOL)getScheduleTags;	// 0x3594e8b5
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x3594ea25
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x3594e8a5
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x3594e8c5
@end
