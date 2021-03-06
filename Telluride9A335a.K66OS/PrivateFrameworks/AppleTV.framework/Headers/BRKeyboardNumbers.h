/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardNumbers : BRKeyboard {
@private
	BRControl *_thirdRow;	// 48 = 0x30
}
- (id)init;	// 0x3421c7e9
- (float)_actionKeysContainerSpacing;	// 0x3421ca25
- (id)_keyboardDataFileName;	// 0x3421c9e1
- (float)_mainKeysHorizontalSpacing;	// 0x3421ca11
- (float)_mainKeysVerticalSpacing;	// 0x3421ca09
- (int)_numberOfMainKeyColumns;	// 0x3421ca05
- (int)_numberOfMainKeyRows;	// 0x3421ca01
- (id)_optionCharactersForKeyboardInput;	// 0x3421c9fd
- (id)_popupKeyboardDataFileName;	// 0x3421c9d5
- (float)_preferredTextEntryControlWidth;	// 0x3421ca19
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x3421ca2d
- (void)dealloc;	// 0x3421c845
- (id)keyboardControl;	// 0x3421c8c5
- (CGRect)keyboardControlFrame;	// 0x3421ca35
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x3421c9d1
- (id)name;	// 0x3421c8b9
- (id)switchToThisKeyboardIdentifier;	// 0x3421c891
@end

