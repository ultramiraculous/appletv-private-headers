/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoCompositionLayerInstruction.h"

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {
@private
	AVMutableVideoCompositionLayerInstructionInternal *_mutableLayerInstruction;	// 8 = 0x8
}
@property(assign, nonatomic) int trackID;	// G=0x32322779; S=0x32322a11; 
+ (id)videoCompositionLayerInstruction;	// 0x323227a5
+ (id)videoCompositionLayerInstructionWithAssetTrack:(id)assetTrack;	// 0x323227e9
- (void)setOpacity:(float)opacity atTime:(XXStruct_pwHToB)time;	// 0x323228c9
- (void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range;	// 0x3232285d
// declared property setter: - (void)setTrackID:(int)anId;	// 0x32322a11
- (void)setTransform:(CGAffineTransform)transform atTime:(XXStruct_pwHToB)time;	// 0x323229ad
- (void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range;	// 0x32322911
// declared property getter: - (int)trackID;	// 0x32322779
@end

