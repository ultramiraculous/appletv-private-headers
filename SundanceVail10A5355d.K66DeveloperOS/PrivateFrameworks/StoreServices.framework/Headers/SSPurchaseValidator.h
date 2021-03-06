/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSPurchaseValidationContext;

@interface SSPurchaseValidator : NSObject {
	SSPurchaseValidationContext *_context;	// 4 = 0x4
}
@property(readonly, assign) SSPurchaseValidationContext *purchaseValidationContext;	// G=0x3191b66d; 
- (id)init;	// 0x3191b539
- (id)initWithPurchaseValidationContext:(id)purchaseValidationContext;	// 0x3191b54d
- (BOOL)_checkDiskSpaceForPurchases:(id)purchases response:(id)response;	// 0x3191b89d
- (BOOL)_checkNetworkConstraintsForPurchases:(id)purchases response:(id)response;	// 0x3191bc8d
- (BOOL)_checkSoftwareCapabilitiesForPurchase:(id)purchase response:(id)response;	// 0x3191bf15
- (BOOL)_checkSystemVersionForPurchase:(id)purchase response:(id)response;	// 0x3191bfc5
- (void)dealloc;	// 0x3191b621
// declared property getter: - (id)purchaseValidationContext;	// 0x3191b66d
- (id)validatePurchases:(id)purchases;	// 0x3191b6a5
@end

