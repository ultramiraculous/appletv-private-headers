/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSPlayInfoRequestContext, SSPlayInfoResponse;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
	SSPlayInfoRequestContext *_context;	// 28 = 0x1c
	SSPlayInfoResponse *_response;	// 32 = 0x20
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSPlayInfoRequestContext *playInfoContext;	// G=0x354e17a5; 
@property(readonly, assign) SSPlayInfoResponse *playInfoResponse;	// G=0x354e17dd; 
- (id)init;	// 0x354e1669
- (id)initWithPlayInfoContext:(id)playInfoContext;	// 0x354e167d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354e216d
- (id)copyXPCEncoding;	// 0x354e2079
- (void)dealloc;	// 0x354e1741
// declared property getter: - (id)playInfoContext;	// 0x354e17a5
// declared property getter: - (id)playInfoResponse;	// 0x354e17dd
- (BOOL)start;	// 0x354e1dd5
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354e2001
- (void)startWithPlayInfoResponseBlock:(id)playInfoResponseBlock;	// 0x354e19a1
@end
