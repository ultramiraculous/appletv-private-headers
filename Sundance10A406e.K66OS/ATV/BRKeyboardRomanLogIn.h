/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanLogIn : BRKeyboard {
	BRControl *_sixthRow;	// 48 = 0x30
}
- (id)init;	// 0x303311
- (float)_actionKeysContainerSpacing;	// 0x30346d
- (float)_actionKeysContainerWidth;	// 0x303465
- (id)_keyboardDataFileName;	// 0x303425
- (float)_mainKeysHorizontalSpacing;	// 0x303451
- (float)_mainKeysVerticalSpacing;	// 0x303449
- (int)_numberOfMainKeyColumns;	// 0x303445
- (int)_numberOfMainKeyRows;	// 0x303441
- (id)_popupKeyboardDataFileName;	// 0x303419
- (float)_preferredTextEntryControlWidth;	// 0x303459
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x303475
- (id)accessibilityLabel;	// 0x3033f1
- (void)dealloc;	// 0x30336d
- (CGRect)keyboardControlFrame;	// 0x30348d
- (float)layoutGapBelowKeyboardControl;	// 0x30347d
- (float)layoutGapBelowTabControl;	// 0x303485
- (id)name;	// 0x3033e5
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x3033e1
- (id)switchToThisKeyboardIdentifier;	// 0x3033b9
- (CGRect)tabControlFrame;	// 0x3034b5
@end

