/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CAEAGLLayer.h> // Unknown library
#import "WebCore-Structs.h"


__attribute__((visibility("hidden")))
@interface WebGLLayer : CAEAGLLayer {
@private
	GraphicsLayer *m_layerOwner;	// 52 = 0x34
	GraphicsContext3D *m_context;	// 56 = 0x38
}
@property(assign) GraphicsLayer *layerOwner;	// G=0x30ac908d; S=0x30ac907d; converted property
- (id)initWithGraphicsContext3D:(GraphicsContext3D *)graphicsContext3D;	// 0x30ac909d
- (CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)colorSpace;	// 0x30ac9079
- (void)display;	// 0x30ac90d9
// converted property getter: - (GraphicsLayer *)layerOwner;	// 0x30ac908d
// converted property setter: - (void)setLayerOwner:(GraphicsLayer *)owner;	// 0x30ac907d
@end

