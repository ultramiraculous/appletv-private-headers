/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVVendorBag, NSString, NSDictionary, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BRMerchantInfo : XXUnknownSuperclass {
	ATVVendorBag *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *_featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *feedResources;	// 20 = 0x14
	int _iconBadgeCount;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDictionary *appDictionary;	// G=0x443cf5; 
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x443a8d; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceURL;	// G=0x443abd; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x443aed; 
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x443c31; 
@property(assign) BOOL enabled;	// G=0x443675; S=0x4436fd; 
@property(readonly, assign, nonatomic) NSArray *excludedMerchantIDs;	// G=0x443e21; 
@property(retain) NSString *featureName;	// G=0x4435e5; S=0x443639; 
@property(assign, nonatomic) NSDictionary *feedResources;	// G=0x443ef9; S=0x443f09; @synthesize
@property(readonly, assign, nonatomic) BOOL hasBeenRemoved;	// G=0x44370d; 
@property(assign, nonatomic) int iconBadgeCount;	// G=0x443f19; S=0x443f29; @synthesize=_iconBadgeCount
@property(readonly, assign, nonatomic) BOOL isFeedMerchant;	// G=0x443755; 
@property(readonly, assign, nonatomic) BOOL isLoadedByAddSite;	// G=0x4437e5; 
@property(readonly, assign, nonatomic) BOOL isReadFromLocalBag;	// G=0x44379d; 
@property(readonly, assign, nonatomic) NSString *javascriptURL;	// G=0x443b1d; 
@property(readonly, assign, nonatomic) NSURL *menuIconURL;	// G=0x4438c5; 
@property(readonly, assign, nonatomic) NSString *menuIconURLVersion;	// G=0x4439f1; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x443869; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x4438a5; 
@property(assign, nonatomic) NSDictionary *metadata;	// G=0x443ed9; S=0x443ee9; @synthesize
@property(readonly, assign, nonatomic) BOOL pinToMerchant;	// G=0x443db9; 
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x443b7d; 
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x443a5d; 
@property(readonly, assign, nonatomic) NSArray *screensaverDictionaries;	// G=0x443d25; 
@property(readonly, assign, nonatomic) NSString *supportURL;	// G=0x443cc5; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x443be9; 
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x443441
- (id)initWithVendorBag:(id)vendorBag;	// 0x44347d
- (id)_featureCode;	// 0x443e51
// declared property getter: - (id)appDictionary;	// 0x443cf5
// declared property getter: - (id)authType;	// 0x443a8d
// declared property getter: - (id)bootstrapResourceURL;	// 0x443abd
// declared property getter: - (id)bootstrapResourceVersion;	// 0x443aed
- (void)dealloc;	// 0x443561
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x443c31
// declared property getter: - (BOOL)enabled;	// 0x443675
// declared property getter: - (id)excludedMerchantIDs;	// 0x443e21
// declared property getter: - (id)featureName;	// 0x4435e5
// declared property getter: - (id)feedResources;	// 0x443ef9
// declared property getter: - (BOOL)hasBeenRemoved;	// 0x44370d
// declared property getter: - (int)iconBadgeCount;	// 0x443f19
// declared property getter: - (BOOL)isFeedMerchant;	// 0x443755
// declared property getter: - (BOOL)isLoadedByAddSite;	// 0x4437e5
// declared property getter: - (BOOL)isReadFromLocalBag;	// 0x44379d
- (id)javascript;	// 0x443b4d
// declared property getter: - (id)javascriptURL;	// 0x443b1d
// declared property getter: - (id)menuIconURL;	// 0x4438c5
// declared property getter: - (id)menuIconURLVersion;	// 0x4439f1
// declared property getter: - (id)menuTitle;	// 0x443869
// declared property getter: - (id)merchantID;	// 0x4438a5
// declared property getter: - (id)metadata;	// 0x443ed9
// declared property getter: - (BOOL)pinToMerchant;	// 0x443db9
// declared property getter: - (float)preferredOrder;	// 0x443b7d
// declared property getter: - (id)rootURL;	// 0x443a5d
// declared property getter: - (id)screensaverDictionaries;	// 0x443d25
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x4436fd
// declared property setter: - (void)setFeatureName:(id)name;	// 0x443639
// declared property setter: - (void)setFeedResources:(id)resources;	// 0x443f09
// declared property setter: - (void)setIconBadgeCount:(int)count;	// 0x443f29
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x443ee9
// declared property getter: - (id)supportURL;	// 0x443cc5
- (void)useDefaultEnablement;	// 0x44382d
// declared property getter: - (BOOL)usesParentalControls;	// 0x443be9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x4435c5
@end

