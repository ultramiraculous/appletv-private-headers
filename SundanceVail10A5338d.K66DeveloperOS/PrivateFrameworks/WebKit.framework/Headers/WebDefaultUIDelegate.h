/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x31660759
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x31685071
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x31684fe5
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x316851ad
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x316851b1
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x316851b5
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x316851bd
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x316850dd
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x3166fbb9
- (void)webView:(id)view printFrameView:(id)view2;	// 0x316851a9
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x31685199
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x3168519d
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x316851a1
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x316851a5
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x31685145
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x31685141
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x31685139
- (void)webView:(id)view setStatusText:(id)text;	// 0x31685125
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x31685131
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x316851b9
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x3168512d
- (void)webViewClose:(id)close;	// 0x31685079
- (id)webViewFirstResponder:(id)responder;	// 0x31685085
- (void)webViewFocus:(id)focus;	// 0x3168507d
- (CGRect)webViewFrame:(id)frame;	// 0x31685149
- (BOOL)webViewIsResizable:(id)resizable;	// 0x3168513d
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x31685135
- (void)webViewShow:(id)show;	// 0x31685075
- (id)webViewStatusText:(id)text;	// 0x31685129
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x316851c1
- (void)webViewUnfocus:(id)unfocus;	// 0x31685081
@end

