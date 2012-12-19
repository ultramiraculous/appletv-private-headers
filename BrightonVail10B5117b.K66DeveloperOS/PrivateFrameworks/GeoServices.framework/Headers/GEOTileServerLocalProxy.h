/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOTileServerProxy.h"
#import <NSObject.h> // Unknown library

@class NSLock, GEOTileDBReader, GEOTileDBWriter, NSMutableArray, NSString, NSMapTable;
@protocol GEOTileServerProxyDelegate;

@interface GEOTileServerLocalProxy : NSObject <GEOTileServerProxy> {
	NSMutableArray *_inProgress;	// 4 = 0x4
	NSLock *_inProgressLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
	GEOTileDBWriter *_dbWriter;	// 16 = 0x10
	GEOTileDBReader *_dbReader;	// 20 = 0x14
	NSString *_cacheLocation;	// 24 = 0x18
	id<GEOTileServerProxyDelegate> _delegate;	// 28 = 0x1c
}
- (id)initWithCacheLocation:(id)cacheLocation;	// 0x34165b9d
- (id)_contextForFullList:(id)fullList;	// 0x341660e9
- (id)_contextForNetworkList:(id)networkList;	// 0x341661bd
- (void)_registerBuiltInProviders;	// 0x34165d81
- (void)beginPreloadSessionOfSize:(unsigned long long)size;	// 0x341671bd
- (void)cancelLoad:(id)load;	// 0x34166b95
- (void)closeCacheConnection;	// 0x34166041
- (id)dataForKey:(GEOTileKey *)key;	// 0x34166ff1
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x3416704d
- (void)dealloc;	// 0x34165ce1
- (void)endPreloadSession;	// 0x341671dd
- (void)flushPendingWrites;	// 0x341660c9
- (void)loadTiles:(id)tiles checkDisk:(BOOL)disk allowNetworking:(BOOL)networking requireWiFi:(BOOL)fi bundleIdentifier:(id)identifier bundleVersion:(id)version;	// 0x34166291
- (void)openCacheConnection;	// 0x34166085
- (void)registerProvider:(Class)provider;	// 0x34165e15
- (void)reportCorruptTile:(const GEOTileKey *)tile;	// 0x341670c1
- (void)setDelegate:(id)delegate;	// 0x34166031
- (void)shrinkDiskCacheToSize:(unsigned long long)size finished:(id)finished;	// 0x3416719d
- (BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;	// 0x341671fd
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key userInfo:(id)info;	// 0x34166cdd
- (void)tileRequester:(id)requester receivedError:(id)error;	// 0x34166de5
- (void)tileRequesterFinished:(id)finished;	// 0x34166ef1
@end
