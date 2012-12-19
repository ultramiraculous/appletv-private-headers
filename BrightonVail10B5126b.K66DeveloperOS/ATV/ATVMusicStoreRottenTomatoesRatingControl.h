/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesRatingControl : BRControl {
	BRImageControl *_freshnessImageControl;	// 84 = 0x54
	BRTextControl *_percentageNumberControl;	// 88 = 0x58
	BRTextControl *_percentageGlyphControl;	// 92 = 0x5c
	BOOL _trickLayouting;	// 96 = 0x60
}
@property(assign) BOOL trickLayouting;	// G=0x211d71; S=0x211d89; @synthesize=_trickLayouting
+ (id)ratingControlWithItem:(id)item;	// 0x211599
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x2116a9
- (id)initWithFeedElement:(id)feedElement;	// 0x2117cd
- (id)initWithItem:(id)item;	// 0x2115e5
- (void)_configureControlsWithFreshness:(int)freshness percentage:(id)percentage;	// 0x211da1
- (id)accessibilityLabel;	// 0x211ce5
- (void)dealloc;	// 0x2118d1
- (void)layoutSubcontrols;	// 0x211949
// declared property setter: - (void)setTrickLayouting:(BOOL)layouting;	// 0x211d89
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x211c71
// declared property getter: - (BOOL)trickLayouting;	// 0x211d71
@end
