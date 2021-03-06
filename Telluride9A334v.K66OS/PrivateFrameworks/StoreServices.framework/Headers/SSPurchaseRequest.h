/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class NSArray, NSMutableIndexSet, SSXPCConnection;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest <SSCoding> {
@private
	NSMutableIndexSet *_acknowledgedPurchases;	// 36 = 0x24
	BOOL _isBackgroundRequest;	// 40 = 0x28
	NSArray *_purchases;	// 44 = 0x2c
	SSXPCConnection *_requestConnection;	// 48 = 0x30
	SSXPCConnection *_responseConnection;	// 52 = 0x34
	BOOL _shouldValidatePurchases;	// 56 = 0x38
	BOOL _needsAuthentication;	// 57 = 0x39
}
@property(assign, nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x324d59c9; S=0x324d59d9; @synthesize=_isBackgroundRequest
@property(assign, nonatomic) id<SSPurchaseRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL needsAuthentication;	// G=0x324d59e9; S=0x324d59f9; @synthesize=_needsAuthentication
@property(readonly, assign) NSArray *purchases;	// G=0x324d4cf1; 
@property(assign, nonatomic) BOOL shouldValidatePurchases;	// G=0x324d5a09; S=0x324d5a19; @synthesize=_shouldValidatePurchases
- (id)init;	// 0x324d4791
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324d4b39
- (id)initWithPurchases:(id)purchases;	// 0x324d47a5
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324d4cb5
- (void)_purchaseFailedNotification:(id)notification;	// 0x324d5649
- (void)_purchaseFinishedNotification:(id)notification;	// 0x324d5745
- (id)_purchaseForUniqueIdentifier:(id)uniqueIdentifier;	// 0x324d584d
- (void)_sendError:(id)error forPurchase:(id)purchase;	// 0x324d5911
- (id)copyPropertyListEncoding;	// 0x324d48cd
- (void *)copyXPCEncoding;	// 0x324d4b05
- (void)dealloc;	// 0x324d4819
- (void)handleDaemonExit;	// 0x324d4d29
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x324d59c9
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324d4e69
// declared property getter: - (BOOL)needsAuthentication;	// 0x324d59e9
// declared property getter: - (id)purchases;	// 0x324d4cf1
- (void)registerForDaemonNotifications;	// 0x324d4e91
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x324d59d9
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x324d59f9
// declared property setter: - (void)setShouldValidatePurchases:(BOOL)validatePurchases;	// 0x324d5a19
// declared property getter: - (BOOL)shouldValidatePurchases;	// 0x324d5a09
- (void)startWithPurchaseBlock:(id)purchaseBlock completionBlock:(id)block;	// 0x324d4fe5
- (void)unregisterForDaemonNotifications;	// 0x324d4f49
@end

