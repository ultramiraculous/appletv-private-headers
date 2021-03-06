/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDownloadManager.h"
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"

@class NSMutableArray, NSDictionary, NSHTTPCookie, NSDateFormatter, ATVNetworkStatisticsMonitor, NSMutableDictionary, LTDownloadTestConnection, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface LTITunesDownloadTestManager : BRDownloadManager <LTNetworkTestDownloadDelegate, ATVITunesMetricsUploaderConnectionDelegate> {
	NSDictionary *_uploadUserInput;	// 12 = 0xc
	NSArray *_downloadURLs;	// 16 = 0x10
	NSArray *_avDownloadURLs;	// 20 = 0x14
	NSMutableDictionary *_optionalHeadersDictionary;	// 24 = 0x18
	NSString *_speedTestGUID;	// 28 = 0x1c
	unsigned _currentNetworkDownloadDataCount;	// 32 = 0x20
	unsigned _currentNetworkAVDownloadDataCount;	// 36 = 0x24
	unsigned _currentNetworkUploadDataCount;	// 40 = 0x28
	int _sessionDownloadCapTime;	// 44 = 0x2c
	long _sessionDownloadCapBytes;	// 48 = 0x30
	unsigned _totalTestsCount;	// 52 = 0x34
	unsigned _homeShareTestURLsCount;	// 56 = 0x38
	BOOL _networkTestInProgress;	// 60 = 0x3c
	BOOL _networkDownloadInProgress;	// 61 = 0x3d
	BOOL _networkUploadInProgress;	// 62 = 0x3e
	BOOL _shouldUploadLogs;	// 63 = 0x3f
	NSMutableArray *_uploadLogData;	// 64 = 0x40
	LTDownloadTestConnection *_currentDownloadConnection;	// 68 = 0x44
	NSHTTPCookie *_downloadKeyCookie;	// 72 = 0x48
	NSDateFormatter *_dateFormat;	// 76 = 0x4c
	ATVNetworkStatisticsMonitor *_networkMonitor;	// 80 = 0x50
}
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x3d9c5; converted property
- (id)init;	// 0x3d29d
- (void).cxx_destruct;	// 0x3eb99
- (id)_avDownloads;	// 0x3fefd
- (id)_homeShareTestURLs;	// 0x40135
- (id)_httpDownloads;	// 0x3fde9
- (void)_pauseAllDownloads;	// 0x3f3d1
- (void)_resetManager;	// 0x40545
- (void)_resumeAllDownloads;	// 0x3f5a9
- (BOOL)_startNextAVDownloadTest;	// 0x3f045
- (BOOL)_startNextDownloadTest;	// 0x3ec6d
- (void)_uploadNetworkSamplingData;	// 0x3f759
- (void)cancelNetworkSpeedTest;	// 0x3e0bd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3e549
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x3e309
- (void)connectionDidFinishLoading:(id)connection;	// 0x3e6cd
- (void)dealloc;	// 0x3d155
- (id)dictionaryForDownload:(id)download;	// 0x405d9
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x405f9
- (long)downloadCapBytes;	// 0x3d80d
- (int)downloadCapTime;	// 0x3d659
- (BOOL)networkDiagnosticsAvailable;	// 0x3d491
// converted property getter: - (BOOL)networkTestInProgress;	// 0x3d9c5
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x3d9b5
- (void)setSessionDownloadCapTime:(int)time;	// 0x3d7fd
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x3d575
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3d9d5
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x3d9ed
@end

