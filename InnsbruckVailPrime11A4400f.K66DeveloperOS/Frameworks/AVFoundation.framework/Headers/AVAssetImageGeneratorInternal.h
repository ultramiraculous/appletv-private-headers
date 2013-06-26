/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAsset, NSMutableArray, NSString, AVWeakReference, AVVideoComposition, AVCustomVideoCompositorSession;
@protocol OS_dispatch_queue;

@interface AVAssetImageGeneratorInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	OpaqueFigAssetImageGenerator *generator;	// 8 = 0x8
	AVAsset *asset;	// 12 = 0xc
	BOOL appliesPreferredTrackTransform;	// 16 = 0x10
	CGSize maximumSize;	// 20 = 0x14
	NSString *apertureMode;	// 28 = 0x1c
	XXStruct_pwHToB requestedTimeToleranceBefore;	// 32 = 0x20
	XXStruct_pwHToB requestedTimeToleranceAfter;	// 56 = 0x38
	NSMutableArray *requests;	// 80 = 0x50
	NSObject<OS_dispatch_queue> *requestsQueue;	// 84 = 0x54
	int nextRequestID;	// 88 = 0x58
	AVVideoComposition *videoComposition;	// 92 = 0x5c
	AVCustomVideoCompositorSession *customVideoCompositorSession;	// 96 = 0x60
	NSObject<OS_dispatch_queue> *imageRequestQueue;	// 100 = 0x64
	int cancelledRequestIDThreshold;	// 104 = 0x68
}
@end
