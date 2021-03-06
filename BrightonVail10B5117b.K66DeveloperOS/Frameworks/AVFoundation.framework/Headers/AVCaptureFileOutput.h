/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {
	AVCaptureFileOutputInternal *_fileOutputInternal;	// 8 = 0x8
}
@property(assign, nonatomic) XXStruct_pwHToB maxRecordedDuration;	// G=0x302a099d; S=0x302a09e1; 
@property(assign, nonatomic) long long maxRecordedFileSize;	// G=0x302a0a21; S=0x302a0a45; 
@property(assign, nonatomic) long long minFreeDiskSpaceLimit;	// G=0x302a0a6d; S=0x302a0a91; 
@property(readonly, assign, nonatomic) NSURL *outputFileURL;	// G=0x302a079d; 
@property(assign) BOOL pausesRecordingOnInterruption;	// G=0x302a07b9; S=0x302a07d9; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB recordedDuration;	// G=0x302a07f9; 
@property(readonly, assign, nonatomic) long long recordedFileSize;	// G=0x302a08ed; 
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;	// G=0x302a07a1; 
+ (void)initialize;	// 0x302a0625
- (id)init;	// 0x302a0649
- (void)dealloc;	// 0x302a0751
// declared property getter: - (BOOL)isRecording;	// 0x302a07a1
- (BOOL)isRecordingPaused;	// 0x302a07ad
// declared property getter: - (XXStruct_pwHToB)maxRecordedDuration;	// 0x302a099d
// declared property getter: - (long long)maxRecordedFileSize;	// 0x302a0a21
// declared property getter: - (long long)minFreeDiskSpaceLimit;	// 0x302a0a6d
// declared property getter: - (id)outputFileURL;	// 0x302a079d
- (void)pauseRecording;	// 0x302a07b1
// converted property getter: - (BOOL)pausesRecordingOnInterruption;	// 0x302a07b9
// declared property getter: - (XXStruct_pwHToB)recordedDuration;	// 0x302a07f9
// declared property getter: - (long long)recordedFileSize;	// 0x302a08ed
- (void)resumeRecording;	// 0x302a07b5
// declared property setter: - (void)setMaxRecordedDuration:(XXStruct_pwHToB)duration;	// 0x302a09e1
// declared property setter: - (void)setMaxRecordedFileSize:(long long)size;	// 0x302a0a45
// declared property setter: - (void)setMinFreeDiskSpaceLimit:(long long)limit;	// 0x302a0a91
// converted property setter: - (void)setPausesRecordingOnInterruption:(BOOL)interruption;	// 0x302a07d9
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x302a07a5
- (void)stopRecording;	// 0x302a07a9
@end

