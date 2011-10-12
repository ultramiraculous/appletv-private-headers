/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSPurchaseRequestDelegate.h"
#import "MediaPlayer-Structs.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MPCloudPurchaseRequest : NSObject <SSPurchaseRequestDelegate> {
	NSArray *_mediaItems;	// 4 = 0x4
	dispatch_queue_s *_requestsQueue;	// 8 = 0x8
	NSMutableDictionary *_requestsByMediaItemPID;	// 12 = 0xc
	NSMutableArray *_waitingRequests;	// 16 = 0x10
	NSMutableArray *_servicedRequests;	// 20 = 0x14
	int _purchaseReason;	// 24 = 0x18
	BOOL _purchaseReasonIdenticalForAll;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSArray *mediaItems;	// G=0x34e90885; @synthesize=_mediaItems
@property(readonly, assign, nonatomic) int purchaseReason;	// G=0x34e90895; @synthesize=_purchaseReason
- (id)initWithMediaItem:(id)mediaItem purchaseReason:(int)reason;	// 0x34e8efc1
- (id)initWithMediaItems:(id)mediaItems;	// 0x34e8f001
- (id)_initWithMediaItems:(id)mediaItems purchaseReason:(int)reason;	// 0x34e8f015
- (id)_purchaseForMediaItem:(id)mediaItem;	// 0x34e90581
- (BOOL)_shouldCancelRemainingRequestForError:(id)error;	// 0x34e8f3a1
- (void)dealloc;	// 0x34e8f2e5
// declared property getter: - (id)mediaItems;	// 0x34e90885
- (void)prioritizeMediaItem:(id)item forPlayback:(BOOL)playback purchaseCompletionHandler:(id)handler;	// 0x34e901e1
// declared property getter: - (int)purchaseReason;	// 0x34e90895
- (int)purchaseReasonForMediaItemPersistentID:(id)mediaItemPersistentID;	// 0x34e905f1
- (void)runOnQueue:(dispatch_queue_s *)queue withCompletionHandler:(id)completionHandler;	// 0x34e8f3e9
- (void)setDownloadHandler:(id)handler forMediaItem:(id)mediaItem;	// 0x34e90729
@end

