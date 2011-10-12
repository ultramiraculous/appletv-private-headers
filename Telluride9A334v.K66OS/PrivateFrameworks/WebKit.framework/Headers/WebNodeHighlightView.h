/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"

@class WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView {
@private
	WebNodeHighlight *_webNodeHighlight;	// 68 = 0x44
}
@property(readonly, retain) WebNodeHighlight *webNodeHighlight;	// G=0x339f9a71; converted property
- (id)initWithWebNodeHighlight:(id)webNodeHighlight;	// 0x339f9a81
- (void)dealloc;	// 0x339f9b11
- (void)detachFromWebNodeHighlight;	// 0x339f9ae5
- (void)drawInContext:(CGContextRef)context;	// 0x339f9b51
- (BOOL)isFlipped;	// 0x339f9a6d
// converted property getter: - (id)webNodeHighlight;	// 0x339f9a71
@end

