/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticator.h"


__attribute__((visibility("hidden")))
@interface MEITunesHomeShareAuthenticator : ATVSharedCredentialsAuthenticator {
}
- (void)_homeShareAuthenticationFinished:(id)finished;	// 0x671f1
- (id)_makeAuthenticationController;	// 0x66e89
- (void)_sendAuthenticationRequest;	// 0x66f81
- (void)dealloc;	// 0x66c61
- (BOOL)promptsForExistingAccount;	// 0x671ed
- (void)setSharedCredentials;	// 0x66d95
- (BOOL)shouldResetPasswordOnAuthenticationError:(id)error;	// 0x67121
@end
