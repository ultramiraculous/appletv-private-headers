/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPFrameManager : NSObject {
	NSMutableDictionary *mFrames;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
}
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x342c2765
+ (void)releaseSharedManager;	// 0x342c2135
+ (id)sharedManager;	// 0x342c20ed
- (id)initWithPaths:(id)paths;	// 0x342c2c9d
- (id)allCategoryIDs;	// 0x342c21f9
- (id)allFrameIDs;	// 0x342c21d9
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x342c2681
- (id)categoryIDsForFrameID:(id)frameID;	// 0x342c250d
- (id)constraintsForFramesMatchingList:(id)framesMatchingList andCriteria:(id)criteria;	// 0x342c29c9
- (void)dealloc;	// 0x342c2161
- (id)framesForCategoryID:(id)categoryID;	// 0x342c2565
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x342c2415
- (id)localizedFrameNameForFrameID:(id)frameID;	// 0x342c23d5
- (id)randomFrameFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x342c27c1
- (id)versionOfFrameID:(id)frameID;	// 0x342c239d
@end

