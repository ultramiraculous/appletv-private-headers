/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesRatingControl : BRControl {
@private
	BRImageControl *_freshnessImageControl;	// 48 = 0x30
	BRTextControl *_percentageNumberControl;	// 52 = 0x34
	BRTextControl *_percentageGlyphControl;	// 56 = 0x38
	BOOL _trickLayouting;	// 60 = 0x3c
}
@property(assign) BOOL trickLayouting;	// G=0x365d8745; S=0x365d8755; @synthesize=_trickLayouting
+ (id)ratingControlWithItem:(id)item;	// 0x365d7f65
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x365d8079
- (id)initWithFeedElement:(id)feedElement;	// 0x365d819d
- (id)initWithItem:(id)item;	// 0x365d7fb1
- (void)_configureControlsWithFreshness:(int)freshness percentage:(id)percentage;	// 0x365d8765
- (id)accessibilityLabel;	// 0x365d86bd
- (void)dealloc;	// 0x365d82a1
- (void)layoutSubcontrols;	// 0x365d8315
// declared property setter: - (void)setTrickLayouting:(BOOL)layouting;	// 0x365d8755
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x365d8649
// declared property getter: - (BOOL)trickLayouting;	// 0x365d8745
@end
