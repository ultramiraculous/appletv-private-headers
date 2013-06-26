/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import "TRTCPConnectionStreamDelegate.h"
#import </libobjc.A.h>

@class NSArray, TRTCPConnectionStream, NSString;
@protocol OS_dispatch_queue, TRTCPConnectionDelegate, OS_dispatch_source;

@interface TRTCPConnection : NSObject <TRTCPConnectionStreamDelegate> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	BOOL _closed;	// 8 = 0x8
	TRTCPConnectionStream *_connectionStream;	// 12 = 0xc
	id<TRTCPConnectionDelegate> _delegate;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 20 = 0x14
	NSString *_deviceIdentifier;	// 24 = 0x18
	NSObject<OS_dispatch_source> *_keepAliveTimer;	// 28 = 0x1c
	NSArray *_relevantPacketEventClasses;	// 32 = 0x20
	int _uniqueID;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) id<TRTCPConnectionDelegate> delegate;	// G=0x32c1e499; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;	// G=0x32c1e5ad; 
@property(readonly, assign, nonatomic) int uniqueID;	// G=0x32c1f551; @synthesize=_uniqueID
- (void).cxx_destruct;	// 0x32c1f561
- (void)_handleReceivedPacketEvent:(id)event;	// 0x32c1ecb1
- (id)_initWithUniqueID:(int)uniqueID connectionStream:(id)stream;	// 0x32c1e111
- (void)_performNextRead;	// 0x32c1ee8d
- (void)close;	// 0x32c1e7dd
- (void)connectionStreamDidClose:(id)connectionStream;	// 0x32c1e489
- (void)dealloc;	// 0x32c1e409
// declared property getter: - (id)delegate;	// 0x32c1e499
// declared property getter: - (id)delegateQueue;	// 0x32c1e5ad
- (void)sendPacketEvent:(id)event withCompletionHandler:(id)completionHandler;	// 0x32c1e9f9
- (void)setDelegate:(id)delegate delegateQueue:(id)queue;	// 0x32c1e6bd
// declared property getter: - (int)uniqueID;	// 0x32c1f551
@end
