/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterInputHelper.h"
#import "AVAssetWriterInputMediaDataRequesterDelegate.h"


@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
	int _terminalStatus;	// 12 = 0xc
	BOOL _didRequestMediaDataOnce;	// 16 = 0x10
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x2c2a00e9
- (id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;	// 0x2c2a00fd
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x2c2a04d5
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x2c2a0461
- (BOOL)isReadyForMoreMediaData;	// 0x2c2a01a9
- (void)markAsFinished;	// 0x2c2a0549
- (BOOL)mediaDataRequesterShouldRequestMediaData:(id)mediaDataRequester;	// 0x2c2a0329
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)mediaDataRequester;	// 0x2c2a0385
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x2c2a01f1
- (int)status;	// 0x2c2a0195
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)terminalStatus;	// 0x2c2a01a5
@end
