/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray;
@protocol ATVAirTunesManagerDelegate;

@interface ATVAirTunesManager : BRSingleton {
@private
	id<ATVAirTunesManagerDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_speakersPendingConnection;	// 8 = 0x8
	NSMutableArray *_speakersPendingDisconnection;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x3393c8a5
+ (id)singleton;	// 0x3393c895
- (id)init;	// 0x3393c8b5
- (void)_connectionFailedToAuth:(id)auth;	// 0x3393d37d
- (void)_connectionFinished:(id)finished;	// 0x3393d33d
- (void)_connectionStarted:(id)started;	// 0x3393d211
- (id)_connectionStatus;	// 0x3393d169
- (void)_retryConnection:(id)connection;	// 0x3393d45d
- (id)_supportedMediaTypes;	// 0x3393d071
- (BOOL)airTunesAvailableForAsset:(id)asset;	// 0x3393cad1
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x3393cee9
- (void)connectSpeaker:(id)speaker withPassword:(id)password saved:(BOOL)saved andDisconnectOthers:(BOOL)others;	// 0x3393cd05
- (void)connectionFinishedForSpeaker:(id)speaker;	// 0x3393cdf1
- (void)connectionStartedForSpeaker:(id)speaker;	// 0x3393cda9
- (void)dealloc;	// 0x3393c9ed
- (void)disconnectSpeaker:(id)speaker;	// 0x3393cd69
- (void)disconnectionFinishedForSpeaker:(id)speaker;	// 0x3393ce81
- (void)disconnectionStartedForSpeaker:(id)speaker;	// 0x3393ce39
- (int)numRemoteSpeakers;	// 0x3393cb3d
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x3393cb5d
- (id)remoteSpeakerInfoForAllConnectedSpeakers;	// 0x3393cc01
- (id)remoteSpeakerInfoForSpeakerID:(id)speakerID;	// 0x3393cb7d
- (void)setAirTunesManagerDelegate:(id)delegate;	// 0x3393ca91
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x3393cf75
- (void)setControlEnabledFromRemoteSpeakers:(BOOL)remoteSpeakers;	// 0x3393cd89
- (id)speakersWithConnectionsPending;	// 0x3393cec9
- (id)speakersWithDisconnectionsPending;	// 0x3393ced9
@end
