/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"

@class NSObject, AVWeakReference;
@protocol AVAssetWriterFinishWritingHelperDelegate, OS_dispatch_queue;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
	id<AVAssetWriterFinishWritingHelperDelegate> _delegate;	// 12 = 0xc
	OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;	// 20 = 0x14
	AVWeakReference *_weakReferenceToSelf;	// 24 = 0x18
}
- (id)initWithConfigurationState:(id)configurationState figAssetWriter:(OpaqueFigAssetWriter *)writer delegate:(id)delegate;	// 0x302d9251
- (OpaqueFigAssetWriter *)_retainedFigAssetWriter;	// 0x302d985d
- (void)cancelWriting;	// 0x302d9605
- (void)dealloc;	// 0x302d9321
- (void)finalize;	// 0x302d93ad
- (void)finishOperationCompletedSuccessfully:(BOOL)successfully withError:(id)error;	// 0x302d9581
- (void)performFinishOperation;	// 0x302d9405
- (int)status;	// 0x302d9859
@end
