/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIKeyboardMenuView {
	int m_currentInputModeIndex;	// 180 = 0xb4
	BOOL m_keyboardSettingsFromSwitcher;	// 184 = 0xb8
	NSMutableArray *m_inputModes;	// 188 = 0xbc
}
@property(retain, nonatomic) NSArray *inputModes;	// G=0x33db7fd9; S=0x33db76a5; @synthesize=m_inputModes
@property(assign, nonatomic) BOOL keyboardSettingsFromSwitcher;	// G=0x33db7fe9; S=0x33db7ff9; @synthesize=m_keyboardSettingsFromSwitcher
+ (id)activeInstance;	// 0x33ad9e8d
+ (id)sharedInstance;	// 0x33db7649
- (id)initWithFrame:(CGRect)frame;	// 0x33db7565
- (void)dealloc;	// 0x33db75fd
- (int)defaultSelectedIndex;	// 0x33db7e31
- (void)didSelectItemAtIndex:(int)index;	// 0x33db7f71
// declared property getter: - (id)inputModes;	// 0x33db7fd9
// declared property getter: - (BOOL)keyboardSettingsFromSwitcher;	// 0x33db7fe9
- (id)nextInputMode;	// 0x33db7a55
- (int)numberOfItems;	// 0x33db7cb5
- (CGSize)preferredSize;	// 0x33db7cdd
- (id)previousInputMode;	// 0x33db7b41
- (void)selectInputMode:(id)mode;	// 0x33db7a21
- (void)selectNextInputMode;	// 0x33db7af9
- (void)selectPreviousInputMode;	// 0x33db7c25
- (void)selectRowForInputMode:(id)inputMode;	// 0x33db79a1
- (id)selectedInputMode;	// 0x33db7879
- (void)setInputMode:(id)mode;	// 0x33db79e5
// declared property setter: - (void)setInputModes:(id)modes;	// 0x33db76a5
// declared property setter: - (void)setKeyboardSettingsFromSwitcher:(BOOL)switcher;	// 0x33db7ff9
- (void)show;	// 0x33db7c6d
- (id)subtitleForItemAtIndex:(int)index;	// 0x33db7ee9
- (id)titleForItemAtIndex:(int)index;	// 0x33db7e75
@end

