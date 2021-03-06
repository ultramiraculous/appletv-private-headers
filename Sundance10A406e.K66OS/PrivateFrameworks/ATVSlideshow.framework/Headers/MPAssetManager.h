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
+ (void)cleanFaceCore;	// 0x35fd70c9
+ (void)cleanFaceCore;	// 0x35fd748d
+ (char *)convertCGImageToBuffer:(CGImageRef)buffer;	// 0x35fd7551
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x35fd77bd
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x35fd76c5
+ (FaceCoreAPI *)faceCoreAPI;	// 0x35fd718d
+ (void)releaseSharedManager;	// 0x35fd64b1
+ (id)sharedManager;	// 0x35fd63c1
- (id)init;	// 0x35fd65c9
- (id)absolutePathFromPath:(id)path;	// 0x35fd7055
- (void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x35fd709d
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x35fd70a1
- (id)altitudeForAssetAtPath:(id)path;	// 0x35fd6699
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x35fd70c5
- (id)creationDateForAssetAtPath:(id)path;	// 0x35fd6689
- (void)dealloc;	// 0x35fd65f5
- (double)durationForAssetAtPath:(id)path;	// 0x35fd6629
- (void)gatherMetadataForAssetAtPath:(id)path;	// 0x35fd6625
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x35fd66a9
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x35fd66a1
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x35fd66a5
- (id)keywordsForAssetAtPath:(id)path;	// 0x35fd668d
- (id)latitudeForAssetAtPath:(id)path;	// 0x35fd6691
- (id)locationHierarchyForAssetAtPath:(id)path;	// 0x35fd669d
- (id)longitudeForAssetAtPath:(id)path;	// 0x35fd6695
- (unsigned)mediaTypeForAssetAtPath:(id)path;	// 0x35fd66ad
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x35fd70b5
- (double)posterTimeForAssetAtPath:(id)path;	// 0x35fd7059
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x35fd70c1
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x35fd7079
- (id)regionsOfInterestForAsset:(CGImageRef)asset;	// 0x35fd6735
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x35fd6bed
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x35fd70bd
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x35fd6671
- (id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;	// 0x35fd7075
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x35fd70b9
- (void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x35fd70a5
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x35fd70a9
- (void)setSavesToDisk:(BOOL)disk;	// 0x35fd6621
- (double)startTimeForAssetAtPath:(id)path;	// 0x35fd6641
- (double)stopTimeForAssetAtPath:(id)path;	// 0x35fd6659
- (void)tryToSaveCache;	// 0x35fd7071
- (void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;	// 0x35fd70ad
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x35fd70b1
@end

