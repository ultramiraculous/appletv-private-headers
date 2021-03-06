/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
	SSSoftwareUpdatesContext *_context;	// 28 = 0x1c
}
@property(assign, nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x356a6c59; 
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x356a693d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356a6f15
- (id)copyXPCEncoding;	// 0x356a6ee1
- (void)dealloc;	// 0x356a6991
- (BOOL)start;	// 0x356a6c91
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x356a6e69
- (void)startWithUpdatesResponseBlock:(id)updatesResponseBlock;	// 0x356a69dd
// declared property getter: - (id)updateQueueContext;	// 0x356a6c59
@end

