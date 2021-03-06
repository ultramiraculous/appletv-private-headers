/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAAddEmailUIRequest : AARequest {
	AAAccount *_account;	// 16 = 0x10
}
@property(retain, nonatomic) AAAccount *account;	// G=0x33c63f45; S=0x33c63f55; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x33c63b71
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x33c63bd1
- (void).cxx_destruct;	// 0x33c63f7d
// declared property getter: - (id)account;	// 0x33c63f45
// declared property setter: - (void)setAccount:(id)account;	// 0x33c63f55
- (id)urlRequest;	// 0x33c63c99
- (id)urlString;	// 0x33c63c45
@end

