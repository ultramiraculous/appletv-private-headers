/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRWaitSpinnerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRWaitPromptControl : BRControl {
	BRWaitSpinnerControl *_spinner;	// 84 = 0x54
	BRTextControl *_prompt;	// 88 = 0x58
}
@property(retain) BRTextControl *prompt;	// G=0x320cb9; S=0x320c7d; converted property
@property(retain) id promptText;	// G=0x320d65; S=0x320cd9; converted property
+ (id)themeAttributes;	// 0x320c49
- (id)init;	// 0x320b15
- (id)accessibilityLabel;	// 0x320f59
- (void)controlWasActivated;	// 0x320fa1
- (void)dealloc;	// 0x320be5
- (BOOL)isAccessibilityElement;	// 0x320f9d
- (void)layoutSubcontrols;	// 0x320d9d
// converted property getter: - (id)prompt;	// 0x320cb9
// converted property getter: - (id)promptText;	// 0x320d65
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x320c7d
// converted property setter: - (void)setPromptText:(id)text;	// 0x320cd9
@end

