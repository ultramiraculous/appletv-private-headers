/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

@interface BRMetadataTitleControl : BRControl {
@private
	BRTextControl *_title;	// 44 = 0x2c
	BRTextControl *_titleSubtext;	// 48 = 0x30
	BRImageControl *_rating;	// 52 = 0x34
	BRImageControl *_rightImage;	// 56 = 0x38
	BOOL _ratingSnapsToTitle;	// 60 = 0x3c
	float _rightImageHeight;	// 64 = 0x40
}
- (id)init;	// 0x328b2d49
- (id)accessibilityLabel;	// 0x329026a1
- (void)dealloc;	// 0x328b6aad
- (void)layoutSubcontrols;	// 0x329021d5
- (CGSize)renderedSize;	// 0x328b3cd5
- (void)setRating:(id)rating;	// 0x328b30d9
- (void)setRatingSnapsToTitle:(BOOL)title;	// 0x329021ad
- (void)setRightImage:(id)image;	// 0x32902179
- (void)setRightImageFixedHeight:(float)height;	// 0x32902145
- (void)setTitle:(id)title;	// 0x328b301d
- (void)setTitleSubtext:(id)subtext;	// 0x328b366d
@end

