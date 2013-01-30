/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerMultiGetTask.h> // Unknown library


@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
	BOOL _getScheduleTags;	// 176 = 0xb0
	BOOL _getScheduleChanges;	// 177 = 0xb1
}
@property(assign) BOOL getScheduleChanges;	// G=0x3358ae31; S=0x3358ae49; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x3358ae01; S=0x3358ae19; @synthesize=_getScheduleTags
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes;	// 0x3358ab51
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes appSpecificCalendarItemClass:(Class)aClass;	// 0x3358aa49
- (id)copyAdditionalPropElements;	// 0x3358ab9d
// declared property getter: - (BOOL)getScheduleChanges;	// 0x3358ae31
// declared property getter: - (BOOL)getScheduleTags;	// 0x3358ae01
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x3358ad05
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x3358ae49
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x3358ae19
@end
