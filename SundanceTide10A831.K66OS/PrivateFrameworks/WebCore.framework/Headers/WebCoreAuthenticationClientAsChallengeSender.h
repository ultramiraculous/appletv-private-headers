/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"


@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
	AuthenticationClient *m_client;	// 4 = 0x4
	CFURLAuthChallengeRef m_cfChallenge;	// 8 = 0x8
}
@property(readonly, assign) CFURLAuthChallengeRef cfChallenge;	// G=0x353f9fed; converted property
@property(readonly, assign) AuthenticationClient *client;	// G=0x353f9bb5; converted property
- (id)initWithAuthenticationClient:(AuthenticationClient *)authenticationClient;	// 0x353f9b85
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x353f9eb9
// converted property getter: - (CFURLAuthChallengeRef)cfChallenge;	// 0x353f9fed
// converted property getter: - (AuthenticationClient *)client;	// 0x353f9bb5
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x353f9d95
- (void)detachClient;	// 0x353f9bc5
- (void)setCFChallenge:(CFURLAuthChallengeRef)challenge;	// 0x353f9fdd
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x353f9bd9
@end
