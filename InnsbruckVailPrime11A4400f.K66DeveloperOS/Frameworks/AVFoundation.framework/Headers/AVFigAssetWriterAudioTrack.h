/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVFigAssetWriterTrack.h"

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
	NSMutableArray *_pendingAudioSampleBuffers;	// 56 = 0x38
}
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x2c2a2d69
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)figAssetWriterUsingFormatSpecification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x2c2a2e39
- (BOOL)_flushPendingSampleBuffersReturningError:(id *)error;	// 0x2c2a2fed
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x2c2a31a9
- (void)dealloc;	// 0x2c2a2ded
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x2c2a3499
- (void)prepareToEndSession;	// 0x2c2a3455
@end
