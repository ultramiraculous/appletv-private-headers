/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UITextSelection, UIWebDocumentView;
@protocol UIWebSelectionBlock;

__attribute__((visibility("hidden")))
@interface UIWebSelection : NSObject {
@private
	UIWebDocumentView *_documentView;	// 4 = 0x4
	id<UIWebSelectionBlock> _base;	// 8 = 0x8
	id<UIWebSelectionBlock> _extent;	// 12 = 0xc
	CGSize _desiredSize;	// 16 = 0x10
	UITextSelection *_textSelection;	// 24 = 0x18
}
@property(retain, nonatomic) id<UIWebSelectionBlock> base;	// G=0x352097b9; S=0x35209761; @synthesize=_base
@property(readonly, assign, nonatomic) CGRect boundingRect;	// G=0x3538ef55; @dynamic
@property(assign, nonatomic) CGSize desiredSize;	// G=0x35209745; S=0x353912b5; @synthesize=_desiredSize
@property(readonly, assign, nonatomic) UIWebDocumentView *documentView;	// G=0x352094c1; @synthesize=_documentView
@property(retain, nonatomic) id<UIWebSelectionBlock> extent;	// G=0x353912a5; S=0x35209785; @synthesize=_extent
@property(readonly, assign, nonatomic, getter=isTextOnly) BOOL textOnly;	// G=0x35390a01; 
@property(readonly, assign, nonatomic) UITextSelection *textSelection;	// G=0x352097a9; @synthesize=_textSelection
@property(readonly, assign, nonatomic) BOOL valid;	// G=0x35209881; 
- (id)initWithDocumentView:(id)documentView;	// 0x35208e4d
- (void)adjustSelectionFromPoint:(CGPoint)point towardsPoint:(CGPoint)point2 withNewRect:(CGRect)newRect;	// 0x3538f215
- (void)applySelectionToWebDocumentView;	// 0x35390fc5
- (id)asDomRange;	// 0x35390eed
// declared property getter: - (id)base;	// 0x352097b9
- (id)blockAtPoint:(CGPoint)point;	// 0x35209245
- (BOOL)blockContainsPoint:(CGPoint)point;	// 0x35391001
- (id)blockOfSameWidthAtPoint:(CGPoint)point;	// 0x3538f339
// declared property getter: - (CGRect)boundingRect;	// 0x3538ef55
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x3538ef7d
- (CGRect)boundingTextSelectionRect;	// 0x35390bfd
- (CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int *)position;	// 0x35390c25
- (void)dealloc;	// 0x352098a1
- (id)description;	// 0x353910d9
// declared property getter: - (CGSize)desiredSize;	// 0x35209745
- (float)distanceBetweenFirstRect:(CGRect)rect second:(CGRect)second edge:(int)edge;	// 0x3538f431
// declared property getter: - (id)documentView;	// 0x352094c1
- (id)domDocument;	// 0x3538f11d
- (id)duplicate;	// 0x353908d1
- (id)elementAtPoint:(CGPoint)point;	// 0x3538f2a5
// declared property getter: - (id)extent;	// 0x353912a5
- (void)growFromEdge:(int)edge;	// 0x3538f4b1
- (void)growSelectionTowardsPoint:(CGPoint)point;	// 0x3538ff25
- (BOOL)isEqual:(id)equal;	// 0x3538fdd1
- (BOOL)isEqualToSelection:(id)selection;	// 0x353911e1
// declared property getter: - (BOOL)isTextOnly;	// 0x35390a01
- (void)moveEdge:(int)edge outwards:(BOOL)outwards;	// 0x3538fefd
- (void)selectionChanged;	// 0x35390e3d
// declared property setter: - (void)setBase:(id)base;	// 0x35209761
// declared property setter: - (void)setDesiredSize:(CGSize)size;	// 0x353912b5
// declared property setter: - (void)setExtent:(id)extent;	// 0x35209785
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x35208ee5
- (void)shrinkFromEdge:(int)edge;	// 0x3538f921
- (void)shrinkSelectionFromPoint:(CGPoint)point towardsPoint:(CGPoint)point2 withNewRect:(CGRect)newRect;	// 0x35390431
- (id)textRepresentation;	// 0x3538f145
// declared property getter: - (id)textSelection;	// 0x352097a9
- (id)textSelectionRects;	// 0x35390a5d
- (BOOL)tryToShrinkToBaseAndExtent;	// 0x35390299
- (void)useBlock;	// 0x35390a31
// declared property getter: - (BOOL)valid;	// 0x35209881
- (id)webArchive;	// 0x3538f18d
- (id)webFrame;	// 0x3538f0f5
- (id)webView;	// 0x3538f0cd
@end

