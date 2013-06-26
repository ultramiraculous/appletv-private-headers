/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"
#import "ATVAutoDismissable.h"

@class BRTextControl, BRImageControl, BRCursorControl, BRTextFieldControl, NSString, BRTextControlWithWiderFocusFrame, BRTextEntryControl, BRTextFieldBackgroundLayer;

__attribute__((visibility("hidden")))
@interface BRTextEntryController : BRMenuController <ATVAutoDismissable> {
	BRTextEntryControl *_editor;	// 144 = 0x90
	BRTextFieldControl *_textField;	// 148 = 0x94
	BRImageControl *_verticalDividerImage;	// 152 = 0x98
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 156 = 0x9c
	BRTextControl *_textFieldLabel;	// 160 = 0xa0
	BRTextControlWithWiderFocusFrame *_submitButton;	// 164 = 0xa4
	BRTextControl *_footnoteText;	// 168 = 0xa8
	BRCursorControl *_cursor;	// 172 = 0xac
	BOOL _cursorNavigatedFromEditor;	// 176 = 0xb0
	BOOL _allowAutoDismiss;	// 177 = 0xb1
	long _autoDismissIdx;	// 180 = 0xb4
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 184 = 0xb8
	NSString *_tagString;	// 188 = 0xbc
}
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x3ac3dd; converted property
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x3ad481; S=0x3ad49d; @synthesize=_maxFootnoteTextHeight
@property(copy, nonatomic) NSString *tagString;	// G=0x3ad4ad; S=0x3ad4c1; @synthesize=_tagString
- (id)init;	// 0x3abd91
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x3abd95
- (void)_addCursor;	// 0x3ad63d
- (void)_historyItemSelected:(id)selected;	// 0x3ad4d1
- (BOOL)_isSubmitButtonFocused;	// 0x3ad5f9
- (void)_removeCursor;	// 0x3ad6b1
- (void)_removeFocusFromSubmitButton;	// 0x3ad5d9
- (void)_submitButtonClick:(id)click;	// 0x3ad61d
- (void)_switchFocusToSubmitButton;	// 0x3ad4e1
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3ad279
- (id)accessibilityScreenContent;	// 0x3ad259
- (BOOL)autoDismiss;	// 0x3ad3f1
- (BOOL)brEventAction:(id)action;	// 0x3ac3f1
- (void)controlWasUnfocused;	// 0x3ad57d
- (void)dealloc;	// 0x3ac261
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x3ac39d
// converted property getter: - (id)editor;	// 0x3ac3dd
- (BOOL)isValidAfterDataUpdate;	// 0x3ac3ed
- (void)layoutSubcontrols;	// 0x3ac759
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x3ad481
- (void)reset;	// 0x3ad239
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x3ad3d1
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x3ac37d
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3ad1b1
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x3ad27d
- (void)setInitialTextEntryText:(id)text;	// 0x3ad15d
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x3ad49d
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x3acf25
- (void)setShowUserEnteredText:(BOOL)text;	// 0x3ad219
- (void)setSupplementaryText:(id)text;	// 0x3acfed
// declared property setter: - (void)setTagString:(id)string;	// 0x3ad4c1
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x3ac3bd
- (void)setTextEntryStyle:(int)style;	// 0x3acee9
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x3acffd
- (void)setTextFieldDelegate:(id)delegate;	// 0x3ad13d
// declared property getter: - (id)tagString;	// 0x3ad4ad
@end
