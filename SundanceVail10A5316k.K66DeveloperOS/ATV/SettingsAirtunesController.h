/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRTextFieldDelegate.h"

@class NSDictionary, BRTextEntryController, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsAirtunesController : BRViewController <BRTextFieldDelegate> {
	NSDictionary *_selectedSpeakerInfo;	// 100 = 0x64
	BRTextEntryController *_localPasswordEntryController;	// 104 = 0x68
	NSArray *_sortedSpeakers;	// 108 = 0x6c
	BOOL _speakersEnabled;	// 112 = 0x70
}
- (id)init;	// 0xa25c1
- (void).cxx_destruct;	// 0xa2d59
- (void)_handleSettingsItemSelectedForRow:(long)row;	// 0xa3025
- (void)_handleSpeakerItemSelectedForRow:(long)row;	// 0xa3569
- (void)_reloadAirTunesSpeakers:(id)speakers;	// 0xa3945
- (id)_settingsItemForRow:(long)row;	// 0xa2da1
- (void)_sortListOfAirTunesSpeakers;	// 0xa39b5
- (id)_speakerItemForRow:(long)row;	// 0xa3441
- (void)dealloc;	// 0xa2925
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xa2b55
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xa2991
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xa2a3d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xa2aed
- (long)numberOfSectionsInList:(id)list;	// 0xa2a25
- (void)textDidChange:(id)text;	// 0xa2bd1
- (void)textDidEndEditing:(id)text;	// 0xa2bd5
@end

