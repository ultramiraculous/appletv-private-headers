/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRPopupKeyboardControl;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardWithDeleteButton : BRKeyboard {
	BRPopupKeyboardControl *_popupKeyboardControl;	// 48 = 0x30
}
- (id)_filterRawKeyboardData:(id)data;	// 0x3a6ea5
- (id)_keyboardDataFileName;	// 0x3a7471
- (int)_numberOfActionKeyColumns;	// 0x3a74c9
- (int)_numberOfActionKeyRows;	// 0x3a74c5
- (int)_numberOfMainKeyColumns;	// 0x3a749d
- (int)_numberOfMainKeyRows;	// 0x3a7499
- (void)dealloc;	// 0x3a6b99
- (BOOL)isLastCharacterSelected;	// 0x3a74cd
- (id)keyboardControl;	// 0x3a6be5
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x3a6e51
@end

