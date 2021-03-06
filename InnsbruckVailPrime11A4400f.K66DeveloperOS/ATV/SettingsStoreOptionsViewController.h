/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface SettingsStoreOptionsViewController : BRViewController {
	BOOL _requireReloadOnActivation;	// 104 = 0x68
	ATVDataQuery *_rentalQuery;	// 108 = 0x6c
	BOOL _rentalQueryComplete;	// 112 = 0x70
	NSArray *_rentals;	// 116 = 0x74
	BOOL _checkingForRentals;	// 120 = 0x78
	NSArray *_generalSectionRowIndexes;	// 124 = 0x7c
}
@property(retain, nonatomic) NSArray *generalSectionRowIndexes;	// G=0x2a1eb5; S=0x2a1ec5; @synthesize=_generalSectionRowIndexes
- (id)init;	// 0x29f685
- (void).cxx_destruct;	// 0x2a1eed
- (id)_currentAccountName;	// 0x2a23a5
- (id)_currentStoreFrontTitle;	// 0x2a2331
- (void)_dataClientStatusChanged:(id)changed;	// 0x2a1f35
- (void)_loadRentals;	// 0x2a2461
- (void)_login;	// 0x2a2afd
- (void)_logout;	// 0x2a2c0d
- (void)_rentalQueryComplete:(id)complete;	// 0x2a2675
- (void)_rentalRefreshCheckComplete:(id)complete;	// 0x2a2055
- (void)_updateLoadingMenuItem:(id)item;	// 0x2a29c1
- (void)controlWasActivated;	// 0x29f9d9
- (void)dealloc;	// 0x29f939
// declared property getter: - (id)generalSectionRowIndexes;	// 0x2a1eb5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2a161d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2a09fd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x29fa69
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2a0515
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2a0949
- (long)numberOfSectionsInList:(id)list;	// 0x2a09f9
// declared property setter: - (void)setGeneralSectionRowIndexes:(id)indexes;	// 0x2a1ec5
- (void)setMusicSyncStatus:(int)status;	// 0x2a1e55
- (void)updateBoundCurrentStoreFront;	// 0x2a1d6d
- (void)updateBoundStoreFrontChanging;	// 0x2a1c49
@end

