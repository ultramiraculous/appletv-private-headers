/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInput.h"
#import "UITextSelectingContainer.h"
#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class UIWebDocumentView, DOMHTMLElement, UIDelayedAction, UITextRange, NSDictionary, UITextPosition, UITextSelectionView, WebFrame, UITextInteractionAssistant, UIFont, UIColor, NSString;
@protocol UITextInputDelegate, UITextInputTokenizer, UITextViewDelegate, UITextSelectingContent;

@interface UITextView : UIScrollView <UITextSelectingContainer, UITextInput> {
@private
	WebFrame *m_frame;	// 408 = 0x198
	DOMHTMLElement *m_body;	// 412 = 0x19c
	int m_marginTop;	// 416 = 0x1a0
	UIDelayedAction *m_selectionTimer;	// 420 = 0x1a4
	UIDelayedAction *m_longPressAction;	// 424 = 0x1a8
	BOOL m_editable;	// 428 = 0x1ac
	BOOL m_editing;	// 429 = 0x1ad
	BOOL m_becomesEditableWithGestures;	// 430 = 0x1ae
	BOOL m_reentrancyGuard;	// 431 = 0x1af
	BOOL m_readyForScroll;	// 432 = 0x1b0
	BOOL m_hasExplicitTextAlignment;	// 433 = 0x1b1
	BOOL m_hasExplicitLineHeight;	// 434 = 0x1b2
	UITextInteractionAssistant *m_interactionAssistant;	// 436 = 0x1b4
	UITextSelectionView *m_selectionView;	// 440 = 0x1b8
	UIWebDocumentView *m_webView;	// 444 = 0x1bc
	UIFont *m_font;	// 448 = 0x1c0
	UIColor *m_textColor;	// 452 = 0x1c4
	int m_textAlignment;	// 456 = 0x1c8
	UIView *m_inputView;	// 460 = 0x1cc
	UIView *m_inputAccessoryView;	// 464 = 0x1d0
	float m_lineHeight;	// 468 = 0x1d4
	BOOL m_skipScrollContainingView;	// 472 = 0x1d8
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x354a36c5; S=0x354a36d5; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x35508575; 
@property(assign) float bottomBufferHeight;	// G=0x355080d5; S=0x35507fe5; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x3549e9b9; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x3549f4b9; S=0x3549e8ed; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3549e9a9; S=0x354a34c5; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x3549ee49; S=0x354a482d; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x354a5039; 
@property(retain, nonatomic) UIFont *font;	// G=0x35507971; S=0x3549e9c9; 
@property(retain) UIView *inputAccessoryView;	// G=0x354a4135; S=0x3549fe05; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x3550865d; S=0x35508685; 
@property(retain) UIView *inputView;	// G=0x354a4121; S=0x3549fde1; @synthesize=m_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x354a45f9; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x35507b1d; S=0x35507b2d; converted property
@property(assign) int marginTop;	// G=0x35507b0d; S=0x354a3d11; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x35508499; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x355084c1; S=0x355084e9; 
@property(assign) CGPoint offset;	// G=0x355081a5; S=0x35508195; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x355081e5; S=0x355081d5; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x354a4949; S=0x35507a45; 
@property(copy) UITextRange *selectedTextRange;	// G=0x354a41b5; S=0x3550846d; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x355088e1; S=0x35508909; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x3550897d; S=0x354a5061; 
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x3549e885; 
@property(assign) BOOL showScrollerIndicators;	// G=0x35508145; S=0x35508111; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x3549f025; S=0x3549f281; 
@property(assign, nonatomic) int textAlignment;	// G=0x35507a05; S=0x35507a15; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x355079a9; S=0x3549eef5; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x354a41b1; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x354a5011; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x354a3a79; converted property
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x35507089
+ (id)bestInterpretationForMarsVoltas:(id)marsVoltas;	// 0x355070d5
- (id)initWithCoder:(id)coder;	// 0x35506659
- (id)initWithFrame:(CGRect)frame;	// 0x3549db91
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x354a3451
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x35506609
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x35506e31
- (id)_automationValue;	// 0x354a51e5
- (void)_bold:(id)bold;	// 0x35507389
- (void)_dealloc;	// 0x3549fc81
- (void)_define:(id)define;	// 0x35507369
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x35508935
- (void)_italicize:(id)italicize;	// 0x355073a9
- (id)_keyboardResponder;	// 0x354a41a1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35506a2d
- (Class)_printFormatterClass;	// 0x356739d5
- (void)_promptForReplace:(id)replace;	// 0x35507331
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x354a4175
- (void)_showTextStyleOptions:(id)options;	// 0x355073e9
- (void)_underline:(id)underline;	// 0x355073c9
- (id)automaticallySelectedOverlay;	// 0x354a7cd9
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x35508711
- (BOOL)becomeFirstResponder;	// 0x354a3d3d
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x354a36c5
- (void)beginSelectionChange;	// 0x354a4f51
// declared property getter: - (id)beginningOfDocument;	// 0x35508575
// converted property getter: - (float)bottomBufferHeight;	// 0x355080d5
- (BOOL)canBecomeFirstResponder;	// 0x354a40b5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x354a50ad
- (BOOL)canResignFirstResponder;	// 0x354a5139
- (void)cancelDataDetectorsWithWebLock;	// 0x3549fd99
- (void)cancelInteractionWithLink;	// 0x35507d91
- (CGRect)caretRectForPosition:(id)position;	// 0x354a4a09
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x35508871
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x355086e1
- (id)closestPositionToPoint:(CGPoint)point;	// 0x354a4f71
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x355087fd
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x3549de7d
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x355085fd
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x35506e71
// declared property getter: - (id)content;	// 0x3549e9b9
- (id)contentAsHTMLString;	// 0x354ac381
- (void)copy:(id)copy;	// 0x355072b1
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x355070f1
- (void)cut:(id)cut;	// 0x35507291
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x3549f4b9
- (void)dealloc;	// 0x3549fb39
- (void)delayedUpdateForKeyboardDidShow;	// 0x354a49b1
- (void)deleteBackward;	// 0x355082c9
- (void)detachInteractionAssistant;	// 0x3549fb19
- (void)detachSelectionView;	// 0x3549faf9
- (void)didMoveToSuperview;	// 0x3549ef71
- (void)displayScrollerIndicators;	// 0x35508185
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x35507445
- (void)encodeWithCoder:(id)coder;	// 0x35506a81
// declared property getter: - (id)endOfDocument;	// 0x354a5039
- (void)endSelectionChange;	// 0x354a508d
- (void)ensureSelection;	// 0x354a48b9
- (CGRect)firstRectForRange:(id)range;	// 0x35508771
// declared property getter: - (id)font;	// 0x35507971
- (void)forwardInvocation:(id)invocation;	// 0x354a46dd
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x355083a5
- (BOOL)hasText;	// 0x355079e1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x354a4f15
// declared property getter: - (id)inputAccessoryView;	// 0x354a4135
// declared property getter: - (id)inputDelegate;	// 0x3550865d
// declared property getter: - (id)inputView;	// 0x354a4121
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x3550831d
- (id)insertDictationResultPlaceholder;	// 0x3550834d
- (void)insertText:(id)text;	// 0x355082f1
// declared property getter: - (id)interactionAssistant;	// 0x354a45f9
- (BOOL)isAccessibilityElementByDefault;	// 0x35595579
// declared property getter: - (BOOL)isEditable;	// 0x3549e9a9
// declared property getter: - (BOOL)isEditing;	// 0x3549ee49
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3559557d
- (BOOL)isFirstResponder;	// 0x354a405d
- (BOOL)isInteractingWithLink;	// 0x35507dd1
- (void)keyboardDidShow:(id)keyboard;	// 0x354a4981
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x354a74dd
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x354ab3d5
- (BOOL)keyboardInputChanged:(id)changed;	// 0x354a7755
- (void)keyboardInputChangedSelection:(id)selection;	// 0x354a47ad
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x35507e1d
// converted property getter: - (float)lineHeight;	// 0x35507b1d
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x35507251
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x35507231
// converted property getter: - (int)marginTop;	// 0x35507b0d
// declared property getter: - (id)markedTextRange;	// 0x35508499
// declared property getter: - (id)markedTextStyle;	// 0x355084c1
- (id)metadataDictionariesForDictationResults;	// 0x355083e9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x354a4691
- (BOOL)mightHaveLinks;	// 0x354a36a5
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x35507115
// converted property getter: - (CGPoint)offset;	// 0x355081a5
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x3550862d
- (void)paste:(id)paste;	// 0x355072d1
- (void)performBecomeEditableTasks;	// 0x354a483d
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x355085cd
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x3550859d
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x355086b1
- (void)recalculateStyle;	// 0x3549ea71
- (CGRect)rectForSelection:(NSRange)selection;	// 0x355078ad
- (id)rectsForRange:(id)range;	// 0x355089a5
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x3549e795
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x35508375
- (void)removeFromSuperview;	// 0x3549fa89
- (void)replace:(id)replace;	// 0x35507271
- (void)replaceRange:(id)range withText:(id)text;	// 0x3550843d
- (void)resetDataDetectorsResultsWithWebLock;	// 0x354a4765
- (BOOL)resignFirstResponder;	// 0x3549f89d
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3549dbe1
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x35507bb5
- (void)scrollRectToVisibleInContainingScrollView;	// 0x354a4b95
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x354a4ab9
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x355082b9
// converted property getter: - (BOOL)scrollingEnabled;	// 0x355081e5
- (void)select:(id)select;	// 0x355072f1
- (void)selectAll;	// 0x35507209
- (void)selectAll:(id)all;	// 0x35507311
// declared property getter: - (NSRange)selectedRange;	// 0x354a4949
- (id)selectedText;	// 0x355071cd
// declared property getter: - (id)selectedTextRange;	// 0x354a41b5
// declared property getter: - (int)selectionAffinity;	// 0x355088e1
- (CGRect)selectionClipRect;	// 0x354a4a95
// declared property getter: - (int)selectionGranularity;	// 0x3550897d
// declared property getter: - (id)selectionView;	// 0x3549e885
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x355081fd
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x355081c5
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x35508741
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x354a36d5
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x35507fe5
- (void)setContentToHTMLString:(id)htmlstring;	// 0x354a3be1
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3549e8ed
- (void)setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x35506f4d
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x354a34c5
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x354a482d
// declared property setter: - (void)setFont:(id)font;	// 0x3549e9c9
- (void)setFrame:(CGRect)frame;	// 0x3549dc65
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x3549fe05
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x35508685
// declared property setter: - (void)setInputView:(id)view;	// 0x3549fde1
// converted property setter: - (void)setLineHeight:(float)height;	// 0x35507b2d
// converted property setter: - (void)setMarginTop:(int)top;	// 0x354a3d11
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x35508515
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x355084e9
- (void)setMarsVoltas:(id)voltas withCorrectionIdentifier:(id)correctionIdentifier;	// 0x355070c5
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x35508195
- (void)setRichText:(BOOL)text;	// 0x35507945
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x3550820d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x355081d5
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x35507a45
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x3550846d
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x35508909
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x354a5061
- (void)setSelectionToEnd;	// 0x35507779
- (void)setSelectionToStart;	// 0x35507679
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x35508111
// declared property setter: - (void)setText:(id)text;	// 0x3549f281
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x35507a15
// declared property setter: - (void)setTextColor:(id)color;	// 0x3549eef5
- (BOOL)shouldScrollEnclosingScrollView;	// 0x3549ee59
- (BOOL)shouldStartDataDetectors;	// 0x3549f4d9
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x35508145
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x355074a1
- (void)startDataDetectorsWithWebLock;	// 0x354a3731
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35507d31
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35507db1
- (id)styleString;	// 0x3549e449
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x354a4e8d
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x35507d11
// declared property getter: - (id)text;	// 0x3549f025
// declared property getter: - (int)textAlignment;	// 0x35507a05
// declared property getter: - (id)textColor;	// 0x355079a9
// declared property getter: - (id)textDocument;	// 0x354a41b1
- (id)textInRange:(id)range;	// 0x35508411
- (id)textInputTraits;	// 0x3549dc45
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x354a4fe1
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x3549e5fd
// declared property getter: - (id)tokenizer;	// 0x354a5011
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35507175
- (id)undoManager;	// 0x35507409
- (id)undoManagerForWebView:(id)webView;	// 0x354a7735
- (void)unmarkText;	// 0x3550854d
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x3549e805
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35507d51
- (void)updateSelection;	// 0x355071a5
- (void)updateWebViewObjects;	// 0x3549e67d
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35507d71
- (CGRect)visibleRect;	// 0x354a4d7d
- (CGRect)visibleTextRect;	// 0x354a4c9d
// converted property getter: - (id)webView;	// 0x354a3a79
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x35507ef5
- (void)webViewDidChange:(id)webView;	// 0x3549eadd
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x35507df5
@end

