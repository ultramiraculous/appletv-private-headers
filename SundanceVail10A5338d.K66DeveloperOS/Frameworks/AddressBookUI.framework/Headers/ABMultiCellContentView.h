/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABResponderDelegate.h"
#import "ABPersonCellContentView.h"
#import "AddressBookUI-Structs.h"

@class UITableViewCell, ABAbstractPropertyGroup;
@protocol ABMultiCellContentViewUpdateDelegate;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate> {
	UITableViewCell *_cell;	// 132 = 0x84
	BOOL _usesCustomPropertyCell;	// 136 = 0x88
	UIView *_labelDivider;	// 140 = 0x8c
	BOOL _isImportant;	// 144 = 0x90
	BOOL _isEmphasized;	// 145 = 0x91
	BOOL _isHighlighted;	// 146 = 0x92
	BOOL _allowsEditing;	// 147 = 0x93
	BOOL _isEditing;	// 148 = 0x94
	BOOL _shouldIgnoreEndEditing;	// 149 = 0x95
	int _property;	// 152 = 0x98
	ABAbstractPropertyGroup *_pg;	// 156 = 0x9c
	id _pgInfo;	// 160 = 0xa0
	BOOL _needsReload;	// 164 = 0xa4
	UIView *_touchedView;	// 168 = 0xa8
	id<ABMultiCellContentViewUpdateDelegate> _updateDelegate;	// 172 = 0xac
	int _abCellStyle;	// 176 = 0xb0
}
@property(assign, nonatomic) int abCellStyle;	// G=0x37069f91; S=0x37068151; @synthesize=_abCellStyle
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x370c5255; S=0x3706826d; @synthesize=_allowsEditing
@property(assign, nonatomic) UITableViewCell *cell;	// G=0x37089591; S=0x370736d1; @synthesize=_cell
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x37069645; S=0x370681b5; @synthesize=_isEditing
@property(assign, nonatomic, getter=isEmphasized) BOOL emphasized;	// G=0x370c5275; S=0x37073725; @synthesize=_isEmphasized
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x37088f2d; S=0x3707e971; converted property
@property(assign, nonatomic, getter=isImportant) BOOL important;	// G=0x370c5265; S=0x370737b1; @synthesize=_isImportant
@property(readonly, assign, nonatomic) ABAbstractPropertyGroup *propertyGroup;	// G=0x3707e335; @synthesize=_pg
@property(retain, nonatomic) id propertyGroupInfo;	// G=0x3707e345; S=0x37067f9d; @synthesize=_pgInfo
@property(assign, nonatomic) BOOL shouldIgnoreEndEditing;	// G=0x370c5285; S=0x3708c2dd; @synthesize=_shouldIgnoreEndEditing
@property(assign, nonatomic) id<ABMultiCellContentViewUpdateDelegate> updateDelegate;	// G=0x3708d421; S=0x3706827d; @synthesize=_updateDelegate
@property(assign, nonatomic) BOOL usesCustomPropertyCell;	// G=0x370742f9; S=0x370736e1; @synthesize=_usesCustomPropertyCell
+ (Class)classForProperty:(int)property;	// 0x37067b19
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x370706fd
+ (id)reuseIdentifierForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x370732f9
+ (void)setupTextField:(id)field withStyleProvider:(id)styleProvider;	// 0x37069df9
+ (CGSize)sizeThatFits:(CGSize)fits forPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x370705dd
- (id)init;	// 0x370c4f65
- (id)initCommonWithFrame:(CGRect)frame property:(int)property;	// 0x37067c71
- (id)initWithFrame:(CGRect)frame;	// 0x370c4f95
- (id)initWithFrame:(CGRect)frame property:(int)property;	// 0x37067a99
- (BOOL)ABTabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x370c5205
// declared property getter: - (int)abCellStyle;	// 0x37069f91
// declared property getter: - (BOOL)allowsEditing;	// 0x370c5255
- (CGRect)backgroundRectForView:(id)view;	// 0x370c5069
- (id)badgeIconWhenEditing:(BOOL)editing;	// 0x370c4fc1
- (BOOL)becomeFirstResponder;	// 0x37089c09
- (BOOL)canBecomeFirstResponder;	// 0x37089be1
- (BOOL)canBeginEditingAnytime;	// 0x370c5145
- (BOOL)canHandleProperty:(int)property;	// 0x37067f59
- (BOOL)canResignFirstResponder;	// 0x370c514d
// declared property getter: - (id)cell;	// 0x37089591
- (void)clearTextFieldDelegates:(id)delegates;	// 0x37074a79
- (void)dealloc;	// 0x37067d75
- (id)displayHighlightedTextColor;	// 0x37069fc1
- (id)displayTextColor;	// 0x37074941
- (void)entryField:(id)field valueDidChange:(id)value forKey:(id)key;	// 0x370888fd
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)responder;	// 0x370c524d
- (void)entryFieldDidBeginEditing:(id)entryField;	// 0x370883a9
- (void)entryFieldDidEndEditing:(id)entryField;	// 0x370c50e5
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)responder;	// 0x370c5251
- (BOOL)entryFieldShouldBeginEditing:(id)entryField;	// 0x37088301
- (BOOL)entryFieldShouldEndEditing:(id)entryField;	// 0x37088c85
- (BOOL)entryFieldShouldReturn:(id)entryField;	// 0x370c5125
- (CGRect)focusRectForView:(id)view;	// 0x370883e1
- (CGRect)frameForLabelDivider;	// 0x370747ed
- (id)hitTestForTouches:(id)touches withEvent:(id)event;	// 0x370881e5
// declared property getter: - (BOOL)isEditing;	// 0x37069645
// declared property getter: - (BOOL)isEmphasized;	// 0x370c5275
// converted property getter: - (BOOL)isHighlighted;	// 0x37088f2d
// declared property getter: - (BOOL)isImportant;	// 0x370c5265
- (BOOL)isValidValue:(id)value;	// 0x370c50e1
- (id)labelTextColorWhenEditing:(BOOL)editing;	// 0x370746a1
- (void)layoutLabel;	// 0x37075505
- (void)layoutSubviews;	// 0x37075445
- (id)newTextFieldWithFrame:(CGRect)frame tag:(int)tag keyboardSettings:(id)settings delegate:(id)delegate;	// 0x37069b81
- (id)pickerView;	// 0x3706ad75
// declared property getter: - (id)propertyGroup;	// 0x3707e335
// declared property getter: - (id)propertyGroupInfo;	// 0x3707e345
- (CGRect)rectForView:(id)view;	// 0x370885d9
- (void)reload;	// 0x370695b9
- (void)reloadFromModel;	// 0x3706b119
- (void)reloadIfNeeded:(BOOL)needed reloadFromModel:(BOOL)model;	// 0x370737dd
- (void)reloadLabelFromModel;	// 0x370739c1
- (BOOL)resignFirstResponder;	// 0x3707e3ad
// declared property setter: - (void)setAbCellStyle:(int)style;	// 0x37068151
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x3706826d
// declared property setter: - (void)setCell:(id)cell;	// 0x370736d1
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x370681b5
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x37068221
// declared property setter: - (void)setEmphasized:(BOOL)emphasized;	// 0x37073725
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3707e971
// declared property setter: - (void)setImportant:(BOOL)important;	// 0x370737b1
- (void)setKeyboardSettings:(id)settings onTextField:(id)field;	// 0x3706a09d
- (void)setLabelText:(id)text;	// 0x37074105
- (void)setPropertyGroup:(id)group andInfo:(id)info;	// 0x37067e25
// declared property setter: - (void)setPropertyGroupInfo:(id)info;	// 0x37067f9d
// declared property setter: - (void)setShouldIgnoreEndEditing:(BOOL)ignoreEndEditing;	// 0x3708c2dd
// declared property setter: - (void)setUpdateDelegate:(id)delegate;	// 0x3706827d
// declared property setter: - (void)setUsesCustomPropertyCell:(BOOL)cell;	// 0x370736e1
// declared property getter: - (BOOL)shouldIgnoreEndEditing;	// 0x370c5285
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)hitView;	// 0x37088765
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3707c37d
- (CGSize)sizeThatFits:(CGSize)fits forPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x3707c405
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x370c5141
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x37087e95
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x370c5175
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x37088795
// declared property getter: - (id)updateDelegate;	// 0x3708d421
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x3706ac15
// declared property getter: - (BOOL)usesCustomPropertyCell;	// 0x370742f9
- (id)viewForFirstResponder;	// 0x370c5149
- (BOOL)wantsLabelDivider;	// 0x370771d1
@end
