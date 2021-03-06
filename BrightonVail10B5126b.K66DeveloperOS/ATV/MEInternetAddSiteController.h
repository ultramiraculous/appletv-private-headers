/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class BRTextEntryController, NSString;

__attribute__((visibility("hidden")))
@interface MEInternetAddSiteController : BRController <BRTextFieldDelegate> {
	BRTextEntryController *_textEntryControl;	// 100 = 0x64
	NSString *_URLString;	// 104 = 0x68
	BOOL _showingNamePrompt;	// 108 = 0x6c
}
+ (id)_extraCategoriesPath;	// 0x19a295
+ (id)addSiteController;	// 0x19a259
+ (id)extraInternetSites;	// 0x19a311
+ (void)initialize;	// 0x199fad
- (id)init;	// 0x19a451
- (void).cxx_destruct;	// 0x19a8f9
- (void)textDidChange:(id)text;	// 0x19a5f9
- (void)textDidEndEditing:(id)text;	// 0x19a5fd
@end

