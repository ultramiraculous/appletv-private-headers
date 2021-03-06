/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSMutableArray, NSString, NSMutableDictionary;

@interface BRAccountManager : BRSingleton {
@private
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSString *_systemAccountDataPath;	// 12 = 0xc
	NSMutableArray *_accounts;	// 16 = 0x10
	NSMutableDictionary *_accountTypes;	// 20 = 0x14
	NSMutableDictionary *_preferredAccounts;	// 24 = 0x18
	NSMutableArray *_pendingAccounts;	// 28 = 0x1c
}
+ (void)initialize;	// 0x32fb2fb5
+ (void)setSingleton:(id)singleton;	// 0x32f13cc1
+ (id)singleton;	// 0x32f131d5
- (id)init;	// 0x32f131e1
- (void)_accountDirty:(id)dirty;	// 0x32f2452d
- (void)_deleteAccount:(id)account;	// 0x32fb23d1
- (void)_load;	// 0x32f133a5
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x32f13841
- (void)_save;	// 0x32fb2875
- (void)_saveAccount:(id)account;	// 0x32f24559
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x32f24571
- (void)_savePrefs;	// 0x32fb24d5
- (id)accountWithName:(id)name ofType:(id)type;	// 0x32f21031
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x32f20e05
- (id)accountsOfType:(id)type;	// 0x32f21c0d
- (id)allAccounts;	// 0x32fb2581
- (void)clearPreferredAccountForType:(id)type;	// 0x32fb2e89
- (void)dealloc;	// 0x32fb25ad
- (void)evaluatePendingAccounts;	// 0x32fb2689
- (BOOL)isAccountManaged:(id)managed;	// 0x32f20f7d
- (void)manageAccount:(id)account;	// 0x32fb2b91
- (void)markAsPreferredAccount:(id)account;	// 0x32fb2cb1
- (id)preferredAccountForType:(id)type;	// 0x32f21ac1
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x32f13fa1
- (void)removeAccount:(id)account;	// 0x32fb2999
@end

