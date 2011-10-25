/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library
#import "GEOSupportedTileSetsServerProxy.h"

@class NSMutableData, NSURLConnection, NSString;
@protocol GEOSupportedTileSetsServerProxyDelegate;

@interface GEOSupportedTileSetsServerLocalProxy : NSObject <GEOSupportedTileSetsServerProxy, NSURLConnectionDelegate> {
	id<GEOSupportedTileSetsServerProxyDelegate> _delegate;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_responseData;	// 12 = 0xc
	NSString *_responseETag;	// 16 = 0x10
}
@property(assign, nonatomic) id<GEOSupportedTileSetsServerProxyDelegate> delegate;	// G=0x36726695; S=0x367266a5; @synthesize=_delegate
- (void)_cancelConnection;	// 0x36725d21
- (void)_cleanupConnection;	// 0x36725d5d
- (void)_connectionDidFail;	// 0x36725dc9
- (void)_writeDocumentToDisk:(id)disk;	// 0x36725e11
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x36726665
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x36726431
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x367261ed
- (void)connectionDidFinishLoading:(id)connection;	// 0x36726475
- (void)dealloc;	// 0x36725ad5
// declared property getter: - (id)delegate;	// 0x36726695
- (id)documentDataFromDisk;	// 0x36725b61
- (id)documentURL;	// 0x36725b15
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x36725ecd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x367266a5
- (void)updateAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x36725f2d
- (void)updateDocument;	// 0x36725b8d
@end

