/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRController.h"

@class NSString, BRTextEntryController;

__attribute__((visibility("hidden")))
@interface MEInternetAddSiteController : BRController <BRTextFieldDelegate> {
	BRTextEntryController *_textEntryControl;	// 96 = 0x60
	NSString *_URLString;	// 100 = 0x64
	BOOL _showingNamePrompt;	// 104 = 0x68
}
+ (id)_extraCategoriesPath;	// 0x16dfed
+ (id)addSiteController;	// 0x16dfb1
+ (id)extraInternetSites;	// 0x16e069
+ (void)initialize;	// 0x16dd05
- (id)init;	// 0x16e1a5
- (void).cxx_destruct;	// 0x16e661
- (void)textDidChange:(id)text;	// 0x16e361
- (void)textDidEndEditing:(id)text;	// 0x16e365
@end

