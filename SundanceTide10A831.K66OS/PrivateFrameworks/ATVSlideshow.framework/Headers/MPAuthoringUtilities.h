/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPAuthoringUtilities : NSObject {
}
+ (id)absolutePathAtIndex:(int)index inPaths:(id)paths withOptions:(id)options;	// 0x3392d915
+ (id)absolutePathForPath:(id)path withOptions:(id)options;	// 0x3392d5d9
+ (id)absolutePathsForPaths:(id)paths withOptions:(id)options;	// 0x3392ddad
+ (BOOL)alignToBeatsFromOptions:(id)options;	// 0x3392b001
+ (BOOL)alwaysIncludeLastTransitionFromOptions:(id)options;	// 0x3392d65d
+ (float)aspectRatioFromOptions:(id)options;	// 0x3392ba7d
+ (BOOL)aspectRatioMatchesDefault:(id)aDefault withOptions:(id)options;	// 0x3392dff9
+ (double)audioDurationFromOptions:(id)options;	// 0x3392a799
+ (int)audioScalingModeFromOptions:(id)options;	// 0x3392a7e1
+ (CGColorRef)backgroundColorFromOptions:(id)options;	// 0x3392b261
+ (float)baseBreakAspectRatioFromOptions:(id)options;	// 0x3392dbfd
+ (float)basePortraitBreakAspectRatioFromOptions:(id)options;	// 0x3392dc85
+ (double)beatFactorFromOptions:(id)options;	// 0x3392b215
+ (float)breakDurationScaleFromOptions:(id)options;	// 0x3392daed
+ (BOOL)canAdjustPhaseDurations:(id)durations;	// 0x3392d3c9
+ (BOOL)canHaveTransitionsFromOptions:(id)options;	// 0x3392d03d
+ (BOOL)canRepeatEffectWithPreset:(id)preset;	// 0x3392b559
+ (BOOL)canRepeatPreset:(id)preset;	// 0x3392b6c9
+ (BOOL)collectVersionInformationFromOptions:(id)options;	// 0x3392bc19
+ (id)colorSchemeFromOptions:(id)options;	// 0x3392ce65
+ (BOOL)createBeatsFromOptions:(id)options;	// 0x3392b065
+ (int)croppingModeForFitMoviesFromOptions:(id)options;	// 0x3392a8c1
+ (int)croppingModeFromOptions:(id)options;	// 0x3392a825
+ (double)distanceBetween:(CGPoint)between andPoint:(CGPoint)point;	// 0x3392e251
+ (double)durationPerEffectFromOptions:(id)options;	// 0x3392b409
+ (BOOL)easeKenBurnsPanFromOptions:(id)options;	// 0x3392ad05
+ (BOOL)effectDecidesTransitionFromOptions:(id)options;	// 0x3392cdad
+ (id)effectListFromOptions:(id)options;	// 0x3392bac5
+ (BOOL)effectNeedsPreviousAttributesFromOptions:(id)options;	// 0x3392b611
+ (float)effectPadding:(id)padding;	// 0x3392c699
+ (double)exportTransitionDurationFromOptions:(id)options;	// 0x3392c7bd
+ (id)exportTransitionIDFromOptions:(id)options;	// 0x3392c74d
+ (BOOL)fadeOutAudioFromOptions:(id)options;	// 0x3392d599
+ (double)fadeOutDurationFromOptions:(id)options;	// 0x3392d9a1
+ (BOOL)fitMoviesWhenPossibleFromOptions:(id)options;	// 0x3392b9d1
+ (id)gapInformationFromOptions:(id)options;	// 0x3392dfd1
+ (id)idFromPresetID:(id)presetID;	// 0x3392c275
+ (BOOL)ignoreClusteringForImages:(id)images withOptions:(id)options;	// 0x3392a471
+ (id)ignoreTransitionListFromOptions:(id)options;	// 0x3392bd11
+ (double)introDurationFromOptions:(id)options;	// 0x3392be7d
+ (id)introEffectIDFromOptions:(id)options;	// 0x3392c0b9
+ (CGPoint)kbCenterPointFromRect:(CGRect)rect;	// 0x3392e17d
+ (BOOL)kenBurnsAlwaysZoomInFromOptions:(id)options;	// 0x3392abfd
+ (BOOL)kenBurnsBreaksFromOptions:(id)options;	// 0x3392ac81
+ (float)kenBurnsEndZoomLevelFromOptions:(id)options;	// 0x3392ab75
+ (int)kenBurnsLevelFromOptions:(id)options;	// 0x3392ad89
+ (float)kenBurnsLikelihoodFromOptions:(id)options;	// 0x3392a93d
+ (int)kenBurnsOffsetTypeFromOptions:(id)options;	// 0x3392ae39
+ (float)kenBurnsPanFactorFromOptions:(id)options;	// 0x3392aa3d
+ (float)kenBurnsStartZoomLevelFromOptions:(id)options;	// 0x3392aaed
+ (float)kenBurnsZoomFactorFromOptions:(id)options;	// 0x3392bb5d
+ (id)lastPresetFromOptions:(id)options;	// 0x3392c499
+ (BOOL)layerCanSkipScaleCalculation:(id)calculation withOptions:(id)options;	// 0x3392aebd
+ (id)layerDescriptionForLayerWithZIndex:(int)zindex forStyle:(id)style;	// 0x3392c83d
+ (BOOL)layerHasImagesFromOptions:(id)options;	// 0x3392c975
+ (int)layerIndexFromOptions:(id)options;	// 0x3392a755
+ (double)layerOffsetFromOptions:(id)options;	// 0x3392b4c9
+ (double)layerTimeScaleFromOptions:(id)options;	// 0x3392b15d
+ (id)layerTypeFromOptions:(id)options;	// 0x3392d71d
+ (BOOL)lockTransitionDurationFromOptions:(id)options;	// 0x3392b0a5
+ (id)loopTransitionIDFromOptions:(id)options;	// 0x3392c6dd
+ (BOOL)matchEffectsUsingTagsFromOptions:(id)options;	// 0x3392df4d
+ (BOOL)matchPhasesWithTransitionFromOptions:(id)options;	// 0x3392b351
+ (float)maxKenBurnsZoomFromOptions:(id)options;	// 0x3392a9f9
+ (int)maxNumberOfSlidesToPreloadFromOptions:(id)options;	// 0x3392c075
+ (double)maximumTransitionDurationFromOptions:(id)options;	// 0x3392cb69
+ (double)minimumEffectDurationFromOptions:(id)options;	// 0x3392cc29
+ (int)minimumNumberOfDynamicSlidesToAddFromOptions:(id)options;	// 0x3392c031
+ (double)minimumTransitionDurationFromOptions:(id)options;	// 0x3392caa9
+ (float)movieVolumeFromOptions:(id)options;	// 0x3392cd69
+ (float)multilineSizeFactorFromOptions:(id)options;	// 0x3392e289
+ (BOOL)needsFitMovieAttributeFromOptions:(id)options;	// 0x3392d145
+ (int)numberOfLayersFromOptions:(id)options;	// 0x3392ca2d
+ (double)outroDurationFromOptions:(id)options;	// 0x3392bec5
+ (id)outroEffectIDFromOptions:(id)options;	// 0x3392bdbd
+ (BOOL)padTextOnlyEffects:(id)effects;	// 0x3392cd29
+ (BOOL)performFaceDetectionFromOptions:(id)options;	// 0x3392d879
+ (BOOL)pickEffectsEvenlyByIDWithOptions:(id)options;	// 0x3392d285
+ (BOOL)pickTransitionsEvenlyByIDWithOptions:(id)options;	// 0x3392d1bd
+ (float)portraitBreakDurationScaleFromOptions:(id)options;	// 0x3392db75
+ (int)presentationOrderFromOptions:(id)options;	// 0x3392d69d
+ (id)presetIDFromPresetID:(id)presetID;	// 0x3392c2e5
+ (unsigned)randomSeedFromOptions:(id)options;	// 0x3392ba11
+ (NSRange)reconfigureRangeFromOptions:(id)options;	// 0x3392d79d
+ (CGRect)rectToFitIn:(CGRect)anIn withAspectRatio:(float)aspectRatio;	// 0x3392e12d
+ (int)regionOfInterestPickModeFromOptions:(id)options;	// 0x3392d7f9
+ (int)reorderModeFromOptions:(id)options;	// 0x3392cf35
+ (BOOL)repeatTransitionsFromOptions:(id)options;	// 0x3392bc59
+ (BOOL)replaceAudioPlaylistFromOptions:(id)options;	// 0x3392b221
+ (BOOL)requestGeneratedImagesFromOptions:(id)options;	// 0x3392d491
+ (BOOL)scaleEffectsForBreaksFromOptions:(id)options;	// 0x3392da39
+ (BOOL)scaleOutroEffectFromOptions:(id)options;	// 0x3392bf79
+ (int)screenSizeFromOptions:(id)options;	// 0x3392dd0d
+ (BOOL)shouldComputeFramesFromOptions:(id)options;	// 0x3392c345
+ (BOOL)shouldComputeLoopTransitionFromOptions:(id)options;	// 0x3392c5ed
+ (BOOL)shouldComputeSlideFiltersFromOptions:(id)options;	// 0x3392c52d
+ (BOOL)shouldComputeTransitionsFromOptions:(id)options;	// 0x3392c3d5
+ (BOOL)shouldDuckMoviesFromOptions:(id)options;	// 0x3392d61d
+ (id)styleFromOptions:(id)options;	// 0x3392a719
+ (id)subtitlesFromOptions:(id)options;	// 0x3392d8f1
+ (id)titleEffectFromOptions:(id)options;	// 0x3392c14d
+ (double)transitionDurationFromOptions:(id)options;	// 0x3392b781
+ (id)transitionListFromOptions:(id)options;	// 0x3392bd35
+ (id)urlsFromPaths:(id)paths;	// 0x3392a625
+ (BOOL)useBestAspectRatioFromOptions:(id)options;	// 0x3392b859
+ (BOOL)useDefaultAudioFromOptions:(id)options;	// 0x3392b991
+ (BOOL)useLargestEffectsFromOptions:(id)options;	// 0x3392dec9
+ (BOOL)useROIAspectRatioFromOptions:(id)options;	// 0x3392d0cd
+ (BOOL)useROIFromOptions:(id)options;	// 0x3392b899
+ (BOOL)useTitleEffectFromOptions:(id)options;	// 0x3392b951
+ (BOOL)useTransitionLayoutTagsWithOptions:(id)options;	// 0x3392d4d1
+ (BOOL)useUniformDurations:(id)durations;	// 0x3392cce9
+ (NSRange)videoPathsRangeFromOptions:(id)options;	// 0x3392dd51
@end
