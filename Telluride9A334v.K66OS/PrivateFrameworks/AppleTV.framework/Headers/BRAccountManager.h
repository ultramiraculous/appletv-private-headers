/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary, NSMutableArray;

@interface BRAccountManager : BRSingleton {
@private
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSMutableArray *_accounts;	// 12 = 0xc
	NSMutableDictionary *_accountTypes;	// 16 = 0x10
	NSMutableDictionary *_preferredAccounts;	// 20 = 0x14
	NSMutableArray *_pendingAccounts;	// 24 = 0x18
}
+ (void)initialize;	// 0x3328e325
+ (void)setSingleton:(id)singleton;	// 0x3328e315
+ (id)singleton;	// 0x3328e305
- (id)init;	// 0x3328e3d1
- (void)_accountDirty:(id)dirty;	// 0x33290061
- (void)_deleteAccount:(id)account;	// 0x3328ff45
- (void)_load;	// 0x3328f521
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x3328fe0d
- (void)_save;	// 0x3328fa5d
- (void)_saveAccount:(id)account;	// 0x3328fbad
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x3328fbc1
- (void)_savePrefs;	// 0x3328fd51
- (id)accountWithName:(id)name ofType:(id)type;	// 0x3328ed55
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x3328ed79
- (id)accountsOfType:(id)type;	// 0x3328ef25
- (id)allAccounts;	// 0x3328eef9
- (void)clearPreferredAccountForType:(id)type;	// 0x3328e9c1
- (void)dealloc;	// 0x3328e571
- (void)evaluatePendingAccounts;	// 0x3328e651
- (BOOL)isAccountManaged:(id)managed;	// 0x3328ef79
- (void)manageAccount:(id)account;	// 0x3328f03d
- (void)markAsPreferredAccount:(id)account;	// 0x3328eb25
- (id)preferredAccountForType:(id)type;	// 0x3328e851
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x3328f3c1
- (void)removeAccount:(id)account;	// 0x3328f18d
@end

