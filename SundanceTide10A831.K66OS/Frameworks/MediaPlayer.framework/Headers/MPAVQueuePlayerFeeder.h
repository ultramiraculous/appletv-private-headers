/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSDownloadManagerObserver.h"

@class NSMutableSet, MPDownloadManager, NSMutableArray, MPAVItem, NSArray, MPQueuePlayer;
@protocol MPAVQueuePlayerFeederSource, OS_dispatch_queue;

@interface MPAVQueuePlayerFeeder : NSObject <SSDownloadManagerObserver> {
	unsigned _desiredQueueDepth;	// 4 = 0x4
	MPDownloadManager *_downloadManager;	// 8 = 0x8
	BOOL _forceSynchronousQueueFilling;	// 12 = 0xc
	BOOL _fillQueueActive;	// 13 = 0xd
	NSMutableArray *_items;	// 16 = 0x10
	BOOL _managesSystemDownloads;	// 20 = 0x14
	unsigned _maxQueueDepth;	// 24 = 0x18
	unsigned _minQueueDepth;	// 28 = 0x1c
	int _nextFillQueueToken;	// 32 = 0x20
	NSMutableSet *_pausedDownloads;	// 36 = 0x24
	NSObject<OS_dispatch_queue> *_pausedDownloadsQueue;	// 40 = 0x28
	MPQueuePlayer *_player;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_playerQueue;	// 48 = 0x30
	id<MPAVQueuePlayerFeederSource> _playlistItemSource;	// 52 = 0x34
	NSMutableSet *_reusableItems;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x36f5a905; 
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x36f5ccd9; S=0x36f5cce9; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x36f5a949; 
@property(assign, nonatomic) BOOL managesSystemDownloads;	// G=0x36f5cd19; S=0x36f5ae59; @synthesize=_managesSystemDownloads
@property(assign, nonatomic) unsigned maxQueueDepth;	// G=0x36f5ccf9; S=0x36f5af05; @synthesize=_maxQueueDepth
@property(assign, nonatomic) unsigned minQueueDepth;	// G=0x36f5cd09; S=0x36f5af75; @synthesize=_minQueueDepth
- (id)initWithMPQueuePlayer:(id)mpqueuePlayer itemSource:(id)source;	// 0x36f59119
- (void)_effectiveNetworkTypeDidChangeNotification:(id)_effectiveNetworkType;	// 0x36f5a431
- (void)_fillInQueue;	// 0x36f59e11
- (id)_fillInQueueWithExtraSpace:(int)extraSpace;	// 0x36f59e59
- (id)_fillInQueueWithExtraSpace:(int)extraSpace ignoreExistingItems:(BOOL)items;	// 0x36f59e6d
- (id)_fillInQueueWithExtraSpace:(int)extraSpace ignoreExistingItems:(BOOL)items removeCurrentItem:(BOOL)item;	// 0x36f59e91
- (void)_markIsReusable:(BOOL)reusable item:(id)item;	// 0x36f5afd5
- (void)_pauseOrResumeDownloads:(id)downloads currentDownloadID:(long long)anId;	// 0x36f5b055
- (void)_reloadQueueKeepingCurrentItem:(BOOL)item allowReusingItems:(BOOL)items;	// 0x36f5b979
- (void)_removeCurrentItem;	// 0x36f5a161
- (void)_removeInvalidItems:(id)items;	// 0x36f5bdcd
- (void)_updatePlayerQueueWithRemovedItems:(id)removedItems addedItems:(id)items removeCurrentItem:(BOOL)item;	// 0x36f5bebd
- (void)_updateQueueDepthForRateChange;	// 0x36f5cbf9
- (id)acquireReusableItemsUsingBlock:(id)block;	// 0x36f5a981
- (void)advanceToNextItem;	// 0x36f5ab85
- (void)cancelReusableItemsPassingTest:(id)test;	// 0x36f5aced
// declared property getter: - (id)currentItem;	// 0x36f5a905
- (void)dealloc;	// 0x36f59411
- (id)description;	// 0x36f595cd
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x36f5a2b9
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x36f5ccd9
- (void)invalidate;	// 0x36f5ae31
// declared property getter: - (id)items;	// 0x36f5a949
// declared property getter: - (BOOL)managesSystemDownloads;	// 0x36f5cd19
// declared property getter: - (unsigned)maxQueueDepth;	// 0x36f5ccf9
// declared property getter: - (unsigned)minQueueDepth;	// 0x36f5cd09
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36f5970d
- (void)reloadQueueKeepingCurrentItem:(BOOL)item;	// 0x36f5ae45
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x36f5cce9
// declared property setter: - (void)setManagesSystemDownloads:(BOOL)downloads;	// 0x36f5ae59
// declared property setter: - (void)setMaxQueueDepth:(unsigned)depth;	// 0x36f5af05
// declared property setter: - (void)setMinQueueDepth:(unsigned)depth;	// 0x36f5af75
@end
