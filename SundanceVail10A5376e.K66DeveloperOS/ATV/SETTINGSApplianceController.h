/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface SETTINGSApplianceController : BRViewController {
	id<BRAppliance> _appliance;	// 104 = 0x68
}
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xbc82d; S=0xbc83d; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xbc325
- (void).cxx_destruct;	// 0xbc851
// declared property getter: - (id)appliance;	// 0xbc82d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xbc6b9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xbc4dd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xbc65d
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xbc83d
@end

