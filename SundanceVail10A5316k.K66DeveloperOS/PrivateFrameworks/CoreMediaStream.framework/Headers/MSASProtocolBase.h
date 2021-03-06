/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSURLConnection, NSMutableData, NSURL, NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MSASProtocolBase : NSObject <NSURLConnectionDelegate> {
@private
	NSURLConnection *_connection;	// 4 = 0x4
	id _didReceiveResponseBlock;	// 8 = 0x8
	id _didFinishBlock;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;	// 20 = 0x14
	NSObject<OS_dispatch_group> *_pendingConnectionsGroup;	// 24 = 0x18
	NSString *_personID;	// 28 = 0x1c
	NSURL *_baseURL;	// 32 = 0x20
	NSString *_serverSideConfigVersion;	// 36 = 0x24
}
@property(retain, nonatomic) NSURL *baseURL;	// G=0x339cdd75; S=0x339cdd85; @synthesize=_baseURL
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x339cdd65; @synthesize=_personID
@property(retain, nonatomic) NSString *serverSideConfigVersion;	// G=0x339cddad; S=0x339cddbd; @synthesize=_serverSideConfigVersion
- (id)initWithPersonID:(id)personID;	// 0x339cc3d9
- (void).cxx_destruct;	// 0x339cdde5
- (void)_didFinishError:(id)error data:(id)data;	// 0x339cd739
// declared property getter: - (id)baseURL;	// 0x339cdd75
- (id)basicDidReceiveResponseBlock;	// 0x339cd075
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x339cda05
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x339cdc41
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x339cda19
- (void)connectionDidFinishLoading:(id)connection;	// 0x339cd8d9
- (void)dealloc;	// 0x339cc4e1
// declared property getter: - (id)personID;	// 0x339cdd65
- (void)sendURLRequest:(id)request bodyObj:(id)obj finishBlock:(id)block;	// 0x339cd32d
- (void)sendURLRequest:(id)request bodyObj:(id)obj responseBlock:(id)block finishBlock:(id)block4;	// 0x339cc635
- (void)sendURLRequest:(id)request method:(id)method bodyObj:(id)obj responseBlock:(id)block finishBlock:(id)block5;	// 0x339cc669
// declared property getter: - (id)serverSideConfigVersion;	// 0x339cddad
// declared property setter: - (void)setBaseURL:(id)url;	// 0x339cdd85
// declared property setter: - (void)setServerSideConfigVersion:(id)version;	// 0x339cddbd
- (id)stopHandlerBlockWithError:(id)error;	// 0x339cc53d
@end

