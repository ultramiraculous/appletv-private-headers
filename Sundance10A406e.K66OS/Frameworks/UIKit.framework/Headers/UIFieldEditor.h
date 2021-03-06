/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"
#import "UIAutoscrollContainer.h"

@class NSString, UIView, DOMDocument, DOMHTMLElement;
@protocol UITextInput;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
	DOMDocument *_document;	// 612 = 0x264
	DOMHTMLElement *_textElement;	// 616 = 0x268
	DOMHTMLElement *_sizeElement;	// 620 = 0x26c
	NSString *_currentStyle;	// 624 = 0x270
	UIView<UITextInput> *_proxiedView;	// 628 = 0x274
	unsigned _baseWritingDirectionIsRTL : 1;	// 632 = 0x278
	unsigned _changingView : 1;	// 632 = 0x278
	unsigned _disableNotifications : 1;	// 632 = 0x278
	unsigned _delegateRespondsToFieldEditorDidChange : 1;	// 632 = 0x278
	unsigned _delegateRespondsToShouldInsertText : 1;	// 632 = 0x278
	unsigned _delegateRespondsToShouldReplaceWithText : 1;	// 632 = 0x278
	unsigned _fieldEditorReentrancyGuard : 1;	// 632 = 0x278
	unsigned _clearOnDelete : 1;	// 632 = 0x278
}
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x30ab5cd1; S=0x30ab5d1d; 
@property(assign) BOOL notificationsDisabled;	// G=0x30ab56ad; S=0x30a6f61d; converted property
@property(retain) id style;	// G=0x3099e7bd; S=0x3099b3d5; converted property
+ (id)activeFieldEditor;	// 0x309dc941
+ (id)excludedElementsForHTML;	// 0x30ab5d7d
+ (void)releaseSharedInstance;	// 0x30938b79
+ (id)sharedFieldEditor;	// 0x3099aa1d
- (id)initWithFrame:(CGRect)frame;	// 0x3099aa71
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x30bb7da5
- (id)_responderForBecomeFirstResponder;	// 0x30ab4ba5
- (void)_selectNSRange:(NSRange)range;	// 0x3099c909
- (void)_setTextElementAttributedText:(id)text;	// 0x30ab4fd1
- (void)_setTextElementString:(id)string;	// 0x3099b53d
- (void)_setTextElementStyle:(id)style;	// 0x3099b45d
- (id)_textSelectingContainer;	// 0x309a8705
- (id)attributedText;	// 0x30ab4dad
- (id)automaticallySelectedOverlay;	// 0x30a1cfa5
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x30ab5cd1
- (void)autoscrollWillNotStart;	// 0x30ab5ccd
- (void)becomeFieldEditorForView:(id)view;	// 0x3099aeb5
- (void)beginSelectionChange;	// 0x3099c7a5
- (CGRect)caretRect;	// 0x30ab5ea5
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x3099f3cd
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x30ab4bb5
- (CGRect)contentFrameForView:(id)view;	// 0x30ab5d59
- (CGSize)contentSize;	// 0x30ab5351
- (id)customOverlayContainer;	// 0x30a1d0d9
- (void)dealloc;	// 0x30a6f635
- (void)deleteBackward;	// 0x30ab4cdd
- (void)disableClearsOnInsertion;	// 0x30a0f481
- (BOOL)hasMarkedText;	// 0x30ab54b1
- (id)interactionAssistant;	// 0x3099b3ad
- (BOOL)isEditing;	// 0x30a0f76d
- (BOOL)isInsideRichlyEditableTextWidget;	// 0x309d3079
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x309dc701
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x30ab4c25
- (BOOL)keyboardInputChanged:(id)changed;	// 0x309d4931
- (void)keyboardInputChangedSelection:(id)selection;	// 0x309a8da5
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x30ab4c89
- (void)mouseDown:(GSEventRef)down;	// 0x30ab54e5
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30ab5545
- (BOOL)mouseEventsChangeSelection;	// 0x30ab56c1
- (void)mouseUp:(GSEventRef)up;	// 0x30ab55a5
// converted property getter: - (BOOL)notificationsDisabled;	// 0x30ab56ad
- (id)proxiedView;	// 0x309a6e4d
- (BOOL)resignFirstResponder;	// 0x309de67d
- (void)resumeWithNotification:(id)notification;	// 0x30ab5625
- (void)revealSelection;	// 0x3099de4d
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x3099de89
- (void)scrollToMakeInlineHoleVisible;	// 0x309d4519
- (int)scrollXOffset;	// 0x309de625
- (int)scrollYOffset;	// 0x309de651
- (void)selectAll;	// 0x30ab4b5d
- (void)selectionChanged;	// 0x3099cb35
- (NSRange)selectionRange;	// 0x30a0ee1d
- (id)selectionView;	// 0x30ab56c5
- (void)setAttributedText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x30ab5209
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x30ab5d1d
- (void)setBaseWritingDirection:(int)direction;	// 0x3099e741
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x30a0acdd
- (void)setFrame:(CGRect)frame;	// 0x3099ad25
// converted property setter: - (void)setNotificationsDisabled:(BOOL)disabled;	// 0x30a6f61d
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x3099c169
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x3099c18d
- (void)setSelection:(NSRange)selection;	// 0x3099c745
// converted property setter: - (void)setStyle:(id)style;	// 0x3099b3d5
- (void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x3099b965
- (void)setTextSelectionBehavior:(int)behavior;	// 0x3099c221
- (id)sizeStyleForRect:(CGRect)rect;	// 0x3099c55d
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x30ab56ed
// converted property getter: - (id)style;	// 0x3099e7bd
- (id)text;	// 0x3099c615
- (id)textColorForCaretSelection;	// 0x30ab4d49
- (id)textInputTraits;	// 0x3099ae3d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30ab5615
- (void)updateAutoscroll:(id)autoscroll;	// 0x30ab58ed
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x30a0f309
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x30ab53d1
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x30a0f059
- (void)webViewDidChange:(id)webView;	// 0x309d3a75
@end

