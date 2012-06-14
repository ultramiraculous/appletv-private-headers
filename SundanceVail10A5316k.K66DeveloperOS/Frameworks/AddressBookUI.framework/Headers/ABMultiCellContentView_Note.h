/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABSwellTextViewDelegate.h"
#import "ABMultiCellContentView.h"

@class ABSwellTextView;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {
@private
	ABSwellTextView *_textView;	// 180 = 0xb4
}
+ (id)labelTextForPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider;	// 0x34cc27f9
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x34cc280d
+ (void)setupTextView:(id)view withStyleProvider:(id)styleProvider whenEditing:(BOOL)editing;	// 0x34cc24dd
+ (id)swellTextViewForReuse;	// 0x34cc2481
- (BOOL)canBeginEditingAnytime;	// 0x34cc3441
- (void)dealloc;	// 0x34cc2dc1
- (CGRect)focusRectForView:(id)view;	// 0x34cc32d1
- (CGRect)frameForLabel;	// 0x34cc2561
- (void)reload;	// 0x34cc2e11
- (void)reloadFromModel;	// 0x34cc311d
- (void)setAbCellStyle:(int)style;	// 0x34cc3549
- (void)setLabelText:(id)text;	// 0x34cc30b1
- (BOOL)shouldUseTwoLineLabels;	// 0x34cc2539
- (void)swellTextView:(id)view didChangeSize:(CGSize)size;	// 0x34cc34d1
- (void)swellTextViewDidBeginEditing:(id)swellTextView;	// 0x34cc34c1
- (void)swellTextViewDidEndEditing:(id)swellTextView;	// 0x34cc34b1
- (BOOL)swellTextViewShouldBeginEditing:(id)swellTextView;	// 0x34cc3481
- (BOOL)swellTextViewShouldEndEditing:(id)swellTextView;	// 0x34cc3499
- (void)swellTextViewTextDidChange:(id)swellTextViewText;	// 0x34cc3445
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x34cc33ed
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x34cc3051
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x34cc3081
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x34cc3005
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x34cc31dd
- (id)viewForFirstResponder;	// 0x34cc3431
@end
