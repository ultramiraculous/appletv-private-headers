/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureOutput, NSArray, AVCaptureConnectionInternal;

@interface AVCaptureConnection : NSObject {
@private
	AVCaptureConnectionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0x30ea97d9; 
@property(readonly, assign, nonatomic) NSArray *audioChannels;	// G=0x30eab3ed; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30ea9819; S=0x30eab689; 
@property(readonly, assign, nonatomic) NSArray *inputPorts;	// G=0x30eab759; 
@property(readonly, assign, nonatomic) AVCaptureOutput *output;	// G=0x30eab79d; 
@property(readonly, assign, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;	// G=0x30ea9919; 
@property(readonly, assign, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;	// G=0x30ea98f1; 
@property(readonly, assign, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;	// G=0x30ea9839; 
@property(readonly, assign, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;	// G=0x30ea9895; 
@property(assign) CGRect videoCropRect;	// G=0x30eaa47d; S=0x30eaa37d; converted property
@property(assign) BOOL videoFirstAndLastFramesUncropped;	// G=0x30eaa111; S=0x30eaa051; converted property
@property(assign, nonatomic) XXStruct_pwHToB videoMaxFrameDuration;	// G=0x30eaa76d; S=0x30eaa641; 
@property(readonly, assign, nonatomic) float videoMaxScaleAndCropFactor;	// G=0x30ea9941; 
@property(assign, nonatomic) XXStruct_pwHToB videoMinFrameDuration;	// G=0x30eaaa09; S=0x30eaa8dd; 
@property(assign, nonatomic, getter=isVideoMirrored) BOOL videoMirrored;	// G=0x30ea9875; S=0x30eaac35; 
@property(assign) CGSize videoMotionFilterOverlapRatios;	// G=0x30ea9f71; S=0x30ea9e81; converted property
@property(assign, nonatomic) int videoOrientation;	// G=0x30ea98d1; S=0x30eaab79; 
@property(assign) int videoRetainedBufferCountHint;	// G=0x30eaa2a5; S=0x30eaa1e9; converted property
@property(assign, nonatomic) float videoScaleAndCropFactor;	// G=0x30ea9961; S=0x30eaa565; 
+ (id)connectionWithInputPorts:(id)inputPorts output:(id)output;	// 0x30ea9b31
- (id)initWithInputPorts:(id)inputPorts output:(id)output;	// 0x30eabb91
- (void)addInputPort:(id)port;	// 0x30eabb15
// declared property getter: - (id)audioChannels;	// 0x30eab3ed
- (void)dealloc;	// 0x30ea9ad5
- (float)getAvgAudioLevelForChannel:(id)channel;	// 0x30eab105
- (float)getPeakAudioLevelForChannel:(id)channel;	// 0x30eaaf65
- (void)inputPortFormatDescriptionChanged:(id)changed;	// 0x30eabb81
// declared property getter: - (id)inputPorts;	// 0x30eab759
- (void)invalidate;	// 0x30eab7e1
// declared property getter: - (BOOL)isActive;	// 0x30ea97d9
// declared property getter: - (BOOL)isEnabled;	// 0x30ea9819
- (BOOL)isLive;	// 0x30eab52d
- (BOOL)isVideoCropRectSupported;	// 0x30eaa50d
- (BOOL)isVideoFirstAndLastFramesUncroppedSupported;	// 0x30eaa191
// declared property getter: - (BOOL)isVideoMaxFrameDurationSupported;	// 0x30ea9919
// declared property getter: - (BOOL)isVideoMinFrameDurationSupported;	// 0x30ea98f1
// declared property getter: - (BOOL)isVideoMirrored;	// 0x30ea9875
// declared property getter: - (BOOL)isVideoMirroringSupported;	// 0x30ea9839
- (BOOL)isVideoMotionFilterOverlapRatiosSupported;	// 0x30ea9ff9
// declared property getter: - (BOOL)isVideoOrientationSupported;	// 0x30ea9895
- (BOOL)isVideoRetainedBufferCountHintSupported;	// 0x30eaa325
- (id)mediaType;	// 0x30eab4d1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30ea9b81
// declared property getter: - (id)output;	// 0x30eab79d
- (void)removeInputPort:(id)port;	// 0x30eabaa9
- (void)setActive:(BOOL)active;	// 0x30ea97f9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30eab689
// converted property setter: - (void)setVideoCropRect:(CGRect)rect;	// 0x30eaa37d
// converted property setter: - (void)setVideoFirstAndLastFramesUncropped:(BOOL)uncropped;	// 0x30eaa051
// declared property setter: - (void)setVideoMaxFrameDuration:(XXStruct_pwHToB)duration;	// 0x30eaa641
// declared property setter: - (void)setVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x30eaa8dd
// declared property setter: - (void)setVideoMirrored:(BOOL)mirrored;	// 0x30eaac35
// converted property setter: - (void)setVideoMotionFilterOverlapRatios:(CGSize)ratios;	// 0x30ea9e81
// declared property setter: - (void)setVideoOrientation:(int)orientation;	// 0x30eaab79
// converted property setter: - (void)setVideoRetainedBufferCountHint:(int)hint;	// 0x30eaa1e9
// declared property setter: - (void)setVideoScaleAndCropFactor:(float)factor;	// 0x30eaa565
- (BOOL)sourcesFromFrontFacingCamera;	// 0x30ea9d11
- (void)updateAudioChannelsArray;	// 0x30eaacc5
- (void)updateAudioLevelsArray;	// 0x30eab29d
// converted property getter: - (CGRect)videoCropRect;	// 0x30eaa47d
// converted property getter: - (BOOL)videoFirstAndLastFramesUncropped;	// 0x30eaa111
// declared property getter: - (XXStruct_pwHToB)videoMaxFrameDuration;	// 0x30eaa76d
// declared property getter: - (float)videoMaxScaleAndCropFactor;	// 0x30ea9941
// declared property getter: - (XXStruct_pwHToB)videoMinFrameDuration;	// 0x30eaaa09
// converted property getter: - (CGSize)videoMotionFilterOverlapRatios;	// 0x30ea9f71
// declared property getter: - (int)videoOrientation;	// 0x30ea98d1
// converted property getter: - (int)videoRetainedBufferCountHint;	// 0x30eaa2a5
// declared property getter: - (float)videoScaleAndCropFactor;	// 0x30ea9961
@end

