/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "ATVSettingsSaver.h"

@class NSMutableDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRAccountManager : BRSingleton <ATVSettingsSaver> {
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSMutableArray *_accounts;	// 12 = 0xc
	NSMutableDictionary *_accountTypes;	// 16 = 0x10
	long _accountTypesLazyInitializationGuard;	// 20 = 0x14
	NSMutableDictionary *_preferredAccounts;	// 24 = 0x18
	NSMutableArray *_pendingAccounts;	// 28 = 0x1c
}
+ (void)initialize;	// 0x36bd15
+ (void)setSingleton:(id)singleton;	// 0x36bd05
+ (id)singleton;	// 0x36bcf5
- (id)init;	// 0x36bdc5
- (void)_accountDirty:(id)dirty;	// 0x36de61
- (void)_deleteAccount:(id)account;	// 0x36dd41
- (void)_load;	// 0x36d265
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x36dbed
- (void)_save;	// 0x36d7f1
- (void)_saveAccount:(id)account;	// 0x36d961
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x36d975
- (void)_savePrefs;	// 0x36db2d
- (id)accountWithName:(id)name ofType:(id)type;	// 0x36ca2d
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x36ca51
- (id)accountsOfType:(id)type;	// 0x36cbf5
- (void)addPathsToSaveTo:(id)to;	// 0x36c039
- (id)allAccounts;	// 0x36cbc9
- (void)clearPreferredAccountForType:(id)type;	// 0x36c5cd
- (void)dealloc;	// 0x36bf59
- (void)evaluatePendingAccounts;	// 0x36c209
- (BOOL)isAccountManaged:(id)managed;	// 0x36cc49
- (void)manageAccount:(id)account;	// 0x36cd1d
- (void)markAsPreferredAccount:(id)account;	// 0x36c745
- (void)markAsPreferredAccount:(id)account silently:(BOOL)silently;	// 0x36c759
- (id)preferredAccountForType:(id)type;	// 0x36c43d
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x36d0d1
- (void)removeAccount:(id)account;	// 0x36ce81
@end

