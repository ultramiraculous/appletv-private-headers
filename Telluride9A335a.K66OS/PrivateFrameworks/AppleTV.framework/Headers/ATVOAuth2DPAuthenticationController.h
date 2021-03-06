/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRAuthenticationController.h"

@class NSTimer, BRAlertControl, BRWaitPromptControl;

@interface ATVOAuth2DPAuthenticationController : BRAuthenticationController {
@private
	BRWaitPromptControl *_waitPrompt;	// 100 = 0x64
	BRAlertControl *_alertControl;	// 104 = 0x68
	NSTimer *_promptTimer;	// 108 = 0x6c
	NSTimer *_retryTimer;	// 112 = 0x70
	double _retryInterval;	// 116 = 0x74
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x342ef9ed
- (void)_authenticate;	// 0x342f03f1
- (void)_promptUserWithUserCode:(id)userCode verificationURL:(id)url;	// 0x342efed5
- (void)_retryTimerHandler:(id)handler;	// 0x342f03b9
- (BOOL)_shouldAttemptAuthenticationAgainWithErrorMessage:(id)errorMessage;	// 0x342f00d5
- (BOOL)_shouldRetryAuthentication;	// 0x342f0085
- (void)_showPrompt:(id)prompt;	// 0x342f026d
- (void)authenticateAtInterval:(double)interval userCode:(id)code verificationURL:(id)url;	// 0x342efd01
- (void)authenticationCancelled:(id)cancelled;	// 0x342efb45
- (void)authenticationFailed:(id)failed;	// 0x342efb9d
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x342efaed
- (void)slowDown;	// 0x342efdd5
- (void)wasPopped;	// 0x342efe59
- (void)wasPushed;	// 0x342efdf5
@end

