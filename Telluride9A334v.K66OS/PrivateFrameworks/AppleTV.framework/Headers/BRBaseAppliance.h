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
- (id)init;	// 0x331ba421
- (BOOL)_anySharesAvailable;	// 0x331bb225
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x331bb2b9
- (id)_applianceCategories;	// 0x331babd5
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x331bb199
- (id)accessibilityLabel;	// 0x331bab09
- (id)alertControllerForNoContent;	// 0x331baa35
- (id)alertControllerForNoRemoteContent;	// 0x331baa95
- (id)applianceCategories;	// 0x331ba7c1
- (id)applianceCategoryDescriptions;	// 0x331bab41
- (id)applianceInfo;	// 0x331ba769
- (id)baseMediaType;	// 0x331ba659
- (id)categoryWithIdentifier:(id)identifier;	// 0x331ba99d
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x331ba8ad
- (void)dealloc;	// 0x331ba55d
- (id)description;	// 0x331ba5d9
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x331ba8b1
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x331ba8b5
- (id)identifierForContentAlias:(id)contentAlias;	// 0x331ba8a9
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x331ba8b9
- (int)noContentBRError;	// 0x331baa8d
- (int)noRemoteContentBRError;	// 0x331baaed
- (BOOL)previewError;	// 0x331baaf5
- (id)previewErrorIconImage;	// 0x331bab01
- (id)previewErrorSubtext;	// 0x331baafd
- (id)previewErrorText;	// 0x331baaf9
- (void)reloadCategories;	// 0x331bab69
- (id)topShelfController;	// 0x331bab05
@end

