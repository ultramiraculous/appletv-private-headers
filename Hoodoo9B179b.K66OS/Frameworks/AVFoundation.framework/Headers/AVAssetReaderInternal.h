/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVWeakKeyValueObserverProxy, NSMutableArray, NSError, AVAsset;

@interface AVAssetReaderInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	AVWeakKeyValueObserverProxy *KVOProxy;	// 8 = 0x8
	AVAsset *asset;	// 12 = 0xc
	OpaqueFigAssetReader *figAssetReader;	// 16 = 0x10
	XXStruct_yD8eWC timeRange;	// 20 = 0x14
	NSMutableArray *outputs;	// 68 = 0x44
	int status;	// 72 = 0x48
	NSError *error;	// 76 = 0x4c
	dispatch_queue_s *statusReadWriteQueue;	// 80 = 0x50
}
@end

