/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol ATVDeviceActivationDelegate;

__attribute__((visibility("hidden")))
@interface ATVDeviceActivationAction : XXUnknownSuperclass {
	id<ATVDeviceActivationDelegate> _delegate;	// 4 = 0x4
}
- (id)initWithDelegate:(id)delegate;	// 0xbff5d
- (void)_activationFailedWithReason:(int)reason error:(id)error;	// 0xc0459
- (void)_activationSucceeded;	// 0xc03c9
- (void)start;	// 0xbffa5
@end

