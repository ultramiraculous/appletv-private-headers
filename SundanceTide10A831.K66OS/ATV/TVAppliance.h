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
+ (void)initialize;	// 0x7a43d
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x7a559
- (void)_favoriteAdded:(id)added;	// 0x7ace5
- (void)_favoriteRemoved:(id)removed;	// 0x7ae19
- (id)_favoritesController;	// 0x7af4d
- (id)applianceController;	// 0x7a92d
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x7a899
- (void)dealloc;	// 0x7a639
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x7a979
- (id)loadCategories;	// 0x7a6a9
- (id)localizedSearchTitle;	// 0x7ac65
- (int)noContentBRError;	// 0x7acd5
- (int)noRemoteContentBRError;	// 0x7acdd
- (BOOL)supportsPurchase;	// 0x7a6a5
- (id)topShelfController;	// 0x7a8f5
@end

