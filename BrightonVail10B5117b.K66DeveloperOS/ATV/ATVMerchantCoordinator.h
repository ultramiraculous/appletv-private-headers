/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMerchantCoordinator : XXUnknownSuperclass <ATVSettingsSaver> {
	NSDictionary *_merchantsByIdentifier;	// 4 = 0x4
	NSArray *_enabledMerchants;	// 8 = 0x8
	NSArray *_allMerchants;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *allMerchants;	// G=0x385881; S=0x388a15; @synthesize=_allMerchants
@property(copy, nonatomic) NSArray *enabledMerchants;	// G=0x38579d; S=0x388a05; @synthesize=_enabledMerchants
@property(copy, nonatomic) NSArray *orderedMerchantIdentifiers;	// G=0x388749; S=0x3883a9; 
+ (id)_currentStoreFrontAppOrderingPrefsKey;	// 0x388331
+ (id)sharedInstance;	// 0x3851e9
+ (void)sortMerchantsArray:(id)array;	// 0x388035
- (id)init;	// 0x385289
- (void)_cleanUpAfterLegacyMerchant:(id)merchant;	// 0x387dc5
- (void)_cleanupAfterMerchantsHaveBeenRemoved;	// 0x387c8d
- (id)_enabledMerchantsFilterPredicate;	// 0x385ca1
- (void)_handleFeatureDisabledNotification:(id)notification;	// 0x385c3d
- (void)_handleFeatureEnabledNotification:(id)notification;	// 0x385c29
- (void)_handleITMSMerchantDidInstallResources;	// 0x385c51
- (void)_handleLanguageChangedNotification:(id)notification;	// 0x385c15
- (void)_handleURLBagLoadedNotification:(id)notification;	// 0x385b85
- (void)_loadAddSiteMerchantsWithCompletionHandler:(id)completionHandler;	// 0x386765
- (id)_localBags;	// 0x386669
- (void)_merchantsChanged:(id)changed;	// 0x388949
- (void)_musicStorePartnerDataUpdated;	// 0x388875
- (id)_newMerchantWithIdentifier:(id)identifier isFeedMerchant:(BOOL)merchant;	// 0x386ce5
- (void)_registerAccountAndAuthenticatorForMerchant:(id)merchant;	// 0x386e05
- (id)_screensaverDictionariesFromResource;	// 0x403d59
- (id)_screensaverDictionariesFromVendorBags;	// 0x403fe1
- (void)_updateMerchantServices;	// 0x387291
- (void)_updateMerchantsWithCompletionHandler:(id)completionHandler;	// 0x38644d
- (void)_updateMerchantsWithVendorBags:(id)vendorBags;	// 0x385e45
- (void)addPathsToSaveTo:(id)to;	// 0x3854e9
// declared property getter: - (id)allMerchants;	// 0x385881
- (void)dealloc;	// 0x385469
// declared property getter: - (id)enabledMerchants;	// 0x38579d
- (BOOL)isITMSFeedCollectionReadFromLocal:(id)local;	// 0x403b21
- (void)merchantChanged:(id)changed;	// 0x3889c5
- (id)merchantWithIdentifier:(id)identifier;	// 0x3856d1
// declared property getter: - (id)orderedMerchantIdentifiers;	// 0x388749
- (id)rootControllerForMerchantIdentifier:(id)merchantIdentifier;	// 0x385965
- (id)screensaverDictionaries;	// 0x40366d
// declared property setter: - (void)setAllMerchants:(id)merchants;	// 0x388a15
// declared property setter: - (void)setEnabledMerchants:(id)merchants;	// 0x388a05
// declared property setter: - (void)setOrderedMerchantIdentifiers:(id)identifiers;	// 0x3883a9
@end

