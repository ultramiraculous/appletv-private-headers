/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SettingsTVResolutionController : BRViewController {
	NSArray *_resolutionList;	// 104 = 0x68
	long _currentSavedSelection;	// 108 = 0x6c
}
- (id)init;	// 0xc3b51
- (void).cxx_destruct;	// 0xc40ad
- (void)_buildSupportedResolutionList;	// 0xc40c1
- (void)_handleResolutionChangeResult:(int)result forMode:(id)mode;	// 0xc4415
- (void)_refreshDisplaySettings:(id)settings;	// 0xc43e5
- (void)dealloc;	// 0xc3d19
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc3ef9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc3d85
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc3ed1
@end
