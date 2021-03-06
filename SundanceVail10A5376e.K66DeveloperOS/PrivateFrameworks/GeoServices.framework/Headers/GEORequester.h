/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequester.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSThread, NSString;

@interface GEORequester : PBRequester {
	BOOL _disableReplay;	// 111 = 0x6f
	NSThread *_thread;	// 112 = 0x70
	BOOL _usePersistentConnection;	// 116 = 0x74
	BOOL _useBackgroundConnection;	// 117 = 0x75
	NSString *_debugRequestName;	// 120 = 0x78
}
@property(retain, nonatomic) NSString *debugRequestName;	// G=0x37a3e659; S=0x379fb2d9; @synthesize=_debugRequestName
@property(assign) BOOL disableReplay;	// G=0x37a3e669; S=0x37a3e681; @synthesize=_disableReplay
+ (void)replayRequests;	// 0x37a3e2f9
+ (void)stopAllRequests;	// 0x379e4f0d
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x37a3e339
- (id)initWithURL:(id)url andDelegate:(id)delegate usePersistentConnection:(BOOL)connection;	// 0x37a02dd1
- (id)initWithURL:(id)url andDelegate:(id)delegate usePersistentConnection:(BOOL)connection useBackgroundConnection:(BOOL)connection4;	// 0x379fb0d9
- (void)_applicationDidStopAllRequests:(id)_application;	// 0x37a3e361
- (void)_applicationWantsToReplayRequests:(id)replayRequests;	// 0x37a3e3dd
- (void)_handleResumeOnThread;	// 0x37a3e451
- (void)_handleSuspendOnThread;	// 0x37a3e39d
- (void)dealloc;	// 0x379fdfc1
// declared property getter: - (id)debugRequestName;	// 0x37a3e659
// declared property getter: - (BOOL)disableReplay;	// 0x37a3e669
- (id)logRequestToFile;	// 0x379fc985
- (id)logResponseToFile;	// 0x379fd525
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x379fcabd
- (id)newConnectionWithCFURLRequest:(CFURLRequestRef)cfurlrequest delegate:(id)delegate;	// 0x379fcd59
- (id)persistentConnectionSession;	// 0x379fcb21
// declared property setter: - (void)setDebugRequestName:(id)name;	// 0x379fb2d9
// declared property setter: - (void)setDisableReplay:(BOOL)replay;	// 0x37a3e681
- (void)start;	// 0x379fb2e9
@end

