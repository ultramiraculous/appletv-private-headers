/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPEffectManager : NSObject {
	NSMutableDictionary *mEffects;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
	NSMutableDictionary *mCachedAspectRatios;	// 12 = 0xc
}
+ (void)initialize;	// 0x3145970d
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x3145b7b9
+ (void)releaseSharedManager;	// 0x31459785
+ (id)sharedManager;	// 0x3145973d
- (id)initWithPaths:(id)paths;	// 0x3145b819
- (void)_loadFontsFromPath:(id)path requiredFonts:(id)fonts;	// 0x3145c219
- (id)allCategoryIDs;	// 0x31459fa1
- (id)allEffectIDs;	// 0x31459f81
- (BOOL)allowTextCustomizationForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x3145b6f9
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x3145a279
- (id)categoryIDsForEffectID:(id)effectID;	// 0x31459a95
- (id)controlForAttribute:(id)attribute forEffectID:(id)effectID;	// 0x31459d69
- (void)dealloc;	// 0x314597b5
- (double)defaultFullDurationForEffectID:(id)effectID;	// 0x3145b0f9
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x3145ac15
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x3145ab95
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x3145abd5
- (double)defaultPosterFrameTimeForEffect:(id)effect;	// 0x3145ad95
- (double)defaultPosterFrameTimeForEffectID:(id)effectID andPresetID:(id)anId;	// 0x3145ac75
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x3145a171
- (double)durationPaddingForEffectID:(id)effectID;	// 0x3145b5e5
- (BOOL)effectDoesAccumulate:(id)accumulate;	// 0x3145b389
- (id)effectIDsForCategoryID:(id)categoryID;	// 0x31459ac5
- (id)effectsWithNumOfImages:(unsigned)images;	// 0x31459e91
- (id)imageInputInfoForEffectID:(id)effectID;	// 0x3145ab49
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x31459c25
- (id)localizedEffectNameForEffectID:(id)effectID;	// 0x31459be9
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inEffect:(id)effect;	// 0x31459d25
- (float)maxFontSizeInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x3145a175
- (unsigned)maxNumOfImagesPerEffectInList:(id)list;	// 0x3145b21d
- (float)mediaAspectRatioForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x3145a8f9
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index;	// 0x3145a691
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x3145a7f9
- (float)mediaAspectRatioHintForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x3145b545
- (id)mediaAspectRatioHintsForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x3145b3c9
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId;	// 0x3145a591
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x3145a705
- (unsigned)minNumOfImagesPerEffectInList:(id)list;	// 0x3145b2d5
- (double)minimumEffectDurationForEffectID:(id)effectID;	// 0x3145b001
- (unsigned)numOfImagesForEffectID:(id)effectID;	// 0x31459879
- (unsigned)numOfImagesForEffectPresetID:(id)effectPresetID;	// 0x3145b189
- (unsigned)numOfTextsForEffectID:(id)effectID;	// 0x31459a55
- (int)numberOfSecondarySlidesForEffectID:(id)effectID;	// 0x3145aeb9
- (int)numberOfSlidesForEffectID:(id)effectID;	// 0x3145ae4d
- (BOOL)posterTimeIsStaticForEffectID:(id)effectID andPresetID:(id)anId;	// 0x3145af01
- (id)presetIDsForEffectID:(id)effectID;	// 0x3145a239
- (id)settingsUIControlDescriptionsForEffect:(id)effect;	// 0x31459e61
- (id)showTimeScriptForEffectID:(id)effectID atSlideIndex:(int)slideIndex;	// 0x3145afc1
- (id)sizeScriptForEffectID:(id)effectID atIndex:(int)index;	// 0x3145b0b9
- (BOOL)useUppercaseForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x3145b639
- (id)versionOfEffectID:(id)effectID;	// 0x31459849
@end

