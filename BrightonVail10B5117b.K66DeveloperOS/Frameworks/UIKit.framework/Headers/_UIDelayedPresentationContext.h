/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSInvocation;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject {
	BOOL _enableUserInteraction;	// 4 = 0x4
	int _reqcnt;	// 8 = 0x8
	NSInvocation *_presentInvocation;	// 12 = 0xc
	id _cancellationHandler;	// 16 = 0x10
	double _timeout;	// 20 = 0x14
	NSObject<OS_dispatch_source> *_timerSource;	// 28 = 0x1c
}
@property(copy, nonatomic) id cancellationHandler;	// G=0x32e92c45; S=0x32e92c59; @synthesize=_cancellationHandler
@property(retain, nonatomic) NSInvocation *presentInvocation;	// G=0x32e92c69; S=0x32e92c79; @synthesize=_presentInvocation
- (id)initWithTimeout:(double)timeout cancellationHandler:(id)handler;	// 0x32e926f9
- (void)beginDelayedPresentation;	// 0x32e92999
- (void)cancelDelayedPresentation:(BOOL)presentation;	// 0x32e92889
// declared property getter: - (id)cancellationHandler;	// 0x32e92c45
- (void)dealloc;	// 0x32e92775
- (int)decrementRequestCount;	// 0x32e92859
- (id)delayingController;	// 0x32e9280d
- (void)finishDelayedPresentation:(id)presentation;	// 0x32e92b59
- (int)incrementRequestCount;	// 0x32e92871
- (id)invocationTarget;	// 0x32e927ed
// declared property getter: - (id)presentInvocation;	// 0x32e92c69
- (int)requestCount;	// 0x32e92849
// declared property setter: - (void)setCancellationHandler:(id)handler;	// 0x32e92c59
// declared property setter: - (void)setPresentInvocation:(id)invocation;	// 0x32e92c79
@end

