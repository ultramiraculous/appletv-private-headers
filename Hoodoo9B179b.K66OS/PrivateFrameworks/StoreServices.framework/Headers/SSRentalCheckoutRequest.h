/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class NSArray, NSNumber;

@interface SSRentalCheckoutRequest : SSRequest <SSCoding> {
@private
	NSNumber *_accountIdentifier;	// 36 = 0x24
	long long _downloadIdentifier;	// 40 = 0x28
	NSNumber *_rentalKeyIdentifier;	// 48 = 0x30
	NSArray *_sinfs;	// 52 = 0x34
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x33c88f35; 
@property(readonly, assign) long long downloadIdentifier;	// G=0x33c88f6d; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x33c88f85; 
@property(readonly, assign) NSArray *sinfs;	// G=0x33c88fbd; 
- (id)init;	// 0x33c88a09
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x33c88a1d
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x33c88b41
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33c88dfd
- (id)initWithSinfs:(id)sinfs;	// 0x33c88bd5
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x33c88ef9
// declared property getter: - (id)accountIdentifier;	// 0x33c88f35
- (id)copyPropertyListEncoding;	// 0x33c88cfd
- (void *)copyXPCEncoding;	// 0x33c88dc9
- (void)dealloc;	// 0x33c88c89
// declared property getter: - (long long)downloadIdentifier;	// 0x33c88f6d
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x33c88ff5
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x33c89051
// declared property getter: - (id)rentalKeyIdentifier;	// 0x33c88f85
// declared property getter: - (id)sinfs;	// 0x33c88fbd
@end
