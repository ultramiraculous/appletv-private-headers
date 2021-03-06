/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardInput.h"

@class UITextRange, NSDictionary, UITextPosition, UITextInputTraits, UITextSelectionView, UITextInteractionAssistant, UIColor, UIImage;
@protocol UITextInputDelegate, UITextSelectingContent;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
	UITextInputTraits *m_traits;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// G=0x302440d1; S=0x302440cd; @dynamic
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x30244111; S=0x30244115; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x30244151; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x30244101; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// @dynamic
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// @dynamic
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// @dynamic
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x30244155; 
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x302441fd; S=0x30244201; 
@property(retain, nonatomic) UIColor *insertionPointColor;	// @dynamic
@property(assign, nonatomic) unsigned insertionPointWidth;	// @dynamic
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x302440fd; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign, nonatomic) BOOL learnsCorrections;
@property(retain) id markedText;	// G=0x30243f95; S=0x30243f8d; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x302441ad; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x302441b1; S=0x302441b5; 
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign, nonatomic, getter=isRichText) BOOL richText;
@property(assign, getter=isSecure) BOOL secure;	// G=0x302440c5; S=0x302440c9; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(copy) UITextRange *selectedTextRange;	// G=0x30244149; S=0x3024414d; 
@property(assign, nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x302440d5; 
@property(assign, nonatomic) int shortcutConversionType;	// @dynamic
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(retain) id text;	// G=0x3024407d; S=0x30244079; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x30244209; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// @dynamic
@property(assign, nonatomic) int textSelectionBehavior;	// @dynamic
@property(assign, nonatomic) id textSuggestionDelegate;	// @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// @dynamic
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x302441f9; 
- (NSRange)_markedTextNSRange;	// 0x3024404d
// declared property getter: - (BOOL)acceptsEmoji;	// 0x302440d1
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x302441cd
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x30244111
- (void)beginSelectionChange;	// 0x30244105
// declared property getter: - (id)beginningOfDocument;	// 0x30244151
- (CGRect)caretRect;	// 0x30244085
- (CGRect)caretRectForPosition:(id)position;	// 0x30244189
- (unsigned short)characterAfterCaretSelection;	// 0x30243fa1
- (unsigned short)characterBeforeCaretSelection;	// 0x30243f9d
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x30243f99
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x302441c1
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x302441c9
- (id)closestPositionToPoint:(CGPoint)point;	// 0x302441b9
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x302441bd
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x302441d9
- (void)confirmMarkedText:(id)text;	// 0x30243f91
// declared property getter: - (id)content;	// 0x30244101
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x302440a9
- (void)dealloc;	// 0x30243dd5
- (id)delegate;	// 0x30243f71
- (void)deleteBackward;	// 0x30243f75
- (void)detachInteractionAssistant;	// 0x3024411d
- (void)detachSelectionView;	// 0x30244119
// declared property getter: - (id)endOfDocument;	// 0x30244155
- (void)endSelectionChange;	// 0x30244109
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x30244021
- (void)extendCurrentSelection:(int)selection;	// 0x30244069
- (CGRect)firstRectForRange:(id)range;	// 0x30244165
- (id)fontForCaretSelection;	// 0x30243fa5
- (void)forwardInvocation:(id)invocation;	// 0x30243e71
- (BOOL)hasContent;	// 0x3024402d
- (BOOL)hasSelection;	// 0x30244031
- (BOOL)hasText;	// 0x30244145
// declared property getter: - (id)inputDelegate;	// 0x302441fd
- (void)insertText:(id)text;	// 0x30243f79
// declared property getter: - (id)interactionAssistant;	// 0x302440fd
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x302441e9
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x302441f1
// converted property getter: - (BOOL)isSecure;	// 0x302440c5
- (BOOL)isShowingPlaceholder;	// 0x302440bd
// converted property getter: - (id)markedText;	// 0x30243f95
// declared property getter: - (id)markedTextRange;	// 0x302441ad
// declared property getter: - (id)markedTextStyle;	// 0x302441b1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30243ef9
- (void)moveBackward:(unsigned)backward;	// 0x3024406d
- (void)moveForward:(unsigned)forward;	// 0x30244071
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x30244015
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x302441dd
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x302441e5
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x302441e1
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x302441ed
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x302441c5
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x30244011
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x30244065
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x30244061
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x302441f5
- (CGRect)rectContainingCaretSelection;	// 0x30243fed
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x30243fc5
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x30243fe9
- (id)rectsForRange:(id)range;	// 0x30244205
- (void)replaceCurrentWordWithText:(id)text;	// 0x30243f81
- (void)replaceRange:(id)range withText:(id)text;	// 0x30244161
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x30243f7d
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x30243f85
- (void)selectAll;	// 0x30244075
- (id)selectedDOMRange;	// 0x30244059
// declared property getter: - (id)selectedTextRange;	// 0x30244149
- (BOOL)selectionAtDocumentStart;	// 0x30244039
- (BOOL)selectionAtWordStart;	// 0x3024403d
- (CGRect)selectionClipRect;	// 0x302440d9
- (NSRange)selectionRange;	// 0x30244041
- (int)selectionState;	// 0x30244035
// declared property getter: - (id)selectionView;	// 0x302440d5
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;	// 0x302440cd
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x302441d1
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x30244115
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x30244201
// converted property setter: - (void)setMarkedText:(id)text;	// 0x30243f8d
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x30243f89
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x302441b5
// converted property setter: - (void)setSecure:(BOOL)secure;	// 0x302440c9
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x3024405d
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x3024414d
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x30244081
// converted property setter: - (void)setText:(id)text;	// 0x30244079
- (void)setupPlaceholderTextIfNeeded;	// 0x302440c1
- (void)takeTraitsFrom:(id)from;	// 0x30243f45
// converted property getter: - (id)text;	// 0x3024407d
- (id)textColorForCaretSelection;	// 0x30243fa9
// declared property getter: - (id)textDocument;	// 0x30244209
- (id)textInRange:(id)range;	// 0x30244159
- (id)textInputTraits;	// 0x30243e21
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x3024415d
// declared property getter: - (id)tokenizer;	// 0x302441f9
- (void)unmarkText;	// 0x302441d5
- (void)updateSelection;	// 0x3024410d
- (CGRect)visibleBounds;	// 0x30244121
- (id)wordContainingCaretSelection;	// 0x3024401d
- (int)wordOffsetInRange:(id)range;	// 0x30244025
- (id)wordRangeContainingCaretSelection;	// 0x30244019
@end

