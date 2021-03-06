/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAsset.h"

@class NSSet, NSMutableSet;

@interface MCAssetVideo : MCAsset {
@private
	NSMutableSet *mSlides;	// 20 = 0x14
}
@property(readonly, assign) NSSet *slides;	// G=0x36537045; @synthesize=mSlides
- (id)init;	// 0x36536ef5
- (void)demolish;	// 0x36536f59
- (void)forgetSlide:(id)slide;	// 0x36537025
- (BOOL)isInUse;	// 0x36536fa9
- (void)learnSlide:(id)slide;	// 0x36537005
// declared property getter: - (id)slides;	// 0x36537045
@end

