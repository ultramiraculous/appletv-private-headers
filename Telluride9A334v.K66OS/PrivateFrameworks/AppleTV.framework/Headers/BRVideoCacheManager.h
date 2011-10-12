/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"
#import "BRTransportDataProvider.h"


@interface BRVideoCacheManager : BRSingleton <BRTransportDataProvider> {
}
+ (void)setImplementationClass:(Class)aClass;	// 0x3329f979
+ (void)setSingleton:(id)singleton;	// 0x3329f99d
+ (id)singleton;	// 0x3329f98d
- (BRTimeRange)bufferedRange;	// 0x3329fa4d
- (float)bufferingProgress;	// 0x3329fa5d
- (id)cacheInfoForAsset:(id)asset;	// 0x3329f9b1
- (id)chapterAtIndex:(long)index;	// 0x3329fa69
- (id)chapterGroupAtIndex:(long)index;	// 0x3329fa91
- (long)chapterGroupCount;	// 0x3329fa89
- (long)chapterGroupIndex;	// 0x3329fa8d
- (id)chapters;	// 0x3329fa65
- (long)currentChapterIndex;	// 0x3329fa6d
- (long)currentInterstitialIndex;	// 0x3329fa99
- (id)currentPlayer;	// 0x3329fa0d
- (id)currentPlayerItem;	// 0x3329fa11
- (id)currentPlayerLayer;	// 0x3329fa09
- (double)duration;	// 0x3329fa21
- (double)elapsedTime;	// 0x3329fa35
- (void)evictAsset:(id)asset;	// 0x3329f9bd
- (void)evictURL:(id)url;	// 0x3329f9c1
- (id)interstitialTimes;	// 0x3329fa95
- (BOOL)isItemLoading:(ATVMediaItemRef)loading;	// 0x3329f9d9
- (BOOL)isItemReadyToPlay:(ATVMediaItemRef)play;	// 0x3329f9dd
- (id)playbackDate;	// 0x3329fa85
- (int)playerState;	// 0x3329fa1d
- (void)saveCacheKey:(id)key forAsset:(id)asset;	// 0x3329f9b5
- (void)saveCacheKey:(id)key forURL:(id)url;	// 0x3329f9b9
- (double)secondsUntilItemWillBeReadyToPlay:(ATVMediaItemRef)secondsUntilItem;	// 0x3329f9f5
- (id)selectableAudioTracks;	// 0x3329fa15
- (void)setDelegate:(id)delegate;	// 0x3329f9ad
- (void)startCachingAVAsset:(id)asset mediaItem:(ATVMediaItemRef)item withElapsedTime:(double)elapsedTime;	// 0x3329f9cd
- (void)startCachingItem:(ATVMediaItemRef)item;	// 0x3329f9c5
- (void)startCachingItem:(ATVMediaItemRef)item withElapsedTime:(double)elapsedTime;	// 0x3329f9c9
- (void)startCachingURL:(id)url;	// 0x3329f9d1
- (void)stopCaching;	// 0x3329f9d5
- (id)subtitleTracks;	// 0x3329fa19
- (BOOL)supportsBufferedRange;	// 0x3329fa49
- (double)videoStartTime;	// 0x3329f9e1
- (double)virtualChapterMark;	// 0x3329fa71
@end

