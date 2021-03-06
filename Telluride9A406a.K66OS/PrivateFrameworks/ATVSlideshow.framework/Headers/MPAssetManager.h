/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPAssetManager : NSObject {
}
+ (void)releaseSharedManager;	// 0x34900021
+ (id)sharedManager;	// 0x348fffd9
- (id)init;	// 0x3490004d
- (id)absolutePathFromPath:(id)path;	// 0x34900125
- (void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34900169
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x3490016d
- (id)altitudeForAssetAtPath:(id)path;	// 0x34900111
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x34900191
- (id)creationDateForAssetAtPath:(id)path;	// 0x34900101
- (void)dealloc;	// 0x34900079
- (double)durationForAssetAtPath:(id)path;	// 0x349000ad
- (void)gatherMetadataForAssetAtPath:(id)path;	// 0x349000a9
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x3490011d
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x34900115
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x34900119
- (id)keywordsForAssetAtPath:(id)path;	// 0x34900105
- (id)latitudeForAssetAtPath:(id)path;	// 0x34900109
- (id)longitudeForAssetAtPath:(id)path;	// 0x3490010d
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x34900181
- (double)posterTimeForAssetAtPath:(id)path;	// 0x34900129
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x3490018d
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x34900145
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x34900121
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34900189
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x349000e9
- (id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;	// 0x34900141
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x34900185
- (void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34900171
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34900175
- (void)setSavesToDisk:(BOOL)disk;	// 0x349000a5
- (double)startTimeForAssetAtPath:(id)path;	// 0x349000c1
- (double)stopTimeForAssetAtPath:(id)path;	// 0x349000d5
- (void)tryToSaveCache;	// 0x3490013d
- (void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;	// 0x34900179
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x3490017d
@end

