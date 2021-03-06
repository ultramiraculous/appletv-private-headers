/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface LTUsageReporterMonitor : BRSingleton {
	id<BRMediaAsset> _currentAsset;	// 4 = 0x4
	unsigned _playbackStalledCount;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x673a1
+ (id)singleton;	// 0x67391
- (id)init;	// 0x67431
- (void).cxx_destruct;	// 0x67539
- (void)_currentAssetPlaybackChanged:(id)changed;	// 0x67561
- (void)_currentAssetPlaybackStalled:(id)stalled;	// 0x6754d
- (void)_homeSharesChanged:(id)changed;	// 0x67711
- (void)_resetPlaybackStalledCountAndAssetFromPlayerIfNeeded:(id)playerIfNeeded;	// 0x677c9
- (void)dealloc;	// 0x673c5
@end

