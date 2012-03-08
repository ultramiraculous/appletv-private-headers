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
@property(assign, nonatomic) id<GEOSupportedTileSetsServerProxyDelegate> delegate;	// G=0x32d0955d; S=0x32d0956d; @synthesize=_delegate
- (void)_cancelConnection;	// 0x32d08be9
- (void)_cleanupConnection;	// 0x32d08c25
- (void)_connectionDidFail;	// 0x32d08c91
- (void)_writeDocumentToDisk:(id)disk;	// 0x32d08cd9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32d0952d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x32d092f9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x32d090b5
- (void)connectionDidFinishLoading:(id)connection;	// 0x32d0933d
- (void)dealloc;	// 0x32d0899d
// declared property getter: - (id)delegate;	// 0x32d0955d
- (id)documentDataFromDisk;	// 0x32d08a29
- (id)documentURL;	// 0x32d089dd
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x32d08d95
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d0956d
- (void)updateAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x32d08df5
- (void)updateDocument;	// 0x32d08a55
@end
