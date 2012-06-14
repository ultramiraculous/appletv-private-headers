/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebView, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject {
@private
	WebView *_inspectedWebView;	// 4 = 0x4
	WebNodeHighlight *_currentHighlight;	// 8 = 0x8
}
- (id)initWithInspectedWebView:(id)inspectedWebView;	// 0x350034f5
- (void)dealloc;	// 0x35068a51
- (void)didAttachWebNodeHighlight:(id)highlight;	// 0x35068b95
- (void)hideHighlight;	// 0x35068b45
- (void)highlight;	// 0x35068a7d
- (void)willDetachWebNodeHighlight:(id)highlight;	// 0x35068bb5
@end
