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

@class UIFont, WebFrame, UITextRange, NSDictionary, UITextPosition, UIWebDocumentView, UIColor, UITextInteractionAssistant, NSAttributedString, NSString, DOMHTMLElement, UIDelayedAction;
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
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x31d95e95; S=0x31df83dd; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x31df8405; S=0x31df895d; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x31d808f5; S=0x31d9578d; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x31d96351; 
@property(assign) float bottomBufferHeight;	// G=0x31df92c5; S=0x31df91d1; converted property
@property(assign, nonatomic) BOOL clearsOnInsertion;	// G=0x31d77b2d; S=0x31d8d605; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x31d7785d; S=0x31d0ac4d; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x31d0ad0d; S=0x31d77dbd; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x31d75a21; S=0x31d77b19; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x31d95ea9; 
@property(retain, nonatomic) UIFont *font;	// G=0x31d80e29; S=0x31d75569; 
@property(retain) UIView *inputAccessoryView;	// G=0x31d779ad; S=0x31d79981; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x31df9731; S=0x31df9759; 
@property(retain) UIView *inputView;	// G=0x31d77999; S=0x31d7996d; @synthesize=m_inputView
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x31d75ad1; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x31df8d91; S=0x31d77219; converted property
@property(assign) int marginTop;	// G=0x31d772cd; S=0x31d772a5; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x31d0ad1d; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x31df9675; S=0x31df969d; 
@property(assign) CGPoint offset;	// G=0x31df9391; S=0x31df9381; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x31df93d1; S=0x31df93c1; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x31d77545; S=0x31df8c55; 
@property(copy) UITextRange *selectedTextRange;	// G=0x31d77b41; S=0x31d8d269; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x31df99c1; S=0x31df99e9; 
@property(assign) int selectionGranularity;	// G=0x31df9a5d; S=0x31d8d2e5; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x31df9331; S=0x31df92fd; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x31d772dd; S=0x31d77581; 
@property(assign, nonatomic) int textAlignment;	// G=0x31df8c45; S=0x31d75ba5; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x31df8be5; S=0x31d75ae5; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x31d0a9dd; 
@property(copy, nonatomic) NSDictionary *typingAttributes;	// G=0x31df7d81; S=0x31df7da1; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x31d0aa09; converted property
+ (id)_bestInterpretationForDictationResult:(id)dictationResult;	// 0x31df7d41
+ (id)excludedElementsForHTML;	// 0x31df8849
- (id)initWithCoder:(id)coder;	// 0x31d74975
- (id)initWithFrame:(CGRect)frame;	// 0x31d09e09
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x31d95719
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x31df75d9
- (void)_addShortcut:(id)shortcut;	// 0x31df808d
- (unsigned)_allowedLinkTypes;	// 0x31d808cd
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x31df7ad5
- (id)_automationValue;	// 0x31df9a85
- (void)_dealloc;	// 0x31d79809
- (void)_define:(id)define;	// 0x31df806d
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x31df9a15
- (id)_keyboardResponder;	// 0x31d77a21
- (void)_populateArchivedSubviews:(id)subviews;	// 0x31df762d
- (Class)_printFormatterClass;	// 0x31f51d6d
- (void)_promptForReplace:(id)replace;	// 0x31df8035
- (id)_proxyTextInput;	// 0x31d0a989
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x31d779f1
- (void)_setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x31df7c05
- (void)_showTextStyleOptions:(id)options;	// 0x31df810d
- (void)_transferAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x31df86c9
- (void)_transferTextViewPropertiesFromText:(id)text;	// 0x31df8721
- (void)_updateForNewSize:(CGSize)newSize withOldSize:(CGSize)oldSize;	// 0x31d09f75
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x31d95e95
// declared property getter: - (id)attributedText;	// 0x31df8405
- (id)automaticallySelectedOverlay;	// 0x31d99e81
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x31df97e5
- (BOOL)becomeFirstResponder;	// 0x31d76c51
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x31d808f5
- (void)beginSelectionChange;	// 0x31d77fa9
// declared property getter: - (id)beginningOfDocument;	// 0x31d96351
// converted property getter: - (float)bottomBufferHeight;	// 0x31df92c5
- (BOOL)canBecomeFirstResponder;	// 0x31d77021
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x31d9620d
- (BOOL)canResignFirstResponder;	// 0x31d788e1
- (void)cancelDataDetectorsWithWebLock;	// 0x31d79921
- (void)cancelInteractionWithLink;	// 0x31df8f8d
- (CGRect)caretRectForPosition:(id)position;	// 0x31d78291
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x31df994d
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x31df97b5
// declared property getter: - (BOOL)clearsOnInsertion;	// 0x31d77b2d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x31d8d195
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x31df98d1
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x31d0a14d
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x31d8d209
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x31df7b15
- (id)contentAsHTMLString;	// 0x31d98d99
- (void)copy:(id)copy;	// 0x31df7fa1
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x31df7dd1
- (void)cut:(id)cut;	// 0x31df7f81
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x31d7785d
- (void)dealloc;	// 0x31d796e9
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x31df9b7d
- (void)delayedUpdateForKeyboardDidShow;	// 0x31d78699
- (void)deleteBackward;	// 0x31df94c1
- (void)didMoveToSuperview;	// 0x31d75c21
- (void)disableClearsOnInsertion;	// 0x31d8d5ed
- (void)displayScrollerIndicators;	// 0x31df9371
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x31df8131
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x31df9a95
- (void)encodeWithCoder:(id)coder;	// 0x31df7681
// declared property getter: - (id)endOfDocument;	// 0x31d95ea9
- (void)endSelectionChange;	// 0x31d78205
- (void)ensureSelection;	// 0x31d77c09
- (CGRect)firstRectForRange:(id)range;	// 0x31df9845
// declared property getter: - (id)font;	// 0x31d80e29
- (void)forwardInvocation:(id)invocation;	// 0x31d7790d
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x31df95d1
- (BOOL)hasText;	// 0x31df8c21
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31d80f15
// declared property getter: - (id)inputAccessoryView;	// 0x31d779ad
// declared property getter: - (id)inputDelegate;	// 0x31df9731
// declared property getter: - (id)inputView;	// 0x31d77999
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x31df9515
- (id)insertDictationResultPlaceholder;	// 0x31df9579
- (void)insertText:(id)text;	// 0x31df94e9
// converted property getter: - (id)interactionAssistant;	// 0x31d75ad1
- (BOOL)isAccessibilityElementByDefault;	// 0x31e70a71
// declared property getter: - (BOOL)isEditable;	// 0x31d0ad0d
// declared property getter: - (BOOL)isEditing;	// 0x31d75a21
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x31e70a75
- (BOOL)isFirstResponder;	// 0x31d76fc9
- (BOOL)isInteractingWithLink;	// 0x31d80f55
- (void)keyboardDidShow:(id)keyboard;	// 0x31d78665
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x31d8d311
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x31d9a261
- (BOOL)keyboardInputChanged:(id)changed;	// 0x31d8d6d1
- (void)keyboardInputChangedSelection:(id)selection;	// 0x31d77a31
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x31df8ff9
// converted property getter: - (float)lineHeight;	// 0x31df8d91
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x31df7f3d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x31df7f1d
// converted property getter: - (int)marginTop;	// 0x31d772cd
// declared property getter: - (id)markedTextRange;	// 0x31d0ad1d
// declared property getter: - (id)markedTextStyle;	// 0x31df9675
- (id)metadataDictionariesForDictationResults;	// 0x31df9615
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31d778bd
- (BOOL)mightHaveLinks;	// 0x31d808b1
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x31df7df5
// converted property getter: - (CGPoint)offset;	// 0x31df9391
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x31d8d239
- (void)paste:(id)paste;	// 0x31df7fc1
- (void)performBecomeEditableTasks;	// 0x31d77b81
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x31df9701
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x31d78261
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x31df9785
- (void)recalculateStyle;	// 0x31d75645
- (CGRect)rectForSelection:(NSRange)selection;	// 0x31df8341
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x31d0ab59
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x31df95a1
- (void)removeFromSuperview;	// 0x31d79679
- (void)replace:(id)replace;	// 0x31df7f5d
- (void)replaceRange:(id)range withText:(id)text;	// 0x31df9641
- (void)resetDataDetectorsResultsWithWebLock;	// 0x31d80ddd
- (BOOL)resignFirstResponder;	// 0x31d78735
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31d09e5d
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x31df8da1
- (void)scrollRectToVisibleInContainingScrollView;	// 0x31d780e5
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x31d78009
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x31df94b1
// converted property getter: - (BOOL)scrollingEnabled;	// 0x31df93d1
- (void)select:(id)select;	// 0x31df7fe1
- (void)selectAll;	// 0x31df7ef5
- (void)selectAll:(id)all;	// 0x31df8009
// declared property getter: - (NSRange)selectedRange;	// 0x31d77545
- (id)selectedText;	// 0x31df7eb9
// declared property getter: - (id)selectedTextRange;	// 0x31d77b41
// declared property getter: - (int)selectionAffinity;	// 0x31df99c1
// converted property getter: - (int)selectionGranularity;	// 0x31df9a5d
- (id)selectionRectsForRange:(id)range;	// 0x31d95ed1
- (id)selectionView;	// 0x31df7e91
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x31df83dd
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x31df93e9
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x31df93b1
// declared property setter: - (void)setAttributedText:(id)text;	// 0x31df895d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x31df9815
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x31d9578d
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x31df91d1
- (void)setBounds:(CGRect)bounds;	// 0x31d77091
- (void)setCenter:(CGPoint)center;	// 0x31df818d
// declared property setter: - (void)setClearsOnInsertion:(BOOL)insertion;	// 0x31d8d605
- (void)setContentToHTMLString:(id)htmlstring;	// 0x31d9592d
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x31d0ac4d
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x31d77dbd
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x31d77b19
// declared property setter: - (void)setFont:(id)font;	// 0x31d75569
- (void)setFrame:(CGRect)frame;	// 0x31d09ee1
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x31d79981
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x31df9759
// declared property setter: - (void)setInputView:(id)view;	// 0x31d7996d
// converted property setter: - (void)setLineHeight:(float)height;	// 0x31d77219
// converted property setter: - (void)setMarginTop:(int)top;	// 0x31d772a5
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x31df96c9
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x31df969d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x31df9381
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x31df93f9
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x31df93c1
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x31df8c55
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x31d8d269
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x31df99e9
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x31d8d2e5
- (void)setSelectionToEnd;	// 0x31d77c91
- (void)setSelectionToStart;	// 0x31df8245
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x31df92fd
// declared property setter: - (void)setText:(id)text;	// 0x31d77581
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x31d75ba5
// declared property setter: - (void)setTextColor:(id)color;	// 0x31d75ae5
// declared property setter: - (void)setTypingAttributes:(id)attributes;	// 0x31df7da1
- (BOOL)shouldScrollEnclosingScrollView;	// 0x31d75a31
- (BOOL)shouldStartDataDetectors;	// 0x31d7787d
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x31df9331
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31d80c5d
- (void)startDataDetectorsWithWebLock;	// 0x31d80921
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31df8f2d
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31df8fad
- (id)styleString;	// 0x31d0a72d
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x31d95d99
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x31df8f0d
// declared property getter: - (id)text;	// 0x31d772dd
// declared property getter: - (int)textAlignment;	// 0x31df8c45
// declared property getter: - (id)textColor;	// 0x31df8be5
- (id)textInRange:(id)range;	// 0x31d8d165
- (id)textInputTraits;	// 0x31d09ebd
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x31d8d131
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x31d0a905
- (void)toggleBoldface:(id)boldface;	// 0x31df80ad
- (void)toggleItalics:(id)italics;	// 0x31df80cd
- (void)toggleUnderline:(id)underline;	// 0x31df80ed
// declared property getter: - (id)tokenizer;	// 0x31d0a9dd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31d80fa1
// declared property getter: - (id)typingAttributes;	// 0x31df7d81
- (id)undoManager;	// 0x31d8d3f5
- (id)undoManagerForWebView:(id)webView;	// 0x31d8d3e5
- (void)unmarkText;	// 0x31d8d839
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x31d0abcd
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31df8f4d
- (void)updateSelection;	// 0x31df7e59
- (void)updateWebViewObjects;	// 0x31d0aa19
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31df8f6d
- (CGRect)visibleRect;	// 0x31d95cbd
- (CGRect)visibleTextRect;	// 0x31d95bd9
// converted property getter: - (id)webView;	// 0x31d0aa09
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x31df90dd
- (void)webViewDidChange:(id)webView;	// 0x31d756b1
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x31df8fd1
@end

