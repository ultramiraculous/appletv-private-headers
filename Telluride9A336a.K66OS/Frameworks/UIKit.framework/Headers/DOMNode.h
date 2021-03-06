/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputTokenizer.h"
#import "UIKit-Structs.h"
#import "UIKeyboardInput.h"
#import "UIKeyInput.h"
#import <DOMNode.h> // Unknown library
#import "UIWebSelectionBlock.h"

@class UITextSelectionView, UITextInteractionAssistant, UIResponder, UIColor, UIImage, UITextRange, NSDictionary, UITextPosition, UIView;
@protocol UITextSelectingContent, UITextInputDelegate;

@interface DOMNode (UIWebFormExtensions)
- (id)createPeripheral;	// 0x352cd6ed
- (id)createPickerCell;	// 0x352cd6f5
- (id)createSelectedItem;	// 0x352cd6f1
- (id)itemTitle;	// 0x352cd6fd
- (void)populateCell:(id)cell;	// 0x352cd6f9
@end

@interface DOMNode (UIKit_DOMExtras)
- (id)tagName;	// 0x352e1a6d
- (id)urlScheme;	// 0x352e1ac5
@end

@interface DOMNode (UIWebViewAdditions)
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x352ee669
- (BOOL)isSecure;	// 0x352ee785
- (BOOL)isTextControl;	// 0x352ee781
- (int)keyboardType;	// 0x352ee789
@end

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UIKeyInput, UITextInputTokenizer>
@property(assign, nonatomic) BOOL acceptsEmoji;
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign) BOOL becomesEditableWithGestures;	// G=0x352f0471; S=0x352f0475; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x352f06a9; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x352f0461; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x352efe25; S=0x352efe29; 
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x352f0469; 
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x352f046d; 
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x352f06e1; 
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign) int initialSelectionBehavior;	// G=0x352efe3d; S=0x352efe41; converted property
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x352f1135; S=0x352f118d; 
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(assign, nonatomic) unsigned insertionPointWidth;
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x352f0465; 
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) BOOL learnsCorrections;
@property(retain) id markedText;	// G=0x352eef81; S=0x352eec15; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x352f0d41; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x352f12cd; S=0x352f12d1; 
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// G=0x352efe35; S=0x352efe39; 
@property(assign, nonatomic, getter=isRichText) BOOL richText;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange *selectedTextRange;	// G=0x352f04d9; S=0x352f0635; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x352f16a5; S=0x352f16fd; 
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x352f03e1; 
@property(assign, nonatomic) int shortcutConversionType;
@property(assign, nonatomic) int spellCheckingType;
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(retain) id text;	// G=0x352efb59; S=0x352efac9; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x352f1701; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x352efe2d; S=0x352efe31; 
@property(assign, nonatomic) int textSelectionBehavior;
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x352efe1d; S=0x352efe21; 
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x352ee9a9; S=0x352ee9ad; 
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x352f1131; 
- (CGRect)_lastRectForRange:(id)range;	// 0x352f0a51
- (NSRange)_markedTextNSRange;	// 0x352ef60d
- (id)_textSelectingContainer;	// 0x352f0481
- (void)acceptedAutoFillWord:(id)word;	// 0x352f02cd
- (id)automaticallySelectedOverlay;	// 0x352efe45
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x352f14e1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x352f0471
- (void)beginSelectionChange;	// 0x352f0381
// declared property getter: - (id)beginningOfDocument;	// 0x352f06a9
- (CGRect)caretRect;	// 0x352efc71
- (CGRect)caretRectForPosition:(id)position;	// 0x352f11e9
- (unsigned short)characterAfterCaretSelection;	// 0x352ef2bd
- (unsigned short)characterBeforeCaretSelection;	// 0x352eebd5
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x352eeb91
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x352f1395
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x352f1475
- (id)closestPositionToPoint:(CGPoint)point;	// 0x352f12d5
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x352f1335
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x352f0e59
- (void)confirmMarkedText:(id)text;	// 0x352eed7d
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x352f029d
- (CGPoint)constrainedPoint:(CGPoint)point withInset:(float)inset;	// 0x352ef9cd
// declared property getter: - (id)content;	// 0x352f0461
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x352efe25
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x352efd89
- (id)delegate;	// 0x352ee95d
- (void)deleteBackward;	// 0x352ee9b1
- (void)detachInteractionAssistant;	// 0x352f0479
- (void)detachSelectionView;	// 0x352f047d
- (BOOL)editable;	// 0x352f169d
- (BOOL)editing;	// 0x352f16a1
// declared property getter: - (id)endOfDocument;	// 0x352f06e1
- (void)endSelectionChange;	// 0x352f03b1
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x352ef571
- (void)extendCurrentSelection:(int)selection;	// 0x352ef7e5
- (CGRect)firstRectForRange:(id)range;	// 0x352f0939
- (id)fontForCaretSelection;	// 0x352ef2fd
- (void)handleKeyWebEvent:(id)event;	// 0x352ee965
- (BOOL)hasContent;	// 0x352ee7b9
- (BOOL)hasSelection;	// 0x352ef875
- (BOOL)hasText;	// 0x352f0e41
// converted property getter: - (int)initialSelectionBehavior;	// 0x352efe3d
// declared property getter: - (id)inputDelegate;	// 0x352f1135
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x352eead9
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x352eeb31
- (void)insertText:(id)text;	// 0x352eea21
// declared property getter: - (id)interactionAssistant;	// 0x352f0465
- (BOOL)isAutoFillMode;	// 0x352f0329
// declared property getter: - (BOOL)isEditable;	// 0x352f0469
// declared property getter: - (BOOL)isEditing;	// 0x352f046d
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x352f0f99
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x352f104d
- (BOOL)isShowingPlaceholder;	// 0x352efe19
// converted property getter: - (id)markedText;	// 0x352eef81
// declared property getter: - (id)markedTextRange;	// 0x352f0d41
// declared property getter: - (id)markedTextStyle;	// 0x352f12cd
- (id)metadataDictionariesForDictationResults;	// 0x352eeb09
- (void)moveBackward:(unsigned)backward;	// 0x352ef925
- (void)moveDown;	// 0x352f0ccd
- (void)moveForward:(unsigned)forward;	// 0x352ef929
- (void)moveLeft;	// 0x352f0be5
- (void)moveRight;	// 0x352f0b71
- (void)moveUp;	// 0x352f0c59
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x352ef4ad
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x352f0e95
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x352f0f39
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x352f0ed1
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x352f0fe1
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x352f1405
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x352ef481
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x352ef7a9
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x352ef76d
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x352f1095
- (id)rangeOfEnclosingWord:(id)enclosingWord;	// 0x352f0805
- (CGRect)rectContainingCaretSelection;	// 0x352ef3fd
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x352eee6d
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x352eef1d
- (id)rectsForRange:(id)range;	// 0x352f14e9
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x352eeb61
- (void)replaceCurrentWordWithText:(id)text;	// 0x352ef0d9
- (void)replaceRange:(id)range withText:(id)text;	// 0x352f0851
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x352eeff5
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x352ef1a5
- (BOOL)requiresKeyEvents;	// 0x352ee961
// declared property getter: - (int)returnKeyType;	// 0x352efe35
- (void)selectAll;	// 0x352ef92d
- (id)selectedDOMRange;	// 0x352ef6bd
// declared property getter: - (id)selectedTextRange;	// 0x352f04d9
// declared property getter: - (int)selectionAffinity;	// 0x352f16a5
- (BOOL)selectionAtDocumentStart;	// 0x352ef8b5
- (BOOL)selectionAtWordStart;	// 0x352ef8ed
- (CGRect)selectionClipRect;	// 0x352f043d
- (NSRange)selectionRange;	// 0x352ef671
- (int)selectionState;	// 0x352ef98d
// declared property getter: - (id)selectionView;	// 0x352f03e1
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x352f14e5
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x352f0475
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x352efe29
// converted property setter: - (void)setInitialSelectionBehavior:(int)behavior;	// 0x352efe41
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x352f118d
// converted property setter: - (void)setMarkedText:(id)text;	// 0x352eec15
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x352eecc5
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x352f12d1
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x352efe39
- (void)setSecure:(BOOL)secure;	// 0x352ee959
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x352ef6f5
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x352f0635
- (void)setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x352f0549
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x352f16fd
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x352efc4d
- (void)setSelectionWithPoint:(CGPoint)point inset:(float)inset;	// 0x352efba9
// converted property setter: - (void)setText:(id)text;	// 0x352efac9
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x352efe31
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x352efe21
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x352ee9ad
- (void)setupPlaceholderTextIfNeeded;	// 0x352ee7f9
- (void)takeTraitsFrom:(id)from;	// 0x352ee78d
// converted property getter: - (id)text;	// 0x352efb59
- (id)textColorForCaretSelection;	// 0x352ef3e1
// declared property getter: - (id)textDocument;	// 0x352f1701
- (id)textInRange:(id)range;	// 0x352f0719
- (id)textInputTraits;	// 0x352ee7fd
// declared property getter: - (int)textLoupeVisibility;	// 0x352efe2d
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x352f076d
// declared property getter: - (id)textSuggestionDelegate;	// 0x352efe1d
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x352ee9a9
// declared property getter: - (id)tokenizer;	// 0x352f1131
- (id)uiWebDocumentView;	// 0x352eea91
- (void)unmarkText;	// 0x352f0dbd
- (void)updateAutoscroll:(id)autoscroll;	// 0x352efe8d
- (void)updateSelection;	// 0x352f0439
- (id)wordContainingCaretSelection;	// 0x352ef519
- (int)wordOffsetInRange:(id)range;	// 0x352ef5d1
- (id)wordRangeContainingCaretSelection;	// 0x352ef4d9
@end

@interface DOMNode (UIThreadSafeNodeAdditions)
- (id)_realNode;	// 0x3536a4e9
@end

@interface DOMNode (UIWebInteraction)
- (id)absoluteQuadsAtPoint:(CGPoint)point;	// 0x3520b239
- (BOOL)isLikelyToBeginPageLoad;	// 0x3536a689
- (BOOL)nodeCanBecomeFirstResponder;	// 0x3536a68d
- (BOOL)showsTapHighlight;	// 0x3520b151
- (id)tapHighlightColor;	// 0x3536a645
- (BOOL)touchCalloutEnabled;	// 0x3536a685
@end

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x35395679
- (id)asDomRange;	// 0x3539567d
- (id)asElement;	// 0x35395395
- (CGRect)boundingRect;	// 0x35209585
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x3539595d
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x352094d1
- (BOOL)containsBlock:(id)block;	// 0x353954d1
- (BOOL)containsNode:(id)node;	// 0x35395305
- (BOOL)containsRange:(id)range;	// 0x3539574d
- (id)enclosingDocument;	// 0x353959c9
- (id)enclosingElementIncludingSelf;	// 0x353953b9
- (id)firstDescendantOfAboutTheSameWidthOrHeight;	// 0x35395bd5
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(CGRect)aboutTheSameWidthOrHeightAsRect withDescentDirection:(int)descentDirection;	// 0x353959d9
- (BOOL)hasCustomLineHeight;	// 0x3539544d
- (BOOL)isSameBlock:(id)block;	// 0x35395481
- (id)largerParent;	// 0x35395581
- (id)lastDescendantOfAboutTheSameWidthOrHeight;	// 0x35395c71
- (id)parentBlock;	// 0x353953ed
- (id)rangeOfContents;	// 0x35395845
- (BOOL)rendersAsBlock;	// 0x35395661
- (BOOL)selectable;	// 0x353953fd
- (BOOL)strictlyContainsBlock:(id)block;	// 0x3539553d
- (BOOL)strictlyContainsNode:(id)node;	// 0x35395351
- (id)webFrame;	// 0x352096c1
@end

@interface DOMNode (UITextInputView)
- (id)textInputView;	// 0x353a834d
@end

@interface DOMNode (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x353de0cd
- (id)_nextAssistedNode;	// 0x353de0d1
- (id)_previousAssistedNode;	// 0x353de111
- (BOOL)_requiresAccessoryView;	// 0x353de095
- (BOOL)_requiresInputView;	// 0x353de0ad
- (void)_startAssistingDocumentView:(id)view;	// 0x353de00d
- (void)_stopAssistingDocumentView:(id)view;	// 0x353de041
- (BOOL)_supportsAccessoryClear;	// 0x353de0c9
- (BOOL)_supportsAutoFill;	// 0x353de0c5
- (id)_textFormElement;	// 0x353de151
@end

