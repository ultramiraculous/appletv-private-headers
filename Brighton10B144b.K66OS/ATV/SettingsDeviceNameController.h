/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRTextFieldDelegate.h"

@class NSArray, BRTextEntryController;

__attribute__((visibility("hidden")))
@interface SettingsDeviceNameController : BRViewController <BRTextFieldDelegate> {
	NSArray *_names;	// 104 = 0x68
	BRTextEntryController *_customNameController;	// 108 = 0x6c
}
- (id)init;	// 0xb8dd1
- (void).cxx_destruct;	// 0xb97b9
- (id)_collectNames;	// 0xb99dd
- (unsigned)_indexOfCurrentName;	// 0xb97ed
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb9225
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb90ed
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb91fd
- (void)textDidChange:(id)text;	// 0xb96b9
- (void)textDidEndEditing:(id)text;	// 0xb96bd
- (void)wasPushed;	// 0xb9029
@end
