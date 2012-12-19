/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class GEOURLConnectionSession;

@interface GEOURLConnection : NSObject {
	CFURLConnectionRef _cfConnection;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	GEOURLConnectionSession *_connectionSession;	// 12 = 0xc
}
- (id)initWithCFRequest:(CFURLRequestRef)cfrequest delegate:(id)delegate usingSession:(id)session;	// 0x33f6d121
- (void)cancel;	// 0x33f742f5
- (void)connectionDidFailWithError:(id)connection;	// 0x33fdaa49
- (void)connectionDidFinishLoading;	// 0x33f6d821
- (void)connectionDidReceiveData:(id)connection;	// 0x33f6d7e1
- (void)connectionDidReceiveResponse:(CFURLResponseRef)connection;	// 0x33f6d73d
- (void)connectionDidTerminate;	// 0x33f6e5dd
- (void)dealloc;	// 0x33f6e665
@end
