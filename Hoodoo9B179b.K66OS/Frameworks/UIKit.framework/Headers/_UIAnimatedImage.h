/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImage.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIAnimatedImage : UIImage {
@private
	NSArray *_images;	// 16 = 0x10
	double _duration;	// 20 = 0x14
}
@property(readonly, assign) double duration;	// G=0x330723bd; converted property
@property(readonly, retain) NSArray *images;	// G=0x33072385; converted property
- (id)initWithCoder:(id)coder;	// 0x330722b9
- (id)initWithImages:(id)images duration:(double)duration;	// 0x33072161
- (id)_bezeledImageWithShadowRed:(float)shadowRed green:(float)green blue:(float)blue alpha:(float)alpha fillRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 drawShadow:(BOOL)shadow;	// 0x330726ed
- (CGRect)_contentStretchInPixels;	// 0x33072421
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)exteriorShadowRed green:(float)green blue:(float)blue alpha:(float)alpha interiorShadowRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 fillRed:(float)red9 green:(float)green10 blue:(float)blue11 alpha:(float)alpha12;	// 0x33072891
- (id)_imageScaledToProportion:(float)proportion interpolationQuality:(int)quality;	// 0x33072a51
- (BOOL)_isResizable;	// 0x3307246d
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x330724a5
- (id)_selectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x33133c85
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x330724e5
- (id)_unselectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x33133ddd
- (UIEdgeInsets)capInsets;	// 0x330723d5
- (void)dealloc;	// 0x3307226d
// converted property getter: - (double)duration;	// 0x330723bd
- (void)encodeWithCoder:(id)coder;	// 0x33072329
// converted property getter: - (id)images;	// 0x33072385
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x3307258d
@end

