/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class ACAccount;

@interface AASetupAssistantUpgradeStatusRequest : AARequest {
	ACAccount *_account;	// 24 = 0x18
}
+ (Class)responseClass;	// 0x300143c5
- (id)initWithAccount:(id)account;	// 0x300143e1
- (void).cxx_destruct;	// 0x3001467d
- (id)urlRequest;	// 0x30014495
- (id)urlString;	// 0x30014441
@end
