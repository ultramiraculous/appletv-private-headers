/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate;

@interface AVCaptureVideoDataOutputInternal : NSObject {
	id<AVCaptureVideoDataOutputSampleBufferDelegate> delegate;	// 4 = 0x4
	dispatch_queue_s *clientQueue;	// 8 = 0x8
	unsigned long pixelFormatType;	// 12 = 0xc
	NSDictionary *videoSettings;	// 16 = 0x10
	XXStruct_pwHToB deprecatedMinFrameDuration;	// 20 = 0x14
	BOOL alwaysDiscardsLateVideoFrames;	// 44 = 0x2c
}
- (id)init;	// 0x30b05dc9
- (void)dealloc;	// 0x30b05e55
@end

