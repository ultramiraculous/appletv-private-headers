/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface BRDownloadManager : NSObject {
@private
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x3675d949; converted property
+ (id)allDownloads;	// 0x3675cc45
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x3675d1bd
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x3675cd91
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3675cf75
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x3675c995
+ (id)downloadTestManager;	// 0x3675cb25
+ (BOOL)downloadsInProgress;	// 0x3675cbe5
+ (void)initialize;	// 0x3675c77d
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x3675c7e1
+ (void)registerDownloadTestManager:(id)manager;	// 0x3675ca65
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x3675c8c9
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x3675ce8d
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3675d0a1
- (id)init;	// 0x3675d449
- (void)_assetPlayable:(id)playable;	// 0x3675db31
- (void)addDownload:(id)download;	// 0x3675d5b5
- (void)cancelNetworkSpeedTest;	// 0x3675dd61
- (void)dealloc;	// 0x3675d525
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x3675d939
// converted property getter: - (id)downloads;	// 0x3675d949
- (id)downloadsWithQualifiedState:(int)qualifiedState;	// 0x36554f5d
- (BOOL)networkDiagnosticsAvailable;	// 0x3675dd51
- (BOOL)networkTestInProgress;	// 0x3675dd55
- (void)pauseCurrentDownloads;	// 0x36555021
- (void)prioritizeDownload:(id)download;	// 0x3675da1d
- (void)removeDownload:(id)download;	// 0x3675d72d
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3675dd5d
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x3675dd59
@end

