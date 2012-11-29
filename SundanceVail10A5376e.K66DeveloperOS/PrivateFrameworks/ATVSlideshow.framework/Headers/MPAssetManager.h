/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPAssetManager : NSObject {
}
+ (void)cleanFaceCore;	// 0x3619a039
+ (void)cleanFaceCore;	// 0x3619a3fd
+ (char *)convertCGImageToBuffer:(CGImageRef)buffer;	// 0x3619a4c1
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x3619a72d
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x3619a635
+ (FaceCoreAPI *)faceCoreAPI;	// 0x3619a0fd
+ (void)releaseSharedManager;	// 0x36199571
+ (id)sharedManager;	// 0x36199481
- (id)init;	// 0x36199689
- (id)absolutePathFromPath:(id)path;	// 0x36199fc1
- (void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x3619a00d
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x3619a011
- (id)altitudeForAssetAtPath:(id)path;	// 0x36199759
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x3619a035
- (id)creationDateForAssetAtPath:(id)path;	// 0x36199749
- (void)dealloc;	// 0x361996b5
- (double)durationForAssetAtPath:(id)path;	// 0x361996e9
- (void)gatherMetadataForAssetAtPath:(id)path;	// 0x361996e5
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x36199769
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x36199761
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x36199765
- (id)keywordsForAssetAtPath:(id)path;	// 0x3619974d
- (id)latitudeForAssetAtPath:(id)path;	// 0x36199751
- (id)locationHierarchyForAssetAtPath:(id)path;	// 0x3619975d
- (id)longitudeForAssetAtPath:(id)path;	// 0x36199755
- (unsigned)mediaTypeForAssetAtPath:(id)path;	// 0x3619976d
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x3619a025
- (double)posterTimeForAssetAtPath:(id)path;	// 0x36199fc9
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x3619a031
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x36199fe9
- (id)regionsOfInterestForAsset:(CGImageRef)asset;	// 0x361997f5
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x36199c15
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x3619a02d
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x36199731
- (id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;	// 0x36199fe5
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x3619a029
- (void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x3619a015
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x3619a019
- (void)setSavesToDisk:(BOOL)disk;	// 0x361996e1
- (double)startTimeForAssetAtPath:(id)path;	// 0x36199701
- (double)stopTimeForAssetAtPath:(id)path;	// 0x36199719
- (void)tryToSaveCache;	// 0x36199fe1
- (void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;	// 0x3619a01d
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x3619a021
@end
