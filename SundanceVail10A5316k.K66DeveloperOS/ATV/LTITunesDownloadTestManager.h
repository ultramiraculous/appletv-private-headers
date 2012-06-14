/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDownloadManager.h"
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"

@class NSArray, NSMutableArray, NSDictionary, ATVNetworkStatisticsMonitor, NSHTTPCookie, NSDateFormatter, NSMutableDictionary, LTDownloadTestConnection, NSString;

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
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x3d3f1; converted property
- (id)init;	// 0x3ccc9
- (void).cxx_destruct;	// 0x3e5c1
- (id)_avDownloads;	// 0x3f925
- (id)_homeShareTestURLs;	// 0x3fb5d
- (id)_httpDownloads;	// 0x3f811
- (void)_pauseAllDownloads;	// 0x3edf9
- (void)_resetManager;	// 0x3ff6d
- (void)_resumeAllDownloads;	// 0x3efd1
- (BOOL)_startNextAVDownloadTest;	// 0x3ea6d
- (BOOL)_startNextDownloadTest;	// 0x3e695
- (void)_uploadNetworkSamplingData;	// 0x3f181
- (void)cancelNetworkSpeedTest;	// 0x3dae5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3df71
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x3dd31
- (void)connectionDidFinishLoading:(id)connection;	// 0x3e0f5
- (void)dealloc;	// 0x3cb81
- (id)dictionaryForDownload:(id)download;	// 0x40001
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x40021
- (long)downloadCapBytes;	// 0x3d239
- (int)downloadCapTime;	// 0x3d085
- (BOOL)networkDiagnosticsAvailable;	// 0x3cebd
// converted property getter: - (BOOL)networkTestInProgress;	// 0x3d3f1
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x3d3e1
- (void)setSessionDownloadCapTime:(int)time;	// 0x3d229
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x3cfa1
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3d401
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x3d419
@end

