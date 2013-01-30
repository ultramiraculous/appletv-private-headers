/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"

@class WebNodeHighlight, NSMutableArray;

@interface WebNodeHighlightView : WAKView {
	WebNodeHighlight *_webNodeHighlight;	// 40 = 0x28
	NSMutableArray *_layers;	// 44 = 0x2c
}
@property(readonly, retain) WebNodeHighlight *webNodeHighlight;	// G=0x365f00dd; converted property
- (id)initWithWebNodeHighlight:(id)webNodeHighlight;	// 0x365ef161
- (void)_attach:(id)attach numLayers:(unsigned)layers;	// 0x365ef295
- (void)_layoutForNodeHighlight:(Highlight *)nodeHighlight parent:(id)parent;	// 0x365ef395
- (void)_layoutForRectsHighlight:(Highlight *)rectsHighlight parent:(id)parent;	// 0x365efe15
- (void)_removeAllLayers;	// 0x365ef085
- (void)dealloc;	// 0x365ef1f5
- (void)detachFromWebNodeHighlight;	// 0x365ef265
- (BOOL)isFlipped;	// 0x365ef291
- (void)layoutSublayers:(id)sublayers;	// 0x365eff1d
// converted property getter: - (id)webNodeHighlight;	// 0x365f00dd
@end
