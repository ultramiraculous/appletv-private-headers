/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DATaskManager.h> // Unknown library
#import "ASPolicyManagerDelegate.h"

@class NSMutableDictionary, NSError, ASTask, ASPolicyManager, ASGetOptionsTask;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {
@private
	ASPolicyManager *_policyManager;	// 56 = 0x38
	NSError *_versionError;	// 60 = 0x3c
	NSMutableDictionary *_taskIDToTask;	// 64 = 0x40
	ASTask *_modalGetOptionsTask;	// 68 = 0x44
	ASGetOptionsTask *_getOptionsTask;	// 72 = 0x48
	ASTask *_modalPolicyKeyUpdateTask;	// 76 = 0x4c
}
@property(readonly, retain) ASPolicyManager *policyManager;	// G=0x31e0ce19; converted property
- (id)initWithAccount:(id)account policyManager:(id)manager;	// 0x31e0c115
- (void)_finishAllTasksWithError:(id)error;	// 0x31e0cf61
- (void)_populateVersionDescriptions;	// 0x31e0c42d
- (id)_version;	// 0x31e0c4a1
- (void)cancelAllTasks;	// 0x31e0cecd
- (void)cancelTask:(id)task;	// 0x31e0d691
- (void)cancelTaskWithID:(int)anId;	// 0x31e0d441
- (void)dealloc;	// 0x31e0c2d9
- (id)easProtocolVersion;	// 0x31e0ce49
- (void)finishTask:(id)task withError:(id)error;	// 0x31e0ceb9
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x31e0c7d5
- (id)policyKey;	// 0x31e0ce91
// converted property getter: - (id)policyManager;	// 0x31e0ce19
- (void)policyManagerFailedToUpdatePolicy:(id)updatePolicy;	// 0x31e0cda5
- (void)policyManagerUpdatedPolicy:(id)policy;	// 0x31e0cd19
- (id)protocol;	// 0x31e0ce71
- (void)requestEASVersionWithDelegateTask:(id)delegateTask;	// 0x31e0c4c9
- (void)setEASProtocolVersion:(id)version;	// 0x31e0ce29
- (void)shutdown;	// 0x31e0d519
- (id)stateString;	// 0x31e0d029
- (void)taskDidFinish:(id)task;	// 0x31e0d735
- (void)taskEndModal:(id)modal;	// 0x31e0d901
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x31e0d19d
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x31e0d349
- (void)taskRequestModal:(id)modal;	// 0x31e0d8ad
- (void)updatePolicyKeyWithDelegateTask:(id)delegateTask;	// 0x31e0cb99
@end
