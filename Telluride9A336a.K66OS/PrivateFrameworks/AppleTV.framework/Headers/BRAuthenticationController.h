/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRAuthenticator;

@interface BRAuthenticationController : BRController {
@private
	BOOL _authenticationWasSuccessful;	// 80 = 0x50
	BRAuthenticator *_authenticator;	// 84 = 0x54
	id _resources;	// 88 = 0x58
	BRController *_authenticatingController;	// 92 = 0x5c
}
@property(retain) BRController *authenticatingController;	// G=0x33a4065d; S=0x33a40671; @synthesize=_authenticatingController
@property(readonly, assign) BRAuthenticator *authenticator;	// G=0x33a4063d; @synthesize=_authenticator
@property(readonly, assign) id resources;	// G=0x33a4064d; @synthesize=_resources
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x33a40395
// declared property getter: - (id)authenticatingController;	// 0x33a4065d
- (void)authenticationCancelled:(id)cancelled;	// 0x33a4051d
- (void)authenticationFailed:(id)failed;	// 0x33a40545
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x33a404bd
// declared property getter: - (id)authenticator;	// 0x33a4063d
- (void)dealloc;	// 0x33a40449
// declared property getter: - (id)resources;	// 0x33a4064d
// declared property setter: - (void)setAuthenticatingController:(id)controller;	// 0x33a40671
- (void)wasPopped;	// 0x33a405c1
- (void)wasPushed;	// 0x33a4056d
@end

