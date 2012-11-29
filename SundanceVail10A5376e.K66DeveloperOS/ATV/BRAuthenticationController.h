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
	BOOL _userCancelled;	// 100 = 0x64
	BRAuthenticator *_authenticator;	// 104 = 0x68
	id _resources;	// 108 = 0x6c
	BRController *_authenticatingController;	// 112 = 0x70
	BOOL _shouldPopWhenPushed;	// 116 = 0x74
}
@property(retain) BRController *authenticatingController;	// G=0x275f15; S=0x275f29; @synthesize=_authenticatingController
@property(readonly, assign) BRAuthenticator *authenticator;	// G=0x275eed; @synthesize=_authenticator
@property(readonly, assign) id resources;	// G=0x275f01; @synthesize=_resources
@property(assign, nonatomic) BOOL shouldPopWhenPushed;	// G=0x275f39; S=0x275f49; @synthesize=_shouldPopWhenPushed
@property(assign, nonatomic) BOOL userCancelled;	// G=0x275ecd; S=0x275edd; @synthesize=_userCancelled
+ (id)poppingController;	// 0x275b29
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x275b89
// declared property getter: - (id)authenticatingController;	// 0x275f15
- (void)authenticationCancelled:(id)cancelled;	// 0x275d55
- (void)authenticationFailed:(id)failed;	// 0x275d95
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x275ced
// declared property getter: - (id)authenticator;	// 0x275eed
- (void)dealloc;	// 0x275c75
// declared property getter: - (id)resources;	// 0x275f01
// declared property setter: - (void)setAuthenticatingController:(id)controller;	// 0x275f29
// declared property setter: - (void)setShouldPopWhenPushed:(BOOL)popWhenPushed;	// 0x275f49
// declared property setter: - (void)setUserCancelled:(BOOL)cancelled;	// 0x275edd
// declared property getter: - (BOOL)shouldPopWhenPushed;	// 0x275f39
// declared property getter: - (BOOL)userCancelled;	// 0x275ecd
- (void)wasPopped;	// 0x275e79
- (void)wasPushed;	// 0x275dd5
@end
