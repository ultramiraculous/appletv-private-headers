/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLDownloadDelegate.h"
#import "BRSingleton.h"

@class NSMutableArray, NSTimer, NSURLDownload;

__attribute__((visibility("hidden")))
@interface ATVRetailDemoModeManager : BRSingleton <NSURLDownloadDelegate> {
	NSTimer *_retailPlaybackLimitTimer;	// 4 = 0x4
	BOOL _hasStartedPlaying;	// 8 = 0x8
	NSURLDownload *_retailMovieDownload;	// 12 = 0xc
	NSMutableArray *_topPodcastsFavCandidates;	// 16 = 0x10
	NSMutableArray *_topShowsFavCandidates;	// 20 = 0x14
	BOOL _retryOccurred;	// 24 = 0x18
}
+ (void)checkAndStart;	// 0x20a7f9
+ (id)retailDemoCacheDir;	// 0x20a9c9
+ (BOOL)retailDemoMovieDownloadComplete;	// 0x20aa59
+ (id)retailDemoMoviePath;	// 0x20aa19
+ (void)setSingleton:(id)singleton;	// 0x20a7e9
+ (id)singleton;	// 0x20a7d9
- (id)init;	// 0x20a861
- (void)_downloadRetailDemoMovie;	// 0x20b8ad
- (void)_fetchNextPodcastFav;	// 0x20bfed
- (void)_fetchNextTVShowFav;	// 0x20c6b1
- (void)_nowPlayingStateChanged:(id)changed;	// 0x20b621
- (void)_podcastReady:(id)ready;	// 0x20c1bd
- (void)_resetRetailSettings;	// 0x20b329
- (id)_retailDemoMovieURL;	// 0x20ba7d
- (void)_retailPlaybackLimitTimerFired:(id)fired;	// 0x20b851
- (void)_retryMovieDownloadLater;	// 0x20bbf1
- (BOOL)_shouldLimitPlaybackForAsset:(id)asset;	// 0x20b709
- (void)_startPlaybackLimitTimer;	// 0x20b785
- (void)_topPodcastsReady:(id)ready;	// 0x20bea1
- (void)_topTVShowsReady:(id)ready;	// 0x20c565
- (void)_tvShowReady:(id)ready;	// 0x20ca81
- (void)_updatePodcastFavorites;	// 0x20bc3d
- (void)_updateTVShowFavorites;	// 0x20c301
- (void)dealloc;	// 0x20a96d
- (void)download:(id)download didFailWithError:(id)error;	// 0x20cbf1
- (void)downloadDidFinish:(id)download;	// 0x20cc59
- (void)performRetailReset;	// 0x20aadd
- (void)updateRetailFavorites;	// 0x20b2f9
@end

