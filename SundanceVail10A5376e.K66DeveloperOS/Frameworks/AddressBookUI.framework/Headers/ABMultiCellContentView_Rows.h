/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray;

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate> {
	NSMutableArray *_entryFields;	// 180 = 0xb4
	NSMutableArray *_horizontalDividers;	// 184 = 0xb8
	BOOL _isAttemptingFirstResponder;	// 188 = 0xbc
}
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x30fbbd45
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing includeRows:(BOOL)rows;	// 0x30fb2ffd
+ (unsigned)rowsForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x31008b05
+ (CGRect)zerothHorizontalDividerFrameForValueViewRect:(CGRect)valueViewRect;	// 0x30faa1d5
- (CGRect)backgroundRectForView:(id)view;	// 0x31008dd9
- (void)dealloc;	// 0x30fbe4e9
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)responder;	// 0x3100923d
- (void)entryFieldDidEndEditing:(id)entryField;	// 0x31008b3d
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)responder;	// 0x31009251
- (id)entryFieldForRow:(unsigned)row;	// 0x31008b09
- (id)hitTestForTouches:(id)touches withEvent:(id)event;	// 0x31008fad
- (id)keyboardSettingsForKey:(id)key;	// 0x30fb9371
- (CGRect)rectForView:(id)view;	// 0x31008cd1
- (void)reload;	// 0x30fa9a99
- (void)reloadFromModel;	// 0x31008b29
- (void)reloadFromModelIncludingRows:(BOOL)modelIncludingRows;	// 0x30fabb7d
- (void)reloadIncludingRows:(BOOL)rows;	// 0x30fa9aad
- (void)setAbCellStyle:(int)style;	// 0x30fa7b09
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x31008b95
- (void)textFieldDidBeginEditing:(id)textField;	// 0x3100932d
- (void)textFieldDidEndEditing:(id)textField;	// 0x3100931d
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x310092ed
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x31009305
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x3100933d
- (void)textFieldTextDidChange:(id)textFieldText;	// 0x31009265
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x30fab3f5
- (id)viewForFirstResponder;	// 0x30fbc8b5
@end

