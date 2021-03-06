/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWebView;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
	id<UIScrollViewDelegate> _delegate;	// 4 = 0x4
	UIWebView *_webView;	// 8 = 0x8
}
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x32d4d1d5; S=0x32d4d1e5; @synthesize=_delegate
@property(assign, nonatomic) UIWebView *webView;	// G=0x32d4d1f5; S=0x32d4d205; @synthesize=_webView
// declared property getter: - (id)delegate;	// 0x32d4d1d5
- (void)forwardInvocation:(id)invocation;	// 0x32d4d0f9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32d4d019
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32d4d07d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d4d1e5
// declared property setter: - (void)setWebView:(id)view;	// 0x32d4d205
// declared property getter: - (id)webView;	// 0x32d4d1f5
@end

