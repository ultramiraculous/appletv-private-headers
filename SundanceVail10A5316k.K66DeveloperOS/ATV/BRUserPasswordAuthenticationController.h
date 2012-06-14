/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAuthenticationController.h"

@class NSString, BRBoxControl, BRWaitPromptControl, NSTimer;

__attribute__((visibility("hidden")))
@interface BRUserPasswordAuthenticationController : BRAuthenticationController {
	NSString *_userName;	// 96 = 0x60
	NSTimer *_authTimeoutTimer;	// 100 = 0x64
	NSTimer *_promptTimer;	// 104 = 0x68
	BOOL _hasTimedOut;	// 108 = 0x6c
	BRBoxControl *_contentWrapper;	// 112 = 0x70
	BRWaitPromptControl *_waitPrompt;	// 116 = 0x74
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x2598a9
- (void)_askUserForPassword:(id)password userName:(id)name completionHandler:(id)handler;	// 0x25a57d
- (void)_askUserForUserName:(id)userName completionHandler:(id)handler;	// 0x25a051
- (void)_authSucceededComplete:(BOOL)complete;	// 0x259fe9
- (void)_authenticate;	// 0x25b061
- (void)_authenticationTimedOut:(id)anOut;	// 0x25ae6d
- (void)_setContent:(id)content;	// 0x259e91
- (void)_setUserName:(id)name;	// 0x25a015
- (BOOL)_shouldAttemptAuthorizationAgainForUser:(id)user error:(id)error;	// 0x25aa4d
- (void)_showCancellationMessage:(id)message;	// 0x25ac35
- (void)_showPrompt:(id)prompt;	// 0x25ad5d
- (void)authenticationCancelled:(id)cancelled;	// 0x259b19
- (void)authenticationFailed:(id)failed;	// 0x259c1d
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x259a6d
- (BOOL)configurePostUserPasswordOptionsWithUser:(id)user;	// 0x25b5f1
- (BOOL)configurePreUserPasswordOptions;	// 0x25b5ed
- (void)dealloc;	// 0x259a21
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0x25b5f9
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0x25b5fd
- (void)layoutSubcontrols;	// 0x259df5
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0x25b5f5
- (void)wasPopped;	// 0x259d6d
- (void)wasPushed;	// 0x259d09
@end

