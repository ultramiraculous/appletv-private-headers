/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticationController.h"

@class NSTimer, NSString, BRWaitPromptControl;

@interface BRUserPasswordAuthenticationController : BRAuthenticationController {
@private
	NSString *_userName;	// 96 = 0x60
	NSTimer *_authTimeoutTimer;	// 100 = 0x64
	NSTimer *_promptTimer;	// 104 = 0x68
	BOOL _hasTimedOut;	// 108 = 0x6c
	BRWaitPromptControl *_waitPrompt;	// 112 = 0x70
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x33028115
- (id)_askUserForPassword:(id)password userName:(id)name;	// 0x330288ed
- (id)_askUserForUserName:(id)userName;	// 0x33028599
- (void)_authSucceededComplete:(BOOL)complete;	// 0x3302856d
- (void)_authenticate;	// 0x33029175
- (void)_authenticationTimedOut:(id)anOut;	// 0x33028fa1
- (BOOL)_shouldAttemptAuthorizationAgainForUser:(id)user error:(id)error;	// 0x33028bc5
- (void)_showCancellationMessage:(id)message;	// 0x33028d89
- (void)_showPrompt:(id)prompt;	// 0x33028e91
- (void)authenticationCancelled:(id)cancelled;	// 0x330282a5
- (void)authenticationFailed:(id)failed;	// 0x330283a9
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x33028201
- (BOOL)configurePostUserPasswordOptionsWithUser:(id)user;	// 0x330293a9
- (BOOL)configurePreUserPasswordOptions;	// 0x330293a5
- (void)dealloc;	// 0x330281b5
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0x330293b1
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0x330293b5
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0x330293ad
- (void)wasPopped;	// 0x330284f9
- (void)wasPushed;	// 0x33028495
@end
