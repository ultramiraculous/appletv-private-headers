/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSProxy.h> // Unknown library

@class NSArray, IMRemoteObjectBroadcaster, Protocol;

__attribute__((visibility("hidden")))
@interface Broadcaster : NSProxy {
	NSArray *_targets;	// 4 = 0x4
	IMRemoteObjectBroadcaster *_parent;	// 8 = 0x8
	Protocol *_protocol;	// 12 = 0xc
}
- (id)initWithNotifier:(id)notifier protocol:(id)protocol targets:(id)targets;	// 0x34a8ccf1
- (void)dealloc;	// 0x34a8cd65
- (void)forwardInvocation:(id)invocation;	// 0x34a8cdf1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34a8cda9
@end

