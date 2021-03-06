/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVHSRequest, NSObject, ATVHSConnectionStream;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVHSRequestContext : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue> *_completionQueue;	// 4 = 0x4
	id _completionHandler;	// 8 = 0x8
	ATVHSRequest *_hsRequest;	// 12 = 0xc
	CFReadStreamRef _stream;	// 16 = 0x10
	CFRunLoopTimerRef _timer;	// 20 = 0x14
	double _timeSinceLastBytesReceived;	// 24 = 0x18
	ATVHSConnectionStream *_connectionStream;	// 32 = 0x20
}
@property(assign, nonatomic) ATVHSConnectionStream *connectionStream;	// G=0xd8dcd; S=0xd8ddd; @synthesize=_connectionStream
@property(retain) ATVHSRequest *hsRequest;	// G=0xd8d5d; S=0xd8d71; @synthesize=_hsRequest
@property(assign, nonatomic) CFReadStreamRef stream;	// G=0xd8d81; S=0xd8bdd; @synthesize=_stream
@property(assign, nonatomic) double timeSinceLastBytesReceived;	// G=0xd8da1; S=0xd8db9; @synthesize=_timeSinceLastBytesReceived
@property(assign, nonatomic) CFRunLoopTimerRef timer;	// G=0xd8d91; S=0xd8c1d; @synthesize=_timer
- (id)initWithHSRequest:(id)hsrequest withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xd8a95
// declared property getter: - (id)connectionStream;	// 0xd8dcd
- (void)dealloc;	// 0xd8b21
- (id)description;	// 0xd8bbd
// declared property getter: - (id)hsRequest;	// 0xd8d5d
- (void)sendCallBackWithData:(id)data httpStatus:(long)status contentType:(id)type;	// 0xd8c5d
// declared property setter: - (void)setConnectionStream:(id)stream;	// 0xd8ddd
// declared property setter: - (void)setHsRequest:(id)request;	// 0xd8d71
// declared property setter: - (void)setStream:(CFReadStreamRef)stream;	// 0xd8bdd
// declared property setter: - (void)setTimeSinceLastBytesReceived:(double)received;	// 0xd8db9
// declared property setter: - (void)setTimer:(CFRunLoopTimerRef)timer;	// 0xd8c1d
// declared property getter: - (CFReadStreamRef)stream;	// 0xd8d81
// declared property getter: - (double)timeSinceLastBytesReceived;	// 0xd8da1
// declared property getter: - (CFRunLoopTimerRef)timer;	// 0xd8d91
@end

