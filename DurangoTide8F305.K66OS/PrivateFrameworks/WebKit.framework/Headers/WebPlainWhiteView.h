/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebDocumentView.h"
#import "WebDocumentElement.h"


__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement> {
}
- (void)dataSourceUpdated:(id)updated;	// 0x3401f60d
- (void)drawRect:(CGRect)rect;	// 0x3401f62d
- (id)elementAtPoint:(CGPoint)point;	// 0x3401f621
- (id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;	// 0x3401f625
- (void)layout;	// 0x3401f615
- (void)setDataSource:(id)source;	// 0x3401f609
- (void)setNeedsLayout:(BOOL)layout;	// 0x3401f611
- (void)viewDidMoveToHostWindow;	// 0x3401f61d
- (void)viewWillMoveToHostWindow:(id)view;	// 0x3401f619
@end

