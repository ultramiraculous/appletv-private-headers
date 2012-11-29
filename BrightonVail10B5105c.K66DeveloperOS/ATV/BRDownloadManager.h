/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRDownloadManager : XXUnknownSuperclass {
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x394735; converted property
+ (id)allDownloads;	// 0x393a75
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x393fe9
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x393bdd
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x393d91
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x393791
+ (id)downloadTestManager;	// 0x393945
+ (BOOL)downloadsInProgress;	// 0x393a15
+ (void)initialize;	// 0x393569
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x3935cd
+ (void)registerDownloadTestManager:(id)manager;	// 0x393875
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x3936b5
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x393cc5
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x393ec9
- (id)init;	// 0x394229
- (void)_assetPlayable:(id)playable;	// 0x394931
- (void)addDownload:(id)download;	// 0x394399
- (void)cancelNetworkSpeedTest;	// 0x394b79
- (void)dealloc;	// 0x394309
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x394725
// converted property getter: - (id)downloads;	// 0x394735
- (id)downloadsWithQualifiedState:(int)qualifiedState;	// 0x141f41
- (BOOL)networkDiagnosticsAvailable;	// 0x394b69
- (BOOL)networkTestInProgress;	// 0x394b6d
- (void)pauseCurrentDownloads;	// 0x14200d
- (void)prioritizeDownload:(id)download;	// 0x394811
- (void)removeDownload:(id)download;	// 0x394511
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x394b75
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x394b71
@end
