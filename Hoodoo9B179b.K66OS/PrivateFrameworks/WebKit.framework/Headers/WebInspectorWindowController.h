/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebView, NSString;

__attribute__((visibility("hidden")))
@interface WebInspectorWindowController : NSObject {
@private
	WebView *_inspectedWebView;	// 4 = 0x4
	WebInspectorFrontendClient *_frontendClient;	// 8 = 0x8
	WebInspectorClient *_inspectorClient;	// 12 = 0xc
	BOOL _destroyingInspectorView;	// 16 = 0x10
	WebView *_webView;	// 20 = 0x14
	NSString *_title;	// 24 = 0x18
}
@property(assign) WebInspectorClient *inspectorClient;	// G=0x3456d7dd; S=0x3456d7cd; converted property
@property(retain, nonatomic) NSString *title;	// G=0x3456d7f1; S=0x3456e095; @synthesize=_title
@property(readonly, assign, nonatomic) WebView *webView;	// G=0x3456d801; @synthesize=_webView
- (id)init;	// 0x3456de1d
- (id)initWithInspectedWebView:(id)inspectedWebView;	// 0x3456e185
- (void)dealloc;	// 0x3456e125
- (void)destroyInspectorView:(bool)view;	// 0x3456e0bd
// converted property getter: - (WebInspectorClient *)inspectorClient;	// 0x3456d7dd
- (void)setFrontendClient:(WebInspectorFrontendClient *)client;	// 0x3456d7bd
// converted property setter: - (void)setInspectorClient:(WebInspectorClient *)client;	// 0x3456d7cd
// declared property setter: - (void)setTitle:(id)title;	// 0x3456e095
- (void)showWindow:(id)window;	// 0x3456d7ed
// declared property getter: - (id)title;	// 0x3456d7f1
// declared property getter: - (id)webView;	// 0x3456d801
@end

