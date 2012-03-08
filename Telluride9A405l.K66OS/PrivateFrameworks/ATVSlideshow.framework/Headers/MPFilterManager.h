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
+ (void)loadFilterManagerWithPaths:(id)paths;	// 0x334d0c81
+ (void)releaseSharedManager;	// 0x334cff69
+ (id)sharedManager;	// 0x334cff21
- (id)initWithPaths:(id)paths;	// 0x334d0cdd
- (id)animationsForFilterID:(id)filterID andPresetID:(id)anId;	// 0x334d016d
- (id)attributesForFilterID:(id)filterID andPresetID:(id)anId;	// 0x334d00bd
- (id)constraintsForFilterPresetsMatchingList:(id)filterPresetsMatchingList andCriteria:(id)criteria;	// 0x334d023d
- (void)dealloc;	// 0x334cff95
- (id)filterCategoryIDs;	// 0x334d0065
- (id)filterIDsForCategoryID:(id)categoryID;	// 0x334d0061
- (id)filterPresetsMatchingCriteria:(id)criteria;	// 0x334d08e1
- (id)presetIDsForFilterID:(id)filterID;	// 0x334d0075
- (id)randomFilter:(BOOL)filter;	// 0x334d0c25
- (id)randomFilterPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x334d06d9
- (id)versionOfFilterID:(id)filterID;	// 0x334d0029
@end
