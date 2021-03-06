/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import "NSObject.h"


@protocol SBUIPasscodeLockNumberPadDelegate <NSObject>
@optional
- (void)passcodeLockNumberPad:(id)pad keyCancelled:(id)cancelled;
- (void)passcodeLockNumberPad:(id)pad keyDown:(id)down;
- (void)passcodeLockNumberPad:(id)pad keyUp:(id)up;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)hit;
- (void)passcodeLockNumberPadCancelButtonHit:(id)hit;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)hit;
@end

