/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
	NSURLAuthenticationChallenge *_challenge;	// 12 = 0xc
}
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge;	// 0x3092be8d
- (void)cancelAuthentication;	// 0x3092c049
- (void)dealloc;	// 0x3092bff9
- (int)failureCount;	// 0x3092c085
- (BOOL)hasPassword;	// 0x3092c0a5
- (id)password;	// 0x3092c0d9
- (id)sender;	// 0x3092c111
- (void)useCredential:(id)credential;	// 0x3092c169
- (id)user;	// 0x3092c131
@end

