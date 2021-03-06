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
@property(readonly, retain) ASPolicyManager *policyManager;	// G=0x318b2e19; converted property
- (id)initWithAccount:(id)account policyManager:(id)manager;	// 0x318b2115
- (void)_finishAllTasksWithError:(id)error;	// 0x318b2f61
- (void)_populateVersionDescriptions;	// 0x318b242d
- (id)_version;	// 0x318b24a1
- (void)cancelAllTasks;	// 0x318b2ecd
- (void)cancelTask:(id)task;	// 0x318b3691
- (void)cancelTaskWithID:(int)anId;	// 0x318b3441
- (void)dealloc;	// 0x318b22d9
- (id)easProtocolVersion;	// 0x318b2e49
- (void)finishTask:(id)task withError:(id)error;	// 0x318b2eb9
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x318b27d5
- (id)policyKey;	// 0x318b2e91
// converted property getter: - (id)policyManager;	// 0x318b2e19
- (void)policyManagerFailedToUpdatePolicy:(id)updatePolicy;	// 0x318b2da5
- (void)policyManagerUpdatedPolicy:(id)policy;	// 0x318b2d19
- (id)protocol;	// 0x318b2e71
- (void)requestEASVersionWithDelegateTask:(id)delegateTask;	// 0x318b24c9
- (void)setEASProtocolVersion:(id)version;	// 0x318b2e29
- (void)shutdown;	// 0x318b3519
- (id)stateString;	// 0x318b3029
- (void)taskDidFinish:(id)task;	// 0x318b3735
- (void)taskEndModal:(id)modal;	// 0x318b3901
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x318b319d
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x318b3349
- (void)taskRequestModal:(id)modal;	// 0x318b38ad
- (void)updatePolicyKeyWithDelegateTask:(id)delegateTask;	// 0x318b2b99
@end

