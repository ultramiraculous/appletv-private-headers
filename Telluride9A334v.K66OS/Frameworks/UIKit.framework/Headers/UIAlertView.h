/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSString, UILabel, UIWindow, UIToolbar;
@protocol UIAlertViewDelegate;

@interface UIAlertView : UIView {
@private
	id<UIAlertViewDelegate> _delegate;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
	UILabel *_subtitleLabel;	// 56 = 0x38
	UILabel *_bodyTextLabel;	// 60 = 0x3c
	UILabel *_taglineTextLabel;	// 64 = 0x40
	float _startY;	// 68 = 0x44
	CGPoint _center;	// 72 = 0x48
	id _context;	// 80 = 0x50
	int _cancelButton;	// 84 = 0x54
	int _defaultButton;	// 88 = 0x58
	int _firstOtherButton;	// 92 = 0x5c
	UIToolbar *_toolbar;	// 96 = 0x60
	UIWindow *_originalWindow;	// 100 = 0x64
	UIWindow *_dimWindow;	// 104 = 0x68
	int _suspendTag;	// 108 = 0x6c
	int _dismissButtonIndex;	// 112 = 0x70
	float _bodyTextHeight;	// 116 = 0x74
	NSMutableArray *_buttons;	// 120 = 0x78
	NSMutableArray *_textFields;	// 124 = 0x7c
	UIView *_keyboard;	// 128 = 0x80
	UIView *_table;	// 132 = 0x84
	UIView *_dimView;	// 136 = 0x88
	UIView *_backgroundImageView;	// 140 = 0x8c
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
		unsigned includesCancel : 1;
		unsigned useUndoStyle : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned delegateShouldEnableFirstOtherButton : 1;
		unsigned forceHorizontalButtonsLayout : 1;
		unsigned suppressKeyboardOnPopup : 1;
		unsigned keyboardShowing : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned manualKeyboardVisible : 1;
		unsigned rotatingManualKeybaord : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned forceKeyboardUse : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned alertViewStyle : 3;
		unsigned isSBAlert : 1;
		unsigned isBeingDismissed : 1;
	} _modalViewFlags;	// 144 = 0x90
}
@property(assign) int alertSheetStyle;	// G=0x30373525; S=0x30373551; converted property
@property(assign, nonatomic) int alertViewStyle;	// G=0x303741bd; S=0x30374165; 
@property(assign) BOOL blocksInteraction;	// G=0x303736f1; S=0x303736c9; converted property
@property(retain) id bodyText;	// G=0x301833b1; S=0x301050a1; converted property
@property(readonly, retain) UILabel *bodyTextLabel;	// G=0x3037188d; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x30105a5d; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x30189685; S=0x30105a6d; 
@property(retain) id context;	// G=0x30189695; S=0x30182e09; converted property
@property(retain) id defaultButton;	// G=0x30370319; S=0x30370309; converted property
@property(assign) int defaultButtonIndex;	// G=0x30374155; S=0x30374139; converted property
@property(assign, nonatomic) id delegate;	// G=0x303740a1; S=0x30105131; 
@property(retain) id destructiveButton;	// G=0x30370399; S=0x30370359; converted property
@property(assign) BOOL dimsBackground;	// G=0x303736a5; S=0x3037367d; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x30182ddd; 
@property(assign) BOOL forceHorizontalButtonsLayout;	// G=0x30373539; S=0x30104fbd; converted property
@property(assign) BOOL groupsTextFields;	// G=0x3036f219; S=0x3036f231; converted property
@property(readonly, retain) UIView *keyboard;	// G=0x303701e1; converted property
@property(copy, nonatomic) NSString *message;	// G=0x301833a1; S=0x30105091; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x303740e9; 
@property(assign) int numberOfRows;	// G=0x30373511; S=0x30104fa5; converted property
@property(assign) BOOL runsModal;	// G=0x30373721; S=0x30373709; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x30370b29; S=0x30370b11; converted property
@property(retain) id subtitle;	// G=0x3036f7b1; S=0x3036f731; converted property
@property(assign) int suspendTag;	// G=0x303736b9; S=0x301d64d5; converted property
@property(readonly, retain) UIView *table;	// G=0x30370941; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x303705c9; S=0x303705ad; converted property
@property(readonly, retain) UILabel *taglineTextLabel;	// G=0x3037189d; converted property
@property(copy, nonatomic) NSString *title;	// G=0x30105065; S=0x30104fd5; 
@property(readonly, retain) UILabel *titleLabel;	// G=0x3037187d; converted property
@property(assign) int titleMaxLineCount;	// G=0x3036f879; S=0x3036f7d1; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x30374109; 
+ (id)_alertWindow;	// 0x300425e5
+ (id)_popupAlertBackground:(BOOL)background;	// 0x3018795d
+ (void)applyTransformToAllAlerts:(CGAffineTransform)allAlerts;	// 0x3036f035
+ (CGSize)minimumSize;	// 0x3036efe9
- (id)initWithFrame:(CGRect)frame;	// 0x30104e11
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x3036f075
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x30104cad
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x30373f79
- (id)_addButtonWithTitle:(id)title;	// 0x30370329
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x301053f5
- (id)_addButtonWithTitleText:(id)titleText;	// 0x30370451
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x301059f1
- (void)_addTextEntryFieldsWithStyle:(int)style;	// 0x303741dd
- (id)_addTextFieldWithValue:(id)value label:(id)label;	// 0x3036f955
- (void)_adjustLabelFontSizes;	// 0x303718dd
- (int)_alertOrientation;	// 0x303718c5
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x303731d9
- (void)_alertSheetTextFieldDidChange:(id)_alertSheetTextField;	// 0x3018420d
- (void)_alertSheetTextFieldDidEndEditing:(id)_alertSheetTextField;	// 0x3036fdd1
- (void)_alertSheetTextFieldDidStartEditing:(id)_alertSheetTextField;	// 0x3036fe01
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x3036fed1
- (void)_appSuspended:(id)suspended;	// 0x30372fc1
- (float)_bottomVerticalInset;	// 0x30187bd9
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x30188379
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x30188285
- (id)_buttonAtIndex:(int)index;	// 0x30370471
- (void)_buttonClicked:(id)clicked;	// 0x301887e1
- (float)_buttonHeight;	// 0x301879d1
- (BOOL)_canShowAlerts;	// 0x301841e9
- (void)_cancelAnimated:(BOOL)animated;	// 0x303717f9
- (void)_cleanupAfterPopupAnimation;	// 0x30188389
- (void)_cleanupKBWatcher;	// 0x303700fd
- (void)_createBodyTextLabelIfNeeded;	// 0x30182ba1
- (void)_createSubtitleLabelIfNeeded;	// 0x3036f2c5
- (void)_createTaglineTextLabelIfNeeded;	// 0x3036f4a1
- (void)_createTitleLabelIfNeeded;	// 0x30182a89
- (int)_currentOrientation;	// 0x301847c1
- (id)_defaultButton;	// 0x30370415
- (id)_destructiveButton;	// 0x303704d1
- (id)_dimView;	// 0x303721cd
- (BOOL)_dimsBackground;	// 0x3037176d
- (id)_firstOtherButton;	// 0x3037050d
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x3018816d
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x30373db1
- (BOOL)_isAnimating;	// 0x303716c1
- (BOOL)_isSBAlert;	// 0x30373f51
- (void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;	// 0x30370fd9
- (void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;	// 0x30371115
- (void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;	// 0x30371271
- (void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;	// 0x303713cd
- (void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;	// 0x30371529
- (void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;	// 0x30371685
- (void)_keyboardDidHide:(id)_keyboard;	// 0x30374981
- (void)_keyboardHiddingAnimationDidStop:(id)_keyboardHiddingAnimation finished:(id)finished;	// 0x30370b3d
- (void)_keyboardWillHide:(id)_keyboard;	// 0x3037473d
- (void)_keyboardWillShow:(id)_keyboard;	// 0x303743f5
- (void)_layoutIfNeeded;	// 0x30184665
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x30184841
- (BOOL)_manualKeyboardIsVisible;	// 0x30370a4d
- (float)_maxHeight;	// 0x30187c05
- (BOOL)_needsKeyboard;	// 0x30184621
- (void)_nukeOldTextFields;	// 0x30373e35
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x30188c89
- (void)_performPopup:(BOOL)popup;	// 0x30370fc5
- (void)_performPopup:(BOOL)popup animationType:(int)type;	// 0x301833dd
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x30189185
- (void)_prepareForDisplay;	// 0x30373ba9
- (void)_prepareToBeReplaced;	// 0x30373d99
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x30371ab9
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x303722d9
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x301894e5
- (void)_repopup;	// 0x30371721
- (void)_repopupNoAnimation;	// 0x303716d5
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x3037186d
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x3036f249
- (void)_setDefaultButton:(id)button;	// 0x303703d5
- (void)_setDestructiveButton:(id)button;	// 0x30370491
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x30182ded
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x3036fbad
- (void)_setupKBWatcher;	// 0x3036ffa9
- (void)_setupTitleStyle;	// 0x30187699
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x30370a65
- (void)_showKeyboard:(BOOL)keyboard animated:(BOOL)animated;	// 0x30370bb9
- (void)_showManualKBIfNecessary;	// 0x30370b69
- (void)_slideSheetOut:(BOOL)anOut;	// 0x30372c7d
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x30371785
- (id)_textFieldAtIndex:(int)index;	// 0x3036fd15
- (float)_titleHorizontalInset;	// 0x30187a8d
- (float)_titleVerticalBottomInset;	// 0x30187b49
- (float)_titleVerticalTopInset;	// 0x30187ab9
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x303738dd
- (void)_updateFrameForDisplay;	// 0x30187d6d
- (void)_updateKeyboardStateForPreviousResponder:(id)previousResponder;	// 0x3036fe89
- (void)_useUndoStyle:(BOOL)style;	// 0x303743dd
- (void)_willRotateKeyboard;	// 0x303749e1
- (int)addButtonWithTitle:(id)title;	// 0x301053c1
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x3037056d
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x30370549
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x30373f69
// converted property getter: - (int)alertSheetStyle;	// 0x30373525
// declared property getter: - (int)alertViewStyle;	// 0x303741bd
- (CGSize)backgroundSize;	// 0x30372f89
- (BOOL)becomeFirstResponder;	// 0x3018873d
// converted property getter: - (BOOL)blocksInteraction;	// 0x303736f1
- (int)bodyMaxLineCount;	// 0x3036f941
// converted property getter: - (id)bodyText;	// 0x301833b1
// converted property getter: - (id)bodyTextLabel;	// 0x3037188d
- (id)buttonAtIndex:(int)index;	// 0x30370339
- (int)buttonCount;	// 0x3037058d
- (id)buttonTitleAtIndex:(int)index;	// 0x303740b1
// converted property getter: - (id)buttons;	// 0x30105a5d
- (BOOL)canBecomeFirstResponder;	// 0x3018877d
// declared property getter: - (int)cancelButtonIndex;	// 0x30189685
// converted property getter: - (id)context;	// 0x30189695
- (void)dealloc;	// 0x301896a5
// converted property getter: - (id)defaultButton;	// 0x30370319
// converted property getter: - (int)defaultButtonIndex;	// 0x30374155
// declared property getter: - (id)delegate;	// 0x303740a1
// converted property getter: - (id)destructiveButton;	// 0x30370399
// converted property getter: - (BOOL)dimsBackground;	// 0x303736a5
- (void)dismiss;	// 0x30372f41
- (void)dismissAnimated:(BOOL)animated;	// 0x30372f55
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30188959
// declared property getter: - (int)firstOtherButtonIndex;	// 0x30182ddd
// converted property getter: - (BOOL)forceHorizontalButtonsLayout;	// 0x30373539
// converted property getter: - (BOOL)groupsTextFields;	// 0x3036f219
- (BOOL)isBodyTextTruncated;	// 0x303718ad
// declared property getter: - (BOOL)isVisible;	// 0x30374109
// converted property getter: - (id)keyboard;	// 0x303701e1
- (void)layout;	// 0x30184b99
- (void)layoutAnimated:(BOOL)animated;	// 0x301848a5
// declared property getter: - (id)message;	// 0x301833a1
// declared property getter: - (int)numberOfButtons;	// 0x303740e9
- (int)numberOfLinesInTitle;	// 0x3037377d
// converted property getter: - (int)numberOfRows;	// 0x30373511
- (void)popupAlertAnimated:(BOOL)animated;	// 0x30371aa5
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type;	// 0x30182e75
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;	// 0x30182e9d
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x30371a85
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x30371d99
- (void)presentSheetFromBehindView:(id)behindView;	// 0x30371d85
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x30373b15
- (void)presentSheetInView:(id)view;	// 0x30371dad
- (void)presentSheetToAboveView:(id)aboveView;	// 0x30371f25
- (void)replaceAlert:(id)alert;	// 0x30373cd5
- (BOOL)requiresPortraitOrientation;	// 0x3018483d
- (BOOL)resignFirstResponder;	// 0x30189141
// converted property getter: - (BOOL)runsModal;	// 0x30373721
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x30373551
// declared property setter: - (void)setAlertViewStyle:(int)style;	// 0x30374165
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x303736c9
// converted property setter: - (void)setBodyText:(id)text;	// 0x301050a1
- (void)setBodyTextMaxLineCount:(int)count;	// 0x3036f88d
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x30105a6d
// converted property setter: - (void)setContext:(id)context;	// 0x30182e09
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x30370309
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x30374139
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30105131
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x30370359
- (void)setDimView:(id)view;	// 0x3037218d
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x3037367d
// converted property setter: - (void)setForceHorizontalButtonsLayout:(BOOL)layout;	// 0x30104fbd
// converted property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x3036f231
- (void)setKeyboardShowsOnPopup:(BOOL)popup;	// 0x3036fda9
// declared property setter: - (void)setMessage:(id)message;	// 0x30105091
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x30104fa5
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x30373709
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x30370b11
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3036f731
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x301d64d5
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x303705ad
- (void)setTaglineText:(id)text;	// 0x3036f6b1
// declared property setter: - (void)setTitle:(id)title;	// 0x30104fd5
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x3036f7d1
- (void)show;	// 0x30182e4d
- (void)showWithAnimationType:(int)animationType;	// 0x30182e61
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x30370b29
// converted property getter: - (id)subtitle;	// 0x3036f7b1
// converted property getter: - (int)suspendTag;	// 0x303736b9
// converted property getter: - (id)table;	// 0x30370941
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x303705c9
- (id)tableView;	// 0x303705dd
// converted property getter: - (id)taglineTextLabel;	// 0x3037189d
- (id)textField;	// 0x3036fd61
- (id)textFieldAtIndex:(int)index;	// 0x30374365
- (int)textFieldCount;	// 0x3036fd39
// declared property getter: - (id)title;	// 0x30105065
// converted property getter: - (id)titleLabel;	// 0x3037187d
// converted property getter: - (int)titleMaxLineCount;	// 0x3036f879
- (CGRect)titleRect;	// 0x30373735
@end

