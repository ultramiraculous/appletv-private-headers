/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVRateControl : BRControl {
	BRImageControl *_backgroundImageControl;	// 84 = 0x54
	BRImageControl *_arrowImageControl;	// 88 = 0x58
	BRTextControl *_rateTextControl;	// 92 = 0x5c
	BRTextControl *_saveTextControl;	// 96 = 0x60
	BRTextControl *_titleControl;	// 100 = 0x64
	BRImageControl *_starImageControl;	// 104 = 0x68
	int _ratingType;	// 108 = 0x6c
	int _integerRating;	// 112 = 0x70
	float _normalizedRating;	// 116 = 0x74
	id _onRatingSelectedBlock;	// 120 = 0x78
	id _onCancelBlock;	// 124 = 0x7c
}
@property(copy, nonatomic) id onCancel;	// G=0xef179; S=0xef18d; @synthesize=_onCancelBlock
@property(copy, nonatomic) id onRatingSelected;	// G=0xef155; S=0xef169; @synthesize=_onRatingSelectedBlock
- (id)init;	// 0xee871
- (id)_imageForKey:(id)key;	// 0xef19d
- (void)_setIntegerRating:(int)rating shouldSpeak:(BOOL)speak;	// 0xeebed
- (id)_starImageForRating:(int)rating predicted:(BOOL)predicted;	// 0xef1f1
- (void)_updateStarsShouldSpeak:(BOOL)_updateStars;	// 0xef2c1
- (id)accessibilityLabel;	// 0xef36d
- (BOOL)brEventAction:(id)action;	// 0xeeff5
- (void)dealloc;	// 0xeeac5
- (BOOL)isAccessibilityElement;	// 0xef369
- (void)layoutSubcontrols;	// 0xeed69
// declared property getter: - (id)onCancel;	// 0xef179
// declared property getter: - (id)onRatingSelected;	// 0xef155
- (void)setInitialRating:(float)rating;	// 0xeec41
- (void)setInitialRatingType:(int)type;	// 0xeecb1
// declared property setter: - (void)setOnCancel:(id)cancel;	// 0xef18d
// declared property setter: - (void)setOnRatingSelected:(id)selected;	// 0xef169
- (void)setRateText:(id)text;	// 0xeecd1
- (void)setSaveText:(id)text;	// 0xeed1d
- (void)setTitle:(id)title;	// 0xeeba1
@end

