/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <CATiledLayer.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebTiledLayer : CATiledLayer {
@private
	GraphicsLayer *m_layerOwner;	// 48 = 0x30
}
@property(assign) GraphicsLayer *layerOwner;	// G=0x34281fd5; S=0x33e7ed89; converted property
+ (double)fadeDuration;	// 0x33e80489
+ (BOOL)shouldDrawOnMainThread;	// 0x33e7ed2d
- (id)initWithLayer:(id)layer;	// 0x34281fe5
- (id)actionForKey:(id)key;	// 0x33e7ed31
- (void)display;	// 0x33e80425
- (void)drawInContext:(CGContextRef)context;	// 0x33e82ccd
// converted property getter: - (GraphicsLayer *)layerOwner;	// 0x34281fd5
// converted property setter: - (void)setLayerOwner:(GraphicsLayer *)owner;	// 0x33e7ed89
- (void)setNeedsDisplay;	// 0x33e7ed35
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x33e7fe31
@end

