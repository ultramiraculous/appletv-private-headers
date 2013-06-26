/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
	AVAudioMixInputParametersInternal *_inputParameters;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) opaqueMTAudioProcessingTap *audioTapProcessor;	// G=0x2c2eb5a9; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x2c2eb569; 
- (id)init;	// 0x2c2eb139
- (id)_audioVolumeCurve;	// 0x2c2ec081
- (void)_setRamps:(id)ramps;	// 0x2c2ec025
- (void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x2c2eb615
- (id)_volumeCurveAsString;	// 0x2c2ec5fd
// declared property getter: - (opaqueMTAudioProcessingTap *)audioTapProcessor;	// 0x2c2eb5a9
- (id)copyWithZone:(NSZone *)zone;	// 0x2c2eb345
- (void)dealloc;	// 0x2c2eb1e1
- (id)description;	// 0x2c2eb2c1
- (void)finalize;	// 0x2c2eb265
- (BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float *)volume endVolume:(float *)volume3 timeRange:(XXStruct_yD8eWC *)range;	// 0x2c2ebb7d
- (BOOL)isEqual:(id)equal;	// 0x2c2eb4a9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2c2eb41d
- (void)setAudioTapProcessor:(opaqueMTAudioProcessingTap *)processor;	// 0x2c2eb5c9
- (void)setTrackID:(int)anId;	// 0x2c2eb589
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x2c2eba89
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x2c2eb9c5
// declared property getter: - (int)trackID;	// 0x2c2eb569
@end
