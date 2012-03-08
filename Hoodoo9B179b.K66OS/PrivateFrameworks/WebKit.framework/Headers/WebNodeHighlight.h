/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class HighlightLayer, WebNodeHighlightView, WAKView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlight : NSObject {
@private
	WAKView *_targetView;	// 4 = 0x4
	HighlightLayer *_highlightLayer;	// 8 = 0x8
	WebNodeHighlightView *_highlightView;	// 12 = 0xc
	InspectorController *_inspectorController;	// 16 = 0x10
	id _delegate;	// 20 = 0x14
}
@property(assign) id delegate;	// G=0x3456f5b1; S=0x3456f5d1; converted property
@property(readonly, retain) WebNodeHighlightView *highlightView;	// G=0x3456f5c1; converted property
@property(readonly, assign) InspectorController *inspectorController;	// G=0x3456f5f1; converted property
@property(readonly, retain) WAKView *targetView;	// G=0x3456f5e1; converted property
- (id)initWithTargetView:(id)targetView inspectorController:(InspectorController *)controller;	// 0x3456f909
- (void)attach;	// 0x3456f861
- (void)dealloc;	// 0x3456f6c9
// converted property getter: - (id)delegate;	// 0x3456f5b1
- (void)detach;	// 0x3456f78d
// converted property getter: - (id)highlightView;	// 0x3456f5c1
// converted property getter: - (InspectorController *)inspectorController;	// 0x3456f5f1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3456f5d1
- (void)setNeedsDisplay;	// 0x3456f6f5
// converted property getter: - (id)targetView;	// 0x3456f5e1
@end
