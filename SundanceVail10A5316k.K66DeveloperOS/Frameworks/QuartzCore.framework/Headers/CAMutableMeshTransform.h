/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAMeshTransform.h"

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform {
}
@property(copy) NSString *depthNormalization;	// G=0x32b078fd; S=0x32b072c5; 
@property(assign) int subdivisionSteps;	// G=0x32b07929; S=0x32b072cd; 
+ (id)meshTransform;	// 0x32b071f9
- (id)init;	// 0x32b07231
- (void)addFace:(CAMeshFace)face;	// 0x32b07695
- (void)addVertex:(CAMeshVertex)vertex;	// 0x32b073ad
- (id)copyWithZone:(NSZone *)zone;	// 0x32b078c5
// declared property getter: - (id)depthNormalization;	// 0x32b078fd
- (void)removeFaceAtIndex:(unsigned long)index;	// 0x32b077ad
- (void)removeVertexAtIndex:(unsigned long)index;	// 0x32b0748d
- (void)replaceFaceAtIndex:(unsigned long)index withFace:(CAMeshFace)face;	// 0x32b075b5
- (void)replaceVertexAtIndex:(unsigned long)index withVertex:(CAMeshVertex)vertex;	// 0x32b07305
// declared property setter: - (void)setDepthNormalization:(id)normalization;	// 0x32b072c5
// declared property setter: - (void)setSubdivisionSteps:(int)steps;	// 0x32b072cd
// declared property getter: - (int)subdivisionSteps;	// 0x32b07929
@end
