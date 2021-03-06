/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOVoltaireMultiTileDownloaderDelegate.h"
#import "GEOTileRequesterDelegate.h"
#import "GEOTileRequester.h"
#import "GeoServices-Structs.h"

@class NSMutableArray, GEOVoltaireSimpleTileRequester, NSThread, NSTimer;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireMultiTileDownloaderDelegate, GEOTileRequesterDelegate> {
	NSMutableArray *_activeDownloads;	// 28 = 0x1c
	NSThread *_startThread;	// 32 = 0x20
	NSTimer *_activeTileGroupTimeoutTimer;	// 36 = 0x24
	NSMutableArray *_errors;	// 40 = 0x28
	GEOVoltaireSimpleTileRequester *_simpleRequester;	// 44 = 0x2c
}
+ (XXStruct_nbUehC *)expiringTilesets;	// 0x302749d5
+ (unsigned)expiringTilesetsCount;	// 0x302749d1
+ (Class)multiDownloaderClass;	// 0x30274b8d
+ (Class)simpleRequesterClass;	// 0x30274b71
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;	// 0x30274aad
+ (unsigned char)tileProviderIdentifier;	// 0x302749a9
- (void)_didReceiveActiveTileGroup:(id)group;	// 0x30274fa1
- (void)_failedToReceiveActiveTileGroup:(id)receiveActiveTileGroup;	// 0x30274e89
- (void)_startWithTileKeys:(id)tileKeys;	// 0x30275085
- (void)cancel;	// 0x30275bc9
- (void)cleanup;	// 0x30275b4d
- (void)dealloc;	// 0x302748c1
- (id)multiTileURLStringForTileKey:(GEOTileKey *)tileKey useStatusCodes:(BOOL *)codes;	// 0x30275049
- (void)start;	// 0x30274ba9
- (void)tileDownload:(id)download didFailWithError:(id)error;	// 0x30276175
- (void)tileDownload:(id)download didReceiveData:(id)data edition:(unsigned)edition forKey:(GEOTileKey)key;	// 0x30276031
- (void)tileDownloadFinished:(id)finished;	// 0x30276139
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key userInfo:(id)info;	// 0x302761f9
- (void)tileRequester:(id)requester receivedError:(id)error;	// 0x30276255
- (void)tileRequesterFinished:(id)finished;	// 0x302762d5
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x302749ad
- (void)tryFinish;	// 0x30275ce9
@end

