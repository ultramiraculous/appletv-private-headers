/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRDownload.h"

@class NSURLConnection, NSHTTPURLResponse, NSString, NSMutableArray, NSDictionary, NSTimer;
@protocol LTNetworkTestDownloadDelegate;

__attribute__((visibility("hidden")))
@interface LTDownloadTestConnection : XXUnknownSuperclass <BRDownload> {
	double _startTime;	// 4 = 0x4
	double _receivedResponseTime;	// 12 = 0xc
	double _elapsedTime;	// 20 = 0x14
	unsigned _lastMarkedLength;	// 28 = 0x1c
	double _cachedMeasuredBandwidth;	// 32 = 0x20
	double _endTime;	// 40 = 0x28
	NSTimer *_measuringTimer;	// 48 = 0x30
	NSString *_urlString;	// 52 = 0x34
	NSDictionary *_options;	// 56 = 0x38
	NSURLConnection *_urlConnection;	// 60 = 0x3c
	unsigned _fetchedDataLength;	// 64 = 0x40
	NSHTTPURLResponse *_urlResponse;	// 68 = 0x44
	NSMutableArray *_progressArray;	// 72 = 0x48
	int _downloadState;	// 76 = 0x4c
	int _downloadContext;	// 80 = 0x50
	id<LTNetworkTestDownloadDelegate> _delegate;	// 84 = 0x54
	int _downloadCapTime;	// 88 = 0x58
	long _downloadCapBytes;	// 92 = 0x5c
}
@property(assign) id delegate;	// G=0x4211d; S=0x42109; converted property
@property(readonly, assign) int downloadState;	// G=0x42a19; converted property
@property(readonly, assign) double elapsedTime;	// G=0x420b5; converted property
@property(readonly, assign) unsigned fetchedDataLength;	// G=0x420cd; converted property
@property(readonly, retain) NSDictionary *options;	// G=0x427ed; converted property
@property(readonly, assign) double startTime;	// G=0x4209d; converted property
- (id)init;	// 0x41ee5
- (id)initWithURLString:(id)urlstring;	// 0x41f15
- (id)initWithURLString:(id)urlstring andOptions:(id)options;	// 0x41f3d
- (void).cxx_destruct;	// 0x42a91
- (unsigned long long)byteCount;	// 0x42a61
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x429a1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x428a1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x4282d
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x42a15
- (void)connectionDidFinishLoading:(id)connection;	// 0x428cd
- (id)contentType;	// 0x427a5
- (void)dealloc;	// 0x41e89
// converted property getter: - (id)delegate;	// 0x4211d
// converted property getter: - (int)downloadState;	// 0x42a19
- (int)downloadStateContext;	// 0x42a39
// converted property getter: - (double)elapsedTime;	// 0x420b5
- (unsigned)expectedContentLength;	// 0x420dd
- (unsigned long long)expectedSize;	// 0x42a49
// converted property getter: - (unsigned)fetchedDataLength;	// 0x420cd
- (void)markProgress;	// 0x424f1
- (double)measuredBytesPerSecond;	// 0x42815
// converted property getter: - (id)options;	// 0x427ed
- (id)originalURLString;	// 0x42801
- (void)pause;	// 0x42a85
- (id)progressLogs;	// 0x427c5
- (int)qualifiedDownloadState;	// 0x42a29
- (id)response;	// 0x427d9
- (void)resume;	// 0x42a89
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x42109
- (void)setDownloadCapBytes:(long)bytes;	// 0x42141
- (void)setDownloadCapTime:(int)time;	// 0x42131
- (void)setPlayable:(BOOL)playable;	// 0x42a81
- (void)startConnection;	// 0x42151
// converted property getter: - (double)startTime;	// 0x4209d
- (void)stopConnection;	// 0x4247d
- (BOOL)testContent;	// 0x42a8d
- (double)timeUntilPlayable;	// 0x42a75
@end

