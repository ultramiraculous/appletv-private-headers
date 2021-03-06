/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRViewController.h"

@class NSDictionary, BRTextEntryController, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsAirtunesController : BRViewController <BRTextFieldDelegate> {
	NSDictionary *_selectedSpeakerInfo;	// 104 = 0x68
	BOOL _selectedSpeakerIsConnecting;	// 108 = 0x6c
	BRTextEntryController *_localPasswordEntryController;	// 112 = 0x70
	NSArray *_sortedSpeakers;	// 116 = 0x74
	BOOL _speakersEnabled;	// 120 = 0x78
}
- (id)init;	// 0x2d83d9
- (void).cxx_destruct;	// 0x2d90a1
- (void)_CRDPreferenceChanged:(id)changed;	// 0x2da461
- (void)_handleSecurityItemSelectedForRow:(long)row;	// 0x2d9c39
- (void)_handleSettingsItemSelectedForRow:(long)row;	// 0x2d9865
- (void)_handleSpeakerItemSelectedForRow:(long)row;	// 0x2d9fc1
- (id)_newLocalPasswordEntryControllerWithIdentifier:(id)identifier;	// 0x2da109
- (void)_reloadAirPlaySpeakers:(id)speakers;	// 0x2da23d
- (id)_securityItemForRow:(long)row;	// 0x2d93f9
- (id)_settingsItemForRow:(long)row;	// 0x2d90e9
- (void)_sortListOfAirPlaySpeakers;	// 0x2da2ad
- (id)_speakerItemForRow:(long)row;	// 0x2d95a5
- (void)_speakerSelectionWasCanceled:(id)canceled;	// 0x2da3f9
- (void)_speakerWasSelected:(id)selected;	// 0x2da391
- (void)_speakerWillBeSelected:(id)_speaker;	// 0x2da329
- (void)dealloc;	// 0x2d878d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2d88a1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2d8dd1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2d87f9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2d8c45
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2d8d35
- (long)numberOfSectionsInList:(id)list;	// 0x2d8c2d
- (void)textDidChange:(id)text;	// 0x2d8e5d
- (void)textDidEndEditing:(id)text;	// 0x2d8e61
@end

