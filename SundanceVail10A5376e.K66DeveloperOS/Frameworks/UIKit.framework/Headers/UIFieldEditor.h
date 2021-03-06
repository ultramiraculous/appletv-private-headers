/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"
#import "UIAutoscrollContainer.h"

@class NSString, DOMDocument, UIView, DOMHTMLElement;
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
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x3041b9a9; S=0x3041b9f5; 
@property(assign) BOOL notificationsDisabled;	// G=0x3041b385; S=0x303d58d9; converted property
@property(retain) id style;	// G=0x30304fcd; S=0x30301bdd; converted property
+ (id)activeFieldEditor;	// 0x30343041
+ (id)excludedElementsForHTML;	// 0x3041ba55
+ (void)releaseSharedInstance;	// 0x3029f279
+ (id)sharedFieldEditor;	// 0x30301225
- (id)initWithFrame:(CGRect)frame;	// 0x30301279
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x3051ce9d
- (id)_responderForBecomeFirstResponder;	// 0x3041a87d
- (void)_selectNSRange:(NSRange)range;	// 0x30303111
- (void)_setTextElementAttributedText:(id)text;	// 0x3041aca9
- (void)_setTextElementString:(id)string;	// 0x30301d45
- (void)_setTextElementStyle:(id)style;	// 0x30301c65
- (id)_textSelectingContainer;	// 0x3030eedd
- (id)attributedText;	// 0x3041aa85
- (id)automaticallySelectedOverlay;	// 0x3038330d
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x3041b9a9
- (void)autoscrollWillNotStart;	// 0x3041b9a5
- (void)becomeFieldEditorForView:(id)view;	// 0x303016bd
- (void)beginSelectionChange;	// 0x30302fa5
- (CGRect)caretRect;	// 0x3041bb7d
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x30305bd9
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x3041a88d
- (CGRect)contentFrameForView:(id)view;	// 0x3041ba31
- (CGSize)contentSize;	// 0x3041b029
- (id)customOverlayContainer;	// 0x30383441
- (void)dealloc;	// 0x303d58f1
- (void)deleteBackward;	// 0x3041a9b5
- (void)disableClearsOnInsertion;	// 0x30375ac1
- (BOOL)hasMarkedText;	// 0x3041b189
- (id)interactionAssistant;	// 0x30301bb5
- (BOOL)isEditing;	// 0x30375db9
- (BOOL)isInsideRichlyEditableTextWidget;	// 0x30339761
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x30342e01
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x3041a8fd
- (BOOL)keyboardInputChanged:(id)changed;	// 0x3033b011
- (void)keyboardInputChangedSelection:(id)selection;	// 0x3030f57d
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x3041a961
- (void)mouseDown:(GSEventRef)down;	// 0x3041b1bd
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3041b21d
- (BOOL)mouseEventsChangeSelection;	// 0x3041b399
- (void)mouseUp:(GSEventRef)up;	// 0x3041b27d
// converted property getter: - (BOOL)notificationsDisabled;	// 0x3041b385
- (id)proxiedView;	// 0x3030d625
- (BOOL)resignFirstResponder;	// 0x30344d75
- (void)resumeWithNotification:(id)notification;	// 0x3041b2fd
- (void)revealSelection;	// 0x30304659
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x30304695
- (void)scrollToMakeInlineHoleVisible;	// 0x3033abf9
- (int)scrollXOffset;	// 0x30344d1d
- (int)scrollYOffset;	// 0x30344d49
- (void)selectAll;	// 0x3041a835
- (void)selectionChanged;	// 0x3030333d
- (NSRange)selectionRange;	// 0x3037545d
- (id)selectionView;	// 0x3041b39d
- (void)setAttributedText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x3041aee1
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x3041b9f5
- (void)setBaseWritingDirection:(int)direction;	// 0x30304f51
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x30371325
- (void)setFrame:(CGRect)frame;	// 0x3030152d
// converted property setter: - (void)setNotificationsDisabled:(BOOL)disabled;	// 0x303d58d9
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x30302971
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x30302995
- (void)setSelection:(NSRange)selection;	// 0x30302f45
// converted property setter: - (void)setStyle:(id)style;	// 0x30301bdd
- (void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x30302169
- (void)setTextSelectionBehavior:(int)behavior;	// 0x30302a25
- (id)sizeStyleForRect:(CGRect)rect;	// 0x30302d61
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x3041b3c5
// converted property getter: - (id)style;	// 0x30304fcd
- (id)text;	// 0x30302e15
- (id)textColorForCaretSelection;	// 0x3041aa21
- (id)textInputTraits;	// 0x30301645
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3041b2ed
- (void)updateAutoscroll:(id)autoscroll;	// 0x3041b5c5
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x30375949
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x3041b0a9
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x3037569d
- (void)webViewDidChange:(id)webView;	// 0x3033a155
@end

