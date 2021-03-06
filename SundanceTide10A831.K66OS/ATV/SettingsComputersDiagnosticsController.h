/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class SettingsComputersDiagnosticsView;

__attribute__((visibility("hidden")))
@interface SettingsComputersDiagnosticsController : BRViewController {
	SettingsComputersDiagnosticsView *_diagnosticsView;	// 104 = 0x68
}
- (id)init;	// 0xb7dcd
- (void).cxx_destruct;	// 0xb831d
- (id)_diagnosticItemForRow:(long)row;	// 0xb8331
- (void)_handleDiagnosticsItemSelectedForRow:(long)row;	// 0xb8619
- (id)_homeShareInfoItemForRow:(long)row;	// 0xb83f5
- (void)dealloc;	// 0xb7fad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xb8131
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb82b1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb8019
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb80a9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xb80b9
- (long)numberOfSectionsInList:(id)list;	// 0xb80a5
@end

