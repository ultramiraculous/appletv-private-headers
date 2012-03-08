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

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInputParametersInternal *_inputParameters;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int trackID;	// G=0x325bddd1; 
- (id)init;	// 0x325be2f1
- (id)_audioVolumeCurve;	// 0x325bf03d
- (void)_setRamps:(id)ramps;	// 0x325be005
- (void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x325be7c9
- (id)_volumeCurveAsString;	// 0x325bf4ed
- (id)copyWithZone:(NSZone *)zone;	// 0x325be0b5
- (void)dealloc;	// 0x325be45d
- (id)description;	// 0x325be56d
- (void)finalize;	// 0x325be41d
- (BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float *)volume endVolume:(float *)volume3 timeRange:(XXStruct_yD8eWC *)range;	// 0x325bec21
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x325be059
- (void)setTrackID:(int)anId;	// 0x325bdded
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x325beb45
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x325be729
// declared property getter: - (int)trackID;	// 0x325bddd1
@end
