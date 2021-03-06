/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRTextControl : BRControl {
	NSAttributedString *_string;	// 84 = 0x54
}
@property(retain) id attributedString;	// G=0x309cd1; S=0x309c65; converted property
- (id)init;	// 0x309b5d
- (void)_shrinkTextToFitInBounds:(CGSize)bounds;	// 0x32cfe1
- (void)_shrinkTextToTwoLines:(CGSize)twoLines;	// 0x32d219
- (id)accessibilityLabel;	// 0x309ed1
- (id)accessibilityTraitsList;	// 0x309f25
// converted property getter: - (id)attributedString;	// 0x309cd1
- (void)dealloc;	// 0x309ba5
- (id)description;	// 0x309f8d
- (void)drawRect:(CGRect)rect;	// 0x309e31
- (BOOL)isAccessibilityElement;	// 0x309ead
- (CGSize)renderedSize;	// 0x309d7d
- (CGSize)renderedSizeWithMaxSize:(CGSize)maxSize;	// 0x309de9
// converted property setter: - (void)setAttributedString:(id)string;	// 0x309c65
- (void)setMaxSize:(CGSize)size;	// 0x30a009
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x309bf1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x309f61
- (void)updateBoundValue;	// 0x309ce1
@end

