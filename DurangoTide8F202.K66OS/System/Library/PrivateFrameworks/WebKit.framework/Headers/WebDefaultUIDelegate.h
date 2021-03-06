/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x32c1945d
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x32c42811
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x32c2fdbd
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x32c42869
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x32c4286d
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin;	// 0x32c42871
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x32c4287d
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x32c42881
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x32c2e65d
- (void)webView:(id)view printFrameView:(id)view2;	// 0x32c42865
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x32c42849
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x32c42851
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x32c42859
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x32c42861
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x32c42845
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x32c42841
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x32c42839
- (void)webView:(id)view setStatusText:(id)text;	// 0x32c42825
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x32c42831
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x32c42875
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x32c4282d
- (void)webViewClose:(id)close;	// 0x32c42819
- (id)webViewFirstResponder:(id)responder;	// 0x32c2ec25
- (void)webViewFocus:(id)focus;	// 0x32c4281d
- (CGRect)webViewFrame:(id)frame;	// 0x32c2cacd
- (BOOL)webViewIsResizable:(id)resizable;	// 0x32c4283d
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x32c42835
- (void)webViewShow:(id)show;	// 0x32c2fe99
- (id)webViewStatusText:(id)text;	// 0x32c42829
- (void)webViewUnfocus:(id)unfocus;	// 0x32c42821
@end

