/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {
	NSMutableSet *_responses;	// 24 = 0x18
	NSMutableSet *_successfulICS;	// 28 = 0x1c
	NSMutableSet *_failedResponseItems;	// 32 = 0x20
}
@property(retain) NSMutableSet *failedResponseItems;	// G=0x338ca485; S=0x338ca461; @synthesize=_failedResponseItems
@property(retain) NSMutableSet *responses;	// G=0x338ca40d; S=0x338ca3e9; @synthesize=_responses
@property(retain) NSMutableSet *successfulICS;	// G=0x338ca449; S=0x338ca425; @synthesize=_successfulICS
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338ca755
- (void)addNewTopLevelItem:(id)item;	// 0x338ca50d
- (id)copyParseRules;	// 0x338c9a79
- (void)dealloc;	// 0x338ca381
- (id)description;	// 0x338ca49d
// declared property getter: - (id)failedResponseItems;	// 0x338ca485
// declared property getter: - (id)responses;	// 0x338ca40d
// declared property setter: - (void)setFailedResponseItems:(id)items;	// 0x338ca461
// declared property setter: - (void)setResponses:(id)responses;	// 0x338ca3e9
// declared property setter: - (void)setSuccessfulICS:(id)ics;	// 0x338ca425
// declared property getter: - (id)successfulICS;	// 0x338ca449
@end

