/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRWaitSpinnerControl;

@interface BRWaitPromptControl : BRControl {
@private
	BRWaitSpinnerControl *_spinner;	// 44 = 0x2c
	BRTextControl *_prompt;	// 48 = 0x30
}
@property(retain) BRTextControl *prompt;	// G=0x328bac21; S=0x328b5a99; converted property
@property(retain) id promptText;	// G=0x3291ca29; S=0x3291ca59; converted property
+ (id)themeAttributes;	// 0x328c0dd1
- (id)init;	// 0x328b55d9
- (id)accessibilityLabel;	// 0x3291c9f1
- (void)controlWasActivated;	// 0x3291cc91
- (void)dealloc;	// 0x328b65e5
- (BOOL)isAccessibilityElement;	// 0x3291c9ed
- (void)layoutSubcontrols;	// 0x3291cae1
// converted property getter: - (id)prompt;	// 0x328bac21
// converted property getter: - (id)promptText;	// 0x3291ca29
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x328b5a99
// converted property setter: - (void)setPromptText:(id)text;	// 0x3291ca59
@end
