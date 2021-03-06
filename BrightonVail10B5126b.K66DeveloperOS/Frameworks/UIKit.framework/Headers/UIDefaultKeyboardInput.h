/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardInput.h"

@class UITextRange, NSDictionary, UITextPosition, UITextInputTraits, UIColor, UIImage, UITextInteractionAssistant;
@protocol UITextInputDelegate;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
	UITextInputTraits *m_traits;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// G=0x32d3414d; S=0x32d34149; @dynamic
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x32d34165; S=0x32d34169; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x32d3419d; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// @dynamic
@property(assign, nonatomic) BOOL deferBecomingResponder;
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x32d341a1; 
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x32d34249; S=0x32d3424d; 
@property(retain, nonatomic) UIColor *insertionPointColor;	// @dynamic
@property(assign, nonatomic) unsigned insertionPointWidth;	// @dynamic
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x32d34155; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign, nonatomic) BOOL learnsCorrections;
@property(retain) id markedText;	// G=0x32d34011; S=0x32d34009; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x32d341f9; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x32d341fd; S=0x32d34201; 
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign, getter=isSecure) BOOL secure;	// G=0x32d34141; S=0x32d34145; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(copy) UITextRange *selectedTextRange;	// G=0x32d34195; S=0x32d34199; 
@property(assign, nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(assign, nonatomic) int shortcutConversionType;	// @dynamic
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(retain) id text;	// G=0x32d340f9; S=0x32d340f5; converted property
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// @dynamic
@property(assign, nonatomic) int textSelectionBehavior;	// @dynamic
@property(assign, nonatomic) id textSuggestionDelegate;	// @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// @dynamic
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x32d34245; 
@property(assign, nonatomic) BOOL useInterfaceLanguageForLocalization;
- (NSRange)_markedTextNSRange;	// 0x32d340c9
// declared property getter: - (BOOL)acceptsEmoji;	// 0x32d3414d
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x32d34219
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x32d34165
// declared property getter: - (id)beginningOfDocument;	// 0x32d3419d
- (CGRect)caretRect;	// 0x32d34101
- (CGRect)caretRectForPosition:(id)position;	// 0x32d341d5
- (unsigned short)characterAfterCaretSelection;	// 0x32d3401d
- (unsigned short)characterBeforeCaretSelection;	// 0x32d34019
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x32d34015
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x32d3420d
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x32d34215
- (id)closestPositionToPoint:(CGPoint)point;	// 0x32d34205
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x32d34209
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x32d34225
- (void)confirmMarkedText:(id)text;	// 0x32d3400d
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x32d34125
- (void)dealloc;	// 0x32c50f39
- (id)delegate;	// 0x32d33fed
- (void)deleteBackward;	// 0x32d33ff1
// declared property getter: - (id)endOfDocument;	// 0x32d341a1
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x32d3409d
- (void)extendCurrentSelection:(int)selection;	// 0x32d340e5
- (CGRect)firstRectForRange:(id)range;	// 0x32d341b1
- (id)fontForCaretSelection;	// 0x32d34021
- (void)forwardInvocation:(id)invocation;	// 0x32d33ee9
- (BOOL)hasContent;	// 0x32d340a9
- (BOOL)hasSelection;	// 0x32d340ad
- (BOOL)hasText;	// 0x32d34191
// declared property getter: - (id)inputDelegate;	// 0x32d34249
- (void)insertText:(id)text;	// 0x32d33ff5
// declared property getter: - (id)interactionAssistant;	// 0x32d34155
- (BOOL)isEditable;	// 0x32d34159
- (BOOL)isEditing;	// 0x32d3415d
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x32d34235
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x32d3423d
// converted property getter: - (BOOL)isSecure;	// 0x32d34141
- (BOOL)isShowingPlaceholder;	// 0x32d34139
// converted property getter: - (id)markedText;	// 0x32d34011
// declared property getter: - (id)markedTextRange;	// 0x32d341f9
// declared property getter: - (id)markedTextStyle;	// 0x32d341fd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32d33f71
- (void)moveBackward:(unsigned)backward;	// 0x32d340e9
- (void)moveForward:(unsigned)forward;	// 0x32d340ed
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x32d34091
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x32d34229
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x32d34231
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x32d3422d
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x32d34239
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x32d34211
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x32d3408d
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x32d340e1
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x32d340dd
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x32d34241
- (CGRect)rectContainingCaretSelection;	// 0x32d34069
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x32d34041
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x32d34065
- (void)replaceCurrentWordWithText:(id)text;	// 0x32d33ffd
- (void)replaceRange:(id)range withText:(id)text;	// 0x32d341ad
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x32d33ff9
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x32d34001
- (void)selectAll;	// 0x32d340f1
- (id)selectedDOMRange;	// 0x32d340d5
// declared property getter: - (id)selectedTextRange;	// 0x32d34195
- (BOOL)selectionAtDocumentStart;	// 0x32d340b5
- (BOOL)selectionAtWordStart;	// 0x32d340b9
- (NSRange)selectionRange;	// 0x32d340bd
- (id)selectionRectsForRange:(id)range;	// 0x32d34251
- (int)selectionState;	// 0x32d340b1
- (id)selectionView;	// 0x32d34151
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;	// 0x32d34149
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x32d3421d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x32d34169
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x32d3424d
// converted property setter: - (void)setMarkedText:(id)text;	// 0x32d34009
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x32d34005
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x32d34201
// converted property setter: - (void)setSecure:(BOOL)secure;	// 0x32d34145
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x32d340d9
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x32d34199
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x32d340fd
// converted property setter: - (void)setText:(id)text;	// 0x32d340f5
- (void)setupPlaceholderTextIfNeeded;	// 0x32d3413d
- (void)takeTraitsFrom:(id)from;	// 0x32d33fc1
// converted property getter: - (id)text;	// 0x32d340f9
- (id)textColorForCaretSelection;	// 0x32d34025
- (id)textInRange:(id)range;	// 0x32d341a5
- (id)textInputTraits;	// 0x32d33e99
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x32d341a9
// declared property getter: - (id)tokenizer;	// 0x32d34245
- (void)unmarkText;	// 0x32d34221
- (void)updateSelection;	// 0x32d34161
- (CGRect)visibleBounds;	// 0x32d3416d
- (id)wordContainingCaretSelection;	// 0x32d34099
- (int)wordOffsetInRange:(id)range;	// 0x32d340a1
- (id)wordRangeContainingCaretSelection;	// 0x32d34095
@end

