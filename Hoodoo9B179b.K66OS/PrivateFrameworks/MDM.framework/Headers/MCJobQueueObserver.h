/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "NSObject.h"


@protocol MCJobQueueObserver <NSObject>
- (void)jobQueueDidReleaseBusy:(id)jobQueue;
- (void)jobQueueDidRetainBusy:(id)jobQueue;
@end

