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
@private
	int _backgroundTaskIdentifier;	// 4 = 0x4
	BOOL _cancelAfterTaskExpiration;	// 8 = 0x8
	id<SSRequestDelegate> _delegate;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	SSXPCConnection *_requestConnection;	// 20 = 0x14
	SSXPCConnection *_responseConnection;	// 24 = 0x18
}
@property(assign, nonatomic) id<SSRequestDelegate> delegate;	// G=0x34e40319; S=0x34e40329; @synthesize=_delegate
@property(assign, nonatomic) BOOL shouldCancelAfterTaskExpiration;	// G=0x34e3f92d; S=0x34e3f8ad; 
- (id)init;	// 0x34e3f515
- (void)_beginBackgroundTask;	// 0x34e3fef9
- (void)_endBackgroundTask;	// 0x34e401a1
- (id)_initSSRequest;	// 0x34e3f451
- (void)_shutdownRequest;	// 0x34e3f9fd
- (void)_shutdownRequestWithMessageID:(long long)messageID;	// 0x34e40235
- (void)_startWithMessageID:(long long)messageID messageBlock:(id)block;	// 0x34e3fa7d
- (void)cancel;	// 0x34e3f5f9
- (void)dealloc;	// 0x34e3f525
// declared property getter: - (id)delegate;	// 0x34e40319
- (void)disconnect;	// 0x34e3f679
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34e40329
// declared property setter: - (void)setShouldCancelAfterTaskExpiration:(BOOL)cancelAfterTaskExpiration;	// 0x34e3f8ad
// declared property getter: - (BOOL)shouldCancelAfterTaskExpiration;	// 0x34e3f92d
- (BOOL)start;	// 0x34e3f6f9
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x34e3f87d
@end

