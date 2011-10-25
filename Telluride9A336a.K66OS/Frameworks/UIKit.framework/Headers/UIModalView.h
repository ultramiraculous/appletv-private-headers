/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class NSMutableArray, NSString, UILabel, UIWindow, UIToolbar;
@protocol UIModalViewDelegate;

@interface UIModalView : UIView <UITextFieldDelegate> {
@private
	id<UIModalViewDelegate> _delegate;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
	UILabel *_subtitleLabel;	// 56 = 0x38
	UILabel *_bodyTextLabel;	// 60 = 0x3c
	UILabel *_taglineTextLabel;	// 64 = 0x40
	float _startX;	// 68 = 0x44
	float _startY;	// 72 = 0x48
	id _context;	// 76 = 0x4c
	int _cancelButton;	// 80 = 0x50
	int _defaultButton;	// 84 = 0x54
	int _firstOtherButton;	// 88 = 0x58
	UIToolbar *_toolbar;	// 92 = 0x5c
	UIWindow *_originalWindow;	// 96 = 0x60
	UIWindow *_dimWindow;	// 100 = 0x64
	int _suspendTag;	// 104 = 0x68
	int _dismissButtonIndex;	// 108 = 0x6c
	float _bodyTextHeight;	// 112 = 0x70
	NSMutableArray *_buttons;	// 116 = 0x74
	NSMutableArray *_textFields;	// 120 = 0x78
	UIView *_keyboard;	// 124 = 0x7c
	UIView *_table;	// 128 = 0x80
	UIView *_dimView;	// 132 = 0x84
	UIView *_sheetView;	// 136 = 0x88
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateCancel : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateDidDismiss : 1;
		unsigned popupFromPoint : 1;
		unsigned extra : 20;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
	} _modalViewFlags;	// 140 = 0x8c
}
@property(assign) int alertSheetStyle;	// G=0x353ec599; S=0x353ec5ad; converted property
@property(assign) BOOL blocksInteraction;	// G=0x353ec765; S=0x353ec73d; converted property
@property(retain) id bodyText;	// G=0x353e6e59; S=0x353e6ca9; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x353e62b5; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x353f0229; S=0x353f020d; 
@property(retain) id context;	// G=0x353e7bad; S=0x353e7b69; converted property
@property(retain) id defaultButton;	// G=0x353e7679; S=0x353e7639; converted property
@property(assign) int defaultButtonIndex;	// G=0x353f01fd; S=0x353f01e1; converted property
@property(assign, nonatomic) id<UIModalViewDelegate> delegate;	// G=0x353f0039; S=0x353efea5; 
@property(retain) id destructiveButton;	// G=0x353e7771; S=0x353e7731; converted property
@property(assign) BOOL dimsBackground;	// G=0x353ec709; S=0x353ec6e1; converted property
@property(assign, nonatomic) BOOL groupsTextFields;	// G=0x353e6189; S=0x353e61a1; 
@property(readonly, retain) UIView *keyboard;	// G=0x353e7511; converted property
@property(copy, nonatomic) NSString *message;	// G=0x353f0115; S=0x353f0105; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x353f0191; 
@property(assign) int numberOfRows;	// G=0x353ec585; S=0x353ec56d; converted property
@property(assign) BOOL runsModal;	// G=0x353ec795; S=0x353ec77d; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x353e888d; S=0x353e8875; converted property
@property(retain) id subtitle;	// G=0x353e6e39; S=0x353e6db9; converted property
@property(assign) int suspendTag;	// G=0x353ec72d; S=0x353ec71d; converted property
@property(readonly, retain) UIView *table;	// G=0x353e869d; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x353e8591; S=0x353e8575; converted property
@property(copy, nonatomic) NSString *title;	// G=0x353f00d9; S=0x353f0049; 
@property(assign) int titleMaxLineCount;	// G=0x353e6f2d; S=0x353e6e85; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x353f01b1; 
+ (id)_popupAlertBackground;	// 0x3520fb5d
+ (BOOL)atLeastOneAlertVisible;	// 0x353ec7a9
+ (CGSize)minimumSize;	// 0x3520fb11
+ (void)noteOrientationChangingTo:(int)to;	// 0x353ec849
+ (id)topMostAlert;	// 0x353ec811
+ (id)visibleAlert;	// 0x353ec82d
- (id)initWithFrame:(CGRect)frame;	// 0x353ef955
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x353e6029
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x353efa39
- (id)_addButtonWithTitle:(id)title;	// 0x353e7ae9
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x353e77ad
- (id)_addButtonWithTitleText:(id)titleText;	// 0x353e7b29
- (void)_adjustLabelFontSizes;	// 0x353ea5cd
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x353ec281
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x353e7439
- (void)_appSuspended:(id)suspended;	// 0x353ec0bd
- (float)_bottomVerticalInset;	// 0x353ebeb5
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x353e9469
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x353e9375
- (void)_buttonClicked:(id)clicked;	// 0x353e7bbd
- (float)_buttonHeight;	// 0x353ec9f1
- (BOOL)_canShowAlerts;	// 0x353e9bfd
- (void)_cancelAnimated:(BOOL)animated;	// 0x353e9e21
- (void)_cleanupAfterPopupAnimation;	// 0x353e81a5
- (void)_createBodyTextLabelIfNeeded;	// 0x353e65b9
- (void)_createSubtitleLabelIfNeeded;	// 0x353e63dd
- (void)_createTaglineTextLabelIfNeeded;	// 0x353e67d5
- (void)_createTitleLabelIfNeeded;	// 0x353e62c5
- (int)_currentOrientation;	// 0x353e61bd
- (id)_defaultButton;	// 0x353e76f5
- (id)_dimView;	// 0x353eb04d
- (BOOL)_dimsBackground;	// 0x353e9be5
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x353e925d
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x353ef8cd
- (void)_hideAnimated:(BOOL)animated;	// 0x353e9e11
- (id)_initWithTelephoneNumber:(id)telephoneNumber buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x353efb7d
- (BOOL)_isAnimating;	// 0x353e9479
- (BOOL)_isSBAlert;	// 0x353f0575
- (BOOL)_isSBAlert;	// 0x353e7c8d
- (void)_keyboardWillHide:(id)_keyboard;	// 0x353e7f79
- (void)_keyboardWillShow:(id)_keyboard;	// 0x353e7c91
- (void)_layoutIfNeeded;	// 0x353ea481
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x353ea41d
- (BOOL)_manualKeyboardIsVisible;	// 0x353e87c5
- (float)_maxHeight;	// 0x353ec8ad
- (BOOL)_needsKeyboard;	// 0x353e8795
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x353e97c9
- (void)_performPopup:(BOOL)popup;	// 0x353e88a1
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x353e948d
- (void)_prepareForDisplay;	// 0x353ef7c1
- (void)_prepareToBeReplaced;	// 0x353ef8b5
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x353ea939
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x353eb159
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x353e9c21
- (void)_repopup;	// 0x353e9b99
- (void)_repopupNoAnimation;	// 0x353e9b35
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x353ea13d
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x353e6239
- (void)_setDefaultButton:(id)button;	// 0x353e76b5
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x353f0239
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x353e723d
- (void)_setupInitialFrame;	// 0x353e9e89
- (void)_setupTitleStyle;	// 0x353e69e5
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x353e87c9
- (void)_slideSheetOut:(BOOL)anOut;	// 0x353ebaed
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x353e9da9
- (float)_titleHorizontalInset;	// 0x353ebe89
- (float)_titleVerticalBottomInset;	// 0x353ebe5d
- (float)_titleVerticalTopInset;	// 0x353ebe31
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x353ecbf9
- (int)addButtonWithTitle:(id)title;	// 0x353f0125
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x353e7b09
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x353e7ac5
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x353e7009
// converted property getter: - (int)alertSheetStyle;	// 0x353ec599
- (CGSize)backgroundSize;	// 0x353ebdf9
// converted property getter: - (BOOL)blocksInteraction;	// 0x353ec765
- (int)bodyMaxLineCount;	// 0x353e6ff5
// converted property getter: - (id)bodyText;	// 0x353e6e59
- (id)bodyTextView;	// 0x353ef7a1
- (int)buttonCount;	// 0x353e7b49
- (id)buttonTitleAtIndex:(int)index;	// 0x353f0159
// converted property getter: - (id)buttons;	// 0x353e62b5
- (BOOL)canBecomeFirstResponder;	// 0x353ef951
// declared property getter: - (int)cancelButtonIndex;	// 0x353f0229
// converted property getter: - (id)context;	// 0x353e7bad
- (void)dealloc;	// 0x353efba5
// converted property getter: - (id)defaultButton;	// 0x353e7679
// converted property getter: - (int)defaultButtonIndex;	// 0x353f01fd
// declared property getter: - (id)delegate;	// 0x353f0039
// converted property getter: - (id)destructiveButton;	// 0x353e7771
// converted property getter: - (BOOL)dimsBackground;	// 0x353ec709
- (void)dismiss;	// 0x353ebdb1
- (void)dismissAnimated:(BOOL)animated;	// 0x353ebdc5
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x353f0265
- (void)drawRect:(CGRect)rect;	// 0x353ebee5
- (int)firstOtherButtonIndex;	// 0x353f0255
// declared property getter: - (BOOL)groupsTextFields;	// 0x353e6189
- (BOOL)isBodyTextTruncated;	// 0x353ea405
// declared property getter: - (BOOL)isVisible;	// 0x353f01b1
// converted property getter: - (id)keyboard;	// 0x353e7511
- (void)layout;	// 0x353ecce1
- (void)layoutAnimated:(BOOL)animated;	// 0x353ea14d
// declared property getter: - (id)message;	// 0x353f0115
// declared property getter: - (int)numberOfButtons;	// 0x353f0191
- (int)numberOfLinesInTitle;	// 0x353eca99
// converted property getter: - (int)numberOfRows;	// 0x353ec585
- (void)popupAlertAnimated:(BOOL)animated;	// 0x353ea921
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x353ea715
- (void)popupAlertAnimated:(BOOL)animated fromBarButtonItem:(id)barButtonItem;	// 0x353ea8d5
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x353eac19
- (void)presentSheetFromBehindView:(id)behindView;	// 0x353eac05
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x353ef70d
- (void)presentSheetInView:(id)view;	// 0x353eac2d
- (void)presentSheetToAboveView:(id)aboveView;	// 0x353eada5
- (void)replaceAlert:(id)alert;	// 0x353ef7f1
- (BOOL)requiresPortraitOrientation;	// 0x353e61b9
// converted property getter: - (BOOL)runsModal;	// 0x353ec795
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x353ec5ad
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x353ec73d
// converted property setter: - (void)setBodyText:(id)text;	// 0x353e6ca9
- (void)setBodyTextMaxLineCount:(int)count;	// 0x353e6f41
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x353f020d
// converted property setter: - (void)setContext:(id)context;	// 0x353e7b69
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x353e7639
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x353f01e1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x353efea5
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x353e7731
- (void)setDimView:(id)view;	// 0x353eb00d
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x353ec6e1
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x353e61a1
// declared property setter: - (void)setMessage:(id)message;	// 0x353f0105
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x353ec56d
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x353ec77d
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x353e8875
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x353e6db9
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x353ec71d
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x353e8575
- (void)setTaglineText:(id)text;	// 0x353e6d39
// declared property setter: - (void)setTitle:(id)title;	// 0x353f0049
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x353e6e85
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x353e888d
// converted property getter: - (id)subtitle;	// 0x353e6e39
// converted property getter: - (int)suspendTag;	// 0x353ec72d
// converted property getter: - (id)table;	// 0x353e869d
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x353e8591
- (id)tableView;	// 0x353e85a5
- (id)taglineTextView;	// 0x353ef7b1
- (id)textField;	// 0x353e73f1
- (id)textFieldAtIndex:(int)index;	// 0x353e73a5
- (int)textFieldCount;	// 0x353e73c9
// declared property getter: - (id)title;	// 0x353f00d9
// converted property getter: - (int)titleMaxLineCount;	// 0x353e6f2d
- (CGRect)titleRect;	// 0x353ec865
- (void)userDidCancelPopoverView:(id)user;	// 0x353ea91d
@end

