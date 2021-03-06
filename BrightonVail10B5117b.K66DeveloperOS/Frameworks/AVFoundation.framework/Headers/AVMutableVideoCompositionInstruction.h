/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoCompositionInstruction.h"

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
	AVMutableVideoCompositionInstructionInternal *_mutableInstruction;	// 8 = 0x8
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x3028239d; S=0x302823c9; 
@property(assign, nonatomic) BOOL enablePostProcessing;	// G=0x3028244d; S=0x30282479; 
@property(copy, nonatomic) NSArray *layerInstructions;	// G=0x302823f5; S=0x30282421; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x30282309; S=0x30282335; 
+ (id)videoCompositionInstruction;	// 0x302822c5
// declared property getter: - (CGColorRef)backgroundColor;	// 0x3028239d
// declared property getter: - (BOOL)enablePostProcessing;	// 0x3028244d
// declared property getter: - (id)layerInstructions;	// 0x302823f5
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x302823c9
// declared property setter: - (void)setEnablePostProcessing:(BOOL)processing;	// 0x30282479
// declared property setter: - (void)setLayerInstructions:(id)instructions;	// 0x30282421
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x30282335
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x30282309
@end

