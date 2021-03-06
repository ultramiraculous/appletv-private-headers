/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRAppliance.h"

@class NSArray;

@interface BRBaseAppliance : NSObject <BRAppliance> {
@private
	NSArray *_categories;	// 4 = 0x4
}
- (id)init;	// 0x32917705
- (BOOL)_anySharesAvailable;	// 0x3291df11
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x329443c9
- (id)_applianceCategories;	// 0x3291c549
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x3291e2d5
- (id)accessibilityLabel;	// 0x329445ed
- (id)alertControllerForNoContent;	// 0x3293c65d
- (id)alertControllerForNoRemoteContent;	// 0x3294450d
- (id)applianceCategories;	// 0x3291c46d
- (id)applianceCategoryDescriptions;	// 0x329444e9
- (id)applianceInfo;	// 0x32917821
- (id)baseMediaType;	// 0x3291ca69
- (id)categoryWithIdentifier:(id)identifier;	// 0x3292177d
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x32944399
- (void)dealloc;	// 0x32917f25
- (id)description;	// 0x32944569
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x3294439d
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x329443a1
- (id)identifierForContentAlias:(id)contentAlias;	// 0x32944395
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x3292183d
- (int)noContentBRError;	// 0x329443a5
- (int)noRemoteContentBRError;	// 0x329443ad
- (BOOL)previewError;	// 0x329443b5
- (id)previewErrorIconImage;	// 0x329443c1
- (id)previewErrorSubtext;	// 0x329443bd
- (id)previewErrorText;	// 0x329443b9
- (void)reloadCategories;	// 0x3294448d
- (id)topShelfController;	// 0x329443c5
@end

