/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class SSXPCConnection;
@protocol SSRequestDelegate, OS_dispatch_queue;

@interface SSRequest : NSObject <SSXPCCoding> {
	int _backgroundTaskIdentifier;	// 4 = 0x4
	BOOL _cancelAfterTaskExpiration;	// 8 = 0x8
	id<SSRequestDelegate> _delegate;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	SSXPCConnection *_requestConnection;	// 20 = 0x14
	SSXPCConnection *_responseConnection;	// 24 = 0x18
}
@property(assign, nonatomic) id<SSRequestDelegate> delegate;	// G=0x3129f569; S=0x3129f579; @synthesize=_delegate
@property(assign, nonatomic) BOOL shouldCancelAfterTaskExpiration;	// G=0x3129eb7d; S=0x3129eafd; 
- (id)init;	// 0x3129e765
- (void)_beginBackgroundTask;	// 0x3129f149
- (void)_endBackgroundTask;	// 0x3129f3f1
- (id)_initSSRequest;	// 0x3129e6a1
- (void)_shutdownRequest;	// 0x3129ec4d
- (void)_shutdownRequestWithMessageID:(long long)messageID;	// 0x3129f485
- (void)_startWithMessageID:(long long)messageID messageBlock:(id)block;	// 0x3129eccd
- (void)cancel;	// 0x3129e849
- (void)dealloc;	// 0x3129e775
// declared property getter: - (id)delegate;	// 0x3129f569
- (void)disconnect;	// 0x3129e8c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3129f579
// declared property setter: - (void)setShouldCancelAfterTaskExpiration:(BOOL)cancelAfterTaskExpiration;	// 0x3129eafd
// declared property getter: - (BOOL)shouldCancelAfterTaskExpiration;	// 0x3129eb7d
- (BOOL)start;	// 0x3129e949
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3129eacd
@end

