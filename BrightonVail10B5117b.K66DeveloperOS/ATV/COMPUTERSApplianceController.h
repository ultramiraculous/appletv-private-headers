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
@property(assign, nonatomic) BOOL _computersListed;	// G=0xc7cc1; S=0xc7cd1; @synthesize
@property(assign, nonatomic) BOOL _viewSelectedOnce;	// G=0xc7ce1; S=0xc7cf1; @synthesize
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xc7c9d; S=0xc7cad; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xc7345
- (void).cxx_destruct;	// 0xc7d01
// declared property getter: - (BOOL)_computersListed;	// 0xc7cc1
- (void)_homeShareServersChanged:(id)changed;	// 0xc8591
- (void)_selectView;	// 0xc7d15
// declared property getter: - (BOOL)_viewSelectedOnce;	// 0xc7ce1
// declared property getter: - (id)appliance;	// 0xc7c9d
- (void)dealloc;	// 0xc7431
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc7b6d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xc7a85
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xc78d5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc7739
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc7879
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xc7cad
// declared property setter: - (void)set_computersListed:(BOOL)listed;	// 0xc7cd1
// declared property setter: - (void)set_viewSelectedOnce:(BOOL)once;	// 0xc7cf1
- (void)wasExhumed;	// 0xc75d1
- (void)wasPushed;	// 0xc749d
@end

