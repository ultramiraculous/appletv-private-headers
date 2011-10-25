/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIControl.h"
#import "UITextInput.h"
#import "UITextSelectingContainer.h"
#import "UIPopoverControllerDelegate.h"
#import "UIKit-Structs.h"

@class UIPopoverController, UIButton, UITextInputTraits, UITextFieldLabel, UITextFieldBorderView, UITextFieldAtomBackgroundView, UITextRange, NSDictionary, UITextPosition, UITextFieldBackgroundView, UITextSelectionView, UIViewController, UITextInteractionAssistant, UIFont, UILabel, UIColor, UIImageView, UIImage, NSString;
@protocol UITextFieldDelegate, UITextInputDelegate, UITextInputTokenizer, UITextSelectingContent;

@interface UITextField : UIControl <UITextSelectingContainer, UIPopoverControllerDelegate, UITextInput, NSCoding> {
@private
	NSString *_text;	// 72 = 0x48
	UIColor *_textColor;	// 76 = 0x4c
	int _borderStyle;	// 80 = 0x50
	float _minimumFontSize;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	UIImage *_background;	// 92 = 0x5c
	UIImage *_disabledBackground;	// 96 = 0x60
	int _clearButtonMode;	// 100 = 0x64
	UIView *_leftView;	// 104 = 0x68
	int _leftViewMode;	// 108 = 0x6c
	UIView *_rightView;	// 112 = 0x70
	int _rightViewMode;	// 116 = 0x74
	UITextInputTraits *_traits;	// 120 = 0x78
	UITextInputTraits *_nonAtomTraits;	// 124 = 0x7c
	float _fullFontSize;	// 128 = 0x80
	float _paddingLeft;	// 132 = 0x84
	float _paddingTop;	// 136 = 0x88
	float _paddingRight;	// 140 = 0x8c
	float _paddingBottom;	// 144 = 0x90
	NSString *_textFont;	// 148 = 0x94
	NSRange _selectionRange;	// 152 = 0x98
	int _scrollXOffset;	// 160 = 0xa0
	int _scrollYOffset;	// 164 = 0xa4
	int _suffixWidth;	// 168 = 0xa8
	float _progress;	// 172 = 0xac
	NSString *_style;	// 176 = 0xb0
	double _mouseDownTime;	// 180 = 0xb4
	UIButton *_clearButton;	// 188 = 0xbc
	CGSize _clearButtonOffset;	// 192 = 0xc0
	CGSize _leftViewOffset;	// 200 = 0xc8
	CGSize _rightViewOffset;	// 208 = 0xd0
	UITextFieldBorderView *_backgroundView;	// 216 = 0xd8
	UITextFieldBorderView *_disabledBackgroundView;	// 220 = 0xdc
	UITextFieldBackgroundView *_systemBackgroundView;	// 224 = 0xe0
	UITextFieldLabel *_textLabel;	// 228 = 0xe4
	UITextFieldLabel *_placeholderLabel;	// 232 = 0xe8
	UITextFieldLabel *_suffixLabel;	// 236 = 0xec
	UITextFieldLabel *_prefixLabel;	// 240 = 0xf0
	UIImageView *_iconView;	// 244 = 0xf4
	UILabel *_label;	// 248 = 0xf8
	float _labelOffset;	// 252 = 0xfc
	UITextInteractionAssistant *_interactionAssistant;	// 256 = 0x100
	UITextSelectionView *_selectionView;	// 260 = 0x104
	UIView *_inputView;	// 264 = 0x108
	UIView *_inputAccessoryView;	// 268 = 0x10c
	UITextFieldAtomBackgroundView *_atomBackgroundView;	// 272 = 0x110
	UIPopoverController *_definitionPopoverController;	// 276 = 0x114
	UIViewController *_definitionModalViewController;	// 280 = 0x118
	struct {
		unsigned secureTextChanged : 1;
		unsigned guard : 1;
		unsigned delegateRespondsToHandleKeyDown : 1;
		unsigned verticallyCenterText : 1;
		unsigned isAnimating : 4;
		unsigned inactiveHasDimAppearance : 1;
		unsigned becomesFirstResponderOnClearButtonTap : 1;
		unsigned clearsOnBeginEditing : 1;
		unsigned clearsPlaceholderOnBeginEditing : 1;
		unsigned adjustsFontSizeToFitWidth : 1;
		unsigned fieldEditorAttached : 1;
		unsigned canBecomeFirstResponder : 1;
		unsigned shouldSuppressShouldBeginEditing : 1;
		unsigned inResignFirstResponder : 1;
		unsigned undoDisabled : 1;
		unsigned contentsRTL : 1;
		unsigned explicitAlignment : 1;
		unsigned implementsCustomDrawing : 1;
		unsigned needsClearing : 1;
	} _textFieldFlags;	// 284 = 0x11c
}
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;	// G=0x350d5e95; S=0x3523e339; 
@property(assign) int atomStyle;	// G=0x3522be49; S=0x3522f235; converted property
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(retain, nonatomic) UIImage *background;	// G=0x352938f5; S=0x35102dcd; @synthesize=_background
@property(retain) id backgroundColor;	// G=0x3515ddbd; S=0x3515e2ed; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x35293325; 
@property(assign, nonatomic) int borderStyle;	// G=0x352938d5; S=0x3515db91; @synthesize=_borderStyle
@property(assign) BOOL caretBlinks;	// G=0x35292571; S=0x3529256d; converted property
@property(readonly, retain) UIButton *clearButton;	// G=0x35121909; converted property
@property(assign, nonatomic) int clearButtonMode;	// G=0x350d68dd; S=0x35102a05; @synthesize=_clearButtonMode
@property(assign) CGSize clearButtonOffset;	// G=0x35292185; S=0x35292451; converted property
@property(assign, nonatomic) BOOL clearsOnBeginEditing;	// G=0x3519c799; S=0x35291701; 
@property(assign) BOOL clearsPlaceholderOnBeginEditing;	// G=0x351f3079; S=0x35291725; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x35100a81; 
@property(assign, nonatomic) id<UITextFieldDelegate> delegate;	// G=0x3519b331; S=0x351018b5; @synthesize=_delegate
@property(retain, nonatomic) UIImage *disabledBackground;	// G=0x35293905; S=0x35102e25; @synthesize=_disabledBackground
@property(assign) BOOL drawsAsAtom;	// G=0x35100acd; S=0x3522ef65; converted property
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3510081d; 
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x350d61d5; 
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x351b88e1; 
@property(retain, nonatomic) UIFont *font;	// G=0x351223cd; S=0x351018c5; 
@property(retain) UIView *inputAccessoryView;	// G=0x3519f37d; S=0x351e7865; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x3529340d; S=0x35293435; 
@property(retain) UIView *inputView;	// G=0x3519f369; S=0x351e7841; @synthesize=_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x3519ed79; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(retain, nonatomic) UIView *leftView;	// G=0x35293915; S=0x35101b35; @synthesize=_leftView
@property(assign, nonatomic) int leftViewMode;	// G=0x35121ce5; S=0x35101ba1; @synthesize=_leftViewMode
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x35293249; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x35293271; S=0x35293299; 
@property(assign, nonatomic) float minimumFontSize;	// G=0x352938e5; S=0x351e11cd; @synthesize=_minimumFontSize
@property(assign) float paddingBottom;	// G=0x35291b09; S=0x3519a291; converted property
@property(assign) float paddingLeft;	// G=0x35291ae9; S=0x35161455; converted property
@property(assign) float paddingRight;	// G=0x35291b55; S=0x35291b19; converted property
@property(assign) float paddingTop;	// G=0x35291af9; S=0x35161419; converted property
@property(copy, nonatomic) NSString *placeholder;	// G=0x35103eb9; S=0x3510331d; 
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(retain, nonatomic) UIView *rightView;	// G=0x3517f6c5; S=0x35102999; @synthesize=_rightView
@property(assign, nonatomic) int rightViewMode;	// G=0x35121e91; S=0x35101e3d; @synthesize=_rightViewMode
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// S=0x35291319; @dynamic
@property(copy) UITextRange *selectedTextRange;	// G=0x3519d999; S=0x3529321d; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x35293691; S=0x352936b9; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x3529372d; S=0x351b8b95; 
@property(assign) NSRange selectionRange;	// G=0x352920a1; S=0x352331b9; converted property
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x3519d729; 
@property(assign) BOOL selectionVisible;	// G=0x35292569; S=0x35292565; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x3517f015; S=0x350d14b9; 
@property(assign, nonatomic) int textAlignment;	// G=0x350d68a5; S=0x352913e1; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x352913d1; S=0x3515e455; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x3519d8e1; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, retain) UITextFieldLabel *textLabel;	// G=0x3522bd75; converted property
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x351b87f5; 
@property(assign, getter=isUndoEnabled) BOOL undoEnabled;	// G=0x351d0409; S=0x35292255; converted property
- (id)initWithCoder:(id)coder;	// 0x3528fb15
- (id)initWithFrame:(CGRect)frame;	// 0x350ff271
- (CGRect)_atomBackgroundViewFrame;	// 0x35232f89
- (void)_becomeFirstResponder;	// 0x3519b7a1
- (void)_becomeFirstResponderAndMakeVisible;	// 0x35290bed
- (BOOL)_canDrawContent;	// 0x350ff925
- (void)_clearBackgroundViews;	// 0x350d6711
- (id)_clearButton;	// 0x35161789
- (void)_clearButtonClicked:(id)clicked;	// 0x3529227d
- (id)_clearButtonImageForState:(unsigned)state;	// 0x35121cb1
- (void)_clearSelectionUI;	// 0x35291fa9
- (void)_clearStyle;	// 0x350ffc25
- (id)_copyFont:(id)font newSize:(float)size maxSize:(float)size3;	// 0x35290d05
- (id)_createCSSStyleDeclarationForWebView:(id)webView;	// 0x3519cef1
- (void)_define:(id)define;	// 0x35292ae9
- (id)_dictationInterpretations;	// 0x35291891
- (void)_drawTextInRect:(CGRect)rect forLabel:(id)label;	// 0x350d73d5
- (void)_encodeBackgroundColorWithCoder:(id)coder;	// 0x35290acd
- (void)_endedEditing;	// 0x351d1a99
- (id)_fieldEditor;	// 0x35100a91
- (BOOL)_fieldEditorAttached;	// 0x35161765
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x352936e5
- (CGSize)_fontMetrics:(id)metrics;	// 0x350d7129
- (CGRect)_frameForLabel:(id)label inTextRect:(CGRect)textRect;	// 0x350d6de9
- (BOOL)_hasContent;	// 0x350d6259
- (BOOL)_implementsCustomDrawing;	// 0x350ff9bd
- (BOOL)_isDisplayingReferenceLibraryViewController;	// 0x35292ca1
- (BOOL)_isShowingPlaceholder;	// 0x351c21cd
- (BOOL)_isShowingPrefix;	// 0x35290d85
- (id)_keyboardResponder;	// 0x3519f3bd
- (CGSize)_leftViewOffset;	// 0x3529128d
- (float)_marginTopForText:(id)text;	// 0x350d6f09
- (id)_placeholderColor;	// 0x35103575
- (id)_placeholderLabel;	// 0x35253c99
- (id)_placeholderView;	// 0x35161779
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35290381
- (CGRect)_prefixFrame;	// 0x352910d1
- (void)_promptForReplace:(id)replace;	// 0x35293055
- (void)_removeDefinitionController;	// 0x350dc74d
- (BOOL)_requiresKeyboardResetOnReload;	// 0x3519f365
- (void)_resetSelectionUI;	// 0x35291ff9
- (void)_resignFirstResponder;	// 0x351d16dd
- (CGSize)_rightViewOffset;	// 0x352912fd
- (id)_scriptingInfo;	// 0x35253be5
- (CGPoint)_scrollOffset;	// 0x3520da39
- (void)_setImplicitAlignment;	// 0x350d1b3d
- (void)_setLeftViewOffset:(CGSize)offset;	// 0x352912a9
- (void)_setNeedsStyleRecalc;	// 0x350ffbf5
- (void)_setPrefix:(id)prefix;	// 0x352915fd
- (void)_setRightViewOffset:(CGSize)offset;	// 0x3517f6d5
- (void)_setSuffix:(id)suffix withColor:(id)color;	// 0x35291511
- (void)_setSystemBackgroundViewActive:(BOOL)active;	// 0x351614a1
- (BOOL)_shouldEndEditing;	// 0x351d1205
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// 0x351c21fd
- (BOOL)_showsAtomBackground;	// 0x3522f37d
- (BOOL)_showsClearButton:(BOOL)button;	// 0x350d620d
- (BOOL)_showsClearButtonWhenEmpty;	// 0x350d6325
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)empty;	// 0x350d67a9
- (BOOL)_showsLeftView;	// 0x350d6329
- (BOOL)_showsRightView;	// 0x350d63a9
- (void)_sizeChanged:(BOOL)changed;	// 0x351218a1
- (id)_style;	// 0x3519c8f9
- (CGRect)_suffixFrame;	// 0x35290db5
- (Class)_systemBackgroundViewClass;	// 0x3522b2bd
- (id)_text;	// 0x350d62cd
- (id)_textLabelView;	// 0x35161491
- (CGRect)_textRectExcludingButtonsForBounds:(CGRect)bounds;	// 0x350d6d39
- (CGRect)_textRectForBounds:(CGRect)bounds forEditing:(BOOL)editing;	// 0x350d6931
- (CGSize)_textSize;	// 0x3522a9a5
- (void)_updateAtomBackground;	// 0x350d5a95
- (void)_updateAutosizeStyleIfNeeded;	// 0x350d5b4d
- (void)_updateBackgroundViews;	// 0x350d6429
- (void)_updateButtons;	// 0x350d5ed9
- (void)_updateLabel;	// 0x350d5941
- (void)_updateTextColor;	// 0x3520d50d
- (void)_updateTextLabel;	// 0x350d19b9
- (void)_windowBecameKey;	// 0x35290ca9
- (id)actualFont;	// 0x3529126d
- (float)actualMinimumFontSize;	// 0x3523eae5
- (CGRect)adjustedCaretRectForCaretRect:(CGRect)caretRect;	// 0x3519dc05
// declared property getter: - (BOOL)adjustsFontSizeToFitWidth;	// 0x350d5e95
// converted property getter: - (int)atomStyle;	// 0x3522be49
- (void)attachFieldEditor:(id)editor;	// 0x3519d4a5
// declared property getter: - (id)background;	// 0x352938f5
// converted property getter: - (id)backgroundColor;	// 0x3515ddbd
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x352934c1
- (void)beginSelectionChange;	// 0x351b7fbd
// declared property getter: - (id)beginningOfDocument;	// 0x35293325
- (CGRect)borderRectForBounds:(CGRect)bounds;	// 0x35121ea1
// declared property getter: - (int)borderStyle;	// 0x352938d5
- (BOOL)canBecomeFirstResponder;	// 0x3519b341
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x351b1225
- (BOOL)canResignFirstResponder;	// 0x351d11ed
- (void)cancelAutoscroll;	// 0x3529253d
// converted property getter: - (BOOL)caretBlinks;	// 0x35292571
- (CGRect)caretRectForPosition:(id)position;	// 0x3519ef6d
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x35292111
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x35293621
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x35293491
// converted property getter: - (id)clearButton;	// 0x35121909
// declared property getter: - (int)clearButtonMode;	// 0x350d68dd
// converted property getter: - (CGSize)clearButtonOffset;	// 0x35292185
- (CGRect)clearButtonRect;	// 0x35121a59
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x35121b25
- (void)clearText;	// 0x35292049
// declared property getter: - (BOOL)clearsOnBeginEditing;	// 0x3519c799
// converted property getter: - (BOOL)clearsPlaceholderOnBeginEditing;	// 0x351f3079
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x35292771
- (id)closestPositionToPoint:(CGPoint)point;	// 0x351b830d
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x352935ad
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x352933ad
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x35292879
// declared property getter: - (id)content;	// 0x35100a81
- (void)copy:(id)copy;	// 0x35292a79
- (id)createPlaceholderLabelWithFont:(id)font andTextAlignment:(int)alignment;	// 0x35103439
- (id)createTextLabelWithTextColor:(id)textColor;	// 0x350ffc51
- (id)customOverlayContainer;	// 0x352917c1
- (void)cut:(id)cut;	// 0x3529295d
- (void)dealloc;	// 0x351e6eb1
// declared property getter: - (id)delegate;	// 0x3519b331
- (void)deleteBackward;	// 0x3529308d
// declared property getter: - (id)disabledBackground;	// 0x35293905
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x3529190d
- (void)drawBorder:(CGRect)border;	// 0x35291985
- (void)drawPlaceholderInRect:(CGRect)rect;	// 0x35122e61
- (void)drawPrefixInRect:(CGRect)rect;	// 0x35291785
- (void)drawRect:(CGRect)rect;	// 0x35161bf1
- (void)drawSuffixInRect:(CGRect)rect;	// 0x35291749
- (void)drawTextInRect:(CGRect)rect;	// 0x350d7469
// converted property getter: - (BOOL)drawsAsAtom;	// 0x35100acd
- (CGRect)editRect;	// 0x3519d35d
- (CGRect)editingRectForBounds:(CGRect)bounds;	// 0x3519d3bd
- (void)encodeWithCoder:(id)coder;	// 0x352904c5
// declared property getter: - (id)endOfDocument;	// 0x351b88e1
- (void)endSelectionChange;	// 0x351b8c01
- (BOOL)fieldEditor:(id)editor shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x351f4dd9
- (BOOL)fieldEditor:(id)editor shouldReplaceWithText:(id)text;	// 0x351f4e3d
- (NSRange)fieldEditor:(id)editor willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;	// 0x351f4fb1
- (void)fieldEditorDidChange:(id)fieldEditor;	// 0x351c201d
- (void)fieldEditorDidChangeSelection:(id)fieldEditor;	// 0x3519db15
- (CGRect)firstRectForRange:(id)range;	// 0x35293521
// declared property getter: - (id)font;	// 0x351223cd
- (void)forwardInvocation:(id)invocation;	// 0x350d1a69
- (BOOL)hasMarkedText;	// 0x351c2345
- (BOOL)hasSelection;	// 0x352924a5
- (BOOL)hasText;	// 0x35293199
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x351b2285
- (CGRect)iconRect;	// 0x3515db21
// declared property getter: - (id)inputAccessoryView;	// 0x3519f37d
// declared property getter: - (id)inputDelegate;	// 0x3529340d
// declared property getter: - (id)inputView;	// 0x3519f369
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x352930e1
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x35293111
- (void)insertText:(id)text;	// 0x352930b5
// declared property getter: - (id)interactionAssistant;	// 0x3519ed79
- (BOOL)isAccessibilityElementByDefault;	// 0x35340641
// declared property getter: - (BOOL)isEditable;	// 0x3510081d
// declared property getter: - (BOOL)isEditing;	// 0x350d61d5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35340645
// converted property getter: - (BOOL)isUndoEnabled;	// 0x351d0409
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x351d0265
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x352178b1
- (BOOL)keyboardInputChanged:(id)changed;	// 0x351c2655
- (void)keyboardInputChangedSelection:(id)selection;	// 0x351a1c81
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x35250639
- (void)layoutSubviews;	// 0x350d5301
- (void)layoutTilesNow;	// 0x3520d681
// declared property getter: - (id)leftView;	// 0x35293915
// declared property getter: - (int)leftViewMode;	// 0x35121ce5
- (CGRect)leftViewRectForBounds:(CGRect)bounds;	// 0x35121d8d
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x35292fe5
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x35292fad
// declared property getter: - (id)markedTextRange;	// 0x35293249
// declared property getter: - (id)markedTextStyle;	// 0x35293271
- (id)metadataDictionariesForDictationResults;	// 0x35293171
- (id)methodSignatureForSelector:(SEL)selector;	// 0x350d1a1d
// declared property getter: - (float)minimumFontSize;	// 0x352938e5
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x352933dd
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x35292841
// converted property getter: - (float)paddingBottom;	// 0x35291b09
// converted property getter: - (float)paddingLeft;	// 0x35291ae9
// converted property getter: - (float)paddingRight;	// 0x35291b55
// converted property getter: - (float)paddingTop;	// 0x35291af9
- (void)paste:(id)paste;	// 0x35292cf9
// declared property getter: - (id)placeholder;	// 0x35103eb9
- (CGRect)placeholderRectForBounds:(CGRect)bounds;	// 0x3512217d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x35292ccd
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x3529337d
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x3529334d
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x35293461
- (id)rectsForRange:(id)range;	// 0x35293755
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x35293141
- (void)replace:(id)replace;	// 0x3529301d
- (void)replaceRange:(id)range withText:(id)text;	// 0x352931ed
- (BOOL)resignFirstResponder;	// 0x350dc6a5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x350ff44d
// declared property getter: - (id)rightView;	// 0x3517f6c5
// declared property getter: - (int)rightViewMode;	// 0x35121e91
- (CGRect)rightViewRectForBounds:(CGRect)bounds;	// 0x3517f799
- (id)searchText;	// 0x351c2201
- (void)select:(id)select;	// 0x35292ec5
- (void)selectAll;	// 0x35233175
- (void)selectAll:(id)all;	// 0x35292f39
- (void)selectAllFromFieldEditor:(id)fieldEditor;	// 0x35233165
- (id)selectedText;	// 0x351b1711
// declared property getter: - (id)selectedTextRange;	// 0x3519d999
// declared property getter: - (int)selectionAffinity;	// 0x35293691
- (CGRect)selectionClipRect;	// 0x3519f201
// declared property getter: - (int)selectionGranularity;	// 0x3529372d
// converted property getter: - (NSRange)selectionRange;	// 0x352920a1
- (id)selectionRectsForRange:(id)range;	// 0x35292575
// declared property getter: - (id)selectionView;	// 0x3519d729
// converted property getter: - (BOOL)selectionVisible;	// 0x35292569
// declared property setter: - (void)setAdjustsFontSizeToFitWidth:(BOOL)fitWidth;	// 0x3523e339
- (void)setAnimating:(BOOL)animating;	// 0x3520cd21
// converted property setter: - (void)setAtomStyle:(int)style;	// 0x3522f235
- (void)setAutoresizesTextToFit:(BOOL)fit;	// 0x35291965
// declared property setter: - (void)setBackground:(id)background;	// 0x35102dcd
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x3515e2ed
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x352934f1
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)tap;	// 0x3517f091
// declared property setter: - (void)setBorderStyle:(int)style;	// 0x3515db91
- (void)setBounds:(CGRect)bounds;	// 0x35290b09
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x3529256d
// declared property setter: - (void)setClearButtonMode:(int)mode;	// 0x35102a05
// converted property setter: - (void)setClearButtonOffset:(CGSize)offset;	// 0x35292451
- (void)setClearButtonStyle:(int)style;	// 0x3515e4ad
// declared property setter: - (void)setClearsOnBeginEditing:(BOOL)editing;	// 0x35291701
// converted property setter: - (void)setClearsPlaceholderOnBeginEditing:(BOOL)editing;	// 0x35291725
- (void)setContentVerticalAlignment:(int)alignment;	// 0x350ffb75
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x351018b5
// declared property setter: - (void)setDisabledBackground:(id)background;	// 0x35102e25
// converted property setter: - (void)setDrawsAsAtom:(BOOL)atom;	// 0x3522ef65
- (void)setEnabled:(BOOL)enabled;	// 0x3523e275
// declared property setter: - (void)setFont:(id)font;	// 0x351018c5
- (void)setFont:(id)font fullFontSize:(float)size;	// 0x35101981
- (void)setFrame:(CGRect)frame;	// 0x350ffa6d
- (void)setIcon:(id)icon;	// 0x3515d989
- (void)setInactiveHasDimAppearance:(BOOL)appearance;	// 0x35291f31
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x351e7865
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x35293435
// declared property setter: - (void)setInputView:(id)view;	// 0x351e7841
- (void)setLabel:(id)label;	// 0x3522bb95
- (void)setLabelOffset:(float)offset;	// 0x3522bda1
// declared property setter: - (void)setLeftView:(id)view;	// 0x35101b35
// declared property setter: - (void)setLeftViewMode:(int)mode;	// 0x35101ba1
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x352932c5
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x35293299
// declared property setter: - (void)setMinimumFontSize:(float)size;	// 0x351e11cd
// converted property setter: - (void)setPaddingBottom:(float)bottom;	// 0x3519a291
// converted property setter: - (void)setPaddingLeft:(float)left;	// 0x35161455
// converted property setter: - (void)setPaddingRight:(float)right;	// 0x35291b19
// converted property setter: - (void)setPaddingTop:(float)top;	// 0x35161419
- (void)setPaddingTop:(float)top paddingLeft:(float)left;	// 0x3515e3e5
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3510331d
- (void)setProgress:(float)progress;	// 0x352921a1
// declared property setter: - (void)setRightView:(id)view;	// 0x35102999
// declared property setter: - (void)setRightViewMode:(int)mode;	// 0x35101e3d
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;	// 0x35291319
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x3529321d
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x352936b9
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x351b8b95
// converted property setter: - (void)setSelectionRange:(NSRange)range;	// 0x352331b9
// converted property setter: - (void)setSelectionVisible:(BOOL)visible;	// 0x35292565
// declared property setter: - (void)setText:(id)text;	// 0x350d14b9
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x352913e1
- (void)setTextAutorresizesToFit:(BOOL)fit;	// 0x35291975
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x352921f1
- (void)setTextCentersVertically:(BOOL)vertically;	// 0x3529220d
// declared property setter: - (void)setTextColor:(id)color;	// 0x3515e455
- (void)setTextFont:(id)font;	// 0x35291b65
// converted property setter: - (void)setUndoEnabled:(BOOL)enabled;	// 0x35292255
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3523eb1d
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x352924cd
- (id)supportedPasteboardTypes;	// 0x351b1b89
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x35291809
// declared property getter: - (id)text;	// 0x3517f015
// declared property getter: - (int)textAlignment;	// 0x350d68a5
// declared property getter: - (id)textColor;	// 0x352913d1
// declared property getter: - (id)textDocument;	// 0x3519d8e1
- (id)textInRange:(id)range;	// 0x352931c1
- (id)textInputTraits;	// 0x350d1715
// converted property getter: - (id)textLabel;	// 0x3522bd75
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x351b84d9
- (CGRect)textRect;	// 0x351d1d39
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x350d68ed
// declared property getter: - (id)tokenizer;	// 0x351b87f5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35290d01
- (id)undoManager;	// 0x351d03b9
- (void)unmarkText;	// 0x352932fd
- (id)webView;	// 0x35292941
- (void)willAttachFieldEditor:(id)editor;	// 0x3519c609
- (void)willDetachFieldEditor:(id)editor;	// 0x351d1a25
@end

