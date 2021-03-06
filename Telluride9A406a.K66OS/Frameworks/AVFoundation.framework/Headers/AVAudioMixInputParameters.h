/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInputParametersInternal *_inputParameters;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int trackID;	// G=0x30ecd7ed; 
- (id)init;	// 0x30ecf485
- (id)_audioVolumeCurve;	// 0x30ece1bd
- (void)_setRamps:(id)ramps;	// 0x30ece865
- (void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x30ecef1d
- (id)_volumeCurveAsString;	// 0x30ecdf69
- (id)copyWithZone:(NSZone *)zone;	// 0x30ecdea9
- (void)dealloc;	// 0x30ecf415
- (id)description;	// 0x30ecf34d
- (void)finalize;	// 0x30ecf3d1
- (BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float *)volume endVolume:(float *)volume3 timeRange:(XXStruct_yD8eWC *)range;	// 0x30ece8c5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30ecf2e1
- (void)setTrackID:(int)anId;	// 0x30ecd80d
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x30eced59
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x30ecee4d
// declared property getter: - (int)trackID;	// 0x30ecd7ed
@end

