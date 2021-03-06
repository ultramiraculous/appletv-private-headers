/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <Foundation/NSURLConnection.h>


@interface NSURLConnection (GEOExtras)
+ (void)_geo_sendAsynchronousRequest:(id)request connectionProperties:(id)properties completionHandler:(id)handler;	// 0x30f6a999
+ (void)_geo_sendAsynchronousRequest:(id)request queue:(id)queue connectionProperties:(id)properties completionHandler:(id)handler;	// 0x30f6ab09
+ (void)_geo_sendAttributedAsynchronousRequest:(id)request queue:(id)queue completionHandler:(id)handler;	// 0x30f6af6d
+ (id)_geo_sendAttributedSynchronousRequest:(id)request returningResponse:(id *)response error:(id *)error;	// 0x30f6aff1
+ (id)_geo_sendSynchronousRequest:(id)request connectionProperties:(id)properties returningResponse:(id *)response error:(id *)error;	// 0x30f6ac95
- (id)_geo_initWithAttributedRequest:(id)attributedRequest delegate:(id)delegate startImmediately:(BOOL)immediately;	// 0x30f6b075
@end

