/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DALocalDBGateKeeper.h"

@class NSMutableDictionary, NSString;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
	NSString *_buildVersion;	// 72 = 0x48
	NSMutableDictionary *_refreshingWaiters;	// 76 = 0x4c
	NSMutableDictionary *_failedWaiters;	// 80 = 0x50
	NSMutableDictionary *_restrictedWaiters;	// 84 = 0x54
}
- (id)init;	// 0x3396fe31
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x33970e8d
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x33970a25
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x33970cd5
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x339714f1
- (void)_registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks preempt:(BOOL)preempt completionHandler:(id)handler;	// 0x33971c1d
- (void)_reloadBabysitterProperties;	// 0x3396f6bd
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x339711bd
- (void)_sendAllClearNotifications;	// 0x3397210d
- (void)_setUnitTestHackRunLoopMode:(id)mode;	// 0x339734dd
- (BOOL)babysitterEnabled;	// 0x3396fe01
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x33973191
- (void)dealloc;	// 0x3396ffe5
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x33970569
- (void)registerPreemptiveWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x339720c5
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x339720e9
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x33972a25
- (void)setBookmarksLockHolder:(id)holder;	// 0x3397095d
- (void)setContactsLockHolder:(id)holder;	// 0x33970705
- (void)setEventsLockHolder:(id)holder;	// 0x339707cd
- (void)setNotesLockHolder:(id)holder;	// 0x33970895
- (id)stateString;	// 0x33973231
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x339725f9
@end

