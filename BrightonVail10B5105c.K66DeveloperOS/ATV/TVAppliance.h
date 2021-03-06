/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseAppliance.h"


__attribute__((visibility("hidden")))
@interface TVAppliance : ATVMusicStoreBaseAppliance {
	BOOL _favoritesCategoryEnabled;	// 8 = 0x8
}
+ (void)initialize;	// 0x79ff9
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x7a115
- (void)_favoriteAdded:(id)added;	// 0x7a8a1
- (void)_favoriteRemoved:(id)removed;	// 0x7a9d5
- (id)_favoritesController;	// 0x7ab09
- (id)applianceController;	// 0x7a4e9
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x7a455
- (void)dealloc;	// 0x7a1f5
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x7a535
- (id)loadCategories;	// 0x7a265
- (id)localizedSearchTitle;	// 0x7a821
- (int)noContentBRError;	// 0x7a891
- (int)noRemoteContentBRError;	// 0x7a899
- (BOOL)supportsPurchase;	// 0x7a261
- (id)topShelfController;	// 0x7a4b1
@end

