/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputMediaDataRequester : NSObject {
@private
	AVAssetWriterInputWritingHelper *_writingHelper;	// 4 = 0x4
	dispatch_queue_s *_requestQueue;	// 8 = 0x8
	id _requestBlock;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id requestBlock;	// G=0x30ade5a5; @synthesize=_requestBlock
@property(readonly, assign, nonatomic) dispatch_queue_s *requestQueue;	// G=0x30ade595; @synthesize=_requestQueue
- (id)init;	// 0x30ade00d
- (id)initWithAssetWriterInputWritingHelper:(id)assetWriterInputWritingHelper requestQueue:(dispatch_queue_s *)queue requestBlock:(id)block;	// 0x30adde5d
- (void)_requestMediaDataIfReady;	// 0x30ade311
- (void)dealloc;	// 0x30ade031
- (void)finalize;	// 0x30ade075
- (void)invalidate;	// 0x30ade131
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30ade221
// declared property getter: - (id)requestBlock;	// 0x30ade5a5
// declared property getter: - (dispatch_queue_s *)requestQueue;	// 0x30ade595
- (void)startRequestingMediaData;	// 0x30ade0b9
@end
