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
- (id)initWithDelegate:(id)delegate figPlayer:(OpaqueFigPlayer *)player;	// 0x36bc5e11
- (void)beginAVQueueTransaction;	// 0x36be2975
- (void)checkQueueConsistency;	// 0x36bcae19
- (void)clearPBItemQueueFromIndex:(int)index;	// 0x36bc610d
- (id)currentPlaybackItem;	// 0x36bc68f1
- (void)dealloc;	// 0x36bd7031
- (void)endAVQueueTransaction;	// 0x36be2989
- (void)ensurePlaybackQueue;	// 0x36bccb6d
- (void)ensurePlaybackQueueImmed;	// 0x36bced4d
- (void)fillInPBItemQueue;	// 0x36bc6331
- (void)playbackItemInspectionComplete:(id)complete;	// 0x36bcecd1
- (void)playbackItemWasRemovedFromPlayQueue:(id)playQueue;	// 0x36bd12bd
- (void)queueItemWasAddedNotification:(id)notification;	// 0x36bc9f85
- (void)queueItemWillBeRemovedNotification:(id)queueItem;	// 0x36bd0179
- (void)removeItemsNoLongerInPlayQueue;	// 0x36bcf179
- (void)scheduleRemoveItemsNoLongerInPlayQueue;	// 0x36bcef99
- (void)setAVItemQueue:(id)queue;	// 0x36bc5f89
- (void)setDelegate:(id)delegate;	// 0x36bd7021
- (void)setRepeatMode:(int)mode;	// 0x36bcc975
- (void)updateBookmarkTimesIncludeFirst:(BOOL)first updateFirst:(BOOL)first2;	// 0x36bcab19
@end

