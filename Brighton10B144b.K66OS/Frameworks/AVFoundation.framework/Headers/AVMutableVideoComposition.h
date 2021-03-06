/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition {
	AVMutableVideoCompositionInternal *_mutableVideoComposition;	// 8 = 0x8
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x30285bbd; S=0x30285be9; 
@property(retain) id compositor;	// G=0x302859e5; S=0x30285a11; converted property
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x30285a3d; S=0x30285a69; 
@property(copy, nonatomic) NSArray *instructions;	// G=0x30285b65; S=0x30285b91; 
@property(assign, nonatomic) float renderScale;	// G=0x30285b0d; S=0x30285b39; 
@property(assign, nonatomic) CGSize renderSize;	// G=0x30285ab1; S=0x30285add; 
+ (id)videoComposition;	// 0x30284c2d
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;	// 0x30284c71
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;	// 0x302859e1
// declared property getter: - (id)animationTool;	// 0x30285bbd
// converted property getter: - (id)compositor;	// 0x302859e5
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x30285a3d
// declared property getter: - (id)instructions;	// 0x30285b65
// declared property getter: - (float)renderScale;	// 0x30285b0d
// declared property getter: - (CGSize)renderSize;	// 0x30285ab1
// declared property setter: - (void)setAnimationTool:(id)tool;	// 0x30285be9
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x30285a11
// declared property setter: - (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x30285a69
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x30285b91
// declared property setter: - (void)setRenderScale:(float)scale;	// 0x30285b39
// declared property setter: - (void)setRenderSize:(CGSize)size;	// 0x30285add
@end

