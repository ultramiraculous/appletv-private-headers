/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRAppliance.h"

@class NSArray, BRApplianceInfo;

__attribute__((visibility("hidden")))
@interface BRBaseAppliance : XXUnknownSuperclass <BRAppliance> {
	NSArray *_categories;	// 4 = 0x4
	long _categoriesLazyInitializationGuard;	// 8 = 0x8
	BRApplianceInfo *_applianceInfo;	// 12 = 0xc
}
@property(retain) BRApplianceInfo *applianceInfo;	// G=0x2969ed; S=0x296a01; @synthesize=_applianceInfo
@property(readonly, assign, nonatomic) BOOL supportsPurchase;	// G=0x296521; 
@property(readonly, assign, nonatomic) BOOL supportsRental;	// G=0x296525; 
- (id)init;	// 0x2962a5
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x2962a9
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x2971c9
- (id)_applianceCategories;	// 0x296b21
- (BOOL)_isCategory:(id)category memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x2970cd
- (id)accessibilityLabel;	// 0x2969b5
- (id)alertControllerForNoContent;	// 0x2968e1
- (id)alertControllerForNoRemoteContent;	// 0x296941
- (id)applianceCategories;	// 0x296671
- (id)applianceCategoryDescriptions;	// 0x296a11
- (id)applianceController;	// 0x29675d
// declared property getter: - (id)applianceInfo;	// 0x2969ed
- (id)baseMediaType;	// 0x296529
- (id)categoryWithIdentifier:(id)identifier;	// 0x296849
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x296759
- (void)dealloc;	// 0x29636d
- (id)description;	// 0x2964a1
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x296761
- (unsigned)hash;	// 0x296479
- (id)identifierForContentAlias:(id)contentAlias;	// 0x296755
- (BOOL)isEqual:(id)equal;	// 0x296401
- (id)loadCategories;	// 0x296a39
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x296765
- (int)noContentBRError;	// 0x296939
- (int)noRemoteContentBRError;	// 0x296999
- (BOOL)previewError;	// 0x2969a1
- (id)previewErrorIconImage;	// 0x2969ad
- (id)previewErrorSubtext;	// 0x2969a9
- (id)previewErrorText;	// 0x2969a5
- (void)reloadCategories;	// 0x296a49
// declared property setter: - (void)setApplianceInfo:(id)info;	// 0x296a01
// declared property getter: - (BOOL)supportsPurchase;	// 0x296521
// declared property getter: - (BOOL)supportsRental;	// 0x296525
- (id)topShelfController;	// 0x2969b1
@end

