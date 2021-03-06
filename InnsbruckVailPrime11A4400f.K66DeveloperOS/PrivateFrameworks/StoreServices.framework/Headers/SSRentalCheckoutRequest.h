/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
	NSNumber *_accountIdentifier;	// 28 = 0x1c
	long long _downloadIdentifier;	// 32 = 0x20
	NSNumber *_rentalKeyIdentifier;	// 40 = 0x28
	NSArray *_sinfs;	// 44 = 0x2c
	BOOL _shouldValidateRentalInfo;	// 48 = 0x30
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x327fa871; 
@property(readonly, assign) long long downloadIdentifier;	// G=0x327fa8a9; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x327fa8c1; 
@property(assign, nonatomic) BOOL shouldValidateRentalInfo;	// G=0x327fadcd; S=0x327faddd; @synthesize=_shouldValidateRentalInfo
@property(readonly, assign) NSArray *sinfs;	// G=0x327fa8f9; 
- (id)init;	// 0x327fa541
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x327fa555
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x327fa68d
- (id)initWithSinfs:(id)sinfs;	// 0x327fa731
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x327facad
// declared property getter: - (id)accountIdentifier;	// 0x327fa871
- (id)copyXPCEncoding;	// 0x327fabf5
- (void)dealloc;	// 0x327fa7f9
// declared property getter: - (long long)downloadIdentifier;	// 0x327fa8a9
// declared property getter: - (id)rentalKeyIdentifier;	// 0x327fa8c1
// declared property setter: - (void)setShouldValidateRentalInfo:(BOOL)validateRentalInfo;	// 0x327faddd
// declared property getter: - (BOOL)shouldValidateRentalInfo;	// 0x327fadcd
// declared property getter: - (id)sinfs;	// 0x327fa8f9
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x327fa931
- (void)startWithConnectionResponseBlock:(id)connectionResponseBlock;	// 0x327fa9a9
@end

