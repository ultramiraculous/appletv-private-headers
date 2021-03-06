/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "XPCProxyTarget.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIQueueingProxy : _UITargetedProxy <XPCProxyTarget> {
@private
	int _lock;	// 8 = 0x8
	unsigned _suspensionCount;	// 12 = 0xc
	NSMutableArray *_queuedInvocations;	// 16 = 0x10
}
+ (id)proxyWithTarget:(id)target;	// 0x30485cb1
- (void)_dispatchSuspendedMessages;	// 0x30485ebd
- (void)dealloc;	// 0x30485d1d
- (id)description;	// 0x304860a9
- (void)forwardInvocation:(id)invocation;	// 0x30485d69
- (BOOL)isBlock;	// 0x30486079
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3048611d
- (void)removeAllEnqueuedInvocations;	// 0x30486035
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3048607d
- (void)resume;	// 0x30485fe5
- (void)suspend;	// 0x30485e85
@end

