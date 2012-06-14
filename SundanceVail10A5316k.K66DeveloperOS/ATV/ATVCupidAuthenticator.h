/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticator.h"

@class AAAccount, NSString;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticator : ATVSharedCredentialsAuthenticator {
	AAAccount *_authenticatingAppleAccount;	// 12 = 0xc
}
@property(readonly, assign) AAAccount *appleAccount;	// G=0xe35f9; 
@property(readonly, assign) NSString *basePath;	// G=0xe359d; 
- (void)_authCompletionHandler:(BOOL)handler error:(id)error callbackType:(int)type;	// 0xe36d9
- (id)_makeAuthenticationController;	// 0xe32bd
- (void)_sendAuthenticationRequest;	// 0xe3335
// declared property getter: - (id)appleAccount;	// 0xe35f9
// declared property getter: - (id)basePath;	// 0xe359d
- (void)dealloc;	// 0xe3271
- (BOOL)requiresPassword:(id *)password;	// 0xe3621
@end

