/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSString, NSDictionary;

@interface AAAuthenticationResponse : AAResponse {
	NSDictionary *_tokens;	// 16 = 0x10
	NSDictionary *_appleAccount;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x342ea4f5; 
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x342ea521; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x342ea395
// declared property getter: - (id)authToken;	// 0x342ea4f5
- (void)dealloc;	// 0x342ea495
// declared property getter: - (id)personID;	// 0x342ea521
@end

