/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSArray;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest <SSXPCCoding> {
@private
	BOOL _isBackgroundRequest;	// 28 = 0x1c
	NSArray *_purchases;	// 32 = 0x20
	BOOL _shouldValidatePurchases;	// 36 = 0x24
	BOOL _needsAuthentication;	// 37 = 0x25
}
@property(assign, nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x34e41089; S=0x34e41099; @synthesize=_isBackgroundRequest
@property(assign, nonatomic) id<SSPurchaseRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL needsAuthentication;	// G=0x34e410a9; S=0x34e410b9; @synthesize=_needsAuthentication
@property(readonly, assign) NSArray *purchases;	// G=0x34e40465; 
@property(assign, nonatomic) BOOL shouldValidatePurchases;	// G=0x34e410c9; S=0x34e410d9; @synthesize=_shouldValidatePurchases
- (id)init;	// 0x34e40339
- (id)initWithPurchases:(id)purchases;	// 0x34e4034d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e40dcd
- (id)_purchaseForUniqueIdentifier:(id)uniqueIdentifier;	// 0x34e40fa1
- (id)copyXPCEncoding;	// 0x34e40bf1
- (void)dealloc;	// 0x34e403c1
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x34e41089
// declared property getter: - (BOOL)needsAuthentication;	// 0x34e410a9
// declared property getter: - (id)purchases;	// 0x34e40465
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x34e41099
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x34e410b9
// declared property setter: - (void)setShouldValidatePurchases:(BOOL)validatePurchases;	// 0x34e410d9
// declared property getter: - (BOOL)shouldValidatePurchases;	// 0x34e410c9
- (BOOL)start;	// 0x34e4088d
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x34e40b7d
- (void)startWithPurchaseBlock:(id)purchaseBlock completionBlock:(id)block;	// 0x34e4049d
@end
