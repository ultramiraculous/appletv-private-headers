/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebView;

__attribute__((visibility("hidden")))
@interface WebInspector : NSObject {
@private
	WebView *_webView;	// 4 = 0x4
}
@property(assign, getter=isJavaScriptProfilingEnabled) BOOL javaScriptProfilingEnabled;	// G=0x34019885; S=0x3401984d; converted property
@property(assign, getter=isTimelineProfilingEnabled) BOOL timelineProfilingEnabled;	// G=0x34019821; S=0x340197f1; converted property
+ (id)webInspector;	// 0x34019ae9
- (id)initWithWebView:(id)webView;	// 0x34019635
- (void)attach:(id)attach;	// 0x3401962d
- (void)close:(id)close;	// 0x340197d1
- (void)detach:(id)detach;	// 0x34019631
- (void)evaluateInFrontend:(id)frontend callId:(long)anId script:(id)script;	// 0x340196a1
- (id)inspectorWebView;	// 0x34019679
- (BOOL)isDebuggingJavaScript;	// 0x340199f5
// converted property getter: - (BOOL)isJavaScriptProfilingEnabled;	// 0x34019885
- (BOOL)isProfilingJavaScript;	// 0x34019945
// converted property getter: - (BOOL)isTimelineProfilingEnabled;	// 0x34019821
// converted property setter: - (void)setJavaScriptProfilingEnabled:(BOOL)enabled;	// 0x3401984d
// converted property setter: - (void)setTimelineProfilingEnabled:(BOOL)enabled;	// 0x340197f1
- (void)setWebFrame:(id)frame;	// 0x34019a5d
- (void)show:(id)show;	// 0x34019a3d
- (void)showConsole:(id)console;	// 0x34019a19
- (void)showTimeline:(id)timeline;	// 0x34019629
- (void)showWindow:(id)window;	// 0x34019aa9
- (void)startDebuggingJavaScript:(id)script;	// 0x3401998d
- (void)startProfilingJavaScript:(id)script;	// 0x340198e5
- (void)stopDebuggingJavaScript:(id)script;	// 0x34019969
- (void)stopProfilingJavaScript:(id)script;	// 0x340198b9
- (void)toggleDebuggingJavaScript:(id)script;	// 0x340199b9
- (void)toggleProfilingJavaScript:(id)script;	// 0x34019909
- (void)webViewClosed;	// 0x34019619
@end

