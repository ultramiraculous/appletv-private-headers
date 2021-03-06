/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAudioMixInputParameters.h"

@class AVMutableAudioMixInputParametersInternal;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {
	AVMutableAudioMixInputParametersInternal *_mutableInputParameters;	// 8 = 0x8
}
@property(retain, nonatomic) opaqueMTAudioProcessingTap *audioTapProcessor;	// G=0x317b0dd9; S=0x317b0e05; 
@property(assign, nonatomic) int trackID;	// G=0x317b0d81; S=0x317b0dad; 
+ (id)audioMixInputParameters;	// 0x317b0d3d
+ (id)audioMixInputParametersWithTrack:(id)track;	// 0x317b0ccd
// declared property getter: - (opaqueMTAudioProcessingTap *)audioTapProcessor;	// 0x317b0dd9
// declared property setter: - (void)setAudioTapProcessor:(opaqueMTAudioProcessingTap *)processor;	// 0x317b0e05
// declared property setter: - (void)setTrackID:(int)anId;	// 0x317b0dad
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x317b0eb1
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x317b0e31
// declared property getter: - (int)trackID;	// 0x317b0d81
@end

