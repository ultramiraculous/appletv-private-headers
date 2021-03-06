/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticationController.h"

@class NSTimer, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticationController : ATVSharedCredentialsAuthenticationController {
	ATVDataQuery *_query;	// 120 = 0x78
	NSTimer *_spinnerTimer;	// 124 = 0x7c
	BOOL _accountOptionsPreviouslySet;	// 128 = 0x80
}
- (void)_queryComplete:(id)complete;	// 0xe8999
- (void)_showSpinner;	// 0xe8a9d
- (void)dealloc;	// 0xe8185
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0xe8591
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0xe87fd
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0xe8239
- (void)wasPopped;	// 0xe81e5
@end

