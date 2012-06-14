/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRButtonControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanWeb : BRKeyboard {
	BRButtonControl *_previousButton;	// 48 = 0x30
	BRButtonControl *_nextButton;	// 52 = 0x34
	BRButtonControl *_autoFillButton;	// 56 = 0x38
	BRButtonControl *_clearButton;	// 60 = 0x3c
	BRImageControl *_rowDividerImageControl;	// 64 = 0x40
}
- (id)init;	// 0x2df535
- (void)_autoFillButtonClick:(id)click;	// 0x2dfffd
- (void)_generateKeyEventWithCharacters:(id)characters;	// 0x2dfeb1
- (id)_keyboardDataFileName;	// 0x2df689
- (float)_mainKeysVerticalSpacing;	// 0x2dfea9
- (void)_nextButtonClick:(id)click;	// 0x2dffb5
- (int)_numberOfMainKeyRows;	// 0x2dfea5
- (float)_preferredGlyphHeight:(id)height;	// 0x2df6ad
- (float)_preferredGlyphWidth:(id)width;	// 0x2df6a5
- (void)_prevousButtonClick:(id)click;	// 0x2dff6d
- (BOOL)canShowLanguageSwitchButton;	// 0x2dfe9d
- (BOOL)canWrapVertically;	// 0x2dfdb9
- (id)customizeTextEntryControls:(id)controls;	// 0x2df6b5
- (void)dealloc;	// 0x2df591
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x2df641
- (id)name;	// 0x2df631
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x2dfdbd
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x2dfce9
- (BOOL)requiresTextFieldLabel;	// 0x2dfea1
@end

