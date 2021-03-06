/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library
#import "IDSDaemonListenerProtocol.h"

@class NSProtocolChecker, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {
	NSObject<OS_dispatch_queue> *_ivarQueue;	// 4 = 0x4
	NSHashTable *_handlers;	// 8 = 0x8
	NSProtocolChecker *_protocol;	// 12 = 0xc
	NSMutableDictionary *_topicToAccountDictionaries;	// 16 = 0x10
	NSMutableDictionary *_topicToEnabledAccounts;	// 20 = 0x14
	NSMutableDictionary *_accountToDevices;	// 24 = 0x18
	NSObject<OS_dispatch_group> *_accountsLoadedGroup;	// 28 = 0x1c
	NSObject<OS_dispatch_group> *_enabledAccountsLoadedGroup;	// 32 = 0x20
	NSObject<OS_dispatch_group> *_dependentDevicesLoadedGroup;	// 36 = 0x24
	BOOL _setupComplete;	// 40 = 0x28
	BOOL _postedSetupComplete;	// 41 = 0x29
	BOOL _hidingDisconnect;	// 42 = 0x2a
}
@property(assign, nonatomic, setter=_setHidingDisconnect:) BOOL _hidingDisconnect;	// G=0x3115b53d; S=0x3115b60d; 
@property(readonly, assign, nonatomic) BOOL hasPostedSetupComplete;	// G=0x3115b46d; 
@property(readonly, assign, nonatomic) BOOL isSetupComplete;	// G=0x3115b39d; 
- (id)init;	// 0x3115af89
- (void)_callHandlersWithBlock:(id)block;	// 0x3115bb7d
- (void)_callHandlersWithBlockOnIvarQueue:(id)blockOnIvarQueue;	// 0x3115b8f5
- (void)_deferredSetupOnIvarQueue:(id)queue;	// 0x3115e7e5
// declared property getter: - (BOOL)_hidingDisconnect;	// 0x3115b53d
- (void)_noteDisconnected;	// 0x3115b1b5
- (void)_removeAccountOnIvarQueue:(id)queue;	// 0x3115c5dd
// declared property setter: - (void)_setHidingDisconnect:(BOOL)disconnect;	// 0x3115b60d
- (void)account:(id)account accountInfoChanged:(id)changed;	// 0x3115d231
- (void)account:(id)account aliasesChanged:(id)changed;	// 0x3115d5e9
- (void)account:(id)account dependentDevicesUpdated:(id)updated;	// 0x3115dca1
- (void)account:(id)account displayNameChanged:(id)changed;	// 0x3115db49
- (void)account:(id)account loginChanged:(id)changed;	// 0x3115d9f1
- (void)account:(id)account profileChanged:(id)changed;	// 0x3115d899
- (void)account:(id)account registrationStatusInfoChanged:(id)changed;	// 0x3115d491
- (void)account:(id)account vettedAliasesChanged:(id)changed;	// 0x3115d741
- (void)accountAdded:(id)added;	// 0x3115c899
- (id)accountDictionariesForService:(id)service blocking:(BOOL)blocking;	// 0x3115bc2d
- (void)accountDisabled:(id)disabled onService:(id)service;	// 0x3115cf61
- (void)accountEnabled:(id)enabled onService:(id)service;	// 0x3115cc91
- (void)accountRemoved:(id)removed;	// 0x3115caf9
- (void)activeDevicesUpdatedForAccount:(id)account;	// 0x3115e081
- (void)addHandler:(id)handler;	// 0x3115b68d
- (void)clearCallerIDForAccount:(id)account;	// 0x3115e1a9
- (void)dealloc;	// 0x3115b0a5
- (id)dependentDevicesForAccount:(id)account blocking:(BOOL)blocking;	// 0x3115e2d1
- (id)enabledAccountsForService:(id)service blocking:(BOOL)blocking;	// 0x3115c105
- (void)forwardInvocation:(id)invocation;	// 0x3115f195
// declared property getter: - (BOOL)hasPostedSetupComplete;	// 0x3115b46d
// declared property getter: - (BOOL)isSetupComplete;	// 0x3115b39d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3115f08d
- (void)refreshRegistrationForAccount:(id)account;	// 0x3115df59
- (void)registrationFailedForAccount:(id)account needsDeletion:(id)deletion;	// 0x3115de01
- (void)removeHandler:(id)handler;	// 0x3115b7a9
- (void)setupComplete:(BOOL)complete info:(id)info;	// 0x3115e685
@end

