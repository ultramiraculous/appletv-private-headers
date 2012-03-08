/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UITextInput.h"

@class UIResponder, UITextRange, UIView, DOMRange;
@protocol UITextSelection, UITextSelectingContainer;

@protocol UITextSelection <UITextInput>
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
@optional
@property(assign, nonatomic) int selectionGranularity;
@required
// declared property getter: - (BOOL)isEditable;
// declared property getter: - (BOOL)isEditing;
- (id)rectsForRange:(id)range;
@optional
// declared property getter: - (int)selectionGranularity;
// declared property setter: - (void)setSelectionGranularity:(int)granularity;
@end

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject {
@private
	UIResponder<UITextSelection> *_document;	// 4 = 0x4
	int _granularity;	// 8 = 0x8
	UITextRange *_selectedRange;	// 12 = 0xc
	UITextRange *_base;	// 16 = 0x10
	UITextRange *_initialExtent;	// 20 = 0x14
	BOOL _isCommitting;	// 24 = 0x18
}
@property(retain, nonatomic) UITextRange *base;	// G=0x30379411; S=0x30166a35; @synthesize=_base
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *document;	// G=0x30112989; @synthesize=_document
@property(readonly, assign, nonatomic, getter=_domRange) DOMRange *domRange;	// G=0x3012d519; 
@property(assign, nonatomic) int granularity;	// G=0x3012db85; S=0x3012d509; @synthesize=_granularity
@property(retain, nonatomic) UITextRange *initialExtent;	// G=0x30379421; S=0x30166a59; @synthesize=_initialExtent
@property(readonly, assign, nonatomic) BOOL isCommitting;	// G=0x30112aa1; @synthesize=_isCommitting
@property(retain, nonatomic) UITextRange *selectedRange;	// G=0x30113e49; S=0x30112a7d; @synthesize=_selectedRange
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *viewAsContainer;	// G=0x3012db5d; 
- (id)initWithDocument:(id)document;	// 0x301128e5
// declared property getter: - (id)_domRange;	// 0x3012d519
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x3037835d
- (void)alterSelection:(CGPoint)selection granularity:(int)granularity;	// 0x303785e9
// declared property getter: - (id)base;	// 0x30379411
- (CGRect)caretRect;	// 0x30113ed5
- (CGRect)caretRectAtEndOfDocument;	// 0x303780f5
- (void)clearRangedSelectionInitialExtent;	// 0x303788fd
- (void)clearSelection;	// 0x303782e1
- (CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;	// 0x303781a1
- (void)collapseSelection;	// 0x303782f5
- (void)commit;	// 0x3012d909
- (void)dealloc;	// 0x301669c9
// declared property getter: - (id)document;	// 0x30112989
// declared property getter: - (int)granularity;	// 0x3012db85
- (BOOL)hasEditableSelection;	// 0x301c7d9d
// declared property getter: - (id)initialExtent;	// 0x30379421
// declared property getter: - (BOOL)isCommitting;	// 0x30112aa1
- (void)moveCaretToBoundaryOfWhitespaceOrLine;	// 0x3012d62d
- (unsigned)offsetInMarkedText;	// 0x30378261
- (BOOL)pointAtEndOfLine:(CGPoint)line;	// 0x30378781
- (BOOL)pointAtStartOfLine:(CGPoint)line;	// 0x3037870d
// declared property getter: - (id)selectedRange;	// 0x30113e49
- (id)selectedText;	// 0x3037815d
- (void)selectionChanged;	// 0x30112949
- (id)selectionRects;	// 0x303780b1
// declared property setter: - (void)setBase:(id)base;	// 0x30166a35
// declared property setter: - (void)setGranularity:(int)granularity;	// 0x3012d509
// declared property setter: - (void)setInitialExtent:(id)extent;	// 0x30166a59
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x303787f5
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x30378891
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x30378825
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x30378ead
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x303789e9
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x3037897d
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x30378911
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x30378f71
// declared property setter: - (void)setSelectedRange:(id)range;	// 0x30112a7d
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x30378ed1
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x3012d299
- (void)smartExtendRangedSelection:(int)selection downstream:(BOOL)downstream;	// 0x30379095
// declared property getter: - (id)viewAsContainer;	// 0x3012db5d
- (id)wordContainingCaretSelection;	// 0x3018e5ad
@end
