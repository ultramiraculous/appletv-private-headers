/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextFieldControl, BRHeaderControl, BRTextEntryControl, BRCursorControl, BRImageControl, ATVTextEntryTextControl, BRTextFieldBackgroundLayer, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTextEntryView : BRControl {
	BOOL _cursorNavigatedFromEditor;	// 84 = 0x54
	BRTextEntryControl *_editor;	// 88 = 0x58
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 92 = 0x5c
	BRHeaderControl *_headerControl;	// 96 = 0x60
	BRTextFieldControl *_textField;	// 100 = 0x64
	BRImageControl *_verticalDividerImage;	// 104 = 0x68
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 108 = 0x6c
	BRTextControl *_label;	// 112 = 0x70
	ATVTextEntryTextControl *_submitButton;	// 116 = 0x74
	BRTextControl *_supplementaryText;	// 120 = 0x78
	BRTextControl *_footnoteText;	// 124 = 0x7c
	BRCursorControl *_cursor;	// 128 = 0x80
	ATVTextEntryTextControl *_secondButton;	// 132 = 0x84
}
@property(retain, nonatomic) BRCursorControl *_cursor;	// G=0xdea21; S=0xdea31; @synthesize
@property(assign, nonatomic) BOOL _cursorNavigatedFromEditor;	// G=0xdea41; S=0xdea51; @synthesize
@property(retain, nonatomic) BRTextControl *_footnoteText;	// G=0xdea01; S=0xdea11; @synthesize
@property(retain, nonatomic) BRTextControl *_label;	// G=0xde9a1; S=0xde9b1; @synthesize
@property(retain, nonatomic) ATVTextEntryTextControl *_submitButton;	// G=0xde9c1; S=0xde9d1; @synthesize
@property(retain, nonatomic) BRTextControl *_supplementaryText;	// G=0xde9e1; S=0xde9f1; @synthesize
@property(retain, nonatomic) BRTextFieldControl *_textField;	// G=0xde941; S=0xde951; @synthesize
@property(retain, nonatomic) BRTextFieldBackgroundLayer *_textFieldBackground;	// G=0xde981; S=0xde991; @synthesize
@property(retain, nonatomic) BRImageControl *_verticalDividerImage;	// G=0xde961; S=0xde971; @synthesize
@property(retain, nonatomic) BRTextEntryControl *editor;	// G=0xde8e5; S=0xde8f5; @synthesize=_editor
@property(retain, nonatomic) BRHeaderControl *headerControl;	// G=0xde931; S=0xdd77d; @synthesize=_headerControl
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0xde905; S=0xde921; @synthesize=_maxFootnoteTextHeight
@property(retain, nonatomic) ATVTextEntryTextControl *secondButton;	// G=0xdea61; S=0xdea71; @synthesize=_secondButton
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0xdd0dd
- (void)_addCursor;	// 0xdeb39
// declared property getter: - (id)_cursor;	// 0xdea21
// declared property getter: - (BOOL)_cursorNavigatedFromEditor;	// 0xdea41
// declared property getter: - (id)_footnoteText;	// 0xdea01
- (void)_historyItemSelected:(id)selected;	// 0xdea81
// declared property getter: - (id)_label;	// 0xde9a1
- (void)_removeCursor;	// 0xdebe1
// declared property getter: - (id)_submitButton;	// 0xde9c1
- (void)_submitButtonClick;	// 0xdeb11
// declared property getter: - (id)_supplementaryText;	// 0xde9e1
- (void)_switchFocusToSubmitButton;	// 0xdea91
// declared property getter: - (id)_textField;	// 0xde941
// declared property getter: - (id)_textFieldBackground;	// 0xde981
// declared property getter: - (id)_verticalDividerImage;	// 0xde961
- (id)accessibilityLabel;	// 0xde875
- (id)accessibilityScreenContent;	// 0xde8bd
- (BOOL)brEventAction:(id)action;	// 0xddced
- (void)controlWasActivated;	// 0xddc3d
- (void)dealloc;	// 0xdd639
// declared property getter: - (id)editor;	// 0xde8e5
// declared property getter: - (id)headerControl;	// 0xde931
- (void)layoutSubcontrols;	// 0xde0d9
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0xde905
// declared property getter: - (id)secondButton;	// 0xdea61
// declared property setter: - (void)setEditor:(id)editor;	// 0xde8f5
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0xdda6d
// declared property setter: - (void)setHeaderControl:(id)control;	// 0xdd77d
- (void)setInitialText:(id)text;	// 0xddbe9
- (void)setLabel:(id)label;	// 0xdd805
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0xde921
// declared property setter: - (void)setSecondButton:(id)button;	// 0xdea71
- (void)setSupplementaryText:(id)text;	// 0xdd941
// declared property setter: - (void)set_cursor:(id)cursor;	// 0xdea31
// declared property setter: - (void)set_cursorNavigatedFromEditor:(BOOL)editor;	// 0xdea51
// declared property setter: - (void)set_footnoteText:(id)text;	// 0xdea11
// declared property setter: - (void)set_label:(id)label;	// 0xde9b1
// declared property setter: - (void)set_submitButton:(id)button;	// 0xde9d1
// declared property setter: - (void)set_supplementaryText:(id)text;	// 0xde9f1
// declared property setter: - (void)set_textField:(id)field;	// 0xde951
// declared property setter: - (void)set_textFieldBackground:(id)background;	// 0xde991
// declared property setter: - (void)set_verticalDividerImage:(id)image;	// 0xde971
@end

