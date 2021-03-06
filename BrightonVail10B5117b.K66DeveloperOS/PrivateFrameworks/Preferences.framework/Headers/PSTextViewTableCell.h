/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "UITextViewDelegate.h"
#import "PSTableCell.h"

@class PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextViewDelegate> {
	PSTextView *_textView;	// 364 = 0x16c
}
@property(retain, nonatomic) PSTextView *textView;	// G=0x354df0b5; S=0x354df0c5; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x354dea09
- (void)_adjustTextView:(id)view updateTable:(BOOL)table withSpecifier:(id)specifier;	// 0x354ded79
- (BOOL)becomeFirstResponder;	// 0x354df049
- (BOOL)canBecomeFirstResponder;	// 0x354df06d
- (void)cellRemovedFromView;	// 0x354dec8d
- (void)dealloc;	// 0x354debe5
- (void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;	// 0x354df169
- (void)layoutSubviews;	// 0x354ded0d
- (BOOL)resignFirstResponder;	// 0x354df091
// declared property setter: - (void)setTextView:(id)view;	// 0x354df0c5
- (void)setValue:(id)value;	// 0x354dec31
// declared property getter: - (id)textView;	// 0x354df0b5
- (void)textViewDidChange:(id)textView;	// 0x354dec7d
- (void)textViewDidEndEditing:(id)textView;	// 0x354defb5
- (UIEdgeInsets)textViewInsets;	// 0x354df159
@end

