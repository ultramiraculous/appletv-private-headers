/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface COMPUTERSApplianceController : BRViewController {
	id<BRAppliance> _appliance;	// 104 = 0x68
	BOOL _computersListed;	// 108 = 0x6c
	BOOL _viewSelectedOnce;	// 109 = 0x6d
}
@property(assign, nonatomic) BOOL _computersListed;	// G=0xc50d1; S=0xc50e1; @synthesize
@property(assign, nonatomic) BOOL _viewSelectedOnce;	// G=0xc50f1; S=0xc5101; @synthesize
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xc50ad; S=0xc50bd; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xc4755
- (void).cxx_destruct;	// 0xc5111
// declared property getter: - (BOOL)_computersListed;	// 0xc50d1
- (void)_homeShareServersChanged:(id)changed;	// 0xc59a1
- (void)_selectView;	// 0xc5125
// declared property getter: - (BOOL)_viewSelectedOnce;	// 0xc50f1
// declared property getter: - (id)appliance;	// 0xc50ad
- (void)dealloc;	// 0xc4841
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc4f7d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xc4e95
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xc4ce5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc4b49
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc4c89
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xc50bd
// declared property setter: - (void)set_computersListed:(BOOL)listed;	// 0xc50e1
// declared property setter: - (void)set_viewSelectedOnce:(BOOL)once;	// 0xc5101
- (void)wasExhumed;	// 0xc49e1
- (void)wasPushed;	// 0xc48ad
@end

