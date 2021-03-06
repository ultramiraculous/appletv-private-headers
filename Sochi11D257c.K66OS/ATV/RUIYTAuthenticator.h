/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "YTUserProfileRequestDelegate.h"
#import "BRUserPasswordAuthenticator.h"

@class YTUserProfileRequest, YTAuthenticator;

__attribute__((visibility("hidden")))
@interface RUIYTAuthenticator : BRUserPasswordAuthenticator <YTUserProfileRequestDelegate> {
	YTAuthenticator *_authenticator;	// 12 = 0xc
	YTUserProfileRequest *__userProfileRequest;	// 16 = 0x10
}
@property(retain, nonatomic) YTUserProfileRequest *_userProfileRequest;	// G=0x29d201; S=0x29d211; @synthesize=__userProfileRequest
@property(retain, nonatomic) YTAuthenticator *authenticator;	// G=0x29d1c9; S=0x29d1d9; @synthesize=_authenticator
- (id)initWithAccount:(id)account authenticator:(id)authenticator;	// 0x29cf01
- (void).cxx_destruct;	// 0x29d239
- (void)_cleanupAuthentication;	// 0x29d111
- (void)_didAuthenticate:(id)authenticate;	// 0x29d26d
- (void)_didFailToAuthenticate:(id)authenticate;	// 0x29d2a5
- (void)_sendAuthenticationRequest;	// 0x29d149
// declared property getter: - (id)_userProfileRequest;	// 0x29d201
// declared property getter: - (id)authenticator;	// 0x29d1c9
- (void)dealloc;	// 0x29d071
// declared property setter: - (void)setAuthenticator:(id)authenticator;	// 0x29d1d9
// declared property setter: - (void)set_userProfileRequest:(id)request;	// 0x29d211
- (void)userProfileRequest:(id)request didFailWithError:(id)error;	// 0x29d3f5
- (void)userProfileRequest:(id)request receivedUserProfile:(id)profile;	// 0x29d371
@end

