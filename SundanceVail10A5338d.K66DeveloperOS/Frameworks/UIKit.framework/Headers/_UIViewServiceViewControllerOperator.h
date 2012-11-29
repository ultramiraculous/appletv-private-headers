/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIViewServiceDeputyRotationSource.h"
#import "_UIViewServiceDeputy.h"
#import "UIKit-Structs.h"
#import "UIViewController.h"
#import "_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h"
#import "XPCProxyTarget.h"

@class NSMutableArray, _UIHostedWindow, _UIAsyncInvocation, UIActionSheet;
@protocol _UIViewServiceDeputyDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperator : UIViewController <XPCProxyTarget, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {
	int _hostPID;	// 184 = 0xb8
	id _remoteViewControllerProxyToOperator;	// 188 = 0xbc
	id _remoteViewControllerProxyToViewController;	// 192 = 0xc0
	UIViewController *_localViewController;	// 196 = 0xc4
	_UIHostedWindow *_hostedWindow;	// 200 = 0xc8
	UIActionSheet *_hostedActionSheet;	// 204 = 0xcc
	BOOL _serviceInPopover;	// 208 = 0xd0
	int _hostStatusBarOrientation;	// 212 = 0xd4
	NSMutableArray *_deputyRotationDelegates;	// 216 = 0xd8
	unsigned _hostAccessibilityServerPort;	// 220 = 0xdc
	id<_UIViewServiceDeputyDelegate> _delegate;	// 224 = 0xe0
	_UIAsyncInvocation *_invalidationInvocation;	// 228 = 0xe4
	int __automatic_invalidation_retainCount;	// 232 = 0xe8
	BOOL __automatic_invalidation_invalidated;	// 236 = 0xec
}
+ (id)operatorWithRemoteViewControllerProxy:(id)remoteViewControllerProxy;	// 0x30fef9e1
- (void)__alertIsAppearing:(id)appearing withFrameValue:(id)frameValue;	// 0x30ff2b11
- (void)__alertIsDisappearing:(id)disappearing;	// 0x30ff2d91
- (int)__automatic_invalidation_logic;	// 0x30fef779
- (void)__createViewController:(id)controller withStatusBarOrientation:(int)statusBarOrientation appearanceSerializedRepresentations:(id)representations hostAccessibilityServerPort:(id)port replyHandler:(id)handler;	// 0x30ff2471
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)__host;	// 0x30ff1f21
- (void)__hostDidEnterBackground;	// 0x30ff1b31
- (void)__hostDidPromoteFirstResponder;	// 0x30ff2ab9
- (void)__hostDidRotateFromInterfaceOrientation:(int)__host skipSelf:(BOOL)aSelf;	// 0x30ff2331
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)__host originalSource:(id)source;	// 0x30ff0e71
- (void)__hostReadyToReceiveMessagesFromServiceViewController;	// 0x30ff16ad
- (void)__hostViewDidAppear:(BOOL)__hostView;	// 0x30ff1929
- (void)__hostViewDidDisappear:(BOOL)__hostView;	// 0x30ff19e5
- (void)__hostViewWillAppear:(BOOL)__hostView withFencingSendRight:(id)fencingSendRight completionHandler:(id)handler;	// 0x30ff16cd
- (void)__hostViewWillDisappear:(BOOL)__hostView;	// 0x30ff1969
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)__host duration:(double)duration skipSelf:(BOOL)aSelf;	// 0x30ff20f1
- (void)__hostWillEnterForeground;	// 0x30ff1bc5
- (void)__hostWillRotateToInterfaceOrientation:(int)__host duration:(double)duration skipSelf:(BOOL)aSelf;	// 0x30ff1f7d
- (void)__hostedActionSheetClickedButtonAtIndex:(int)index;	// 0x30ff1531
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)__hostedActionSheet;	// 0x30ff15b1
- (void)__hostedActionSheetDidPresent;	// 0x30ff1485
- (void)__scrollToTopFromTouchAtViewLocation:(id)viewLocation resultHandler:(id)handler;	// 0x30ff0c6d
- (void)__setContentSize:(id)size;	// 0x30ff2931
- (void)__setServiceInPopover:(BOOL)popover;	// 0x30ff1b21
- (id)_appearanceSource;	// 0x30ff0e45
- (void)_dismissActionSheet:(id)sheet withClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30ff145d
- (void)_firstResponderDidChange:(id)_firstResponder;	// 0x30ff0fb1
- (void)_invalidateUnconditionallyThen:(id)then;	// 0x30ff045d
- (BOOL)_isDeallocating;	// 0x30fef9b5
- (void)_presentActionSheet:(id)sheet asPopoverFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view withPreferredArrowDirections:(int)preferredArrowDirections passthroughViews:(id)views backgroundStyle:(id)style animated:(BOOL)animated;	// 0x30ff1395
- (void)_presentActionSheet:(id)sheet inView:(id)view fromYCoordinate:(float)ycoordinate;	// 0x30ff1059
- (void)_supportedInterfaceOrientationsDidChange;	// 0x30ff0b8d
- (BOOL)_tryRetain;	// 0x30fef965
- (void)_windowDidRegisterScrollToTopView;	// 0x30ff0d81
- (void)_windowDidUnregisterScrollToTopView;	// 0x30ff0da1
- (void)_windowDidUpdateCurrentTintView:(id)_window;	// 0x30ff0dc1
- (void)addDeputyRotationDelegate:(id)delegate;	// 0x30ff0afd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30ff140d
- (void)dealloc;	// 0x30fefe95
- (id)defaultFirstResponder;	// 0x30ff0c4d
- (void)establishViewControllerDeputyWithProxy:(id)proxy completionHandler:(id)handler;	// 0x30feff89
- (id)invalidate;	// 0x30ff167d
- (void)loadView;	// 0x30ff09d1
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x30ff2de1
- (oneway void)release;	// 0x30fef891
- (id)retain;	// 0x30fef859
- (unsigned)retainCount;	// 0x30fef951
- (void)setDeputyDelegate:(id)delegate;	// 0x30ff169d
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x30ff0ad1
- (BOOL)shouldAutomaticallyForwardRotationMethods;	// 0x30ff0ad5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30ff0ad9
- (void)viewDidLoad;	// 0x30ff0a7d
@end
