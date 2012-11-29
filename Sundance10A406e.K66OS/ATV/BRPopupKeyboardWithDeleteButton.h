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
- (id)_filterRawKeyboardData:(id)data;	// 0x303ad9
- (id)_keyboardDataFileName;	// 0x3040a5
- (int)_numberOfActionKeyColumns;	// 0x3040fd
- (int)_numberOfActionKeyRows;	// 0x3040f9
- (int)_numberOfMainKeyColumns;	// 0x3040d1
- (int)_numberOfMainKeyRows;	// 0x3040cd
- (void)dealloc;	// 0x3037cd
- (id)keyboardControl;	// 0x303819
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x303a85
@end
