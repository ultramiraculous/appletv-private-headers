/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject {
	id _delegate;	// 4 = 0x4
	AVQueue *_avItemQueue;	// 8 = 0x8
	NSMutableArray *_pbItemQueue;	// 12 = 0xc
	OpaqueFigPlayer *_figPlayer;	// 16 = 0x10
	int _ignoreAVQueueModifications;	// 20 = 0x14
	BOOL _hasBuiltPlaybackQueue;	// 24 = 0x18
	BOOL _waitingToAddFirstItem;	// 25 = 0x19
	int _avQueueTransactionCount;	// 28 = 0x1c
	int _repeatMode;	// 32 = 0x20
}
- (id)initWithDelegate:(id)delegate figPlayer:(OpaqueFigPlayer *)player;	// 0x3631d981
- (void)beginAVQueueTransaction;	// 0x3633e5a9
- (void)checkQueueConsistency;	// 0x363224cd
- (void)clearPBItemQueueFromIndex:(int)index;	// 0x3631dd19
- (id)currentPlaybackItem;	// 0x3631e671
- (void)dealloc;	// 0x3632e6b9
- (void)endAVQueueTransaction;	// 0x3633e5fd
- (void)ensurePlaybackQueue;	// 0x363243e9
- (void)ensurePlaybackQueueImmed;	// 0x3632688d
- (void)fillInPBItemQueue;	// 0x3631df95
- (void)playbackItemInspectionComplete:(id)complete;	// 0x363267a5
- (void)playbackItemWasRemovedFromPlayQueue:(id)playQueue;	// 0x36329045
- (void)queueItemWasAddedNotification:(id)notification;	// 0x363215b9
- (void)queueItemWillBeRemovedNotification:(id)queueItem;	// 0x36327cb9
- (void)removeItemsNoLongerInPlayQueue;	// 0x36326d1d
- (void)scheduleRemoveItemsNoLongerInPlayQueue;	// 0x36326b59
- (void)setAVItemQueue:(id)queue;	// 0x3631db5d
- (void)setDelegate:(id)delegate;	// 0x3632e6a5
- (void)setRepeatMode:(int)mode;	// 0x3632411d
- (void)updateBookmarkTimesIncludeFirst:(BOOL)first updateFirst:(BOOL)first2;	// 0x363221b9
@end

