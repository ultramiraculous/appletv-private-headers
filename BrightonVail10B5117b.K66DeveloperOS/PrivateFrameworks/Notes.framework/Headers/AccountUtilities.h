/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library

@class AccountsManager, NSArray, NoteContext;

@interface AccountUtilities : NSObject {
	AccountsManager *_accountsManager;	// 4 = 0x4
	NSArray *_syncableAccounts;	// 8 = 0x8
	NoteContext *_noteContext;	// 12 = 0xc
}
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x349cae69; converted property
+ (id)sharedAccountUtilities;	// 0x349cade9
- (id)init;	// 0x349cb065
- (void).cxx_destruct;	// 0x349cc641
- (void)accountsChanged;	// 0x349caed5
// converted property getter: - (id)accountsManager;	// 0x349cae69
- (id)allDisplayAccounts;	// 0x349cb2c5
- (id)allSyncableAccounts;	// 0x349cb259
- (void)dealloc;	// 0x349cb20d
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)desiredSyncId;	// 0x349cbc05
- (BOOL)isDeviceLocalAccount:(id)account;	// 0x349cc245
- (BOOL)localNotesExist;	// 0x349cc2d9
- (id)syncAccountIdForDisplayAccountId:(id)displayAccountId;	// 0x349cb82d
@end

