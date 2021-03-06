/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSArray, BRImageControl, ATVIPv4AddressSelectionWidget;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressSelectionControl : BRControl {
	NSArray *_octetBackgroundLayers;	// 84 = 0x54
	NSArray *_digitLayers;	// 88 = 0x58
	NSArray *_dotLayers;	// 92 = 0x5c
	BRImageControl *_arrowsLayer;	// 96 = 0x60
	ATVIPv4AddressSelectionWidget *_selectionWidget;	// 100 = 0x64
	BRTextControl *_doneLayer;	// 104 = 0x68
	int _selection;	// 108 = 0x6c
}
- (id)init;	// 0x20ed0d
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x210731
- (id)_buildArrowsLayer;	// 0x210101
- (id)_buildDigitLayers;	// 0x20fef9
- (id)_buildDoneLayer;	// 0x21016d
- (id)_buildDotLayers;	// 0x20fffd
- (id)_buildOctetBackgroundLayers;	// 0x20fe3d
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x210929
- (CGRect)_digitFrameForSelection:(int)selection;	// 0x210825
- (float)_layoutUIWithHeight:(float)height;	// 0x21025d
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x210649
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x210c5d
- (void)_setDigitValue:(int)value atIndex:(int)index;	// 0x210d41
- (void)_setSelection:(int)selection;	// 0x210ae5
- (float)_singleCellWidth;	// 0x210a85
- (id)_textEntryGlyphAttributes;	// 0x210e71
- (id)_textEntryGlyphGrayAttributes;	// 0x210e91
- (id)accessibilityLabel;	// 0x210eb5
- (id)accessibilityTraitsList;	// 0x210f41
- (void)controlWasActivated;	// 0x20efbd
- (void)dealloc;	// 0x20ef09
- (BOOL)decrementSelection;	// 0x20f5f1
- (BOOL)doneButtonSelected;	// 0x20faf5
- (BOOL)incrementSelection;	// 0x20f2f9
- (id)ipAddress;	// 0x20f8e5
- (BOOL)moveSelectionLeft;	// 0x20f221
- (BOOL)moveSelectionRight;	// 0x20f149
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x20f01d
- (void)reset;	// 0x20fb1d
- (void)setFrame:(CGRect)frame;	// 0x20fd45
- (void)setIPAddress:(id)address;	// 0x20fb39
@end

