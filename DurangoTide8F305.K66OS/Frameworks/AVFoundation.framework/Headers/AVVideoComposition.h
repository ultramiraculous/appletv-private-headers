/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInternal *_videoComposition;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x34757491; 
@property(retain) id compositor;	// G=0x3475736d; S=0x34757d81; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x34757389; 
@property(readonly, copy, nonatomic) NSArray *instructions;	// G=0x34757475; 
@property(readonly, assign, nonatomic) float renderScale;	// G=0x3475743d; 
@property(readonly, assign, nonatomic) CGSize renderSize;	// G=0x347573f1; 
- (id)init;	// 0x3475a781
- (int)_auxiliaryTrackID;	// 0x34757ca5
- (id)_auxiliaryTrackLayer;	// 0x34757cd1
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x34757cfd
- (BOOL)_hasPostProcessingLayers;	// 0x34757c75
- (BOOL)_isValidReturningExceptionReason:(id *)reason;	// 0x34759a25
- (id)_postProcessingRootLayer;	// 0x34757c1d
- (id)_postProcessingVideoLayer;	// 0x34757c49
- (id)_serializableInstructions;	// 0x3475a8e5
// declared property getter: - (id)animationTool;	// 0x34757491
// converted property getter: - (id)compositor;	// 0x3475736d
- (id)copyWithZone:(NSZone *)zone;	// 0x347589cd
- (void)dealloc;	// 0x34758e7d
- (void)finalize;	// 0x34758e3d
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x34757389
// declared property getter: - (id)instructions;	// 0x34757475
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3475889d
// declared property getter: - (float)renderScale;	// 0x3475743d
// declared property getter: - (CGSize)renderSize;	// 0x347573f1
- (void)setAnimationTool:(id)tool;	// 0x34757bc9
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x34757d81
- (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x347573b1
- (void)setInstructions:(id)instructions;	// 0x34757d2d
- (void)setRenderScale:(float)scale;	// 0x34757459
- (void)setRenderSize:(CGSize)size;	// 0x34757415
@end

