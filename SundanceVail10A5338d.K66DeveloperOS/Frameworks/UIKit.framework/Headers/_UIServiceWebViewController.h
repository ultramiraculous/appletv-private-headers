/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIServiceWebViewControllerProtocol.h"
#import "WebUIBrowserLoadingControllerDelegate.h"
#import "UIViewController.h"
#import "XPCProxyTarget.h"

@class WebUIBrowserLoadingController, _UIServiceWebView;
@protocol _UIRemoteWebViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface _UIServiceWebViewController : UIViewController <XPCProxyTarget, _UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {
	_UIServiceWebView *_uiWebView;	// 184 = 0xb8
	WebUIBrowserLoadingController *_loadingController;	// 188 = 0xbc
	id<_UIRemoteWebViewControllerProtocol> _remoteViewControllerProxy;	// 192 = 0xc0
}
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x310225e9
- (BOOL)_isInternalInstall;	// 0x310227b1
- (id)_makeAlertView;	// 0x31022ced
- (void)_remotelyDecidePolicyForRequest:(id)request inMainFrame:(BOOL)mainFrame navigationType:(id)type decisionHandler:(id)handler;	// 0x31022af9
- (void)_remotelyDispatchDidDismissViewController;	// 0x31022c61
- (void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(id)_remotelyDispatch;	// 0x31022be5
- (void)_setupRemoteInspectorDetailsForRequestingProcess;	// 0x31022859
- (void)browserLoadingController:(id)controller didFinishLoadingWithError:(id)error dataSource:(id)source;	// 0x31022e1d
- (void)browserLoadingControllerDidStartLoading:(id)browserLoadingController;	// 0x31022df9
- (void)browserLoadingControllerDidUpdateBackForward:(id)browserLoadingController;	// 0x31022e3d
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)browserLoadingController;	// 0x31022db1
- (void)browserLoadingControllerDidUpdateTitle:(id)browserLoadingController;	// 0x31022ea9
- (void)browserLoadingControllerDidUpdateURLString:(id)browserLoadingController;	// 0x31022ef1
- (void)configureWithEncodedSettings:(id)encodedSettings;	// 0x31022c81
- (void)dealloc;	// 0x31022d39
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x31023209
- (void)goBack;	// 0x31023121
- (void)goForward;	// 0x31023141
- (void)loadEncodedRequest:(id)request;	// 0x31022f39
- (void)loadUserTypedAddress:(id)address;	// 0x31023101
- (void)loadView;	// 0x31022d19
- (id)localizedApplicationNameForProcess:(int)process;	// 0x31022815
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x310223ad
- (void)reload;	// 0x31023161
- (void)setShouldDecidePolicyRemotely:(BOOL)decidePolicyRemotely;	// 0x31022ad9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x310231a1
- (void)stopLoading;	// 0x31023181
- (void)willAppearInRemoteViewController:(id)remoteViewController;	// 0x310229e5
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x310231e9
@end

