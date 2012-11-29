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
@property(readonly, assign) NSArray *connections;	// G=0x326a74c5; @synthesize=_connections
@property(readonly, assign) id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> delegate;	// G=0x326a73f5; @synthesize=_delegate
@property(copy) NSString *didStopRecordingReason;	// G=0x326a747d; S=0x326a7491; @synthesize=_didStopRecordingReason
@property(retain) NSArray *metadata;	// G=0x326a74a1; S=0x326a74b5; @synthesize=_metadata
@property(readonly, assign) NSURL *outputFileURL;	// G=0x326a7409; @synthesize=_outputFileURL
@property(assign) BOOL receivedDidStartRecording;	// G=0x326a741d; S=0x326a7435; @synthesize=_receivedDidStartRecording
@property(assign) BOOL receivedDidStopRecording;	// G=0x326a744d; S=0x326a7465; @synthesize=_receivedDidStopRecording
+ (id)wrapperWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x326a7285
- (id)initWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x326a72d9
// declared property getter: - (id)connections;	// 0x326a74c5
- (void)dealloc;	// 0x326a7369
// declared property getter: - (id)delegate;	// 0x326a73f5
// declared property getter: - (id)didStopRecordingReason;	// 0x326a747d
// declared property getter: - (id)metadata;	// 0x326a74a1
// declared property getter: - (id)outputFileURL;	// 0x326a7409
// declared property getter: - (BOOL)receivedDidStartRecording;	// 0x326a741d
// declared property getter: - (BOOL)receivedDidStopRecording;	// 0x326a744d
// declared property setter: - (void)setDidStopRecordingReason:(id)stopRecordingReason;	// 0x326a7491
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x326a74b5
// declared property setter: - (void)setReceivedDidStartRecording:(BOOL)startRecording;	// 0x326a7435
// declared property setter: - (void)setReceivedDidStopRecording:(BOOL)stopRecording;	// 0x326a7465
@end
