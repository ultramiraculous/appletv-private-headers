/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardRomanLogIn.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSearch : BRKeyboardRomanLogIn {
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
}
- (float)_mainKeysHorizontalSpacing;	// 0x3a83e9
- (float)_mainKeysVerticalSpacing;	// 0x3a83e1
- (int)_numberOfMainKeyRows;	// 0x3a83dd
- (float)_preferredTextEntryControlWidth;	// 0x3a83f1
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x3a83fd
- (id)attributesForTextFieldLabel;	// 0x3a8399
- (id)customizedTextEntryFieldControls;	// 0x3a82a9
- (void)customizedTextFieldControlsWereRemoved;	// 0x3a836d
- (void)dealloc;	// 0x3a81dd
- (CGRect)keyboardControlFrame;	// 0x3a8405
- (id)name;	// 0x3a83cd
- (BOOL)requiresTextFieldLabel;	// 0x3a83d9
- (CGRect)spinnerFrame;	// 0x3a8509
- (void)startSpinning;	// 0x3a8229
- (void)stopSpinning;	// 0x3a8269
- (CGRect)tabControlFrame;	// 0x3a8631
- (CGRect)textFieldBackgroundFrame;	// 0x3a8455
- (CGRect)textFieldFrame;	// 0x3a8481
- (CGRect)textFieldLabelFrame;	// 0x3a8429
@end

