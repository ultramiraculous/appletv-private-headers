/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRKeyboard.h"

@class BRControl, BRTextEntryControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanLogIn : BRKeyboard {
@private
	BRTextEntryControl *_textEntryControl;	// 32 = 0x20
	BRControl *_sixthRow;	// 36 = 0x24
}
@property(readonly, retain) BRTextEntryControl *textEntryControl;	// G=0x32a1bf35; converted property
- (id)init;	// 0x32a1c369
- (id)_keyboardDataFileName;	// 0x32a1c3bd
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x32a1c075
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x32a1c835
- (float)_mainKeysVerticalSpacing;	// 0x32a1bf05
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x32a1c599
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x32a1beed
- (int)_numberOfMainKeyRows;	// 0x32a1bee9
- (float)_playPauseMessageBaseGap:(id)gap resolutionScale:(float)scale;	// 0x32a1bf0d
- (Class)_popupKeyboardClass;	// 0x32a1c055
- (float)_preferredGlyphHeight:(id)height;	// 0x32a1bee1
- (float)_preferredGlyphWidth:(id)width;	// 0x32a1bed9
- (float)_tabControlBaseGap:(id)gap resolutionScale:(float)scale;	// 0x32a1c3d5
- (float)_textFieldBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x32a1c3f1
- (CGSize)_textFieldBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x32a1c40d
- (id)accessibilityLabel;	// 0x32a1c2d1
- (id)customizeTextEntryControls:(id)controls;	// 0x32a1bf45
- (void)dealloc;	// 0x32a1c321
- (BOOL)handleEvent:(id)event;	// 0x32a1c1e5
- (CGRect)mainKeysContainerFrame:(id)frame resolutionScale:(float)scale;	// 0x32a1c44d
- (id)name;	// 0x32a1bec9
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x32a1bec5
- (id)switchToThisKeyboardIdentifier;	// 0x32a1c2f9
// converted property getter: - (id)textEntryControl;	// 0x32a1bf35
@end
