/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKit-Structs.h"
#import "GLKEffectProperty.h"


@interface GLKEffectPropertyConstantColor : GLKEffectProperty {
	GLKVector4 _color;	// 48 = 0x30
	unsigned char _enabled;	// 64 = 0x40
}
@property(assign, nonatomic) GLKVector4 color;	// G=0x2dd413b9; S=0x2dd413d1; @synthesize=_color
@property(assign, nonatomic) unsigned char enabled;	// G=0x2dd413f5; S=0x2dd41405; @synthesize=_enabled
+ (void)setStaticMasksWithVshRoot:(id)vshRoot fshRoot:(id)root;	// 0x2dd411f9
- (id)init;	// 0x2dd4117d
- (void)bind;	// 0x2dd41255
// declared property getter: - (GLKVector4)color;	// 0x2dd413b9
- (void)dealloc;	// 0x2dd4138d
- (id)description;	// 0x2dd41299
- (void)dirtyAllUniforms;	// 0x2dd411f5
// declared property getter: - (unsigned char)enabled;	// 0x2dd413f5
// declared property setter: - (void)setColor:(GLKVector4)color;	// 0x2dd413d1
// declared property setter: - (void)setEnabled:(unsigned char)enabled;	// 0x2dd41405
- (void)setShaderBindings;	// 0x2dd411fd
@end

