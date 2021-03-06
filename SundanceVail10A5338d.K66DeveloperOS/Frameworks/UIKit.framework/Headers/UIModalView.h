/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, UIWindow, UILabel, NSString, UIToolbar;
@protocol UIModalViewDelegate;

@interface UIModalView : UIView <UITextFieldDelegate> {
	id<UIModalViewDelegate> _delegate;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	UILabel *_subtitleLabel;	// 92 = 0x5c
	UILabel *_bodyTextLabel;	// 96 = 0x60
	UILabel *_taglineTextLabel;	// 100 = 0x64
	float _startX;	// 104 = 0x68
	float _startY;	// 108 = 0x6c
	id _context;	// 112 = 0x70
	int _cancelButton;	// 116 = 0x74
	int _defaultButton;	// 120 = 0x78
	int _firstOtherButton;	// 124 = 0x7c
	UIToolbar *_toolbar;	// 128 = 0x80
	UIWindow *_originalWindow;	// 132 = 0x84
	UIWindow *_dimWindow;	// 136 = 0x88
	int _suspendTag;	// 140 = 0x8c
	int _dismissButtonIndex;	// 144 = 0x90
	float _bodyTextHeight;	// 148 = 0x94
	NSMutableArray *_buttons;	// 152 = 0x98
	NSMutableArray *_textFields;	// 156 = 0x9c
	UIView *_keyboard;	// 160 = 0xa0
	UIView *_table;	// 164 = 0xa4
	UIView *_dimView;	// 168 = 0xa8
	UIView *_sheetView;	// 172 = 0xac
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
	} _modalViewFlags;	// 176 = 0xb0
}
@property(assign) int alertSheetStyle;	// G=0x30f3a431; S=0x30f3a445; converted property
@property(assign) BOOL blocksInteraction;	// G=0x30f3a611; S=0x30f3a5e9; converted property
@property(retain) id bodyText;	// G=0x30f3515d; S=0x30f34fb9; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x30f346b1; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x30f3db4d; S=0x30f3db31; 
@property(retain) id context;	// G=0x30f35e8d; S=0x30f35e49; converted property
@property(retain) id defaultButton;	// G=0x30f35955; S=0x30f35915; converted property
@property(assign) int defaultButtonIndex;	// G=0x30f3db21; S=0x30f3db05; converted property
@property(assign, nonatomic) id<UIModalViewDelegate> delegate;	// G=0x30f3d961; S=0x30f3d80d; 
@property(retain) id destructiveButton;	// G=0x30f35a4d; S=0x30f35a0d; converted property
@property(assign) BOOL dimsBackground;	// G=0x30f3a5b5; S=0x30f3a58d; converted property
@property(assign, nonatomic) BOOL groupsTextFields;	// G=0x30f345c1; S=0x30f345d9; 
@property(readonly, retain) UIView *keyboard;	// G=0x30f357f9; converted property
@property(copy, nonatomic) NSString *message;	// G=0x30f3da39; S=0x30f3da29; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x30f3dab5; 
@property(assign) int numberOfRows;	// G=0x30f3a41d; S=0x30f3a405; converted property
@property(assign) BOOL runsModal;	// G=0x30f3a641; S=0x30f3a629; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x30f36a45; S=0x30f36a2d; converted property
@property(retain) id subtitle;	// G=0x30f3513d; S=0x30f350c1; converted property
@property(assign) int suspendTag;	// G=0x30f3a5d9; S=0x30f3a5c9; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x30f36841; S=0x30f36825; converted property
@property(copy, nonatomic) NSString *title;	// G=0x30f3da01; S=0x30f3d971; 
@property(assign) int titleMaxLineCount;	// G=0x30f3522d; S=0x30f35185; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x30f3dad5; 
+ (id)_popupAlertBackground;	// 0x30d55081
+ (BOOL)atLeastOneAlertVisible;	// 0x30f3a655
+ (CGSize)minimumSize;	// 0x30d55031
+ (void)noteOrientationChangingTo:(int)to;	// 0x30f3a6f5
+ (id)topMostAlert;	// 0x30f3a6bd
+ (id)visibleAlert;	// 0x30f3a6d9
- (id)initWithFrame:(CGRect)frame;	// 0x30f3d2a1
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x30f3445d
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x30f3d381
- (id)_addButtonWithTitle:(id)title;	// 0x30f35dc9
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x30f35a89
- (id)_addButtonWithTitleText:(id)titleText;	// 0x30f35e09
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x30f3a10d
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x30f3571d
- (void)_appSuspended:(id)suspended;	// 0x30f39f45
- (float)_bottomVerticalInset;	// 0x30f39d0d
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x30f37551
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x30f37459
- (void)_buttonClicked:(id)clicked;	// 0x30f35e9d
- (float)_buttonHeight;	// 0x30f3a895
- (BOOL)_canShowAlerts;	// 0x30f37cd1
- (void)_cancelAnimated:(BOOL)animated;	// 0x30f37ee5
- (void)_cleanupAfterPopupAnimation;	// 0x30f36449
- (void)_createBodyTextLabelIfNeeded;	// 0x30f34971
- (void)_createSubtitleLabelIfNeeded;	// 0x30f347c1
- (void)_createTaglineTextLabelIfNeeded;	// 0x30f34b55
- (void)_createTitleLabelIfNeeded;	// 0x30f346c1
- (int)_currentOrientation;	// 0x30f345f5
- (id)_defaultButton;	// 0x30f359d1
- (id)_dimView;	// 0x30f38f7d
- (BOOL)_dimsBackground;	// 0x30f37cb9
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x30f37341
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x30f3d219
- (void)_hideAnimated:(BOOL)animated;	// 0x30f37ed5
- (id)_initWithTelephoneNumber:(id)telephoneNumber buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x30f3d4d1
- (BOOL)_isAnimating;	// 0x30f37561
- (BOOL)_isSBAlert;	// 0x30f35f75
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30f3620d
- (void)_keyboardWillShow:(id)_keyboard;	// 0x30f35f79
- (void)_layoutIfNeeded;	// 0x30f38521
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x30f384b1
- (BOOL)_manualKeyboardIsVisible;	// 0x30f36979
- (float)_maxHeight;	// 0x30f3a759
- (BOOL)_needsKeyboard;	// 0x30f3694d
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x30f378b1
- (void)_performPopup:(BOOL)popup;	// 0x30f36a59
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x30f37575
- (void)_prepareForDisplay;	// 0x30f3d109
- (void)_prepareToBeReplaced;	// 0x30f3d201
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x30f3885d
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x30f39079
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x30f37cf5
- (void)_repopup;	// 0x30f37c6d
- (void)_repopupNoAnimation;	// 0x30f37c09
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x30f381bd
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x30f34635
- (void)_setDefaultButton:(id)button;	// 0x30f35991
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x30f3db5d
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x30f3552d
- (void)_setupInitialFrame;	// 0x30f37f45
- (void)_setupTitleStyle;	// 0x30f34d41
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x30f3697d
- (void)_slideSheetOut:(BOOL)anOut;	// 0x30f39989
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x30f37e6d
- (float)_titleHorizontalInset;	// 0x30f39ce1
- (float)_titleVerticalBottomInset;	// 0x30f39cb5
- (float)_titleVerticalTopInset;	// 0x30f39c89
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x30f3aa15
- (int)addButtonWithTitle:(id)title;	// 0x30f3da49
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x30f35de9
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x30f35da5
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x30f35305
// converted property getter: - (int)alertSheetStyle;	// 0x30f3a431
- (CGSize)backgroundSize;	// 0x30f39c51
// converted property getter: - (BOOL)blocksInteraction;	// 0x30f3a611
- (int)bodyMaxLineCount;	// 0x30f352f1
// converted property getter: - (id)bodyText;	// 0x30f3515d
- (id)bodyTextView;	// 0x30f3d0e9
- (int)buttonCount;	// 0x30f35e29
- (id)buttonTitleAtIndex:(int)index;	// 0x30f3da7d
// converted property getter: - (id)buttons;	// 0x30f346b1
- (BOOL)canBecomeFirstResponder;	// 0x30f3d29d
// declared property getter: - (int)cancelButtonIndex;	// 0x30f3db4d
// converted property getter: - (id)context;	// 0x30f35e8d
- (void)dealloc;	// 0x30f3d4f9
// converted property getter: - (id)defaultButton;	// 0x30f35955
// converted property getter: - (int)defaultButtonIndex;	// 0x30f3db21
// declared property getter: - (id)delegate;	// 0x30f3d961
// converted property getter: - (id)destructiveButton;	// 0x30f35a4d
// converted property getter: - (BOOL)dimsBackground;	// 0x30f3a5b5
- (void)dismiss;	// 0x30f39c09
- (void)dismissAnimated:(BOOL)animated;	// 0x30f39c1d
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30f3db89
- (void)drawRect:(CGRect)rect;	// 0x30f39d39
- (int)firstOtherButtonIndex;	// 0x30f3db79
// declared property getter: - (BOOL)groupsTextFields;	// 0x30f345c1
- (BOOL)isBodyTextTruncated;	// 0x30f38499
// declared property getter: - (BOOL)isVisible;	// 0x30f3dad5
// converted property getter: - (id)keyboard;	// 0x30f357f9
- (void)layout;	// 0x30f3aaf1
- (void)layoutAnimated:(BOOL)animated;	// 0x30f38451
- (void)layoutAnimated:(BOOL)animated withDuration:(double)duration;	// 0x30f381cd
// declared property getter: - (id)message;	// 0x30f3da39
// declared property getter: - (int)numberOfButtons;	// 0x30f3dab5
- (int)numberOfLinesInTitle;	// 0x30f3a8c1
// converted property getter: - (int)numberOfRows;	// 0x30f3a41d
- (void)popupAlertAnimated:(BOOL)animated;	// 0x30f38845
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x30f3863d
- (void)popupAlertAnimated:(BOOL)animated fromBarButtonItem:(id)barButtonItem;	// 0x30f387f9
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x30f38b39
- (void)presentSheetFromBehindView:(id)behindView;	// 0x30f38b25
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x30f3d051
- (void)presentSheetInView:(id)view;	// 0x30f38b4d
- (void)presentSheetToAboveView:(id)aboveView;	// 0x30f38cc9
- (void)replaceAlert:(id)alert;	// 0x30f3d139
- (BOOL)requiresPortraitOrientation;	// 0x30f345f1
// converted property getter: - (BOOL)runsModal;	// 0x30f3a641
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x30f3a445
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x30f3a5e9
// converted property setter: - (void)setBodyText:(id)text;	// 0x30f34fb9
- (void)setBodyTextMaxLineCount:(int)count;	// 0x30f35241
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x30f3db31
// converted property setter: - (void)setContext:(id)context;	// 0x30f35e49
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x30f35915
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x30f3db05
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30f3d80d
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x30f35a0d
- (void)setDimView:(id)view;	// 0x30f38f41
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x30f3a58d
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x30f345d9
// declared property setter: - (void)setMessage:(id)message;	// 0x30f3da29
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x30f3a405
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x30f3a629
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x30f36a2d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x30f350c1
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x30f3a5c9
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x30f36825
- (void)setTaglineText:(id)text;	// 0x30f35045
// declared property setter: - (void)setTitle:(id)title;	// 0x30f3d971
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x30f35185
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x30f36a45
// converted property getter: - (id)subtitle;	// 0x30f3513d
// converted property getter: - (int)suspendTag;	// 0x30f3a5d9
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x30f36841
- (id)tableView;	// 0x30f36855
- (id)taglineTextView;	// 0x30f3d0f9
- (id)textField;	// 0x30f356dd
- (id)textFieldAtIndex:(int)index;	// 0x30f35691
- (int)textFieldCount;	// 0x30f356b5
// declared property getter: - (id)title;	// 0x30f3da01
// converted property getter: - (int)titleMaxLineCount;	// 0x30f3522d
- (CGRect)titleRect;	// 0x30f3a711
- (void)userDidCancelPopoverView:(id)user;	// 0x30f38841
@end

