/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSArray, MPQueuePlayer, NSMutableArray, MPAVItem, NSMutableSet;
@protocol MPAVQueuePlayerFeederSource;

@interface MPAVQueuePlayerFeeder : NSObject {
	BOOL _forceSynchronousQueueFilling;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	NSMutableSet *_reusableItems;	// 12 = 0xc
	MPQueuePlayer *_player;	// 16 = 0x10
	dispatch_queue_s *_playerQueue;	// 20 = 0x14
	id<MPAVQueuePlayerFeederSource> _playlistItemSource;	// 24 = 0x18
	int _nextFillQueueToken;	// 28 = 0x1c
	BOOL _fillQueueActive;	// 32 = 0x20
@private
	int _desiredQueueDepth;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x31a567b5; 
@property(assign, nonatomic) int desiredQueueDepth;	// G=0x31a5789d; S=0x31a578ad; @synthesize=_desiredQueueDepth
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x31a578bd; S=0x31a578cd; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x31a567fd; 
- (id)initWithAVQueuePlayer:(id)avqueuePlayer itemSource:(id)source;	// 0x31a55aa9
- (void)_fillInQueue;	// 0x31a5676d
- (id)_fillInQueueWithExtraSpace:(int)extraSpace;	// 0x31a56759
- (id)_fillInQueueWithExtraSpace:(int)extraSpace ignoreExistingItems:(BOOL)items;	// 0x31a564b5
- (void)_markIsReusable:(BOOL)reusable item:(id)item;	// 0x31a56835
- (void)_removeCurrentItem;	// 0x31a55ecd
- (void)_removeInvalidItems:(id)items;	// 0x31a56f21
- (void)_updatePlayerQueueWithRemovedItems:(id)removedItems addedItems:(id)items removeCurrentItem:(BOOL)item;	// 0x31a5700d
- (void)_updateQueueDepthForRateChange;	// 0x31a577fd
- (id)acquireReusableItemsUsingBlock:(id)block;	// 0x31a568b1
- (void)advanceToNextItem;	// 0x31a56e31
- (void)cancelReusableItemsPassingTest:(id)test;	// 0x31a56aa9
// declared property getter: - (id)currentItem;	// 0x31a567b5
- (void)dealloc;	// 0x31a55ccd
- (id)description;	// 0x31a55da5
// declared property getter: - (int)desiredQueueDepth;	// 0x31a5789d
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x31a578bd
- (void)invalidate;	// 0x31a56f0d
// declared property getter: - (id)items;	// 0x31a567fd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31a5600d
- (void)reloadQueueKeepingCurrentItem:(BOOL)item;	// 0x31a56bd9
// declared property setter: - (void)setDesiredQueueDepth:(int)depth;	// 0x31a578ad
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x31a578cd
@end
