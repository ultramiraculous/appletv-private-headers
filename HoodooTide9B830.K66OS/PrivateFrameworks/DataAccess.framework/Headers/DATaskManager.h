/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSArray, NSMutableSet, DAAccount, NSMutableArray;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
@private
	NSMutableArray *_queuedExclusiveTasks;	// 8 = 0x8
	id<DATask> _activeExclusiveTask;	// 12 = 0xc
	NSMutableSet *_independentTasks;	// 16 = 0x10
	NSMutableSet *_heldIndependentTasks;	// 20 = 0x14
	NSMutableSet *_modalHeldIndependentTasks;	// 24 = 0x18
	NSMutableArray *_queuedTasks;	// 28 = 0x1c
	id<DATask> _activeQueuedTask;	// 32 = 0x20
	id<DATask> _modalHeldActiveQueuedTask;	// 36 = 0x24
	NSMutableArray *_queuedModalTasks;	// 40 = 0x28
	id<DATask> _activeModalTask;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	NSTimer *_managerIdleTimer;	// 52 = 0x34
}
@property(assign) DAAccount *account;	// G=0x32594e6d; S=0x32594f39; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x3259467d; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x32598e9d; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x325942e9; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x32598ead; @synthesize=_queuedTasks
- (id)init;	// 0x32583599
- (id)initWithAccount:(id)account;	// 0x3259468d
- (void)_cancelTasksWithReason:(int)reason;	// 0x325989a5
- (id)_getHeldIndependentTasks;	// 0x32598d55
- (id)_getIndependentTasks;	// 0x32598d05
- (id)_getModalHeldIndependentTasks;	// 0x32598da5
- (id)_getQueuedExclusiveTasks;	// 0x32598cb5
- (id)_getQueuedModalTasks;	// 0x32598e45
- (id)_getQueuedTasks;	// 0x32598df5
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x32595e61
- (void)_makeStateTransition;	// 0x32597b91
- (void)_performTask:(id)task;	// 0x32597639
- (void)_populateVersionDescriptions;	// 0x32594d85
- (void)_reactivateHeldTasks;	// 0x32597929
- (void)_releasePowerAssertionForTask:(id)task;	// 0x32598c49
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x3259771d
- (void)_retainPowerAssertionForTask:(id)task;	// 0x32598bb5
- (void)_schedulePerformTask:(id)task;	// 0x32598919
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x32598871
- (void)_scheduleStartModal:(id)modal;	// 0x32598939
- (void)_startModal:(id)modal;	// 0x32597845
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x32595d79
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x32595db9
- (BOOL)_useFakeDescriptions;	// 0x32594e11
- (void)_useOpportunisticSocketsAgain;	// 0x32595d01
- (id)_version;	// 0x32594de9
// declared property getter: - (id)account;	// 0x32594e6d
- (id)accountID;	// 0x32595045
- (id)accountPersistentUUID;	// 0x32595065
// declared property getter: - (id)activeModalTask;	// 0x3259467d
// declared property getter: - (id)activeQueuedTask;	// 0x32598e9d
// declared property getter: - (id)allTasks;	// 0x325942e9
- (void)cancelAllTasks;	// 0x32595939
- (void)cancelTask:(id)task;	// 0x32595925
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x325958c5
- (void)dealloc;	// 0x3259476d
- (id)deviceID;	// 0x32594e69
- (id)deviceType;	// 0x32594e15
- (id)identityPersist;	// 0x32595005
- (id)password;	// 0x32594fc1
- (int)port;	// 0x32594f81
// declared property getter: - (id)queuedTasks;	// 0x32598ead
- (id)scheme;	// 0x32595025
- (id)server;	// 0x32594fa1
// declared property setter: - (void)setAccount:(id)account;	// 0x32594f39
- (void)shutdown;	// 0x325959e5
- (id)stateString;	// 0x32595b4d
- (void)submitExclusiveTask:(id)task;	// 0x32595085
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x32595099
- (void)submitIndependentTask:(id)task;	// 0x325953ad
- (void)submitQueuedTask:(id)task;	// 0x32595621
- (void)taskDidFinish:(id)task;	// 0x32595fdd
- (void)taskEndModal:(id)modal;	// 0x32597325
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x32598e95
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x32598e99
- (void)taskRequestModal:(id)modal;	// 0x32596ded
- (BOOL)useSSL;	// 0x32594fe1
- (id)user;	// 0x32594f61
- (id)userAgent;	// 0x32594e19
@end

