/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRAuthenticationManager.h> // Unknown library


@interface ATVFlagstaffAuthenticationManager : BRAuthenticationManager {
}
@property(retain) id preferredAccount;	// G=0x3372a909; S=0x3372a885; converted property
- (id)authenticationControllerWithAuthenticator:(id)authenticator;	// 0x3372a955
- (id)basicAccount;	// 0x3372a811
- (void)checkAuthenticator:(id *)authenticator forAccount:(id)account scope:(unsigned)scope;	// 0x3372a7b9
// converted property getter: - (id)preferredAccount;	// 0x3372a909
// converted property setter: - (void)setPreferredAccount:(id)account;	// 0x3372a885
@end
