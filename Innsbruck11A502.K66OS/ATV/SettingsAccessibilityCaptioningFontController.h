/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAccessibilityCaptioningStyleBaseController.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface SettingsAccessibilityCaptioningFontController : SettingsAccessibilityCaptioningStyleBaseController {
	long _fontStyle;	// 108 = 0x6c
	CGFontRef _selectedFont;	// 112 = 0x70
}
- (id)initWithTitle:(id)title andProfileID:(id)anId andFontStyle:(long)style;	// 0x2cbdc9
- (void)_reloadList;	// 0x2ccd59
- (void)_toggleVideoOverridesStyle;	// 0x2cce01
- (BOOL)_videoOverridesStyle;	// 0x2ccdc1
- (void)dealloc;	// 0x2cbe45
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2ccb65
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2cc669
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2cbfc5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2cbea1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2cbef5
- (long)numberOfSectionsInList:(id)list;	// 0x2cbe89
@end

