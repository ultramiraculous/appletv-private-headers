/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRHeaderControl, BRPasscodeEntryControl, NSString, BRTextControl;
@protocol SettingsPINEntryViewDelegate;

__attribute__((visibility("hidden")))
@interface SettingsPINEntryView : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRPasscodeEntryControl *_editor;	// 88 = 0x58
	BOOL _userEditable;	// 92 = 0x5c
	BRTextControl *_prompt;	// 96 = 0x60
	NSString *_initialPINCode;	// 100 = 0x64
	id<SettingsPINEntryViewDelegate> _delegate;	// 104 = 0x68
}
@property(assign) id delegate;	// G=0x2c1cb1; S=0x2c1c9d; converted property
@property(retain) BRTextControl *prompt;	// G=0x2c1c01; S=0x2c1b41; converted property
@property(retain) id title;	// G=0x2c1b21; S=0x2c1b01; converted property
- (id)init;	// 0x2c1579
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits prompt:(id)prompt;	// 0x2c15d1
- (void).cxx_destruct;	// 0x2c1f45
- (id)accessibilityLabel;	// 0x2c1e1d
- (BOOL)brEventAction:(id)action;	// 0x2c1d6d
- (void)dealloc;	// 0x2c17fd
// converted property getter: - (id)delegate;	// 0x2c1cb1
- (BOOL)isAccessibilityElement;	// 0x2c1e19
- (void)layoutSubcontrols;	// 0x2c1869
- (void)pinFailedTryAgainWithTitle:(id)title prompt:(id)prompt;	// 0x2c1cd1
// converted property getter: - (id)prompt;	// 0x2c1c01
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2c1c9d
- (void)setInitialPINCode:(id)code;	// 0x2c1c55
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x2c1b41
// converted property setter: - (void)setTitle:(id)title;	// 0x2c1b01
- (void)textDidChange:(id)text;	// 0x2c1aa5
- (void)textDidEndEditing:(id)text;	// 0x2c1aa9
// converted property getter: - (id)title;	// 0x2c1b21
@end

