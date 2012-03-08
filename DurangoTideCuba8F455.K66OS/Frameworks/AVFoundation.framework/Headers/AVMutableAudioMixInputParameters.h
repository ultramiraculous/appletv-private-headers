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
@private
	AVMutableAudioMixInputParametersInternal *_mutableInputParameters;	// 8 = 0x8
}
@property(assign, nonatomic) int trackID;	// G=0x325bdedd; S=0x325bdeb1; 
+ (id)audioMixInputParameters;	// 0x325bdf61
+ (id)audioMixInputParametersWithTrack:(id)track;	// 0x325bdf9d
// declared property setter: - (void)setTrackID:(int)anId;	// 0x325bdeb1
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x325bde09
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x325bde5d
// declared property getter: - (int)trackID;	// 0x325bdedd
@end
