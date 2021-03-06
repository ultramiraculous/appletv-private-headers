/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x3658bc05
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x365b9671
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x365b95e5
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x365b97b1
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x365b97b5
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x365b97b9
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x365b97c1
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x365b96dd
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x365b972d
- (void)webView:(id)view printFrameView:(id)view2;	// 0x365b97ad
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x365b979d
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x365b97a1
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x365b97a5
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x365b97a9
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x365b9749
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x365b9745
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x365b973d
- (void)webView:(id)view setStatusText:(id)text;	// 0x365b9725
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x365b9735
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x365b97bd
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x365b9731
- (void)webViewClose:(id)close;	// 0x365b9679
- (id)webViewFirstResponder:(id)responder;	// 0x365b9685
- (void)webViewFocus:(id)focus;	// 0x365b967d
- (CGRect)webViewFrame:(id)frame;	// 0x365b974d
- (BOOL)webViewIsResizable:(id)resizable;	// 0x365b9741
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x365b9739
- (void)webViewShow:(id)show;	// 0x365b9675
- (id)webViewStatusText:(id)text;	// 0x365b9729
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x365b97c5
- (void)webViewUnfocus:(id)unfocus;	// 0x365b9681
@end

