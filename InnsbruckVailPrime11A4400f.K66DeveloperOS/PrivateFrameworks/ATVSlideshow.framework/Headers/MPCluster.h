/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSString;

@interface MPCluster : NSObject {
	NSMutableArray *mSlides;	// 4 = 0x4
	NSMutableSet *mPathsInCluster;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
	float mRating;	// 16 = 0x10
	NSMutableDictionary *mUsageCounterPerLayer;	// 20 = 0x14
}
@property(retain) NSMutableArray *items;	// G=0x2fb83711; S=0x2fb83725; @synthesize=mSlides
@property(copy) NSString *name;	// G=0x2fb83735; S=0x2fb83749; @synthesize=mName
@property(assign) float rating;	// G=0x2fb83759; S=0x2fb8376d; @synthesize=mRating
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x2fb83785; S=0x2fb83799; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x2fb82e19
- (void)addSlide:(id)slide;	// 0x2fb82f2d
- (id)allSlides;	// 0x2fb82f8d
- (id)allSlidesSortedByUser;	// 0x2fb82f9d
- (id)allSlidesSortedChronologically;	// 0x2fb82fcd
- (BOOL)clusterContainsSlideAtPath:(id)path;	// 0x2fb82fc9
- (void)dealloc;	// 0x2fb82e9d
- (id)description;	// 0x2fb83675
- (void)detailedDescription;	// 0x2fb834e9
// declared property getter: - (id)items;	// 0x2fb83711
// declared property getter: - (id)name;	// 0x2fb83735
// declared property getter: - (float)rating;	// 0x2fb83759
- (void)removeAllSlides;	// 0x2fb82f4d
- (void)resetAllUsageCounters;	// 0x2fb832b1
// declared property setter: - (void)setItems:(id)items;	// 0x2fb83725
// declared property setter: - (void)setName:(id)name;	// 0x2fb83749
// declared property setter: - (void)setRating:(float)rating;	// 0x2fb8376d
- (void)setUsageCountForLayer:(id)layer to:(float)to;	// 0x2fb83009
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x2fb83799
- (int)slideCount;	// 0x2fb82f6d
- (id)usageCountDescription;	// 0x2fb83379
- (float)usageCountForLayer:(id)layer;	// 0x2fb83155
// declared property getter: - (id)usageCounterPerLayer;	// 0x2fb83785
@end
