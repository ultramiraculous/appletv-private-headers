/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"
#import "GEOTileServerProxy.h"

@class NSMutableArray, NSMapTable, GEOTileDBReader, NSLock, GEOTileDBWriter, NSString;
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
- (id)initWithCacheLocation:(id)cacheLocation;	// 0x32c6af39
- (id)_contextForFullList:(id)fullList;	// 0x32c6b2f5
- (id)_contextForNetworkList:(id)networkList;	// 0x32c6b3a5
- (void)_registerBuiltInProviders;	// 0x32c6b111
- (void)cancelLoad:(id)load;	// 0x32c6bd55
- (void)closeCacheConnection;	// 0x32c6b255
- (id)dataForKey:(GEOTileKey *)key;	// 0x32c6c181
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x32c6c1dd
- (void)dealloc;	// 0x32c6b075
- (void)flushPendingWrites;	// 0x32c6b2d5
- (id)hostnameForProviderID:(unsigned short)providerID;	// 0x32c6b1a9
- (void)loadTiles:(id)tiles checkDisk:(BOOL)disk allowNetworking:(BOOL)networking bundleIdentifier:(id)identifier bundleVersion:(id)version;	// 0x32c6b455
- (void)openCacheConnection;	// 0x32c6b295
- (void)registerProvider:(Class)provider;	// 0x32c6b169
- (void)setDelegate:(id)delegate;	// 0x32c6b245
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key;	// 0x32c6be9d
- (void)tileRequester:(id)requester receivedError:(id)error;	// 0x32c6bf81
- (void)tileRequesterFinished:(id)finished;	// 0x32c6c085
@end
