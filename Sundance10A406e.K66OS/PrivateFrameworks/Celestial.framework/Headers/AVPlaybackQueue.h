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
- (id)initWithDelegate:(id)delegate figPlayer:(OpaqueFigPlayer *)player;	// 0x36ca7a59
- (void)beginAVQueueTransaction;	// 0x36cc3421
- (void)checkQueueConsistency;	// 0x36cabf31
- (void)clearPBItemQueueFromIndex:(int)index;	// 0x36ca7d4d
- (id)currentPlaybackItem;	// 0x36ca8535
- (void)dealloc;	// 0x36cb62d5
- (void)endAVQueueTransaction;	// 0x36cc3435
- (void)ensurePlaybackQueue;	// 0x36cad9dd
- (void)ensurePlaybackQueueImmed;	// 0x36cafb41
- (void)fillInPBItemQueue;	// 0x36ca7f95
- (void)playbackItemInspectionComplete:(id)complete;	// 0x36cafac1
- (void)playbackItemWasRemovedFromPlayQueue:(id)playQueue;	// 0x36cb1e0d
- (void)queueItemWasAddedNotification:(id)notification;	// 0x36cab115
- (void)queueItemWillBeRemovedNotification:(id)queueItem;	// 0x36cb0d15
- (void)removeItemsNoLongerInPlayQueue;	// 0x36caff71
- (void)scheduleRemoveItemsNoLongerInPlayQueue;	// 0x36cafda9
- (void)setAVItemQueue:(id)queue;	// 0x36ca7bc9
- (void)setDelegate:(id)delegate;	// 0x36cb62c1
- (void)setRepeatMode:(int)mode;	// 0x36cad7d9
- (void)updateBookmarkTimesIncludeFirst:(BOOL)first updateFirst:(BOOL)first2;	// 0x36cabc21
@end

