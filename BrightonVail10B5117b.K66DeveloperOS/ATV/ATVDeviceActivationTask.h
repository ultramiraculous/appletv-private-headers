/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDeviceActivationDelegate.h"
#import "BRBackgroundTask.h"

@class ATVDeviceActivationAction;

__attribute__((visibility("hidden")))
@interface ATVDeviceActivationTask : BRBackgroundTask <ATVDeviceActivationDelegate> {
	BOOL _processingActivation;	// 44 = 0x2c
	ATVDeviceActivationAction *_action;	// 48 = 0x30
}
+ (void)scheduleOneShotActivationCheck;	// 0xd29f1
+ (void)scheduleRepeatingActivationCheck;	// 0xd2959
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0xd2c59
- (void)activationSucceeded:(id)succeeded;	// 0xd2ba9
- (void)dealloc;	// 0xd2b5d
- (BOOL)perform:(id)perform;	// 0xd2a25
@end

