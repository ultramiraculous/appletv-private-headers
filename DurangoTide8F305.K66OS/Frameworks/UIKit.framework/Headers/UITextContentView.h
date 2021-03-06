/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextInputTraits.h"
#import "UITextSelectingContainer.h"

@class DOMHTMLElement, WebFrame, UITextInteractionAssistant, UITextSelectionView, UIColor, UIFont, UIWebDocumentView, NSString, UIDelayedAction;
@protocol UITextContentViewDelegate, UITextSelectingContent;

@interface UITextContentView : UIView <UITextSelectingContainer, UITextInputTraits> {
@private
	id m_delegate;	// 44 = 0x2c
	WebFrame *m_frame;	// 48 = 0x30
	DOMHTMLElement *m_body;	// 52 = 0x34
	int m_marginTop;	// 56 = 0x38
	UIDelayedAction *m_scrollToVisibleTimer;	// 60 = 0x3c
	UIEdgeInsets m_selectionInset;	// 64 = 0x40
	float m_bottomBufferHeight;	// 80 = 0x50
	BOOL m_editable;	// 84 = 0x54
	BOOL m_editing;	// 85 = 0x55
	BOOL m_becomesEditableWithGestures;	// 86 = 0x56
	BOOL m_becomingFirstResponder;	// 87 = 0x57
	BOOL m_reentrancyGuard;	// 88 = 0x58
	BOOL m_scrollsSelectionOnWebDocumentChanges;	// 89 = 0x59
	BOOL m_hasExplicitTextAlignment;	// 90 = 0x5a
	UITextInteractionAssistant *m_interactionAssistant;	// 92 = 0x5c
	UITextSelectionView *m_selectionView;	// 96 = 0x60
	UIWebDocumentView *m_webView;	// 100 = 0x64
	UIFont *m_font;	// 104 = 0x68
	UIColor *m_textColor;	// 108 = 0x6c
	int m_textAlignment;	// 112 = 0x70
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x321cd241; S=0x3200657d; converted property
@property(assign) float bottomBufferHeight;	// G=0x321cd261; S=0x320b16c5; converted property
@property(assign) BOOL caretBlinks;	// G=0x321cd22d; S=0x321cd229; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x32005ef9; 
@property(assign) unsigned dataDetectorTypes;	// G=0x321cd4cd; S=0x32005e21; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x32006439; S=0x320066c5; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x32005ee9; S=0x321ce04d; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x320bc159; S=0x320b1785; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x321cd611; S=0x32005fc9; 
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x320b1889; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x321cd251; S=0x321cd521; converted property
@property(assign) CGPoint offset;	// G=0x321cd28d; S=0x321cd289; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x321cd2a9; S=0x321cd2a5; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x32006741; S=0x32005cf1; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x321ce7f5; S=0x321ce23d; 
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x320988b5; S=0x32097f29; @synthesize=m_selectionInset
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x32097f55; 
@property(assign) BOOL selectionVisible;	// G=0x321cd225; S=0x321cd221; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x321cd281; S=0x321cd27d; converted property
@property(copy, nonatomic) NSString *text;	// G=0x32004f8d; S=0x321ce2e9; 
@property(assign, nonatomic) int textAlignment;	// G=0x321cd231; S=0x321cd549; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x320baf41; S=0x321cd59d; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x3200658d; converted property
- (id)initWithCoder:(id)coder;	// 0x321cde99
- (id)initWithFrame:(CGRect)frame;	// 0x32004d45
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x32097ec5
- (id)_automationValue;	// 0x321cd2e9
- (void)_didScroll;	// 0x320c0799
- (void)_hideSelectionCommands;	// 0x321cd9f1
- (id)_keyboardResponder;	// 0x320b165d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x321cde4d
- (void)_scrollViewDidEndDecelerating;	// 0x320c0ad1
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x320c0acd
- (void)_scrollViewWillBeginDragging;	// 0x320c0ac9
- (void)_setLtoRTextDirection:(id)direction;	// 0x321cd9b1
- (void)_setRtoLTextDirection:(id)direction;	// 0x321cd9d1
- (id)automaticallySelectedOverlay;	// 0x320b55c1
- (BOOL)becomeFirstResponder;	// 0x320b13cd
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x321cd241
- (void)beginSelectionChange;	// 0x320b1aed
// converted property getter: - (float)bottomBufferHeight;	// 0x321cd261
- (BOOL)canBecomeFirstResponder;	// 0x320b15fd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x320bdb31
- (BOOL)canResignFirstResponder;	// 0x320c0b0d
- (void)cancelAutoscroll;	// 0x321cdbc5
- (void)cancelDataDetectorsWithWebLock;	// 0x321cebf9
- (void)cancelInteractionWithLink;	// 0x321cd411
// converted property getter: - (BOOL)caretBlinks;	// 0x321cd22d
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x321cea31
- (unsigned short)characterBeforeCaretSelection;	// 0x321cda89
- (void)clearScrollToVisibleTimer;	// 0x321cd669
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x321ce9cd
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x32005259
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x321cea89
// declared property getter: - (id)content;	// 0x32005ef9
- (id)contentAsHTMLString;	// 0x32006751
- (void)copy:(id)copy;	// 0x321cd971
- (void)cut:(id)cut;	// 0x321cd991
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x321cd4cd
- (void)dealloc;	// 0x321cec35
// declared property getter: - (id)delegate;	// 0x32006439
- (void)detachInteractionAssistant;	// 0x321cdc4d
- (void)detachSelectionView;	// 0x321cdc6d
- (void)didMoveToSuperview;	// 0x320066d5
- (void)displayScrollerIndicators;	// 0x321cd285
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x321cd841
- (void)encodeWithCoder:(id)coder;	// 0x321cdcf5
- (void)endSelectionChange;	// 0x320b1eb9
- (void)ensureSelection;	// 0x320b17fd
// declared property getter: - (id)font;	// 0x321cd611
- (id)fontForCaretSelection;	// 0x321cda69
- (void)forwardInvocation:(id)invocation;	// 0x3200660d
- (BOOL)hasMarkedText;	// 0x321cdb29
- (BOOL)hasSelection;	// 0x321cdc05
- (BOOL)hasText;	// 0x321cd579
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x320b0815
- (void)insertText:(id)text;	// 0x321cdb6d
// declared property getter: - (id)interactionAssistant;	// 0x320b1889
// declared property getter: - (BOOL)isEditable;	// 0x32005ee9
// declared property getter: - (BOOL)isEditing;	// 0x320bc159
- (BOOL)isFirstResponder;	// 0x32098151
- (BOOL)isInteractingWithLink;	// 0x321cd3cd
- (BOOL)isSMSTextView;	// 0x32098015
- (void)keyboardDidShow:(id)keyboard;	// 0x32098d61
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x320b2371
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x320b8169
- (BOOL)keyboardInputChanged:(id)changed;	// 0x320b269d
- (void)keyboardInputChangedSelection:(id)selection;	// 0x320b1671
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x321ce6bd
// converted property getter: - (int)marginTop;	// 0x321cd251
- (id)markedText;	// 0x321cdb09
- (id)methodSignatureForSelector:(SEL)selector;	// 0x320065c9
- (BOOL)mightHaveLinks;	// 0x321cd4b1
// converted property getter: - (CGPoint)offset;	// 0x321cd28d
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x321cdb4d
- (void)paste:(id)paste;	// 0x321cd951
- (void)performBecomeEditableTasks;	// 0x320b1795
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x32098059
- (void)promptForReplace:(id)replace;	// 0x321cd8b1
- (void)recalculateStyle;	// 0x32006075
- (CGRect)rectContainingCaretSelection;	// 0x321ce985
- (CGRect)rectForScrollToVisible;	// 0x321ce821
- (CGRect)rectForSelection:(NSRange)selection;	// 0x321ce8b1
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x32005db5
- (void)removeFromSuperview;	// 0x321cdc8d
- (void)replace:(id)replace;	// 0x321cd8e1
- (void)resetDataDetectorsResultsWithWebLock;	// 0x321ceb55
- (BOOL)resignFirstResponder;	// 0x320a025d
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x321ce73d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x320b251d
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x32097fd1
- (void)scrollToVisibleTimerAction;	// 0x321cd641
- (id)scrollView;	// 0x32006531
// converted property getter: - (BOOL)scrollingEnabled;	// 0x321cd2a9
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x32006741
- (void)select:(id)select;	// 0x321cd931
- (void)selectAll;	// 0x321cd88d
- (void)selectAll:(id)all;	// 0x321cd911
// declared property getter: - (NSRange)selectedRange;	// 0x321ce7f5
- (id)selectedText;	// 0x321cdb8d
- (void)selectionChanged;	// 0x320b1761
- (CGRect)selectionClipRect;	// 0x320b1899
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x320988b5
- (NSRange)selectionRange;	// 0x321ce9a9
- (id)selectionRectsForRange:(id)range;	// 0x321cee01
// declared property getter: - (id)selectionView;	// 0x32097f55
// converted property getter: - (BOOL)selectionVisible;	// 0x321cd225
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x321cd2ad
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x321cd2a1
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x3200657d
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x320b16c5
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x321cd229
- (void)setContentToHTMLString:(id)htmlstring;	// 0x321ce4e9
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x32005e21
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x320066c5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x321ce04d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x320b1785
- (void)setEmbeddedEditingMode:(BOOL)mode;	// 0x32005c99
// declared property setter: - (void)setFont:(id)font;	// 0x32005fc9
- (void)setFrame:(CGRect)frame;	// 0x32004da9
// converted property setter: - (void)setMarginTop:(int)top;	// 0x321cd521
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x321cd289
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x321cd2b1
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x321cd2a5
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x32005cf1
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x321ce23d
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x32097f29
- (void)setSelectionToEnd;	// 0x321cd781
- (void)setSelectionToStart;	// 0x321ce5f9
// converted property setter: - (void)setSelectionVisible:(BOOL)visible;	// 0x321cd221
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x321ce93d
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x321cd27d
// declared property setter: - (void)setText:(id)text;	// 0x321ce2e9
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x321cd549
// declared property setter: - (void)setTextColor:(id)color;	// 0x321cd59d
- (BOOL)shouldStartDataDetectors;	// 0x321cd4ed
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x321cd281
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x321cdbe5
- (void)startDataDetectorsWithWebLock;	// 0x321ceb91
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x321cd471
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x321cd3f1
- (id)styleString;	// 0x320056a5
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x320be2a1
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x321cd491
// declared property getter: - (id)text;	// 0x32004f8d
// declared property getter: - (int)textAlignment;	// 0x321cd231
// declared property getter: - (id)textColor;	// 0x320baf41
- (id)textInputTraits;	// 0x32006695
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x32005a81
- (void)touchScrollToVisibleTimer;	// 0x321cd6a5
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x321cd6c5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x321cd2bd
- (id)undoManager;	// 0x321cda11
- (id)undoManagerForWebView:(id)webView;	// 0x321cda49
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x321cd451
- (void)updateSelection;	// 0x321cdc29
- (void)updateWebViewObjects;	// 0x32005b65
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x321cd431
- (CGRect)visibleRect;	// 0x321cf05d
- (CGRect)visibleTextRect;	// 0x321cefb9
// converted property getter: - (id)webView;	// 0x3200658d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x321cd2fd
- (void)webViewDidChange:(id)webView;	// 0x320060e1
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x321cd3a9
- (id)wordContainingCaretSelection;	// 0x321cdae9
- (id)wordInRange:(id)range;	// 0x321cdaa9
- (id)wordRangeContainingCaretSelection;	// 0x321cdac9
@end

