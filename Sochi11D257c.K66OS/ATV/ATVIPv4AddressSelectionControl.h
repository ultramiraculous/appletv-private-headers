/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, NSArray, ATVIPv4AddressSelectionWidget;

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
- (id)init;	// 0x22c195
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x22de4d
- (id)_buildArrowsLayer;	// 0x22d831
- (id)_buildDigitLayers;	// 0x22d629
- (id)_buildDoneLayer;	// 0x22d89d
- (id)_buildDotLayers;	// 0x22d72d
- (id)_buildOctetBackgroundLayers;	// 0x22d56d
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x22e035
- (CGRect)_digitFrameForSelection:(int)selection;	// 0x22df39
- (float)_layoutUIWithHeight:(float)height;	// 0x22d975
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x22dd6d
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x22e379
- (void)_setDigitValue:(int)value atIndex:(int)index;	// 0x22e45d
- (void)_setSelection:(int)selection;	// 0x22e1f1
- (float)_singleCellWidth;	// 0x22e191
- (id)_textEntryGlyphAttributes;	// 0x22e58d
- (id)_textEntryGlyphGrayAttributes;	// 0x22e5ad
- (id)accessibilityLabel;	// 0x22e5d1
- (id)accessibilityTraitsList;	// 0x22e65d
- (void)controlWasActivated;	// 0x22c445
- (void)dealloc;	// 0x22c391
- (BOOL)decrementSelection;	// 0x22ca71
- (BOOL)doneButtonSelected;	// 0x22cf65
- (BOOL)incrementSelection;	// 0x22c781
- (id)ipAddress;	// 0x22cd65
- (BOOL)moveSelectionLeft;	// 0x22c6a9
- (BOOL)moveSelectionRight;	// 0x22c5d1
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x22c4a5
- (void)reset;	// 0x22cf8d
- (void)setFrame:(CGRect)frame;	// 0x22d1ad
- (void)setIPAddress:(id)address;	// 0x22cfa9
- (BOOL)setValueAtSelection:(int)selection;	// 0x22d2a5
@end

