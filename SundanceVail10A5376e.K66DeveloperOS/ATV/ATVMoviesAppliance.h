/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MOVAppliance.h"

@class ATVRentedMediaProvider, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMoviesAppliance : MOVAppliance {
	ATVRentedMediaProvider *_rentals;	// 12 = 0xc
	NSArray *_existingCategories;	// 16 = 0x10
}
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x874d1
- (void).cxx_destruct;	// 0x87c25
- (void)_rentalsUpdated:(id)updated;	// 0x879cd
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x878a9
- (void)dealloc;	// 0x875e1
- (id)loadCategories;	// 0x8764d
- (id)topShelfController;	// 0x87871
@end

