/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, AccountsManager, ACAccountStore, ABModel;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource> {
@private
	ABModel *_model;	// 4 = 0x4
	NSArray *_accountIdentifiers;	// 8 = 0x8
	NSArray *_accountDisplayNames;	// 12 = 0xc
	NSDictionary *_groupsByAccountIdentifier;	// 16 = 0x10
	BOOL _hidesSearchableSources;	// 20 = 0x14
	BOOL _hidesGlobalGroupWrapper;	// 21 = 0x15
	AccountsManager *_accountsManager;	// 24 = 0x18
	ACAccountStore *_accountStore;	// 28 = 0x1c
	BOOL _dirty;	// 32 = 0x20
}
@property(retain, nonatomic) ACAccountStore *accountStore;	// G=0x34cace29; S=0x34cad761; @synthesize=_accountStore
@property(retain, nonatomic) AccountsManager *accountsManager;	// G=0x34c9086d; S=0x34c9085d; @synthesize=_accountsManager
@property(assign, nonatomic, getter=isDirty) BOOL dirty;	// G=0x34cad771; S=0x34cad781; @synthesize=_dirty
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;	// G=0x34c52e49; S=0x34cad751; @synthesize=_hidesGlobalGroupWrapper
@property(assign, nonatomic) BOOL hidesSearchableSources;	// G=0x34c90ffd; S=0x34c5238d; @synthesize=_hidesSearchableSources
@property(retain, nonatomic) ABModel *model;	// G=0x34c52351; S=0x34c5239d; @synthesize=_model
- (id)init;	// 0x34c52299
- (id)accountDisplayNameAtIndex:(int)index;	// 0x34cad3c1
// declared property getter: - (id)accountStore;	// 0x34cace29
// declared property getter: - (id)accountsManager;	// 0x34c9086d
- (void)cancelScheduledRefresh;	// 0x34cad719
- (void)dealloc;	// 0x34cacd5d
- (id)defaultGroupWrapper;	// 0x34cace69
- (id)groupWrapperForIndexPath:(id)indexPath;	// 0x34cacee5
// declared property getter: - (BOOL)hidesGlobalGroupWrapper;	// 0x34c52e49
// declared property getter: - (BOOL)hidesSearchableSources;	// 0x34c90ffd
- (id)indexPathForGroupWrapper:(id)groupWrapper;	// 0x34cacf6d
// declared property getter: - (BOOL)isDirty;	// 0x34cad771
// declared property getter: - (id)model;	// 0x34c52351
- (id)newContactsFilterFromSelectedGroupWrappers;	// 0x34cad11d
- (int)numberOfAccounts;	// 0x34c5267d
- (int)numberOfGroupsForAccountIdentifier:(id)accountIdentifier;	// 0x34cad5c1
- (int)numberOfGroupsInAccountAtIndex:(int)index;	// 0x34c91115
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34c5266d
- (void)reloadData;	// 0x34c8fe99
- (void)reloadDataIncludingAccountsManager:(BOOL)manager;	// 0x34c8fead
- (void)scheduleRefresh;	// 0x34cad5f9
// declared property setter: - (void)setAccountStore:(id)store;	// 0x34cad761
// declared property setter: - (void)setAccountsManager:(id)manager;	// 0x34c9085d
// declared property setter: - (void)setDirty:(BOOL)dirty;	// 0x34cad781
// declared property setter: - (void)setHidesGlobalGroupWrapper:(BOOL)wrapper;	// 0x34cad751
// declared property setter: - (void)setHidesSearchableSources:(BOOL)sources;	// 0x34c5238d
// declared property setter: - (void)setModel:(id)model;	// 0x34c5239d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34cad451
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34cad3e1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34c91101
@end
