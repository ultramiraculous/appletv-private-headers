/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSArray;
@protocol AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {
	id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> _delegate;	// 4 = 0x4
	NSURL *_outputFileURL;	// 8 = 0x8
	BOOL _receivedDidStartRecording;	// 12 = 0xc
	BOOL _receivedDidStopRecording;	// 13 = 0xd
	NSString *_didStopRecordingReason;	// 16 = 0x10
	NSArray *_metadata;	// 20 = 0x14
	NSArray *_connections;	// 24 = 0x18
}
@property(readonly, assign) NSArray *connections;	// G=0x368e5225; @synthesize=_connections
@property(readonly, assign) id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> delegate;	// G=0x368e5155; @synthesize=_delegate
@property(copy) NSString *didStopRecordingReason;	// G=0x368e51dd; S=0x368e51f1; @synthesize=_didStopRecordingReason
@property(retain) NSArray *metadata;	// G=0x368e5201; S=0x368e5215; @synthesize=_metadata
@property(readonly, assign) NSURL *outputFileURL;	// G=0x368e5169; @synthesize=_outputFileURL
@property(assign) BOOL receivedDidStartRecording;	// G=0x368e517d; S=0x368e5195; @synthesize=_receivedDidStartRecording
@property(assign) BOOL receivedDidStopRecording;	// G=0x368e51ad; S=0x368e51c5; @synthesize=_receivedDidStopRecording
+ (id)wrapperWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x368e4fe5
- (id)initWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x368e5039
// declared property getter: - (id)connections;	// 0x368e5225
- (void)dealloc;	// 0x368e50c9
// declared property getter: - (id)delegate;	// 0x368e5155
// declared property getter: - (id)didStopRecordingReason;	// 0x368e51dd
// declared property getter: - (id)metadata;	// 0x368e5201
// declared property getter: - (id)outputFileURL;	// 0x368e5169
// declared property getter: - (BOOL)receivedDidStartRecording;	// 0x368e517d
// declared property getter: - (BOOL)receivedDidStopRecording;	// 0x368e51ad
// declared property setter: - (void)setDidStopRecordingReason:(id)stopRecordingReason;	// 0x368e51f1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x368e5215
// declared property setter: - (void)setReceivedDidStartRecording:(BOOL)startRecording;	// 0x368e5195
// declared property setter: - (void)setReceivedDidStopRecording:(BOOL)stopRecording;	// 0x368e51c5
@end
