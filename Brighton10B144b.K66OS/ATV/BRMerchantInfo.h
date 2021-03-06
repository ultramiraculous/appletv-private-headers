/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVVendorBag, NSArray, NSURL, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRMerchantInfo : XXUnknownSuperclass {
	ATVVendorBag *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *_featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *feedResources;	// 20 = 0x14
	int _iconBadgeCount;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDictionary *appDictionary;	// G=0x39305d; 
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x392e11; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceURL;	// G=0x392e3d; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x392e69; 
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x392f9d; 
@property(assign) BOOL enabled;	// G=0x392a55; S=0x392add; 
@property(readonly, assign, nonatomic) NSArray *excludedMerchantIDs;	// G=0x393185; 
@property(retain) NSString *featureName;	// G=0x3929c5; S=0x392a19; 
@property(assign, nonatomic) NSDictionary *feedResources;	// G=0x393259; S=0x393269; @synthesize
@property(readonly, assign, nonatomic) BOOL hasBeenRemoved;	// G=0x392aed; 
@property(assign, nonatomic) int iconBadgeCount;	// G=0x393279; S=0x393289; @synthesize=_iconBadgeCount
@property(readonly, assign, nonatomic) BOOL isFeedMerchant;	// G=0x392b31; 
@property(readonly, assign, nonatomic) BOOL isReadFromLocalBag;	// G=0x392b75; 
@property(readonly, assign, nonatomic) NSString *javascriptURL;	// G=0x392e95; 
@property(readonly, assign, nonatomic) NSURL *menuIconURL;	// G=0x392c4d; 
@property(readonly, assign, nonatomic) NSString *menuIconURLVersion;	// G=0x392d79; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x392bf5; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x392c2d; 
@property(assign, nonatomic) NSDictionary *metadata;	// G=0x393239; S=0x393249; @synthesize
@property(readonly, assign, nonatomic) BOOL pinToMerchant;	// G=0x39311d; 
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x392eed; 
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x392de5; 
@property(readonly, assign, nonatomic) NSArray *screensaverDictionaries;	// G=0x393089; 
@property(readonly, assign, nonatomic) NSString *supportURL;	// G=0x393031; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x392f59; 
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x392821
- (id)initWithVendorBag:(id)vendorBag;	// 0x39285d
- (id)_featureCode;	// 0x3931b1
// declared property getter: - (id)appDictionary;	// 0x39305d
// declared property getter: - (id)authType;	// 0x392e11
// declared property getter: - (id)bootstrapResourceURL;	// 0x392e3d
// declared property getter: - (id)bootstrapResourceVersion;	// 0x392e69
- (void)dealloc;	// 0x392941
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x392f9d
// declared property getter: - (BOOL)enabled;	// 0x392a55
// declared property getter: - (id)excludedMerchantIDs;	// 0x393185
// declared property getter: - (id)featureName;	// 0x3929c5
// declared property getter: - (id)feedResources;	// 0x393259
// declared property getter: - (BOOL)hasBeenRemoved;	// 0x392aed
// declared property getter: - (int)iconBadgeCount;	// 0x393279
// declared property getter: - (BOOL)isFeedMerchant;	// 0x392b31
// declared property getter: - (BOOL)isReadFromLocalBag;	// 0x392b75
- (id)javascript;	// 0x392ec1
// declared property getter: - (id)javascriptURL;	// 0x392e95
// declared property getter: - (id)menuIconURL;	// 0x392c4d
// declared property getter: - (id)menuIconURLVersion;	// 0x392d79
// declared property getter: - (id)menuTitle;	// 0x392bf5
// declared property getter: - (id)merchantID;	// 0x392c2d
// declared property getter: - (id)metadata;	// 0x393239
// declared property getter: - (BOOL)pinToMerchant;	// 0x39311d
// declared property getter: - (float)preferredOrder;	// 0x392eed
// declared property getter: - (id)rootURL;	// 0x392de5
// declared property getter: - (id)screensaverDictionaries;	// 0x393089
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x392add
// declared property setter: - (void)setFeatureName:(id)name;	// 0x392a19
// declared property setter: - (void)setFeedResources:(id)resources;	// 0x393269
// declared property setter: - (void)setIconBadgeCount:(int)count;	// 0x393289
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x393249
// declared property getter: - (id)supportURL;	// 0x393031
- (void)useDefaultEnablement;	// 0x392bb9
// declared property getter: - (BOOL)usesParentalControls;	// 0x392f59
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3929a5
@end

