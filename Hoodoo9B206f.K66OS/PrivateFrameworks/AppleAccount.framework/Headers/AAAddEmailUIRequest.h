/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAAddEmailUIRequest : AARequest {
@private
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x359405c1; S=0x359405d1; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x359402e5
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x3594032d
// declared property getter: - (id)account;	// 0x359405c1
- (void)dealloc;	// 0x35940375
// declared property setter: - (void)setAccount:(id)account;	// 0x359405d1
- (id)urlRequest;	// 0x359403f5
- (id)urlString;	// 0x359403c1
@end

