/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRPasscodeEntryControl, NSString, BRHeaderControl, BRTextControl;
@protocol SettingsPINEntryViewDelegate;

__attribute__((visibility("hidden")))
@interface SettingsPINEntryView : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRPasscodeEntryControl *_editor;	// 88 = 0x58
	BRTextControl *_prompt;	// 92 = 0x5c
	NSString *_initialPINCode;	// 96 = 0x60
	id<SettingsPINEntryViewDelegate> _delegate;	// 100 = 0x64
}
@property(assign) id delegate;	// G=0xc1e15; S=0xc1e01; converted property
@property(retain) BRTextControl *prompt;	// G=0xc1d65; S=0xc1ca5; converted property
@property(retain) id title;	// G=0xc1c85; S=0xc1c65; converted property
- (id)init;	// 0xc16f9
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits prompt:(id)prompt;	// 0xc175d
- (void).cxx_destruct;	// 0xc208d
- (id)accessibilityLabel;	// 0xc1f65
- (BOOL)brEventAction:(id)action;	// 0xc1ecd
- (void)dealloc;	// 0xc1979
// converted property getter: - (id)delegate;	// 0xc1e15
- (BOOL)isAccessibilityElement;	// 0xc1f61
- (void)layoutSubcontrols;	// 0xc19e5
- (void)pinFailedTryAgainWithTitle:(id)title prompt:(id)prompt;	// 0xc1e35
// converted property getter: - (id)prompt;	// 0xc1d65
// converted property setter: - (void)setDelegate:(id)delegate;	// 0xc1e01
- (void)setInitialPINCode:(id)code;	// 0xc1db9
// converted property setter: - (void)setPrompt:(id)prompt;	// 0xc1ca5
// converted property setter: - (void)setTitle:(id)title;	// 0xc1c65
- (void)textDidChange:(id)text;	// 0xc1c11
- (void)textDidEndEditing:(id)text;	// 0xc1c15
// converted property getter: - (id)title;	// 0xc1c85
@end

