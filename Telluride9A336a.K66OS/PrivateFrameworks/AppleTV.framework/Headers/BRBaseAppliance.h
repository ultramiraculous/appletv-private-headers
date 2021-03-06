/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAppliance.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRBaseAppliance : NSObject <BRAppliance> {
@private
	NSArray *_categories;	// 4 = 0x4
}
- (id)init;	// 0x33a3f421
- (BOOL)_anySharesAvailable;	// 0x33a40225
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x33a402b9
- (id)_applianceCategories;	// 0x33a3fbd5
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x33a40199
- (id)accessibilityLabel;	// 0x33a3fb09
- (id)alertControllerForNoContent;	// 0x33a3fa35
- (id)alertControllerForNoRemoteContent;	// 0x33a3fa95
- (id)applianceCategories;	// 0x33a3f7c1
- (id)applianceCategoryDescriptions;	// 0x33a3fb41
- (id)applianceInfo;	// 0x33a3f769
- (id)baseMediaType;	// 0x33a3f659
- (id)categoryWithIdentifier:(id)identifier;	// 0x33a3f99d
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x33a3f8ad
- (void)dealloc;	// 0x33a3f55d
- (id)description;	// 0x33a3f5d9
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x33a3f8b1
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x33a3f8b5
- (id)identifierForContentAlias:(id)contentAlias;	// 0x33a3f8a9
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x33a3f8b9
- (int)noContentBRError;	// 0x33a3fa8d
- (int)noRemoteContentBRError;	// 0x33a3faed
- (BOOL)previewError;	// 0x33a3faf5
- (id)previewErrorIconImage;	// 0x33a3fb01
- (id)previewErrorSubtext;	// 0x33a3fafd
- (id)previewErrorText;	// 0x33a3faf9
- (void)reloadCategories;	// 0x33a3fb69
- (id)topShelfController;	// 0x33a3fb05
@end

