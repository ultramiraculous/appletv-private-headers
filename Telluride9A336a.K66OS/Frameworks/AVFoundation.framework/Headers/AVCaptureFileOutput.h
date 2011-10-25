/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureOutput.h"

@class NSURL, AVCaptureFileOutputInternal;

@interface AVCaptureFileOutput : AVCaptureOutput {
@private
	AVCaptureFileOutputInternal *_fileOutputInternal;	// 8 = 0x8
}
@property(assign, nonatomic) XXStruct_pwHToB maxRecordedDuration;	// G=0x3148add9; S=0x3148ae11; 
@property(assign, nonatomic) long long maxRecordedFileSize;	// G=0x3148ae51; S=0x3148ae75; 
@property(assign, nonatomic) long long minFreeDiskSpaceLimit;	// G=0x3148ae9d; S=0x3148aec1; 
@property(readonly, assign, nonatomic) NSURL *outputFileURL;	// G=0x3148ad7d; 
@property(assign) BOOL pausesRecordingOnInterruption;	// G=0x3148ad99; S=0x3148adb9; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB recordedDuration;	// G=0x3148b231; 
@property(readonly, assign, nonatomic) long long recordedFileSize;	// G=0x3148b185; 
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;	// G=0x3148ad81; 
+ (void)initialize;	// 0x3148ad79
- (id)init;	// 0x3148b2f1
- (void)dealloc;	// 0x3148b139
// declared property getter: - (BOOL)isRecording;	// 0x3148ad81
- (BOOL)isRecordingPaused;	// 0x3148ad8d
// declared property getter: - (XXStruct_pwHToB)maxRecordedDuration;	// 0x3148add9
// declared property getter: - (long long)maxRecordedFileSize;	// 0x3148ae51
// declared property getter: - (long long)minFreeDiskSpaceLimit;	// 0x3148ae9d
// declared property getter: - (id)outputFileURL;	// 0x3148ad7d
- (void)pauseRecording;	// 0x3148ad91
// converted property getter: - (BOOL)pausesRecordingOnInterruption;	// 0x3148ad99
// declared property getter: - (XXStruct_pwHToB)recordedDuration;	// 0x3148b231
// declared property getter: - (long long)recordedFileSize;	// 0x3148b185
- (void)resumeRecording;	// 0x3148ad95
// declared property setter: - (void)setMaxRecordedDuration:(XXStruct_pwHToB)duration;	// 0x3148ae11
// declared property setter: - (void)setMaxRecordedFileSize:(long long)size;	// 0x3148ae75
// declared property setter: - (void)setMinFreeDiskSpaceLimit:(long long)limit;	// 0x3148aec1
// converted property setter: - (void)setPausesRecordingOnInterruption:(BOOL)interruption;	// 0x3148adb9
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x3148ad85
- (void)stopRecording;	// 0x3148ad89
@end

