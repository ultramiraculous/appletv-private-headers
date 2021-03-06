/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetWriterInputHelper, AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	AVAssetWriterInputHelper *helper;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *helperQueue;	// 12 = 0xc
	BOOL attachedToPixelBufferAdaptor;	// 16 = 0x10
	AVWeakReference *weakReferenceToAssetWriter;	// 20 = 0x14
}
@end

