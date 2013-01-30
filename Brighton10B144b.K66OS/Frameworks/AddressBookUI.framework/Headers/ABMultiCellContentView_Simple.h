/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "UITextFieldDelegate.h"
#import "ABMultiCellContentView.h"

@class ABHighlightingTextField, NSString;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {
	ABHighlightingTextField *_textField;	// 180 = 0xb4
	NSString *_previousValue;	// 184 = 0xb8
}
@property(readonly, assign, nonatomic) NSString *text;	// G=0x30952319; 
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x308ff019
- (BOOL)canHandleProperty:(int)property;	// 0x30902159
- (void)dealloc;	// 0x3090b6a5
- (id)hitTestForTouches:(id)touches withEvent:(id)event;	// 0x30912a6d
- (BOOL)isValidValue:(id)value;	// 0x3095237d
- (id)pickerView;	// 0x309021c1
- (void)reload;	// 0x3090236d
- (void)reloadFromModel;	// 0x30903765
- (void)setAbCellStyle:(int)style;	// 0x30904d71
- (void)setPropertyGroup:(id)group andInfo:(id)info;	// 0x3090205d
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)hitView;	// 0x30912bf1
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x309525a9
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x30952339
// declared property getter: - (id)text;	// 0x30952319
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x30952409
- (void)textFieldDidBeginEditing:(id)textField;	// 0x30952551
- (void)textFieldDidEndEditing:(id)textField;	// 0x30952541
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x30952511
- (BOOL)textFieldShouldClear:(id)textField;	// 0x3095257d
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x30952529
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x30952561
- (void)textFieldTextDidChange:(id)textFieldText;	// 0x309524c5
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x309033dd
- (id)viewForFirstResponder;	// 0x30909ead
- (BOOL)wantsLabelDivider;	// 0x3090337d
@end
