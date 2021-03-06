/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextInput.h"
#import "UITextLinkInteraction.h"
#import "UIScrollView.h"

@class UIFont, WebFrame, UITextRange, NSDictionary, UITextPosition, UIWebDocumentView, UIColor, NSAttributedString, UITextInteractionAssistant, NSString, DOMHTMLElement, UIDelayedAction;
@protocol UITextViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInput> {
	WebFrame *m_frame;	// 464 = 0x1d0
	DOMHTMLElement *m_body;	// 468 = 0x1d4
	int m_marginTop;	// 472 = 0x1d8
	UIDelayedAction *m_selectionTimer;	// 476 = 0x1dc
	UIDelayedAction *m_longPressAction;	// 480 = 0x1e0
	BOOL m_editable;	// 484 = 0x1e4
	BOOL m_editing;	// 485 = 0x1e5
	BOOL m_becomesEditableWithGestures;	// 486 = 0x1e6
	BOOL m_reentrancyGuard;	// 487 = 0x1e7
	BOOL m_readyForScroll;	// 488 = 0x1e8
	BOOL m_hasExplicitTextAlignment;	// 489 = 0x1e9
	BOOL m_hasExplicitLineHeight;	// 490 = 0x1ea
	UITextInteractionAssistant *m_interactionAssistant;	// 492 = 0x1ec
	UIWebDocumentView *m_webView;	// 496 = 0x1f0
	UIFont *m_font;	// 500 = 0x1f4
	UIColor *m_textColor;	// 504 = 0x1f8
	int m_textAlignment;	// 508 = 0x1fc
	UIView *m_inputView;	// 512 = 0x200
	UIView *m_inputAccessoryView;	// 516 = 0x204
	float m_lineHeight;	// 520 = 0x208
	BOOL m_skipScrollContainingView;	// 524 = 0x20c
	BOOL m_allowsEditingTextAttributes;	// 525 = 0x20d
	BOOL m_usesAttributedText;	// 526 = 0x20e
	BOOL m_clearsOnInsertion;	// 527 = 0x20f
}
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x32e4c36d; S=0x32eae8cd; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x32eae8f5; S=0x32eaee4d; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x32e36d3d; S=0x32e4bc65; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x32e4c829; 
@property(assign) float bottomBufferHeight;	// G=0x32eaf7b5; S=0x32eaf6c1; converted property
@property(assign, nonatomic) BOOL clearsOnInsertion;	// G=0x32e2df6d; S=0x32e43aad; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x32e2dc9d; S=0x32dc108d; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x32dc114d; S=0x32e2e1fd; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x32e2be61; S=0x32e2df59; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x32e4c381; 
@property(retain, nonatomic) UIFont *font;	// G=0x32e37271; S=0x32e2b9a9; 
@property(retain) UIView *inputAccessoryView;	// G=0x32e2dded; S=0x32e2fdc1; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x32eafc21; S=0x32eafc49; 
@property(retain) UIView *inputView;	// G=0x32e2ddd9; S=0x32e2fdad; @synthesize=m_inputView
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x32e2bf11; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x32eaf281; S=0x32e2d659; converted property
@property(assign) int marginTop;	// G=0x32e2d70d; S=0x32e2d6e5; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x32dc115d; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x32eafb65; S=0x32eafb8d; 
@property(assign) CGPoint offset;	// G=0x32eaf881; S=0x32eaf871; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x32eaf8c1; S=0x32eaf8b1; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x32e2d985; S=0x32eaf145; 
@property(copy) UITextRange *selectedTextRange;	// G=0x32e2df81; S=0x32e43711; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x32eafeb1; S=0x32eafed9; 
@property(assign) int selectionGranularity;	// G=0x32eaff4d; S=0x32e4378d; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x32eaf821; S=0x32eaf7ed; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x32e2d71d; S=0x32e2d9c1; 
@property(assign, nonatomic) int textAlignment;	// G=0x32eaf135; S=0x32e2bfe5; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x32eaf0d5; S=0x32e2bf25; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x32dc0e1d; 
@property(copy, nonatomic) NSDictionary *typingAttributes;	// G=0x32eae271; S=0x32eae291; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x32dc0e49; converted property
+ (id)_bestInterpretationForDictationResult:(id)dictationResult;	// 0x32eae231
+ (id)excludedElementsForHTML;	// 0x32eaed39
- (id)initWithCoder:(id)coder;	// 0x32e2adb5
- (id)initWithFrame:(CGRect)frame;	// 0x32dc0249
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x32e4bbf1
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x32eadac9
- (void)_addShortcut:(id)shortcut;	// 0x32eae57d
- (unsigned)_allowedLinkTypes;	// 0x32e36d15
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x32eadfc5
- (id)_automationValue;	// 0x32eaff75
- (void)_dealloc;	// 0x32e2fc49
- (void)_define:(id)define;	// 0x32eae55d
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x32eaff05
- (id)_keyboardResponder;	// 0x32e2de61
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32eadb1d
- (Class)_printFormatterClass;	// 0x330086dd
- (void)_promptForReplace:(id)replace;	// 0x32eae525
- (id)_proxyTextInput;	// 0x32dc0dc9
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x32e2de31
- (void)_setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x32eae0f5
- (void)_showTextStyleOptions:(id)options;	// 0x32eae5fd
- (void)_transferAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x32eaebb9
- (void)_transferTextViewPropertiesFromText:(id)text;	// 0x32eaec11
- (void)_updateForNewSize:(CGSize)newSize withOldSize:(CGSize)oldSize;	// 0x32dc03b5
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x32e4c36d
// declared property getter: - (id)attributedText;	// 0x32eae8f5
- (id)automaticallySelectedOverlay;	// 0x32e50361
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x32eafcd5
- (BOOL)becomeFirstResponder;	// 0x32e2d091
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x32e36d3d
- (void)beginSelectionChange;	// 0x32e2e3e9
// declared property getter: - (id)beginningOfDocument;	// 0x32e4c829
// converted property getter: - (float)bottomBufferHeight;	// 0x32eaf7b5
- (BOOL)canBecomeFirstResponder;	// 0x32e2d461
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32e4c6e5
- (BOOL)canResignFirstResponder;	// 0x32e2ed29
- (void)cancelDataDetectorsWithWebLock;	// 0x32e2fd61
- (void)cancelInteractionWithLink;	// 0x32eaf47d
- (CGRect)caretRectForPosition:(id)position;	// 0x32e2e6d1
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x32eafe3d
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x32eafca5
// declared property getter: - (BOOL)clearsOnInsertion;	// 0x32e2df6d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x32e4363d
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x32eafdc1
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x32dc058d
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x32e436b1
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x32eae005
- (id)contentAsHTMLString;	// 0x32e4f279
- (void)copy:(id)copy;	// 0x32eae491
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x32eae2c1
- (void)cut:(id)cut;	// 0x32eae471
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x32e2dc9d
- (void)dealloc;	// 0x32e2fb29
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x32eb006d
- (void)delayedUpdateForKeyboardDidShow;	// 0x32e2eae1
- (void)deleteBackward;	// 0x32eaf9b1
- (void)didMoveToSuperview;	// 0x32e2c061
- (void)disableClearsOnInsertion;	// 0x32e43a95
- (void)displayScrollerIndicators;	// 0x32eaf861
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x32eae621
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x32eaff85
- (void)encodeWithCoder:(id)coder;	// 0x32eadb71
// declared property getter: - (id)endOfDocument;	// 0x32e4c381
- (void)endSelectionChange;	// 0x32e2e645
- (void)ensureSelection;	// 0x32e2e049
- (CGRect)firstRectForRange:(id)range;	// 0x32eafd35
// declared property getter: - (id)font;	// 0x32e37271
- (void)forwardInvocation:(id)invocation;	// 0x32e2dd4d
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x32eafac1
- (BOOL)hasText;	// 0x32eaf111
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32e3735d
// declared property getter: - (id)inputAccessoryView;	// 0x32e2dded
// declared property getter: - (id)inputDelegate;	// 0x32eafc21
// declared property getter: - (id)inputView;	// 0x32e2ddd9
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x32eafa05
- (id)insertDictationResultPlaceholder;	// 0x32eafa69
- (void)insertText:(id)text;	// 0x32eaf9d9
// converted property getter: - (id)interactionAssistant;	// 0x32e2bf11
- (BOOL)isAccessibilityElementByDefault;	// 0x32f272f9
// declared property getter: - (BOOL)isEditable;	// 0x32dc114d
// declared property getter: - (BOOL)isEditing;	// 0x32e2be61
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f272fd
- (BOOL)isFirstResponder;	// 0x32e2d409
- (BOOL)isInteractingWithLink;	// 0x32e3739d
- (void)keyboardDidShow:(id)keyboard;	// 0x32e2eaad
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x32e437b9
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x32e50741
- (BOOL)keyboardInputChanged:(id)changed;	// 0x32e43b79
- (void)keyboardInputChangedSelection:(id)selection;	// 0x32e2de71
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x32eaf4e9
// converted property getter: - (float)lineHeight;	// 0x32eaf281
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x32eae42d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x32eae40d
// converted property getter: - (int)marginTop;	// 0x32e2d70d
// declared property getter: - (id)markedTextRange;	// 0x32dc115d
// declared property getter: - (id)markedTextStyle;	// 0x32eafb65
- (id)metadataDictionariesForDictationResults;	// 0x32eafb05
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32e2dcfd
- (BOOL)mightHaveLinks;	// 0x32e36cf9
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x32eae2e5
// converted property getter: - (CGPoint)offset;	// 0x32eaf881
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x32e436e1
- (void)paste:(id)paste;	// 0x32eae4b1
- (void)performBecomeEditableTasks;	// 0x32e2dfc1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x32eafbf1
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x32e2e6a1
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x32eafc75
- (void)recalculateStyle;	// 0x32e2ba85
- (CGRect)rectForSelection:(NSRange)selection;	// 0x32eae831
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x32dc0f99
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x32eafa91
- (void)removeFromSuperview;	// 0x32e2fab9
- (void)replace:(id)replace;	// 0x32eae44d
- (void)replaceRange:(id)range withText:(id)text;	// 0x32eafb31
- (void)resetDataDetectorsResultsWithWebLock;	// 0x32e37225
- (BOOL)resignFirstResponder;	// 0x32e2eb7d
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32dc029d
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x32eaf291
- (void)scrollRectToVisibleInContainingScrollView;	// 0x32e2e525
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x32e2e449
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x32eaf9a1
// converted property getter: - (BOOL)scrollingEnabled;	// 0x32eaf8c1
- (void)select:(id)select;	// 0x32eae4d1
- (void)selectAll;	// 0x32eae3e5
- (void)selectAll:(id)all;	// 0x32eae4f9
// declared property getter: - (NSRange)selectedRange;	// 0x32e2d985
- (id)selectedText;	// 0x32eae3a9
// declared property getter: - (id)selectedTextRange;	// 0x32e2df81
// declared property getter: - (int)selectionAffinity;	// 0x32eafeb1
// converted property getter: - (int)selectionGranularity;	// 0x32eaff4d
- (id)selectionRectsForRange:(id)range;	// 0x32e4c3a9
- (id)selectionView;	// 0x32eae381
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x32eae8cd
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x32eaf8d9
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x32eaf8a1
// declared property setter: - (void)setAttributedText:(id)text;	// 0x32eaee4d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x32eafd05
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x32e4bc65
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x32eaf6c1
- (void)setBounds:(CGRect)bounds;	// 0x32e2d4d1
- (void)setCenter:(CGPoint)center;	// 0x32eae67d
// declared property setter: - (void)setClearsOnInsertion:(BOOL)insertion;	// 0x32e43aad
- (void)setContentToHTMLString:(id)htmlstring;	// 0x32e4be05
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x32dc108d
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x32e2e1fd
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x32e2df59
// declared property setter: - (void)setFont:(id)font;	// 0x32e2b9a9
- (void)setFrame:(CGRect)frame;	// 0x32dc0321
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x32e2fdc1
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x32eafc49
// declared property setter: - (void)setInputView:(id)view;	// 0x32e2fdad
// converted property setter: - (void)setLineHeight:(float)height;	// 0x32e2d659
// converted property setter: - (void)setMarginTop:(int)top;	// 0x32e2d6e5
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x32eafbb9
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x32eafb8d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x32eaf871
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x32eaf8e9
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x32eaf8b1
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x32eaf145
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x32e43711
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x32eafed9
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x32e4378d
- (void)setSelectionToEnd;	// 0x32e2e0d1
- (void)setSelectionToStart;	// 0x32eae735
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x32eaf7ed
// declared property setter: - (void)setText:(id)text;	// 0x32e2d9c1
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x32e2bfe5
// declared property setter: - (void)setTextColor:(id)color;	// 0x32e2bf25
// declared property setter: - (void)setTypingAttributes:(id)attributes;	// 0x32eae291
- (BOOL)shouldScrollEnclosingScrollView;	// 0x32e2be71
- (BOOL)shouldStartDataDetectors;	// 0x32e2dcbd
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x32eaf821
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32e370a5
- (void)startDataDetectorsWithWebLock;	// 0x32e36d69
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32eaf41d
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32eaf49d
- (id)styleString;	// 0x32dc0b6d
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x32e4c271
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x32eaf3fd
// declared property getter: - (id)text;	// 0x32e2d71d
// declared property getter: - (int)textAlignment;	// 0x32eaf135
// declared property getter: - (id)textColor;	// 0x32eaf0d5
- (id)textInRange:(id)range;	// 0x32e4360d
- (id)textInputTraits;	// 0x32dc02fd
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x32e435d9
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x32dc0d45
- (void)toggleBoldface:(id)boldface;	// 0x32eae59d
- (void)toggleItalics:(id)italics;	// 0x32eae5bd
- (void)toggleUnderline:(id)underline;	// 0x32eae5dd
// declared property getter: - (id)tokenizer;	// 0x32dc0e1d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32e373e9
// declared property getter: - (id)typingAttributes;	// 0x32eae271
- (id)undoManager;	// 0x32e4389d
- (id)undoManagerForWebView:(id)webView;	// 0x32e4388d
- (void)unmarkText;	// 0x32e43ce1
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x32dc100d
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32eaf43d
- (void)updateSelection;	// 0x32eae349
- (void)updateWebViewObjects;	// 0x32dc0e59
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32eaf45d
- (CGRect)visibleRect;	// 0x32e4c195
- (CGRect)visibleTextRect;	// 0x32e4c0b1
// converted property getter: - (id)webView;	// 0x32dc0e49
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x32eaf5cd
- (void)webViewDidChange:(id)webView;	// 0x32e2baf1
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x32eaf4c1
@end

