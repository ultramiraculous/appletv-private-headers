/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "DACalDAV-Structs.h"
#import "CalDAVQueueableOperation.h"

@class MobileCalDAVVerifyActor;

@interface MobileCalDAVVerifyAccountQueueableOperation : CalDAVQueueableOperation {
	MobileCalDAVVerifyActor *_actor;	// 24 = 0x18
	dispatch_queue_s *_opQueue;	// 28 = 0x1c
}
- (id)initWithQueue:(id)queue;	// 0x32cfd0f9
- (void)calDAVVerifyCompletedWithError:(id)error;	// 0x32cfd091
- (void)cancel;	// 0x32cfcfc9
- (void)dealloc;	// 0x32cfd1a9
- (void)finishOperation;	// 0x32cfd28d
- (void)performOperation;	// 0x32cfd201
@end
