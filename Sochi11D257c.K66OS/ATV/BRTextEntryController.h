/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVAutoDismissable.h"
#import "BRMenuController.h"

@class BRCursorControl, BRTextControl, BRTextFieldBackgroundLayer, BRImageControl, BRTextFieldControl, BRTextControlWithWiderFocusFrame, BRTextEntryControl, NSString;

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
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x3e69c5; converted property
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x3e7a69; S=0x3e7a85; @synthesize=_maxFootnoteTextHeight
@property(copy, nonatomic) NSString *tagString;	// G=0x3e7a95; S=0x3e7aa9; @synthesize=_tagString
- (id)init;	// 0x3e6379
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x3e637d
- (void)_addCursor;	// 0x3e7c25
- (void)_historyItemSelected:(id)selected;	// 0x3e7ab9
- (BOOL)_isSubmitButtonFocused;	// 0x3e7be1
- (void)_removeCursor;	// 0x3e7c99
- (void)_removeFocusFromSubmitButton;	// 0x3e7bc1
- (void)_submitButtonClick:(id)click;	// 0x3e7c05
- (void)_switchFocusToSubmitButton;	// 0x3e7ac9
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3e7861
- (id)accessibilityScreenContent;	// 0x3e7841
- (BOOL)autoDismiss;	// 0x3e79d9
- (BOOL)brEventAction:(id)action;	// 0x3e69d9
- (void)controlWasUnfocused;	// 0x3e7b65
- (void)dealloc;	// 0x3e6849
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x3e6985
// converted property getter: - (id)editor;	// 0x3e69c5
- (BOOL)isValidAfterDataUpdate;	// 0x3e69d5
- (void)layoutSubcontrols;	// 0x3e6d41
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x3e7a69
- (void)reset;	// 0x3e7821
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x3e79b9
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x3e6965
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3e7799
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x3e7865
- (void)setInitialTextEntryText:(id)text;	// 0x3e7745
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x3e7a85
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x3e750d
- (void)setShowUserEnteredText:(BOOL)text;	// 0x3e7801
- (void)setSupplementaryText:(id)text;	// 0x3e75d5
// declared property setter: - (void)setTagString:(id)string;	// 0x3e7aa9
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x3e69a5
- (void)setTextEntryStyle:(int)style;	// 0x3e74d1
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x3e75e5
- (void)setTextFieldDelegate:(id)delegate;	// 0x3e7725
// declared property getter: - (id)tagString;	// 0x3e7a95
@end

