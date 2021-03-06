/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {
	NSMutableSet *_transports;	// 28 = 0x1c
}
@property(retain) NSMutableSet *transports;	// G=0x338fd435; S=0x338fd449; @synthesize=_transports
+ (id)copyParseRules;	// 0x338fd20d
- (id)init;	// 0x338fd0d1
- (void)addTransport:(id)transport;	// 0x338fd39d
- (void)dealloc;	// 0x338fd0fd
- (id)description;	// 0x338fd149
// declared property setter: - (void)setTransports:(id)transports;	// 0x338fd449
// declared property getter: - (id)transports;	// 0x338fd435
@end

