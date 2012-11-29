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
@property(assign, nonatomic) XXStruct_pwHToB maxRecordedDuration;	// G=0x368e561d; S=0x368e5661; 
@property(assign, nonatomic) long long maxRecordedFileSize;	// G=0x368e56a1; S=0x368e56c5; 
@property(assign, nonatomic) long long minFreeDiskSpaceLimit;	// G=0x368e56ed; S=0x368e5711; 
@property(readonly, assign, nonatomic) NSURL *outputFileURL;	// G=0x368e541d; 
@property(assign) BOOL pausesRecordingOnInterruption;	// G=0x368e5439; S=0x368e5459; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB recordedDuration;	// G=0x368e5479; 
@property(readonly, assign, nonatomic) long long recordedFileSize;	// G=0x368e556d; 
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;	// G=0x368e5421; 
+ (void)initialize;	// 0x368e52a5
- (id)init;	// 0x368e52c9
- (void)dealloc;	// 0x368e53d1
// declared property getter: - (BOOL)isRecording;	// 0x368e5421
- (BOOL)isRecordingPaused;	// 0x368e542d
// declared property getter: - (XXStruct_pwHToB)maxRecordedDuration;	// 0x368e561d
// declared property getter: - (long long)maxRecordedFileSize;	// 0x368e56a1
// declared property getter: - (long long)minFreeDiskSpaceLimit;	// 0x368e56ed
// declared property getter: - (id)outputFileURL;	// 0x368e541d
- (void)pauseRecording;	// 0x368e5431
// converted property getter: - (BOOL)pausesRecordingOnInterruption;	// 0x368e5439
// declared property getter: - (XXStruct_pwHToB)recordedDuration;	// 0x368e5479
// declared property getter: - (long long)recordedFileSize;	// 0x368e556d
- (void)resumeRecording;	// 0x368e5435
// declared property setter: - (void)setMaxRecordedDuration:(XXStruct_pwHToB)duration;	// 0x368e5661
// declared property setter: - (void)setMaxRecordedFileSize:(long long)size;	// 0x368e56c5
// declared property setter: - (void)setMinFreeDiskSpaceLimit:(long long)limit;	// 0x368e5711
// converted property setter: - (void)setPausesRecordingOnInterruption:(BOOL)interruption;	// 0x368e5459
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x368e5425
- (void)stopRecording;	// 0x368e5429
@end
