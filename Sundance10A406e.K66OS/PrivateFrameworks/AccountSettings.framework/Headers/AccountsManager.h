/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface AccountsManager : NSObject {
	NSMutableDictionary *_topLevelAccountsByID;	// 4 = 0x4
	NSMutableArray *_orderedTopLevelAccounts;	// 8 = 0x8
	NSMutableDictionary *_childAccountsByID;	// 12 = 0xc
	NSMutableDictionary *_childAccountIDToParentAccountID;	// 16 = 0x10
	NSMutableDictionary *_originalAccountsByID;	// 20 = 0x14
	unsigned _dataVersion;	// 24 = 0x18
	NSArray *_runtimeFixers;	// 28 = 0x1c
}
@property(assign) unsigned dataVersion;	// G=0x3709a4d9; S=0x3709acf9; converted property
+ (void)_migrateAccountsIfNeeded;	// 0x370964d1
+ (id)_notifierClassNamesForAccountType:(id)accountType dataclass:(id)dataclass;	// 0x370994a5
+ (BOOL)_oldDAAccountsInformationFound;	// 0x3709abe1
+ (BOOL)_oldMailAccountsInformationFound;	// 0x3709ac6d
+ (void)_setShouldSkipNotifications:(BOOL)_set;	// 0x3709a4e9
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x3709882d
+ (BOOL)accountSettingsNeedsToBeMigrated;	// 0x3709ab0d
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x37098669
+ (id)createAndLockMigrationLock;	// 0x3709a775
+ (unsigned)currentVersion;	// 0x3709a38d
+ (id)displayNameForGroupOfAccountType:(id)accountType forBeginningOfSentence:(BOOL)sentence;	// 0x370989f1
+ (id)fullPathToAccountSettingsPlist;	// 0x3709a391
+ (void)killDataAccessIfNecessary;	// 0x3709a4f9
+ (void)releaseMigrationLock:(id)lock;	// 0x3709a7c9
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;	// 0x3709a871
+ (void)shouldMigrateOldMailAccounts:(BOOL *)accounts oldDAAccounts:(BOOL *)accounts2 newAccountSettings:(BOOL *)settings;	// 0x3709a90d
+ (void)waitForMigrationToFinish;	// 0x3709a7f9
- (id)init;	// 0x37096669
- (id)initInsideOfMigration;	// 0x3709a3f5
- (id)initWithAccounsInfoArray:(id)accounsInfoArray;	// 0x3709a3e5
- (void)_addNotificationToDictionary:(id)dictionary forChangeType:(int)changeType originalProperties:(id)properties currentProperties:(id)properties4;	// 0x3709987d
- (id)_createRuntimeFixers;	// 0x370991c1
- (id)_initWithAccountsInfo:(id)accountsInfo;	// 0x37098df5
- (void)_loadChildrenFromAccount:(id)account;	// 0x37098c2d
- (void)_removeChildrenForAccountWithIdentifier:(id)identifier;	// 0x37098aa9
- (void)_sendNotificationsForChangedAccounts;	// 0x37099f45
- (void)_setOriginalAccountDictionaries;	// 0x3709931d
- (id)accountWithIdentifier:(id)identifier;	// 0x3709672d
- (id)accountsWithTypes:(id)types;	// 0x37096e51
- (id)accountsWithTypes:(id)types withLoader:(id)loader;	// 0x37096e65
- (void)addChild:(id)child toAccount:(id)account;	// 0x37097c45
- (id)allBasicAccounts;	// 0x370969c5
- (id)allBasicSyncableAccounts;	// 0x370969fd
- (id)allMailAccounts;	// 0x37096dd1
- (id)basicAccountsWithTypes:(id)types;	// 0x37096a71
- (unsigned)count;	// 0x370970d1
- (unsigned)countOfBasicAccountsWithTypes:(id)types;	// 0x37099235
// converted property getter: - (unsigned)dataVersion;	// 0x3709a4d9
- (void)dealloc;	// 0x37096679
- (void)deleteAccount:(id)account;	// 0x370972f1
- (void)deleteAccountWithIdentifier:(id)identifier;	// 0x37097419
- (id)displayAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x370967bd
- (id)fullAccountWithIdentifier:(id)identifier loader:(id)loader;	// 0x37096d51
- (id)fullDeviceLocalAccount;	// 0x37096b89
- (void)insertAccount:(id)account;	// 0x37097221
- (id)mergeInMemoryProperties:(id)memoryProperties originalProperties:(id)properties onDiskProperties:(id)properties3;	// 0x37097d1d
- (void)removeChildWithIdentifier:(id)identifier fromAccount:(id)account;	// 0x37097a91
- (void)replaceAccount:(id)account withAccount:(id)account2;	// 0x37097455
- (void)replaceAccountsWithTypes:(id)types withAccounts:(id)accounts;	// 0x3709753d
- (void)saveAllAccounts;	// 0x37097fb9
// converted property setter: - (void)setDataVersion:(unsigned)version;	// 0x3709acf9
- (id)syncableAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x37096805
- (void)updateAccount:(id)account;	// 0x370970f1
@end

