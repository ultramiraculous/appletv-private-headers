/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class SettingsMetadataView, MCProfile;

__attribute__((visibility("hidden")))
@interface SettingsProfileInspectorViewController : BRViewController {
	MCProfile *_profile;	// 104 = 0x68
	SettingsMetadataView *_infoView;	// 108 = 0x6c
}
@property(retain, nonatomic) SettingsMetadataView *infoView;	// G=0xc1415; S=0xc1425; @synthesize=_infoView
@property(retain, nonatomic) MCProfile *profile;	// G=0xc13dd; S=0xc13ed; @synthesize=_profile
- (id)initWithProfile:(id)profile;	// 0xc0c45
- (void).cxx_destruct;	// 0xc144d
- (void)_updateMetadata:(id)metadata;	// 0xc103d
// declared property getter: - (id)infoView;	// 0xc1415
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc0f3d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc0e59
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc0e55
// declared property getter: - (id)profile;	// 0xc13dd
// declared property setter: - (void)setInfoView:(id)view;	// 0xc1425
// declared property setter: - (void)setProfile:(id)profile;	// 0xc13ed
@end

