/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class _UIRemoteWebViewController, UIBarButtonItem, _UIAsyncInvocation, NSString, _UIQueueingServiceWebViewControllerProxy;
@protocol _UIWebViewControllerDelegate;

@interface _UIWebViewController : UIViewController {
	_UIAsyncInvocation *_cancelViewServiceRequest;	// 196 = 0xc4
	_UIRemoteWebViewController *_remoteViewController;	// 200 = 0xc8
	_UIQueueingServiceWebViewControllerProxy *_serviceProxy;	// 204 = 0xcc
	id<_UIWebViewControllerDelegate> _delegate;	// 208 = 0xd0
	UIBarButtonItem *_backBarButtonItem;	// 212 = 0xd4
	UIBarButtonItem *_forwardBarButtonItem;	// 216 = 0xd8
	BOOL _canGoBack;	// 220 = 0xdc
	BOOL _canGoForward;	// 221 = 0xdd
	BOOL _loading;	// 222 = 0xde
	float _estimatedProgress;	// 224 = 0xe0
	NSString *_pageTitle;	// 228 = 0xe4
	NSString *_URLString;	// 232 = 0xe8
}
@property(copy, nonatomic) NSString *URLString;	// G=0x34972921; S=0x34972355; @synthesize=_URLString
@property(readonly, assign, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x349728ad; @synthesize=_backBarButtonItem
@property(readonly, assign, nonatomic) BOOL canGoBack;	// G=0x349728cd; @synthesize=_canGoBack
@property(readonly, assign, nonatomic) BOOL canGoForward;	// G=0x349728dd; @synthesize=_canGoForward
@property(assign, nonatomic) id<_UIWebViewControllerDelegate> delegate;	// G=0x3497289d; S=0x349727f9; @synthesize=_delegate
@property(readonly, assign, nonatomic) float estimatedProgress;	// G=0x349728fd; @synthesize=_estimatedProgress
@property(readonly, assign, nonatomic) UIBarButtonItem *forwardBarButtonItem;	// G=0x349728bd; @synthesize=_forwardBarButtonItem
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x349728ed; @synthesize=_loading
@property(readonly, assign, nonatomic) NSString *pageTitle;	// G=0x3497290d; @synthesize=_pageTitle
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x34971d49
// declared property getter: - (id)URLString;	// 0x34972921
- (void)_addRemoteView;	// 0x349719bd
- (void)_connectToService;	// 0x34971ae9
- (void)_decidePolicyForEncodedRequest:(id)encodedRequest inMainFrame:(BOOL)mainFrame navigationType:(id)type replyHandler:(id)handler;	// 0x3497263d
- (void)_dispatchDidDismissViewController;	// 0x349727b1
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)_dispatch;	// 0x349726f9
- (void)_setCanGoBack:(BOOL)back canGoForward:(BOOL)forward;	// 0x349721d5
- (void)_setEstimatedProgress:(float)progress;	// 0x34972089
- (void)_setLoading:(BOOL)loading error:(id)error;	// 0x3497212d
- (void)_setTitle:(id)title;	// 0x3497224d
- (void)_setURLString:(id)string;	// 0x349722d1
- (void)_updateBarButtonItems;	// 0x34971a7d
// declared property getter: - (id)backBarButtonItem;	// 0x349728ad
// declared property getter: - (BOOL)canGoBack;	// 0x349728cd
// declared property getter: - (BOOL)canGoForward;	// 0x349728dd
- (void)configureWithSettings:(id)settings;	// 0x34972601
- (void)dealloc;	// 0x34971f9d
// declared property getter: - (id)delegate;	// 0x3497289d
// declared property getter: - (float)estimatedProgress;	// 0x349728fd
// declared property getter: - (id)forwardBarButtonItem;	// 0x349728bd
- (void)goBack;	// 0x34972515
- (void)goForward;	// 0x34972535
// declared property getter: - (BOOL)isLoading;	// 0x349728ed
- (void)loadRequest:(id)request;	// 0x34972439
- (void)loadView;	// 0x34972595
// declared property getter: - (id)pageTitle;	// 0x3497290d
- (void)queueingServiceProxy:(id)proxy willQueueInvocation:(id)invocation;	// 0x34971f3d
- (void)reload;	// 0x34972555
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x349727f9
// declared property setter: - (void)setURLString:(id)string;	// 0x34972355
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x34972855
- (void)stopLoading;	// 0x34972575
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x34972395
@end
