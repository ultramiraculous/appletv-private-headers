/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebDocumentOptionsSearching.h"
#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebDocumentView.h"
#import "WebDocumentSearching.h"
#import "WebDocumentSelection.h"
#import "WebDocumentIncrementalSearching.h"
#import "WebDocumentElement.h"
#import "WebMultipleTextMatches.h"

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {
@private
	WebHTMLViewPrivate *_private;	// 40 = 0x28
}
@property(assign) BOOL markedTextMatchesAreHighlighted;	// G=0x35063579; S=0x35063545; converted property
+ (void)initialize;	// 0x34fff819
+ (id)supportedImageMIMETypes;	// 0x3501f751
+ (id)supportedMIMETypes;	// 0x3505e53d
+ (id)supportedNonImageMIMETypes;	// 0x3501182d
+ (id)unsupportedTextMIMETypes;	// 0x35011d79
- (id)initWithFrame:(CGRect)frame;	// 0x35004d5d
- (id)_accessibilityParentForSubview:(id)subview;	// 0x35061a2d
- (float)_adjustedBottomOfPageWithTop:(float)top bottom:(float)bottom limit:(float)limit;	// 0x3505f53d
- (void)_applyStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x35061b05
- (void)_autoscroll;	// 0x3505e81d
- (BOOL)_beginPrintModeWithMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width;	// 0x3505f101
- (BOOL)_beginPrintModeWithPageWidth:(float)pageWidth height:(float)height shrinkToFit:(BOOL)fit;	// 0x3505f1d5
- (BOOL)_beginScreenPaginationModeWithPageSize:(CGSize)pageSize shrinkToFit:(BOOL)fit;	// 0x3505f391
- (BOOL)_canAlterCurrentSelection;	// 0x3505e885
- (BOOL)_canDecreaseSelectionListLevel;	// 0x3505ec15
- (BOOL)_canEdit;	// 0x3505e82d
- (BOOL)_canEditRichly;	// 0x3505e859
- (BOOL)_canIncreaseSelectionListLevel;	// 0x3505ebe9
- (BOOL)_canSmartCopyOrDelete;	// 0x35061e89
- (void)_changeWordCaseWithSelector:(SEL)selector;	// 0x35061c71
- (void)_clearLastHitViewIfSelf;	// 0x3501e645
- (id)_compositingLayersHostingView;	// 0x3505f0c1
- (id)_dataSource;	// 0x3505e15d
- (void)_decreaseSelectionListLevel;	// 0x3505ef7d
- (void)_destroyAllWebPlugins;	// 0x3506230d
- (id)_documentRange;	// 0x3505e125
- (id)_emptyStyle;	// 0x35061acd
- (void)_endPrintMode;	// 0x3505f32d
- (void)_endScreenPaginationMode;	// 0x3505f4f9
- (void)_executeSavedKeypressCommands;	// 0x35061f15
- (BOOL)_findString:(id)string options:(unsigned)options;	// 0x350637bd
- (id)_frame;	// 0x3500901d
- (void)_frameOrBoundsChanged;	// 0x3505e58d
- (id)_frameView;	// 0x3505e181
- (BOOL)_handleEditingKeyEvent:(KeyboardEvent *)event;	// 0x3506202d
- (BOOL)_hasHTMLDocument;	// 0x3505f065
- (BOOL)_hasInsertionPoint;	// 0x3505e925
- (BOOL)_hasSelection;	// 0x3505e8c5
- (BOOL)_hasSelectionOrInsertionPoint;	// 0x3505e8f5
- (id)_highlighterForType:(id)type;	// 0x35061ee9
- (id)_increaseSelectionListLevel;	// 0x3505ec41
- (id)_increaseSelectionListLevelOrdered;	// 0x3505ed55
- (id)_increaseSelectionListLevelUnordered;	// 0x3505ee69
- (id)_insertOrderedList;	// 0x3505e9c1
- (id)_insertUnorderedList;	// 0x3505ead5
- (BOOL)_insideAnotherHTMLView;	// 0x3505e70d
- (BOOL)_isEditable;	// 0x3505e955
- (BOOL)_isInPrintMode;	// 0x3505f0e1
- (BOOL)_isInScreenPaginationMode;	// 0x3505f371
- (BOOL)_isSelectionEvent:(id)event;	// 0x35060fb9
- (BOOL)_isTopHTMLView;	// 0x3500f5e9
- (BOOL)_isUsingAcceleratedCompositing;	// 0x3505f09d
- (void)_layoutIfNeeded;	// 0x350622d5
- (BOOL)_needsLayout;	// 0x3500978d
- (id)_pluginController;	// 0x3500847d
- (void)_removeHighlighterOfType:(id)type;	// 0x3505f039
- (void)_restoreSubviews;	// 0x3505e705
- (id)_selectedRange;	// 0x3505e341
- (void)_selectionChanged;	// 0x35023a69
- (CGRect)_selectionRect;	// 0x3505e7f9
- (void)_setAsideSubviews;	// 0x3505e701
- (void)_setHighlighter:(id)highlighter ofType:(id)type;	// 0x3505efa9
- (void)_setMouseDownEvent:(id)event;	// 0x3505e4dd
- (void)_setPrinting:(BOOL)printing minimumPageLogicalWidth:(float)width logicalHeight:(float)height originalPageWidth:(float)width4 originalPageHeight:(float)height5 maximumShrinkRatio:(float)ratio adjustViewSize:(BOOL)size paginateScreenContent:(BOOL)content;	// 0x35061241
- (void)_setToolTip:(id)tip;	// 0x3505e731
- (void)_setTransparentBackground:(BOOL)background;	// 0x3505e9a1
- (BOOL)_shouldDeleteRange:(id)range;	// 0x3505e4a5
- (BOOL)_shouldInsertFragment:(id)fragment replacingDOMRange:(id)range givenAction:(int)action;	// 0x3505e1c5
- (BOOL)_shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x3505e2b9
- (BOOL)_shouldReplaceSelectionWithText:(id)text givenAction:(int)action;	// 0x3505e305
- (void)_startAutoscrollTimer:(id)timer;	// 0x3505e749
- (void)_stopAutoscrollTimer;	// 0x350083fd
- (id)_topHTMLView;	// 0x3500f60d
- (BOOL)_transparentBackground;	// 0x3505e981
- (void)_updateControlTints;	// 0x35061e19
- (void)_updateSelectionForInputManager;	// 0x35023a7d
- (BOOL)_wantsKeyDownForEvent:(id)event;	// 0x35061df9
- (id)_webView;	// 0x3500904d
- (BOOL)_web_isDrawingIntoLayer;	// 0x35026969
- (void)_web_makePluginSubviewsPerformSelector:(SEL)selector withObject:(id)object;	// 0x35060c99
- (void)_web_updateLayoutAndStyleIfNeededRecursive;	// 0x3500f675
- (void)_windowChangedKeyState;	// 0x35061e49
- (BOOL)acceptsFirstResponder;	// 0x3501dd91
- (id)accessibilityFocusedUIElement;	// 0x3506199d
- (id)accessibilityHitTest:(CGPoint)test;	// 0x350619e1
- (id)accessibilityRootElement;	// 0x35024165
- (void)addSubview:(id)subview;	// 0x35019855
- (void)alignCenter:(id)center;	// 0x3506046d
- (void)alignJustified:(id)justified;	// 0x35060481
- (void)alignLeft:(id)left;	// 0x35060495
- (void)alignRight:(id)right;	// 0x350604a9
- (void)attachRootLayer:(id)layer;	// 0x35062335
- (BOOL)becomeFirstResponder;	// 0x3501de81
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)needed;	// 0x3505f6c9
- (void)capitalizeWord:(id)word;	// 0x35061db1
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x35061a75
- (unsigned)characterIndexForPoint:(CGPoint)point;	// 0x350623a5
- (void)clearFocus;	// 0x35060e1d
- (void)clearText:(id)text;	// 0x35060bb1
- (void)close;	// 0x3501e5b5
- (void)closeIfNotCurrentView;	// 0x35021369
- (int)conversationIdentifier;	// 0x350627f5
- (void)copy:(id)copy;	// 0x350604bd
- (Command)coreCommandByName:(const char *)name;	// 0x3505ff05
- (Command)coreCommandBySelector:(SEL)selector;	// 0x3505f731
- (unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x35027fbd
- (void)cut:(id)cut;	// 0x350604d1
- (void)dataSourceUpdated:(id)updated;	// 0x35014ea5
- (void)dealloc;	// 0x3501e4ed
- (void)delete:(id)aDelete;	// 0x350604f9
- (void)deleteBackward:(id)backward;	// 0x3506050d
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x35060521
- (void)deleteForward:(id)forward;	// 0x35060535
- (void)deleteToBeginningOfLine:(id)line;	// 0x35060549
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x3506055d
- (void)deleteToEndOfLine:(id)line;	// 0x35060571
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x35060585
- (void)deleteToMark:(id)mark;	// 0x35060599
- (void)deleteWordBackward:(id)backward;	// 0x350605ad
- (void)deleteWordForward:(id)forward;	// 0x350605c1
- (void)deselectAll;	// 0x35027d6d
- (void)detachRootLayer;	// 0x35062339
- (void)doCommandBySelector:(SEL)selector;	// 0x35062b2d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x3506233d
- (void)drawRect:(CGRect)rect;	// 0x3500f7b1
- (void)drawSingleRect:(CGRect)rect;	// 0x3500f81d
- (id)elementAtPoint:(CGPoint)point;	// 0x350633bd
- (id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;	// 0x350633e1
- (void)executeCoreCommandByName:(const char *)name;	// 0x35060279
- (void)executeCoreCommandBySelector:(SEL)selector;	// 0x3506006d
- (void)finalize;	// 0x3505f689
- (CGRect)firstRectForCharacterRange:(NSRange)characterRange;	// 0x35062481
- (BOOL)hasMarkedText;	// 0x350627f9
- (id)hitTest:(CGPoint)test;	// 0x35021dd1
- (void)ignoreSpelling:(id)spelling;	// 0x350605d5
- (void)indent:(id)indent;	// 0x350605e9
- (void)insertBacktab:(id)backtab;	// 0x350605fd
- (void)insertLineBreak:(id)aBreak;	// 0x35060611
- (void)insertNewline:(id)newline;	// 0x35060625
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x35060639
- (void)insertParagraphSeparator:(id)separator;	// 0x3506064d
- (void)insertTab:(id)tab;	// 0x35060661
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x35060675
- (void)insertText:(id)text;	// 0x3502759d
- (BOOL)isOpaque;	// 0x35060f25
- (void)jumpToSelection:(id)selection;	// 0x35060c01
- (void)keyDown:(id)down;	// 0x350616a5
- (void)keyUp:(id)up;	// 0x35061835
- (void)layout;	// 0x35009761
- (void)layoutIfNeeded;	// 0x3505e735
- (void)layoutToMinimumPageWidth:(float)minimumPageWidth height:(float)height originalPageWidth:(float)width originalPageHeight:(float)height4 maximumShrinkRatio:(float)ratio adjustingViewSize:(BOOL)size;	// 0x35060cd5
- (void)lowercaseWord:(id)word;	// 0x35061d6d
- (BOOL)maintainsInactiveSelection;	// 0x35028305
- (void)makeBaseWritingDirectionNatural:(id)natural;	// 0x35061df5
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x35060689
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x3506069d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x350606b1
- (NSRange)markedRange;	// 0x3506264d
// converted property getter: - (BOOL)markedTextMatchesAreHighlighted;	// 0x35063579
- (void)markedTextUpdate:(id)update;	// 0x35062ae1
- (void)mouseDown:(id)down;	// 0x35061055
- (void)mouseMoved:(id)moved;	// 0x3505e55d
- (void)mouseUp:(id)up;	// 0x350611bd
- (void)moveBackward:(id)backward;	// 0x350606c5
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x350606d9
- (void)moveDown:(id)down;	// 0x350606ed
- (void)moveDownAndModifySelection:(id)selection;	// 0x35060701
- (void)moveForward:(id)forward;	// 0x35060715
- (void)moveForwardAndModifySelection:(id)selection;	// 0x35060729
- (void)moveLeft:(id)left;	// 0x3506073d
- (void)moveLeftAndModifySelection:(id)selection;	// 0x35060751
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x35060765
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x35060779
- (void)moveRight:(id)right;	// 0x3506078d
- (void)moveRightAndModifySelection:(id)selection;	// 0x350607a1
- (void)moveToBeginningOfDocument:(id)document;	// 0x350607b5
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x350607c9
- (void)moveToBeginningOfLine:(id)line;	// 0x350607dd
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x350607f1
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x35060805
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x35060819
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x3506082d
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x35060841
- (void)moveToEndOfDocument:(id)document;	// 0x35060855
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x35060869
- (void)moveToEndOfLine:(id)line;	// 0x3506087d
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x35060891
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x350608a5
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x350608b9
- (void)moveToEndOfSentence:(id)sentence;	// 0x350608cd
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x350608e1
- (void)moveToLeftEndOfLine:(id)line;	// 0x350608f5
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x35060909
- (void)moveToRightEndOfLine:(id)line;	// 0x3506091d
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x35060931
- (void)moveUp:(id)up;	// 0x35060945
- (void)moveUpAndModifySelection:(id)selection;	// 0x35060959
- (void)moveWordBackward:(id)backward;	// 0x3506096d
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x35060981
- (void)moveWordForward:(id)forward;	// 0x35060995
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x350609a9
- (void)moveWordLeft:(id)left;	// 0x350609bd
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x350609d1
- (void)moveWordRight:(id)right;	// 0x350609e5
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x350609f9
- (void)outdent:(id)outdent;	// 0x35060a0d
- (void)pageDown:(id)down;	// 0x35060a21
- (void)pageDownAndModifySelection:(id)selection;	// 0x35060a35
- (void)pageUp:(id)up;	// 0x35060a49
- (void)pageUpAndModifySelection:(id)selection;	// 0x35060a5d
- (void)paste:(id)paste;	// 0x350604e5
- (void)pasteAsPlainText:(id)text;	// 0x35060a71
- (void)reapplyStyles;	// 0x35060ca9
- (id)rectsForTextMatches;	// 0x350635d9
- (BOOL)resignFirstResponder;	// 0x3501fa29
- (void)scrollWheel:(id)wheel;	// 0x35060f8d
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x35060df1
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x35063369
- (void)selectAll;	// 0x350632c9
- (void)selectAll:(id)all;	// 0x35060a85
- (void)selectLine:(id)line;	// 0x35060a99
- (void)selectParagraph:(id)paragraph;	// 0x35060aad
- (void)selectSentence:(id)sentence;	// 0x35060ac1
- (void)selectToMark:(id)mark;	// 0x35060ad5
- (void)selectWord:(id)word;	// 0x35060ae9
- (NSRange)selectedRange;	// 0x350625c5
- (id)selectedString;	// 0x3506333d
- (CGImageRef)selectionImageForcingBlackText:(BOOL)text;	// 0x35063209
- (CGRect)selectionImageRect;	// 0x35063255
- (CGRect)selectionRect;	// 0x35062f91
- (id)selectionTextRects;	// 0x35063005
- (id)selectionView;	// 0x35063205
- (void)setDataSource:(id)source;	// 0x350053dd
- (void)setMark:(id)mark;	// 0x35060afd
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x350628ad
// converted property setter: - (void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;	// 0x35063545
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x34ffec25
- (void)setNeedsLayout:(BOOL)layout;	// 0x35009719
- (void)setNeedsToApplyStyles:(BOOL)applyStyles;	// 0x35060f4d
- (void)setScale:(float)scale;	// 0x35008fad
- (id)string;	// 0x350632f9
- (void)subscript:(id)subscript;	// 0x35060b11
- (void)superscript:(id)superscript;	// 0x35060b25
- (BOOL)supportsTextEncoding;	// 0x35063365
- (void)swapWithMark:(id)mark;	// 0x35060b39
- (void)toggleBold:(id)bold;	// 0x35060bc5
- (void)toggleItalic:(id)italic;	// 0x35060bd9
- (void)toggleUnderline:(id)underline;	// 0x35060bed
- (void)touch:(id)touch;	// 0x35021f75
- (void)transpose:(id)transpose;	// 0x35060b4d
- (void)underline:(id)underline;	// 0x35060b61
- (void)unmarkAllTextMatches;	// 0x350635a5
- (void)unmarkText;	// 0x35062845
- (void)unscript:(id)unscript;	// 0x35060b75
- (void)uppercaseWord:(id)word;	// 0x35061d29
- (void)viewDidMoveToHostWindow;	// 0x35060ca1
- (void)viewDidMoveToWindow;	// 0x35008301
- (void)viewWillDraw;	// 0x3500f549
- (void)viewWillMoveToHostWindow:(id)view;	// 0x35060c9d
- (void)viewWillMoveToWindow:(id)view;	// 0x35060c5d
- (void)willRemoveSubview:(id)subview;	// 0x3501ba01
- (void)yank:(id)yank;	// 0x35060b89
- (void)yankAndSelect:(id)select;	// 0x35060b9d
@end

