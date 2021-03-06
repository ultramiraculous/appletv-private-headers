/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrCollectionController : BRMediaMenuController {
	ATVInternetPhotosAccount *_account;	// 176 = 0xb0
	BOOL _isScreenSaverMenu;	// 180 = 0xb4
}
+ (id)menuControllerForAccount:(id)account;	// 0x1aeff1
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x1af039
- (id)initWithAccount:(id)account;	// 0x1af085
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x1af099
- (void)_handleAddSelection:(id)selection;	// 0x1afabd
- (void)_handleCollectionSelection:(id)selection;	// 0x1af699
- (void)_handleContactsSelection:(id)selection;	// 0x1afc6d
- (void)_handleRemoveSelection:(id)selection;	// 0x1af941
- (void)_providerUpdated:(id)updated;	// 0x1afd41
- (void)dealloc;	// 0x1af5e5
- (long)defaultIndex;	// 0x1af661
- (BOOL)isNetworkDependent;	// 0x1af695
@end

