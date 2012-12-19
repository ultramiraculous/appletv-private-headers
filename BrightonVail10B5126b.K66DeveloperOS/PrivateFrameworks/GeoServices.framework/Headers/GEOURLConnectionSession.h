/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOURLConnectionSession : NSObject {
	CFURLConnectionSessionRef _connectionSession;	// 4 = 0x4
	NSMapTable *_connectionDelegates;	// 8 = 0x8
	NSLock *_delegateMapLock;	// 12 = 0xc
}
- (id)initPersistentSessionWithTimeout:(int)timeout loadWidth:(int)width;	// 0x33f6ceb1
- (void)_createConnectionSessionWithPurgeTimeout:(int)purgeTimeout loadWidth:(int)width;	// 0x33f6cf79
- (id)_delegateForConnection:(CFURLConnectionRef)connection;	// 0x33f6d6dd
- (void)dealloc;	// 0x33fdaa89
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x33f6d075
- (CFURLConnectionRef)newCFURLConnectionWithRequest:(CFURLRequestRef)request delegate:(id)delegate;	// 0x33f6d1c1
- (void)removeDelegateForConnection:(CFURLConnectionRef)connection;	// 0x33f6e609
@end
