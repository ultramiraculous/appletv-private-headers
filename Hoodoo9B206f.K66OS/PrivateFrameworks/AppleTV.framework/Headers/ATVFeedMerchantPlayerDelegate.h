/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTransportDataProvider.h"
#import "BRPlayerDelegate.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedMerchantPlayerDelegate : NSObject <BRPlayerDelegate, BRTransportDataProvider> {
@private
	ATVFeedMerchant *_merchant;	// 4 = 0x4
	NSSet *functions;	// 8 = 0x8
}
@property(retain, nonatomic) NSSet *functions;	// G=0x36783961; S=0x36783971; @synthesize
@property(assign, nonatomic) ATVFeedMerchant *merchant;	// G=0x36783941; S=0x36783951; @synthesize=_merchant
+ (void)initialize;	// 0x36782b99
- (id)initWithFeedMerchant:(id)feedMerchant;	// 0x36782c31
- (void)_hifreqPlayerProgressChanged:(id)changed;	// 0x36783995
- (void)_playerProgressChanged:(id)changed;	// 0x367839dd
- (BRTimeRange)bufferedRange;	// 0x367832b9
- (float)bufferingProgress;	// 0x36783311
- (id)chapterAtIndex:(long)index;	// 0x3678344d
- (id)chapterGroupAtIndex:(long)index;	// 0x367836cd
- (long)chapterGroupCount;	// 0x36783645
- (long)chapterGroupIndex;	// 0x36783689
- (id)chapters;	// 0x3678339d
- (long)currentChapterIndex;	// 0x367834f1
- (long)currentInterstitialIndex;	// 0x3678386d
- (void)dealloc;	// 0x36782d99
- (double)duration;	// 0x36783189
- (double)elapsedTime;	// 0x36783221
// declared property getter: - (id)functions;	// 0x36783961
- (id)interstitialTimes;	// 0x36783715
- (BOOL)isAssetReadyToPlay:(id)play;	// 0x36783355
// declared property getter: - (id)merchant;	// 0x36783941
- (id)playbackDate;	// 0x36783601
- (BOOL)player:(id)player shouldHandleEvent:(id)event playerTime:(double)time;	// 0x36782f11
- (double)player:(id)player willSeekToTime:(double)time;	// 0x36782e1d
- (void)playerDateDidChange:(id)playerDate;	// 0x367830d5
- (int)playerState;	// 0x36783145
- (void)playerTimeDidChange:(double)playerTime;	// 0x36783009
// declared property setter: - (void)setFunctions:(id)functions;	// 0x36783971
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x36783951
- (BOOL)supportsBufferedRange;	// 0x36783275
- (double)virtualChapterMark;	// 0x367835ad
@end

