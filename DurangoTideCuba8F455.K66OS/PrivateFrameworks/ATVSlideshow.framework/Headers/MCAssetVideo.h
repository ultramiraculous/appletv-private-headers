/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAsset.h"

@class NSMutableSet, NSSet;

@interface MCAssetVideo : MCAsset {
	NSMutableSet *mSlides;	// 20 = 0x14
}
@property(readonly, assign) NSSet *slides;	// G=0x33dae1f9; @synthesize=mSlides
@property(readonly, assign) MCAssetVideo *snapshot;	// @dynamic
- (id)init;	// 0x33dae099
- (void)demolish;	// 0x33dae105
- (void)forgetSlide:(id)slide;	// 0x33dae1d9
- (BOOL)isInUse;	// 0x33dae159
- (void)learnSlide:(id)slide;	// 0x33dae1b9
// declared property getter: - (id)slides;	// 0x33dae1f9
@end

