/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import </libobjc.A.h>


@interface ACDKeychainManager : NSObject {
}
+ (id)_credentialForAccountWithID:(id)anId accountTypeID:(id)anId2 credentialType:(id)type clientID:(id)anId4 error:(id *)error;	// 0x2fe7dc89
+ (id)_itemForServiceName:(id)serviceName username:(id)username accessGroup:(id)group error:(id *)error;	// 0x2fe7f52d
+ (id)_keychainServiceNameForClientID:(id)clientID accountTypeIdentifier:(id)identifier key:(id)key;	// 0x2fe7f2b1
+ (void)_migrateCredential:(id)credential forAccount:(id)account clientID:(id)anId;	// 0x2fe7f339
+ (void)_removeAllItemsForService:(id)service;	// 0x2fe80209
+ (void)_removeAllItemsForUsername:(id)username;	// 0x2fe8022d
+ (void)_removeCredentialForAccountWithUsername:(id)username accountIdentifier:(id)identifier accountTypeIdentifier:(id)identifier3 credentialType:(id)type clientID:(id)anId error:(id *)error;	// 0x2fe7ebb9
+ (void)_removeCredentialItemWithKey:(id)key forAccountWithID:(id)anId accountTypeID:(id)anId3 clientID:(id)anId4 error:(id *)error;	// 0x2fe7f10d
+ (void)_removeCredentialItemWithKey:(id)key forAccountWithID:(id)anId username:(id)username accountTypeID:(id)anId4 clientID:(id)anId5 error:(id *)error;	// 0x2fe7f175
+ (BOOL)_removeItemForService:(id)service username:(id)username accessGroup:(id)group error:(id *)error;	// 0x2fe7ff7d
+ (void)_removeNonPersistentCredentialItemsForAccount:(id)account;	// 0x2fe7edc1
+ (void)_saveCredential:(id)credential forAccount:(id)account clientID:(id)anId error:(id *)error;	// 0x2fe7e591
+ (void)_setCredentialForAccount:(id)account clientID:(id)anId handleCredentialItemRemovals:(BOOL)removals error:(id *)error;	// 0x2fe7dff1
+ (void)_setItem:(id)item forServiceName:(id)serviceName username:(id)username accessGroup:(id)group accessibility:(id)accessibility syncable:(BOOL)syncable error:(id *)error;	// 0x2fe7f809
+ (void)_setNonPersistentCredentialTimerForAccount:(id)account;	// 0x2fe7e811
+ (BOOL)_shouldSyncCredentialForAccountType:(id)accountType;	// 0x2fe7f77d
+ (id)credentialForAccount:(id)account clientID:(id)anId;	// 0x2fe7d7c9
+ (id)credentialForAccount:(id)account clientID:(id)anId error:(id *)error;	// 0x2fe7d80d
+ (id)credentialForManagedAccountObject:(id)managedAccountObject;	// 0x2fe7d7b5
+ (id)credentialForManagedAccountObject:(id)managedAccountObject clientID:(id)anId;	// 0x2fe7d771
+ (void)initialize;	// 0x2fe7d729
+ (void)removeCredentialForAccount:(id)account;	// 0x2fe7e905
+ (void)removeCredentialForAccount:(id)account clientID:(id)anId;	// 0x2fe7e919
+ (void)removeCredentialForAccount:(id)account clientID:(id)anId error:(id *)error;	// 0x2fe7e971
+ (void)removeCredentialForAccount:(id)account error:(id *)error;	// 0x2fe7e951
+ (void)setCredentialForAccount:(id)account;	// 0x2fe7def5
+ (void)setCredentialForAccount:(id)account clientID:(id)anId;	// 0x2fe7df19
+ (void)setCredentialForAccount:(id)account clientID:(id)anId error:(id *)error;	// 0x2fe7df79
+ (void)setCredentialForAccount:(id)account error:(id *)error;	// 0x2fe7df55
+ (void)setCredentialForNewAccount:(id)newAccount clientID:(id)anId error:(id *)error;	// 0x2fe7dfb5
@end

