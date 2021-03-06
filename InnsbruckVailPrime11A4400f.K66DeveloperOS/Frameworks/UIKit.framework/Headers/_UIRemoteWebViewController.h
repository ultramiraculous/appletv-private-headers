/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIRemoteViewController.h"

@class _UIWebViewController;

__attribute__((visibility("hidden")))
@interface _UIRemoteWebViewController : _UIRemoteViewController {
	_UIWebViewController *_webViewController;	// 428 = 0x1ac
}
@property(assign, nonatomic) _UIWebViewController *webViewController;	// G=0x2f8d7a65; S=0x2f8d7a75; @synthesize=_webViewController
+ (id)exportedInterface;	// 0x2f8d798d
+ (id)serviceViewControllerInterface;	// 0x2f8d7965
- (void)forwardInvocation:(id)invocation;	// 0x2f8d79f9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x2f8d79b5
// declared property setter: - (void)setWebViewController:(id)controller;	// 0x2f8d7a75
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f8d7a3d
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x2f8d7a1d
// declared property getter: - (id)webViewController;	// 0x2f8d7a65
@end

