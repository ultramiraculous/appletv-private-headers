/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "NSURLDownloadDelegate.h"

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
+ (void)checkAndStart;	// 0x211c45
+ (id)retailDemoCacheDir;	// 0x211df5
+ (BOOL)retailDemoMovieDownloadComplete;	// 0x211e85
+ (id)retailDemoMoviePath;	// 0x211e45
+ (void)setSingleton:(id)singleton;	// 0x211c35
+ (id)singleton;	// 0x211c25
- (id)init;	// 0x211c8d
- (void)_downloadRetailDemoMovie;	// 0x212cc9
- (void)_fetchNextPodcastFav;	// 0x213411
- (void)_fetchNextTVShowFav;	// 0x213ad5
- (void)_nowPlayingStateChanged:(id)changed;	// 0x212a3d
- (void)_podcastReady:(id)ready;	// 0x2135e1
- (void)_resetRetailSettings;	// 0x212745
- (id)_retailDemoMovieURL;	// 0x212ea1
- (void)_retailPlaybackLimitTimerFired:(id)fired;	// 0x212c6d
- (void)_retryMovieDownloadLater;	// 0x213015
- (BOOL)_shouldLimitPlaybackForAsset:(id)asset;	// 0x212b25
- (void)_startPlaybackLimitTimer;	// 0x212ba1
- (void)_topPodcastsReady:(id)ready;	// 0x2132c5
- (void)_topTVShowsReady:(id)ready;	// 0x213989
- (void)_tvShowReady:(id)ready;	// 0x213ea5
- (void)_updatePodcastFavorites;	// 0x213061
- (void)_updateTVShowFavorites;	// 0x213725
- (void)dealloc;	// 0x211d99
- (void)download:(id)download didFailWithError:(id)error;	// 0x214015
- (void)downloadDidFinish:(id)download;	// 0x214081
- (void)performRetailReset;	// 0x211ef9
- (void)updateRetailFavorites;	// 0x212715
@end

