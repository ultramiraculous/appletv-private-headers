/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDeviceActivationDelegate.h"
#import "BRSingleton.h"

@class ATVDeviceActivationAction;

__attribute__((visibility("hidden")))
@interface ATVDeviceActivationOneShotMonitor : BRSingleton <ATVDeviceActivationDelegate> {
	ATVDeviceActivationAction *_action;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x30b01
+ (id)singleton;	// 0x30af1
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x30d6d
- (void)activationSucceeded:(id)succeeded;	// 0x30c51
- (void)performOneShotActivation;	// 0x30b11
@end

