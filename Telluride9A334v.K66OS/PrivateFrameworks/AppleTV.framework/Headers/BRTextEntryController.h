/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuController.h"
#import "AppleTV-Structs.h"

@class BRTextControlWithWiderFocusFrame, BRTextEntryControl, BRTextFieldBackgroundLayer, BRTextControl, BRImageControl, BRTextFieldControl, BRCursorControl;

@interface BRTextEntryController : BRMenuController {
@private
	BRTextEntryControl *_editor;	// 124 = 0x7c
	BRTextFieldControl *_textField;	// 128 = 0x80
	BRImageControl *_verticalDividerImage;	// 132 = 0x84
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 136 = 0x88
	BRTextControl *_textFieldLabel;	// 140 = 0x8c
	BRTextControlWithWiderFocusFrame *_submitButton;	// 144 = 0x90
	BRTextControl *_footnoteText;	// 148 = 0x94
	BRCursorControl *_cursor;	// 152 = 0x98
	BOOL _cursorNavigatedFromEditor;	// 156 = 0x9c
}
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x332691b1; converted property
- (id)init;	// 0x33268b59
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x33268b6d
- (void)_addCursor;	// 0x3326a0d1
- (void)_historyItemSelected:(id)selected;	// 0x3326a031
- (void)_removeCursor;	// 0x3326a149
- (void)_submitButtonClick:(id)click;	// 0x3326a0b1
- (void)_switchFocusToSubmitButton;	// 0x3326a041
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x33269f89
- (id)accessibilityScreenContent;	// 0x33269f69
- (BOOL)brEventAction:(id)action;	// 0x332691c5
- (void)dealloc;	// 0x33269049
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x33269171
// converted property getter: - (id)editor;	// 0x332691b1
- (BOOL)isValidAfterDataUpdate;	// 0x332691c1
- (void)layoutSubcontrols;	// 0x332693c5
- (void)reset;	// 0x33269f49
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x33269151
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x33269ec5
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x33269f8d
- (void)setInitialTextEntryText:(id)text;	// 0x33269e71
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x33269c2d
- (void)setShowUserEnteredText:(BOOL)text;	// 0x33269f29
- (void)setSupplementaryText:(id)text;	// 0x33269cf5
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x33269191
- (void)setTextEntryStyle:(int)style;	// 0x33269bed
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x33269d05
- (void)setTextFieldDelegate:(id)delegate;	// 0x33269e51
@end

