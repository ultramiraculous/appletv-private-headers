/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebScrollView.h"

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollView : UIWebScrollView {
@private
	_UIWebViewScrollViewDelegateForwarder *_forwarder;	// 388 = 0x184
	BOOL _bouncesSetExplicitly;	// 392 = 0x188
	UIWebBrowserView *_browserView;	// 396 = 0x18c
}
@property(assign) id delegate;	// G=0x330fe05d; S=0x33064199; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x330612bd
- (void)_setWebView:(id)view;	// 0x33061335
- (void)_weaklySetBouncesHorizontally:(BOOL)horizontally;	// 0x33061d39
- (void)dealloc;	// 0x3306426d
// converted property getter: - (id)delegate;	// 0x330fe05d
- (void)setBounces:(BOOL)bounces;	// 0x330fdf9d
- (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x330fe01d
- (void)setBouncesVertically:(BOOL)vertically;	// 0x330fdfdd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33064199
@end

