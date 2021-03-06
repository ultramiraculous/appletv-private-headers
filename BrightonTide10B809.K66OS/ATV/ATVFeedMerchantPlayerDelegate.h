/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTransportDataProvider.h"
#import "BRPlayerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVFeedMerchant, NSSet;

__attribute__((visibility("hidden")))
@interface ATVFeedMerchantPlayerDelegate : XXUnknownSuperclass <BRPlayerDelegate, BRTransportDataProvider> {
	ATVFeedMerchant *_merchant;	// 4 = 0x4
	NSSet *functions;	// 8 = 0x8
}
@property(retain, nonatomic) NSSet *functions;	// G=0x16f88d; S=0x16f89d; @synthesize
@property(assign, nonatomic) ATVFeedMerchant *merchant;	// G=0x16f86d; S=0x16f87d; @synthesize=_merchant
+ (void)initialize;	// 0x16e959
- (id)initWithFeedMerchant:(id)feedMerchant;	// 0x16e9ed
- (void)_hifreqPlayerProgressChanged:(id)changed;	// 0x16f8ad
- (void)_playerProgressChanged:(id)changed;	// 0x16f8f5
- (BRTimeRange)bufferedRange;	// 0x16f1a1
- (float)bufferingProgress;	// 0x16f1f9
- (id)chapterAtIndex:(long)index;	// 0x16f33d
- (id)chapterGroupAtIndex:(long)index;	// 0x16f5cd
- (long)chapterGroupCount;	// 0x16f545
- (long)chapterGroupIndex;	// 0x16f589
- (id)chapters;	// 0x16f285
- (long)currentChapterIndex;	// 0x16f3e9
- (long)currentInterstitialIndex;	// 0x16f795
- (void)dealloc;	// 0x16eb55
- (double)duration;	// 0x16f069
- (double)elapsedTime;	// 0x16f109
// declared property getter: - (id)functions;	// 0x16f88d
- (id)interstitialTimes;	// 0x16f615
- (BOOL)isAssetReadyToPlay:(id)play;	// 0x16f23d
// declared property getter: - (id)merchant;	// 0x16f86d
- (id)playbackDate;	// 0x16f501
- (BOOL)player:(id)player shouldHandleEvent:(id)event playerTime:(double)time;	// 0x16eccd
- (double)player:(id)player willSeekToTime:(double)time;	// 0x16ebd9
- (void)playerDateDidChange:(id)playerDate;	// 0x16efb5
- (int)playerState;	// 0x16f025
- (void)playerTimeDidChange:(double)playerTime;	// 0x16eee9
// declared property setter: - (void)setFunctions:(id)functions;	// 0x16f89d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x16f87d
- (BOOL)supportsBufferedRange;	// 0x16f15d
- (double)virtualChapterMark;	// 0x16f4ad
@end

