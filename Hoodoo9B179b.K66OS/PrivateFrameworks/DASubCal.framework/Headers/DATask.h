/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "NSObject.h"


@protocol DATask <NSObject>
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;
- (void)finishWithError:(id)error;
- (void)performTask;
@optional
- (void)requestCancelTaskWithReason:(int)reason;
- (void)setTaskManager:(id)manager;
- (BOOL)shouldForceNetworking;
- (BOOL)shouldHoldPowerAssertion;
- (void)startModal;
@end

