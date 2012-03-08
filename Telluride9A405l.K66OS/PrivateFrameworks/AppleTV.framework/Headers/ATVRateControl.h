/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVRateControl : BRControl {
@private
	BRTextControl *_titleControl;	// 48 = 0x30
	BRImageControl *_starImageControl;	// 52 = 0x34
	int _ratingType;	// 56 = 0x38
	int _integerRating;	// 60 = 0x3c
	float _normalizedRating;	// 64 = 0x40
	id _onRatingSelectedBlock;	// 68 = 0x44
	id _onCancelBlock;	// 72 = 0x48
	BOOL _didUserChangeRating;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) BOOL didUserChangeRating;	// G=0x35f70e09; @synthesize=_didUserChangeRating
@property(copy, nonatomic) id onCancel;	// G=0x35f70fb9; S=0x35f70fc9; @synthesize=_onCancelBlock
@property(copy, nonatomic) id onRatingSelected;	// G=0x35f70f85; S=0x35f70f95; @synthesize=_onRatingSelectedBlock
- (id)init;	// 0x35f708bd
- (id)_imageForKey:(id)key;	// 0x35f70fed
- (void)_setIntegerRating:(int)rating shouldSpeak:(BOOL)speak;	// 0x35f70d29
- (id)_starImageForRating:(int)rating predicted:(BOOL)predicted;	// 0x35f71061
- (void)_updateStarsShouldSpeak:(BOOL)_updateStars;	// 0x35f71131
- (id)accessibilityLabel;	// 0x35f711dd
- (BOOL)brEventAction:(id)action;	// 0x35f70e19
- (void)dealloc;	// 0x35f70c55
// declared property getter: - (BOOL)didUserChangeRating;	// 0x35f70e09
- (BOOL)isAccessibilityElement;	// 0x35f711d9
// declared property getter: - (id)onCancel;	// 0x35f70fb9
// declared property getter: - (id)onRatingSelected;	// 0x35f70f85
// declared property setter: - (void)setOnCancel:(id)cancel;	// 0x35f70fc9
// declared property setter: - (void)setOnRatingSelected:(id)selected;	// 0x35f70f95
- (void)setRating:(float)rating;	// 0x35f70d79
- (void)setRatingType:(int)type;	// 0x35f70de9
- (void)setTitle:(id)title;	// 0x35f70cdd
@end
