/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@protocol BRRatingInfoDatabase;

@interface BRParentalControlManager : BRSingleton {
@private
	id<BRRatingInfoDatabase> _ratingInfoDatabase;	// 4 = 0x4
}
@property(assign) BOOL accessControlEnabled;	// G=0x3329aa01; S=0x3329a945; converted property
@property(assign) int accessModeForPurchase;	// G=0x3329b905; S=0x3329b83d; converted property
@property(retain) id defaultRatingSystemID;	// G=0x3329ab89; S=0x3329ab41; converted property
@property(retain) id pin;	// G=0x3329aafd; S=0x3329aa41; converted property
@property(retain) id ratingDatabase;	// G=0x3329ac0d; S=0x3329abcd; converted property
+ (void)setSingleton:(id)singleton;	// 0x3329a909
+ (id)singleton;	// 0x3329a8f9
+ (BOOL)storeAccessRestricted;	// 0x3329bc35
- (id)init;	// 0x3329a919
- (int)_accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier isSet:(BOOL *)set;	// 0x3329b13d
// converted property getter: - (BOOL)accessControlEnabled;	// 0x3329aa01
- (int)accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3329b361
- (int)accessModeForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank;	// 0x3329b631
// converted property getter: - (int)accessModeForPurchase;	// 0x3329b905
- (void)clearAccessModeforAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3329ac1d
- (int)computeAccessModeForAppliance:(id)appliance withCategoryIdentifier:(id)categoryIdentifier;	// 0x3329be21
- (int)computeAccessModeForAsset:(id)asset;	// 0x3329bc8d
- (int)computeAccessModeForPurchase;	// 0x3329bd71
- (int)computeAccessModeForPurchaseWithMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank isExplicit:(BOOL)anExplicit;	// 0x3329bda9
// converted property getter: - (id)defaultRatingSystemID;	// 0x3329ab89
- (int)explicitAccessModeForMediaType:(id)mediaType;	// 0x3329bafd
- (BOOL)hasAccessModeBeenSetForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3329b335
// converted property getter: - (id)pin;	// 0x3329aafd
// converted property getter: - (id)ratingDatabase;	// 0x3329ac0d
// converted property setter: - (void)setAccessControlEnabled:(BOOL)enabled;	// 0x3329a945
- (void)setAccessMode:(int)mode forAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3329ae15
- (void)setAccessMode:(int)mode forMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withThresholdRank:(id)thresholdRank;	// 0x3329b385
// converted property setter: - (void)setAccessModeForPurchase:(int)purchase;	// 0x3329b83d
// converted property setter: - (void)setDefaultRatingSystemID:(id)anId;	// 0x3329ab41
- (void)setExplicitAccessMode:(int)mode forMediaType:(id)mediaType;	// 0x3329b959
// converted property setter: - (void)setPin:(id)pin;	// 0x3329aa41
// converted property setter: - (void)setRatingDatabase:(id)database;	// 0x3329abcd
- (id)thresholdForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID;	// 0x3329be61
@end

