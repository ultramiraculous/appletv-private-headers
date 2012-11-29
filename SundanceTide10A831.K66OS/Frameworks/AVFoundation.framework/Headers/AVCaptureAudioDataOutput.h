/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"

@class AVCaptureAudioDataOutputInternal, NSObject;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureAudioDataOutput : AVCaptureOutput {
	AVCaptureAudioDataOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;	// G=0x3420fc5d; 
@property(readonly, assign, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x3420fc3d; 
+ (void)initialize;	// 0x3420f8b5
- (id)init;	// 0x3420f8b9
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;	// 0x3420fe39
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x3420fcd5
- (id)connectionMediaTypes;	// 0x3420fc7d
- (void)dealloc;	// 0x3420f939
- (void)didStartForSession:(id)session;	// 0x3420fdf5
- (void)didStopForSession:(id)session error:(id)error;	// 0x3420fde1
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x3420fd65
- (BOOL)isTheOnlyDataOutput;	// 0x3420f985
// declared property getter: - (id)sampleBufferCallbackQueue;	// 0x3420fc5d
// declared property getter: - (id)sampleBufferDelegate;	// 0x3420fc3d
- (void)setSampleBufferDelegate:(id)delegate queue:(id)queue;	// 0x3420fb4d
- (void)setSession:(id)session;	// 0x3420fadd
@end
