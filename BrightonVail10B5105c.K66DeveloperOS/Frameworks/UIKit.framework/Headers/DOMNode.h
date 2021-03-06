/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebSelectionBlock.h"
#import "UITextInput_Internal.h"
#import "UITextInputTokenizer.h"
#import "UIKit-Structs.h"
#import "UIKeyboardInput.h"
#import "UIKeyInput.h"
#import <DOMNode.h> // Unknown library

@class UIResponder, UITextRange, NSDictionary, UITextPosition, UIView, UIColor, UIImage, UITextInteractionAssistant;
@protocol UITextInputDelegate;

@interface DOMNode (UIWebFormExtensions)
- (id)createPeripheral;	// 0x3477aff9
- (id)createPickerCell;	// 0x3477b001
- (id)createSelectedItem;	// 0x3477affd
- (id)itemTitle;	// 0x3477b009
- (void)populateCell:(id)cell;	// 0x3477b005
@end

@interface DOMNode (UIKit_DOMExtras)
- (id)tagName;	// 0x34792869
- (id)urlScheme;	// 0x347928c1
@end

@interface DOMNode (UIWebViewAdditions)
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x3479f921
- (BOOL)isSecure;	// 0x3479fa31
- (BOOL)isTextControl;	// 0x3479fa2d
- (int)keyboardType;	// 0x3479fa35
@end

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UIKeyInput, UITextInputTokenizer>
@property(assign, nonatomic) BOOL acceptsEmoji;
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign) BOOL becomesEditableWithGestures;	// G=0x347a166d; S=0x347a1671; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x347a1899; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x347a1049; S=0x347a104d; 
@property(assign, nonatomic) BOOL deferBecomingResponder;
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x347a18d1; 
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign) int initialSelectionBehavior;	// G=0x347a1061; S=0x347a1065; converted property
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x347a2381; S=0x347a23d9; 
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(assign, nonatomic) unsigned insertionPointWidth;
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x347a15bd; 
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) BOOL learnsCorrections;
@property(retain) id markedText;	// G=0x347a02c1; S=0x3479ff55; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x347a1f8d; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x347a2519; S=0x347a251d; 
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// G=0x347a1059; S=0x347a105d; 
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange *selectedTextRange;	// G=0x347a16cd; S=0x347a1825; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x347a2925; S=0x347a297d; 
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(assign, nonatomic) int shortcutConversionType;
@property(assign, nonatomic) int spellCheckingType;
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(retain) id text;	// G=0x347a0d8d; S=0x347a0cf9; converted property
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x347a1051; S=0x347a1055; 
@property(assign, nonatomic) int textSelectionBehavior;
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x347a1041; S=0x347a1045; 
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x3479fca9; S=0x3479fcad; 
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x347a237d; 
@property(assign, nonatomic) BOOL useInterfaceLanguageForLocalization;
- (CGRect)_lastRectForRange:(id)range;	// 0x347a1c9d
- (NSRange)_markedTextNSRange;	// 0x347a083d
- (id)_textSelectingContainer;	// 0x347a1675
- (void)acceptedAutoFillWord:(id)word;	// 0x347a1509
- (id)automaticallySelectedOverlay;	// 0x347a1069
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x347a2731
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x347a166d
- (void)beginSelectionChange;	// 0x3479fc49
// declared property getter: - (id)beginningOfDocument;	// 0x347a1899
- (CGRect)caretRect;	// 0x347a0e9d
- (CGRect)caretRectForPosition:(id)position;	// 0x347a2435
- (unsigned short)characterAfterCaretSelection;	// 0x347a04e5
- (unsigned short)characterBeforeCaretSelection;	// 0x3479ff15
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x3479fed1
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x347a25e1
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x347a26c5
- (id)closestPositionToPoint:(CGPoint)point;	// 0x347a2521
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x347a2581
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x347a20a5
- (void)confirmMarkedText:(id)text;	// 0x347a00c1
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x347a14d9
- (CGPoint)constrainedPoint:(CGPoint)point withInset:(float)inset;	// 0x347a0bf9
- (id)content;	// 0x347a1661
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x347a1049
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x347a0fb1
- (id)delegate;	// 0x3479fbfd
- (void)deleteBackward;	// 0x3479fcb1
- (BOOL)editable;	// 0x347a291d
- (BOOL)editing;	// 0x347a2921
// declared property getter: - (id)endOfDocument;	// 0x347a18d1
- (void)endSelectionChange;	// 0x3479fc79
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x347a07a1
- (void)extendCurrentSelection:(int)selection;	// 0x347a0a11
- (CGRect)firstRectForRange:(id)range;	// 0x347a1b85
- (id)fontForCaretSelection;	// 0x347a0529
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x3479fe8d
- (void)handleKeyWebEvent:(id)event;	// 0x3479fc05
- (BOOL)hasContent;	// 0x3479fa65
- (BOOL)hasSelection;	// 0x347a0aa1
- (BOOL)hasText;	// 0x347a208d
// converted property getter: - (int)initialSelectionBehavior;	// 0x347a1061
// declared property getter: - (id)inputDelegate;	// 0x347a2381
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x3479fddd
- (id)insertDictationResultPlaceholder;	// 0x3479fe35
- (void)insertText:(id)text;	// 0x3479fd25
// declared property getter: - (id)interactionAssistant;	// 0x347a15bd
- (BOOL)isAutoFillMode;	// 0x347a1565
- (BOOL)isEditable;	// 0x347a1665
- (BOOL)isEditing;	// 0x347a1669
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x347a21e9
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x347a229d
- (BOOL)isShowingPlaceholder;	// 0x347a103d
// converted property getter: - (id)markedText;	// 0x347a02c1
// declared property getter: - (id)markedTextRange;	// 0x347a1f8d
// declared property getter: - (id)markedTextStyle;	// 0x347a2519
- (id)metadataDictionariesForDictationResults;	// 0x3479fe0d
- (void)moveBackward:(unsigned)backward;	// 0x347a0b51
- (void)moveDown;	// 0x347a1f19
- (void)moveForward:(unsigned)forward;	// 0x347a0b55
- (void)moveLeft;	// 0x347a1e31
- (void)moveRight;	// 0x347a1dbd
- (void)moveUp;	// 0x347a1ea5
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x347a06dd
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x347a20e1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x347a2189
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x347a211d
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x347a2231
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x347a265d
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x347a06b1
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x347a09d5
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x347a0999
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x347a22e5
- (id)rangeOfEnclosingWord:(id)enclosingWord;	// 0x347a19f5
- (CGRect)rectContainingCaretSelection;	// 0x347a062d
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x347a01b1
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x347a025d
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x3479fe5d
- (void)replaceCurrentWordWithText:(id)text;	// 0x347a0415
- (void)replaceRange:(id)range withText:(id)text;	// 0x347a1b3d
- (void)replaceRange:(id)range withText:(id)text closeTyping:(BOOL)typing;	// 0x347a1a41
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x347a0331
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x347a1b61
- (BOOL)requiresKeyEvents;	// 0x3479fc01
// declared property getter: - (int)returnKeyType;	// 0x347a1059
- (void)selectAll;	// 0x347a0b59
- (id)selectedDOMRange;	// 0x347a08e9
// declared property getter: - (id)selectedTextRange;	// 0x347a16cd
// declared property getter: - (int)selectionAffinity;	// 0x347a2925
- (BOOL)selectionAtDocumentStart;	// 0x347a0ae1
- (BOOL)selectionAtWordStart;	// 0x347a0b19
- (NSRange)selectionRange;	// 0x347a089d
- (id)selectionRectsForRange:(id)range;	// 0x347a2739
- (int)selectionState;	// 0x347a0bb9
- (id)selectionView;	// 0x347a1635
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x347a2735
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x347a1671
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x347a104d
// converted property setter: - (void)setInitialSelectionBehavior:(int)behavior;	// 0x347a1065
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x347a23d9
// converted property setter: - (void)setMarkedText:(id)text;	// 0x3479ff55
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x347a0005
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x347a251d
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x347a105d
- (void)setSecure:(BOOL)secure;	// 0x3479fbf9
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x347a0921
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x347a1825
- (void)setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x347a173d
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x347a297d
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x347a0e79
- (void)setSelectionWithPoint:(CGPoint)point inset:(float)inset;	// 0x347a0ddd
// converted property setter: - (void)setText:(id)text;	// 0x347a0cf9
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x347a1055
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x347a1045
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x3479fcad
- (void)setupPlaceholderTextIfNeeded;	// 0x3479faa5
- (void)takeTraitsFrom:(id)from;	// 0x3479fa39
// converted property getter: - (id)text;	// 0x347a0d8d
- (id)textColorForCaretSelection;	// 0x347a0611
- (id)textDocument;	// 0x347a2981
- (id)textInRange:(id)range;	// 0x347a1909
- (id)textInputTraits;	// 0x3479faa9
// declared property getter: - (int)textLoupeVisibility;	// 0x347a1051
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x347a195d
// declared property getter: - (id)textSuggestionDelegate;	// 0x347a1041
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x3479fca9
// declared property getter: - (id)tokenizer;	// 0x347a237d
- (id)uiWebDocumentView;	// 0x3479fd95
- (void)unmarkText;	// 0x347a2009
- (void)updateAutoscroll:(id)autoscroll;	// 0x347a10b1
- (void)updateSelection;	// 0x347a165d
- (id)wordContainingCaretSelection;	// 0x347a0749
- (int)wordOffsetInRange:(id)range;	// 0x347a0801
- (id)wordRangeContainingCaretSelection;	// 0x347a0709
@end

@interface DOMNode (UIThreadSafeNodeAdditions)
- (id)_realNode;	// 0x34803a41
@end

@interface DOMNode (UIWebInteraction)
- (id)absoluteQuadsAtPoint:(CGPoint)point;	// 0x34803c01
- (BOOL)alwaysAttemptToShowTapHighlight;	// 0x34803ba5
- (BOOL)isLikelyToBeginPageLoad;	// 0x34803c11
- (BOOL)nodeCanBecomeFirstResponder;	// 0x34803c15
- (BOOL)showsTapHighlight;	// 0x34803ba1
- (id)tapHighlightColor;	// 0x34803bbd
- (BOOL)touchCalloutEnabled;	// 0x34803bfd
@end

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x348335a9
- (id)asDomRange;	// 0x348335ad
- (id)asElement;	// 0x3483328d
- (CGRect)boundingRect;	// 0x348338d5
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x34833935
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x348338bd
- (BOOL)containsBlock:(id)block;	// 0x348333f9
- (BOOL)containsNode:(id)node;	// 0x348331f9
- (BOOL)containsRange:(id)range;	// 0x3483368d
- (id)enclosingDocument;	// 0x348339a5
- (id)enclosingElementIncludingSelf;	// 0x348332b1
- (id)firstDescendantOfAboutTheSameWidthOrHeight;	// 0x34833bb1
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(CGRect)aboutTheSameWidthOrHeightAsRect withDescentDirection:(int)descentDirection;	// 0x348339b5
- (BOOL)hasCustomLineHeight;	// 0x3483336d
- (BOOL)isSameBlock:(id)block;	// 0x348333a9
- (id)largerParent;	// 0x348334b1
- (id)lastDescendantOfAboutTheSameWidthOrHeight;	// 0x34833c51
- (id)parentBlock;	// 0x34833311
- (id)rangeOfContents;	// 0x34833795
- (BOOL)rendersAsBlock;	// 0x34833591
- (BOOL)selectable;	// 0x34833321
- (BOOL)strictlyContainsBlock:(id)block;	// 0x34833469
- (BOOL)strictlyContainsNode:(id)node;	// 0x34833249
- (id)webFrame;	// 0x348332e9
@end

@interface DOMNode (UITextInput_Internal) <UITextInput_Internal>
@property(readonly, assign, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;	// G=0x34844d9d; 
@property(readonly, assign, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
- (unsigned long)_characterAfterCaretSelection;	// 0x34844ee1
- (unsigned long)_characterBeforeCaretSelection;	// 0x34844ef5
- (unsigned long)_characterInRelationToCaretSelection:(int)caretSelection;	// 0x34844f09
- (unsigned long)_characterInRelationToRangedSelection:(int)rangedSelection;	// 0x34844f81
- (id)_clampedpositionFromPosition:(id)position offset:(int)offset;	// 0x34846081
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x34845bf1
- (void)_deleteByWord;	// 0x3484588d
- (void)_deleteForwardAndNotify:(BOOL)notify;	// 0x34845c19
- (void)_deleteToEndOfLine;	// 0x34845a95
- (void)_deleteToStartOfLine;	// 0x34845939
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;	// 0x34845681
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)wordsBeforeCaretSelection;	// 0x34845695
- (void)_extendCurrentSelection:(int)selection;	// 0x348454cd
- (id)_findPleasingWordBoundaryFromPosition:(id)position;	// 0x34845f39
- (id)_fontForCaretSelection;	// 0x348461a5
- (id)_fullRange;	// 0x34845ee1
- (id)_fullText;	// 0x348451e9
- (BOOL)_hasMarkedTextOrRangedSelection;	// 0x34845465
- (int)_indexForTextPosition:(id)textPosition;	// 0x34844e0d
- (BOOL)_isEmptySelection;	// 0x348453f1
- (id)_keyInput;	// 0x34844dad
- (void)_moveCurrentSelection:(int)selection;	// 0x3484559d
- (id)_moveDown:(BOOL)down withHistory:(id)history;	// 0x34847529
- (id)_moveLeft:(BOOL)left withHistory:(id)history;	// 0x3484771d
- (id)_moveRight:(BOOL)right withHistory:(id)history;	// 0x34847819
- (id)_moveToEndOfDocument:(BOOL)document withHistory:(id)history;	// 0x3484721d
- (id)_moveToEndOfLine:(BOOL)line withHistory:(id)history;	// 0x34846c01
- (id)_moveToEndOfParagraph:(BOOL)paragraph withHistory:(id)history;	// 0x34846f75
- (id)_moveToEndOfWord:(BOOL)word withHistory:(id)history;	// 0x34846915
- (id)_moveToStartOfDocument:(BOOL)document withHistory:(id)history;	// 0x34847161
- (id)_moveToStartOfLine:(BOOL)line withHistory:(id)history;	// 0x34846a79
- (id)_moveToStartOfParagraph:(BOOL)paragraph withHistory:(id)history;	// 0x34846d89
- (id)_moveToStartOfWord:(BOOL)word withHistory:(id)history;	// 0x348466a1
- (id)_moveUp:(BOOL)up withHistory:(id)history;	// 0x34847335
- (id)_newPhraseBoundaryGestureRecognizer;	// 0x34847e91
- (NSRange)_nsrangeForTextRange:(id)textRange;	// 0x34844e51
- (void)_phraseBoundaryGesture:(id)gesture;	// 0x34847f81
- (id)_positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset withAffinityDownstream:(BOOL)affinityDownstream;	// 0x34847919
// declared property getter: - (id)_proxyTextInput;	// 0x34844d9d
- (id)_rangeOfEnclosingWord:(id)enclosingWord;	// 0x34845ded
- (id)_rangeOfLineEnclosingPosition:(id)lineEnclosingPosition;	// 0x34845e59
- (id)_rangeOfParagraphEnclosingPosition:(id)paragraphEnclosingPosition;	// 0x34845e9d
- (void)_replaceCurrentWordWithText:(id)text;	// 0x34845d75
- (void)_scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x34845de9
- (id)_selectableText;	// 0x348484d9
- (int)_selectionAffinity;	// 0x348479bd
- (NSRange)_selectionAsNSRange;	// 0x34844db1
- (BOOL)_selectionAtDocumentEnd;	// 0x3484535d
- (BOOL)_selectionAtDocumentStart;	// 0x348452ed
- (BOOL)_selectionAtWordStart;	// 0x34845255
- (CGRect)_selectionClipRect;	// 0x348453cd
- (void)_setCaretSelectionAtEndOfSelection;	// 0x34845805
- (void)_setGestureRecognizers;	// 0x34847ab5
- (id)_setHistory:(id)history withExtending:(BOOL)extending withAnchor:(int)anchor withAffinityDownstream:(BOOL)affinityDownstream;	// 0x348464e9
- (void)_setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x34847cfd
- (void)_setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x34847949
- (id)_setSelectionRangeWithHistory:(id)history;	// 0x34846295
- (id)_textColorForCaretSelection;	// 0x348460e5
- (void)_unmarkText;	// 0x34847e39
- (void)_updateSelectionWithTextRange:(id)textRange withAffinityDownstream:(BOOL)affinityDownstream;	// 0x34846265
- (id)_wordContainingCaretSelection;	// 0x34845151
@end

@interface DOMNode (UITextInputView)
- (id)textInputView;	// 0x348486c1
@end

@interface DOMNode (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x3488003d
- (id)_nextAssistedNode;	// 0x34880041
- (id)_previousAssistedNode;	// 0x34880085
- (BOOL)_requiresAccessoryView;	// 0x34880005
- (BOOL)_requiresInputView;	// 0x3488001d
- (void)_startAssistingDocumentView:(id)view;	// 0x3487ff79
- (void)_stopAssistingDocumentView:(id)view;	// 0x3487ffad
- (BOOL)_supportsAccessoryClear;	// 0x34880039
- (BOOL)_supportsAutoFill;	// 0x34880035
- (id)_textFormElement;	// 0x348800c9
@end

