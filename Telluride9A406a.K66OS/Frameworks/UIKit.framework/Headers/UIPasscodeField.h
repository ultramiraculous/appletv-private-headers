/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class UIButton, NSMutableArray, NSMutableString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
	NSMutableString *_value;	// 48 = 0x30
	NSMutableArray *_entryFields;	// 52 = 0x34
	NSMutableArray *_entryBackgrounds;	// 56 = 0x38
	UIButton *_okButton;	// 60 = 0x3c
	BOOL _opaqueBackground;	// 64 = 0x40
	BOOL _centerHorizontally;	// 65 = 0x41
	int _keyboardType;	// 68 = 0x44
	int _keyboardAppearance;	// 72 = 0x48
	int _emptyContentReturnKeyType;	// 76 = 0x4c
	id _delegate;	// 80 = 0x50
}
@property(assign) int numberOfEntryFields;	// G=0x3589fd79; S=0x358a0449; converted property
@property(assign) BOOL showsOKButton;	// G=0x3589f715; S=0x3589f72d; converted property
@property(retain) id stringValue;	// G=0x356901d5; S=0x3569b89d; converted property
+ (float)defaultHeight;	// 0x3589f4c1
+ (Class)textFieldClass;	// 0x3589f511
- (id)initWithFrame:(CGRect)frame;	// 0x3589f52d
- (void)_textDidChange;	// 0x358a056d
- (void)_updateFields;	// 0x356902d1
- (void)appendString:(id)string;	// 0x3569020d
- (BOOL)becomeFirstResponder;	// 0x358a048d
- (BOOL)canBecomeFirstResponder;	// 0x358a045d
- (void)dealloc;	// 0x3589f65d
- (void)deleteLastCharacter;	// 0x3589fd21
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x358a0755
- (BOOL)isFirstResponder;	// 0x358a04e5
// converted property getter: - (int)numberOfEntryFields;	// 0x3589fd79
- (void)okButtonClicked:(id)clicked;	// 0x358a070d
- (void)setDelegate:(id)delegate;	// 0x358a055d
- (void)setKeyboardType:(int)type;	// 0x3589f5f5
- (void)setKeyboardType:(int)type appearance:(int)appearance;	// 0x3589f609
- (void)setKeyboardType:(int)type appearance:(int)appearance emptyContentReturnKeyType:(int)type3;	// 0x3589f62d
// converted property setter: - (void)setNumberOfEntryFields:(int)entryFields;	// 0x358a0449
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x3589fd99
// converted property setter: - (void)setShowsOKButton:(BOOL)button;	// 0x3589f72d
// converted property setter: - (void)setStringValue:(id)value;	// 0x3569b89d
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x3589fcc1
// converted property getter: - (BOOL)showsOKButton;	// 0x3589f715
// converted property getter: - (id)stringValue;	// 0x356901d5
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x358a0671
- (void)textFieldDidResignFirstResponder:(id)textField;	// 0x358a06cd
- (BOOL)textFieldShouldStartEditing:(id)textField;	// 0x358a06c9
@end
