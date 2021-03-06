/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, NSInvocation;

__attribute__((visibility("hidden")))
@interface SettingsParentalControlsViewController : BRViewController {
	BOOL _correctPIN;	// 100 = 0x64
	NSInvocation *_correctPINAction;	// 104 = 0x68
	NSArray *_pcMerchants;	// 108 = 0x6c
}
- (id)init;	// 0x8ee59
- (void).cxx_destruct;	// 0x8f365
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction;	// 0x91411
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction argument:(void *)argument;	// 0x91425
- (id)_buildPasscodeControllerWithMode:(int)mode;	// 0x90a49
- (void)_changePIN;	// 0x8fd99
- (id)_controlledMerchants;	// 0x8fc29
- (void)_handlePCEnabledSectionSelectionForRow:(long)row;	// 0x8fb9d
- (void)_handlePCStoreSectionSelectionForRow:(long)row;	// 0x8fbc9
- (void)_iterateRatingThresholdForMediaType:(id)mediaType;	// 0x90e81
- (id)_nameKeyForRatingSystemID:(int)ratingSystemID;	// 0x91689
- (id)_ratingThresholdStringForMediaType:(id)mediaType;	// 0x90b1d
- (void)_reloadMenuItems;	// 0x8fd41
- (void)_setTextForPCApplicationsSectionMenuItem:(id)pcapplicationsSectionMenuItem atRow:(long)row;	// 0x8f4cd
- (void)_setTextForPCMatchSectionMenuItem:(id)pcmatchSectionMenuItem atRow:(long)row;	// 0x8f399
- (void)_setTextForPCStoreSectionMenuItem:(id)pcstoreSectionMenuItem atRow:(long)row;	// 0x8f6f9
- (void)_successfulPINEntry:(id)entry;	// 0x915ed
- (void)_toggleExplicitContentMode;	// 0x907cd
- (void)_toggleITunesMatchMode;	// 0x8fe99
- (void)_toggleMerchantModeForIndex:(long)index;	// 0x90155
- (void)_toggleParentalControls;	// 0x90065
- (void)_togglePurchaseRentalMode;	// 0x90429
- (void)_toggleRatingSystem;	// 0x904e5
- (void)_toggleRestrictMoviesMode;	// 0x906cd
- (void)_toggleRestrictTVShowsMode;	// 0x9074d
- (void)dealloc;	// 0x8efb5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8f2c1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8f021
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8f201
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x8f1c5
- (long)numberOfSectionsInList:(id)list;	// 0x8f1c1
@end

