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
	MCProfile *_profile;	// 100 = 0x64
	SettingsMetadataView *_infoView;	// 104 = 0x68
}
@property(retain, nonatomic) SettingsMetadataView *infoView;	// G=0xb0e59; S=0xb0e69; @synthesize=_infoView
@property(retain, nonatomic) MCProfile *profile;	// G=0xb0e21; S=0xb0e31; @synthesize=_profile
- (id)initWithProfile:(id)profile;	// 0xb06c1
- (void).cxx_destruct;	// 0xb0e91
- (void)_updateMetadata:(id)metadata;	// 0xb0ab9
// declared property getter: - (id)infoView;	// 0xb0e59
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb09b9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb08d5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb08d1
// declared property getter: - (id)profile;	// 0xb0e21
// declared property setter: - (void)setInfoView:(id)view;	// 0xb0e69
// declared property setter: - (void)setProfile:(id)profile;	// 0xb0e31
@end

