/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRAuthenticator;

__attribute__((visibility("hidden")))
@interface BRAuthenticationController : BRController {
	BOOL _userCancelled;	// 96 = 0x60
	BRAuthenticator *_authenticator;	// 100 = 0x64
	id _resources;	// 104 = 0x68
	BRController *_authenticatingController;	// 108 = 0x6c
}
@property(retain) BRController *authenticatingController;	// G=0x25e991; S=0x25e9a5; @synthesize=_authenticatingController
@property(readonly, assign) BRAuthenticator *authenticator;	// G=0x25e969; @synthesize=_authenticator
@property(readonly, assign) id resources;	// G=0x25e97d; @synthesize=_resources
@property(assign, nonatomic) BOOL userCancelled;	// G=0x25e949; S=0x25e959; @synthesize=_userCancelled
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x25e655
// declared property getter: - (id)authenticatingController;	// 0x25e991
- (void)authenticationCancelled:(id)cancelled;	// 0x25e821
- (void)authenticationFailed:(id)failed;	// 0x25e861
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x25e7b9
// declared property getter: - (id)authenticator;	// 0x25e969
- (void)dealloc;	// 0x25e741
// declared property getter: - (id)resources;	// 0x25e97d
// declared property setter: - (void)setAuthenticatingController:(id)controller;	// 0x25e9a5
// declared property setter: - (void)setUserCancelled:(BOOL)cancelled;	// 0x25e959
// declared property getter: - (BOOL)userCancelled;	// 0x25e949
- (void)wasPopped;	// 0x25e8f5
- (void)wasPushed;	// 0x25e8a1
@end

