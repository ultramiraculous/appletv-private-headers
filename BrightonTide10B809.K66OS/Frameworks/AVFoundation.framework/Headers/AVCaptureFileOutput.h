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
@property(assign, nonatomic) XXStruct_pwHToB maxRecordedDuration;	// G=0x3029bb4d; S=0x3029bb91; 
@property(assign, nonatomic) long long maxRecordedFileSize;	// G=0x3029bbd1; S=0x3029bbf5; 
@property(assign, nonatomic) long long minFreeDiskSpaceLimit;	// G=0x3029bc1d; S=0x3029bc41; 
@property(readonly, assign, nonatomic) NSURL *outputFileURL;	// G=0x3029b94d; 
@property(assign) BOOL pausesRecordingOnInterruption;	// G=0x3029b969; S=0x3029b989; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB recordedDuration;	// G=0x3029b9a9; 
@property(readonly, assign, nonatomic) long long recordedFileSize;	// G=0x3029ba9d; 
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;	// G=0x3029b951; 
+ (void)initialize;	// 0x3029b7f5
- (id)init;	// 0x3029b7f9
- (void)dealloc;	// 0x3029b901
// declared property getter: - (BOOL)isRecording;	// 0x3029b951
- (BOOL)isRecordingPaused;	// 0x3029b95d
// declared property getter: - (XXStruct_pwHToB)maxRecordedDuration;	// 0x3029bb4d
// declared property getter: - (long long)maxRecordedFileSize;	// 0x3029bbd1
// declared property getter: - (long long)minFreeDiskSpaceLimit;	// 0x3029bc1d
// declared property getter: - (id)outputFileURL;	// 0x3029b94d
- (void)pauseRecording;	// 0x3029b961
// converted property getter: - (BOOL)pausesRecordingOnInterruption;	// 0x3029b969
// declared property getter: - (XXStruct_pwHToB)recordedDuration;	// 0x3029b9a9
// declared property getter: - (long long)recordedFileSize;	// 0x3029ba9d
- (void)resumeRecording;	// 0x3029b965
// declared property setter: - (void)setMaxRecordedDuration:(XXStruct_pwHToB)duration;	// 0x3029bb91
// declared property setter: - (void)setMaxRecordedFileSize:(long long)size;	// 0x3029bbf5
// declared property setter: - (void)setMinFreeDiskSpaceLimit:(long long)limit;	// 0x3029bc41
// converted property setter: - (void)setPausesRecordingOnInterruption:(BOOL)interruption;	// 0x3029b989
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x3029b955
- (void)stopRecording;	// 0x3029b959
@end

