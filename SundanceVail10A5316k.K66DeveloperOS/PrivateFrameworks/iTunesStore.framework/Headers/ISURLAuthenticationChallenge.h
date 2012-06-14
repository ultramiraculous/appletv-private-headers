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
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge;	// 0x33530605
- (void)cancelAuthentication;	// 0x335307c1
- (void)dealloc;	// 0x33530771
- (int)failureCount;	// 0x335307fd
- (BOOL)hasPassword;	// 0x3353081d
- (id)password;	// 0x33530851
- (id)sender;	// 0x33530889
- (void)useCredential:(id)credential;	// 0x335308e1
- (id)user;	// 0x335308a9
@end
