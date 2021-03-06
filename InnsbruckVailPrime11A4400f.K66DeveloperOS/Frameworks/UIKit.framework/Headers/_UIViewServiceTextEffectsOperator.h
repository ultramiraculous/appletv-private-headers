/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "_UIViewServiceDeputy.h"
#import "_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface.h"
#import "XPCProxyTarget.h"
#import "UIKit-Structs.h"
#import "_UIViewServiceDeputyRotationDelegate.h"

@class UIWindow, _UIAsyncInvocation;
@protocol _UIViewServiceDeputyDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceTextEffectsOperator : NSObject <XPCProxyTarget, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {
	id _remoteViewControllerProxy;	// 4 = 0x4
	_UIAsyncInvocation *_prepareForDisconnectionInvocation;	// 8 = 0x8
	_UIAsyncInvocation *_invalidationInvocation;	// 12 = 0xc
	UIWindow *_hostedWindow;	// 16 = 0x10
	CGPoint _windowOffset;	// 20 = 0x14
	BOOL _canRestoreInputViews;	// 28 = 0x1c
	BOOL _isRestoringInputViews;	// 29 = 0x1d
	id<_UIViewServiceDeputyDelegate> _delegate;	// 32 = 0x20
	int __automatic_invalidation_retainCount;	// 36 = 0x24
	BOOL __automatic_invalidation_invalidated;	// 40 = 0x28
}
+ (id)XPCInterface;	// 0x2f8db251
+ (id)operatorWithRemoteViewControllerProxy:(id)remoteViewControllerProxy hostPID:(int)pid;	// 0x2f8dae59
- (int)__automatic_invalidation_logic;	// 0x2f8dabed
- (void)__createHostedTextEffectsWithReplyHandler:(id)replyHandler;	// 0x2f8db9fd
- (void)__hostDidEnterBackground;	// 0x2f8dbdfd
- (void)__hostViewWillDisappear:(BOOL)__hostView;	// 0x2f8dbfc9
- (void)__hostWillEnterForeground;	// 0x2f8dbf25
- (void)__prepareForDisconnectionWithCompletionHandler:(id)completionHandler;	// 0x2f8dc051
- (void)__setContentSize:(id)size windowOffset:(id)offset;	// 0x2f8dbca9
- (void)__setNextAutomaticOrderOutDirection:(int)direction duration:(double)duration;	// 0x2f8dbdb9
- (void)_invalidateUnconditionallyThen:(id)then;	// 0x2f8db50d
- (BOOL)_isDeallocating;	// 0x2f8dae21
- (void)_prepareForDisconnectionUnconditionallyThen:(id)disconnectionUnconditionallyThen;	// 0x2f8db2c5
- (id)_queue;	// 0x2f8dae49
- (void)_restoreInputViews;	// 0x2f8dbe95
- (void)_sendNotification:(id)notification;	// 0x2f8db995
- (BOOL)_tryRetain;	// 0x2f8dadd5
- (void)_viewServiceHostWillEnterForeground:(id)_viewServiceHost;	// 0x2f8dbfb9
- (void)dealloc;	// 0x2f8db889
- (void)finishRotation;	// 0x2f8dc159
- (id)invalidate;	// 0x2f8dc0f1
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x2f8dc171
- (oneway void)release;	// 0x2f8dad05
- (id)retain;	// 0x2f8daccd
- (unsigned)retainCount;	// 0x2f8dadc1
- (void)rotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f8dc13d
- (void)setDeputyDelegate:(id)delegate;	// 0x2f8dc0e1
- (void)setHostedWindow:(id)window;	// 0x2f8dc111
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f8dc121
- (void)windowDidGainFirstResponder:(id)window;	// 0x2f8db901
@end

