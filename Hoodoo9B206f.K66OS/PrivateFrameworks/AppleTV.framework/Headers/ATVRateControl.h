/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVRateControl : BRControl {
@private
	BRImageControl *_backgroundImageControl;	// 48 = 0x30
	BRImageControl *_arrowImageControl;	// 52 = 0x34
	BRTextControl *_rateTextControl;	// 56 = 0x38
	BRTextControl *_saveTextControl;	// 60 = 0x3c
	BRTextControl *_titleControl;	// 64 = 0x40
	BRImageControl *_starImageControl;	// 68 = 0x44
	int _ratingType;	// 72 = 0x48
	int _integerRating;	// 76 = 0x4c
	float _normalizedRating;	// 80 = 0x50
	id _onRatingSelectedBlock;	// 84 = 0x54
	id _onCancelBlock;	// 88 = 0x58
}
@property(copy, nonatomic) id onCancel;	// G=0x367d3eb1; S=0x367d3ec1; @synthesize=_onCancelBlock
@property(copy, nonatomic) id onRatingSelected;	// G=0x367d3e7d; S=0x367d3e8d; @synthesize=_onRatingSelectedBlock
- (id)init;	// 0x367d35a9
- (id)_imageForKey:(id)key;	// 0x367d3ee5
- (void)_setIntegerRating:(int)rating shouldSpeak:(BOOL)speak;	// 0x367d396d
- (id)_starImageForRating:(int)rating predicted:(BOOL)predicted;	// 0x367d3f39
- (void)_updateStarsShouldSpeak:(BOOL)_updateStars;	// 0x367d4009
- (id)accessibilityLabel;	// 0x367d40b5
- (BOOL)brEventAction:(id)action;	// 0x367d3cf9
- (void)dealloc;	// 0x367d3849
- (BOOL)isAccessibilityElement;	// 0x367d40b1
- (void)layoutSubcontrols;	// 0x367d3a4d
// declared property getter: - (id)onCancel;	// 0x367d3eb1
// declared property getter: - (id)onRatingSelected;	// 0x367d3e7d
- (void)setInitialRating:(float)rating;	// 0x367d39bd
- (void)setInitialRatingType:(int)type;	// 0x367d3a2d
// declared property setter: - (void)setOnCancel:(id)cancel;	// 0x367d3ec1
// declared property setter: - (void)setOnRatingSelected:(id)selected;	// 0x367d3e8d
- (void)setTitle:(id)title;	// 0x367d3921
@end

