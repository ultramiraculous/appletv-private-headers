/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray;

@interface MPFilterManager : NSObject {
	NSMutableDictionary *mFilters;	// 4 = 0x4
	NSArray *mFilterCategories;	// 8 = 0x8
	NSMutableDictionary *mFilterPresets;	// 12 = 0xc
}
+ (void)loadFilterManagerWithPaths:(id)paths;	// 0x342c0c81
+ (void)releaseSharedManager;	// 0x342bff69
+ (id)sharedManager;	// 0x342bff21
- (id)initWithPaths:(id)paths;	// 0x342c0cdd
- (id)animationsForFilterID:(id)filterID andPresetID:(id)anId;	// 0x342c016d
- (id)attributesForFilterID:(id)filterID andPresetID:(id)anId;	// 0x342c00bd
- (id)constraintsForFilterPresetsMatchingList:(id)filterPresetsMatchingList andCriteria:(id)criteria;	// 0x342c023d
- (void)dealloc;	// 0x342bff95
- (id)filterCategoryIDs;	// 0x342c0065
- (id)filterIDsForCategoryID:(id)categoryID;	// 0x342c0061
- (id)filterPresetsMatchingCriteria:(id)criteria;	// 0x342c08e1
- (id)presetIDsForFilterID:(id)filterID;	// 0x342c0075
- (id)randomFilter:(BOOL)filter;	// 0x342c0c25
- (id)randomFilterPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x342c06d9
- (id)versionOfFilterID:(id)filterID;	// 0x342c0029
@end
