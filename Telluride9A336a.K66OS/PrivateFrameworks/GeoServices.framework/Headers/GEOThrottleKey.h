/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSURL;

__attribute__((visibility("hidden")))
@interface GEOThrottleKey : NSObject {
	NSURL *_serverURL;	// 4 = 0x4
	unsigned _requestType;	// 8 = 0x8
}
- (id)initWithRequestType:(unsigned)requestType serverURL:(id)url;	// 0x367143b1
- (void)dealloc;	// 0x36714419
- (unsigned)hash;	// 0x367144b1
- (BOOL)isEqual:(id)equal;	// 0x36714465
@end

