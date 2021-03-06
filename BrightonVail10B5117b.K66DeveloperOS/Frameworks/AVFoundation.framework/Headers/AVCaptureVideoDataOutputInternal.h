/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutputInternal : NSObject {
	id<AVCaptureVideoDataOutputSampleBufferDelegate> delegate;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *clientQueue;	// 8 = 0x8
	NSDictionary *videoSettings;	// 12 = 0xc
	XXStruct_pwHToB deprecatedMinFrameDuration;	// 16 = 0x10
	BOOL alwaysDiscardsLateVideoFrames;	// 40 = 0x28
}
- (id)init;	// 0x302b1f65
- (void)dealloc;	// 0x302b1fe1
@end

