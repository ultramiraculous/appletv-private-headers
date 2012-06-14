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
	SettingsComputersDiagnosticsView *_diagnosticsView;	// 100 = 0x64
}
- (id)init;	// 0xa892d
- (void).cxx_destruct;	// 0xa8ecd
- (id)_diagnosticItemForRow:(long)row;	// 0xa8ee1
- (void)_handleDiagnosticsItemSelectedForRow:(long)row;	// 0xa91c9
- (id)_homeShareInfoItemForRow:(long)row;	// 0xa8fa5
- (void)dealloc;	// 0xa8b5d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xa8ce1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xa8e61
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xa8bc9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xa8c59
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xa8c69
- (long)numberOfSectionsInList:(id)list;	// 0xa8c55
@end

