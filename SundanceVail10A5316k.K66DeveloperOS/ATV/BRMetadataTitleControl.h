/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRMetadataTitleControl : BRControl {
	BRTextControl *_title;	// 80 = 0x50
	BRTextControl *_titleSubtext;	// 84 = 0x54
	BRImageControl *_rating;	// 88 = 0x58
	BRImageControl *_rightImage;	// 92 = 0x5c
	BOOL _ratingSnapsToTitle;	// 96 = 0x60
	float _rightImageHeight;	// 100 = 0x64
}
- (id)init;	// 0x2c2b99
- (void)_layoutSubcontrolsWithSize:(CGSize)size;	// 0x2c3289
- (id)accessibilityLabel;	// 0x2c3205
- (void)dealloc;	// 0x2c2d21
- (void)layoutSubcontrols;	// 0x2c31bd
- (CGSize)renderedSize;	// 0x2c2fcd
- (void)setRating:(id)rating;	// 0x2c2ea9
- (void)setRatingSnapsToTitle:(BOOL)title;	// 0x2c2f2d
- (void)setRightImage:(id)image;	// 0x2c2f59
- (void)setRightImageFixedHeight:(float)height;	// 0x2c2f95
- (void)setTitle:(id)title;	// 0x2c2dad
- (void)setTitleSubtext:(id)subtext;	// 0x2c2e29
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c30d1
@end

