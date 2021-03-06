/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer, UIPDFPageView;

@interface UIPDFPageContentDelegate : NSObject {
	UIPDFPageView *_view;	// 4 = 0x4
	CGRect _bounds;	// 8 = 0x8
	CGAffineTransform _transform;	// 24 = 0x18
	CGColorRef _white;	// 48 = 0x30
	CGColorRef _highlightColor;	// 52 = 0x34
	CALayer *_owner;	// 56 = 0x38
	CGRect _box;	// 60 = 0x3c
	unsigned _pageRotation;	// 76 = 0x4c
}
@property(assign) CGRect box;	// G=0x307ed0a1; S=0x307ed061; @synthesize=_box
@property(assign) CGColorRef highlightColor;	// G=0x307ecfc1; S=0x307ecfd1; @synthesize=_highlightColor
@property(assign) CALayer *owner;	// G=0x307ed001; S=0x307ed011; @synthesize=_owner
@property(assign) unsigned pageRotation;	// G=0x307ecfe1; S=0x307ecff1; @synthesize=_pageRotation
@property(readonly, assign) CGAffineTransform transform;	// G=0x307ed0c5; @synthesize=_transform
@property(assign) UIPDFPageView *view;	// G=0x307ecfa1; S=0x307ecfb1; @synthesize=_view
- (void)addRect:(CGRect)rect toPath:(CGPathRef)path transform:(CGAffineTransform *)transform view:(id)view owner:(id)owner;	// 0x307ed299
// declared property getter: - (CGRect)box;	// 0x307ed0a1
- (void)computeTransform;	// 0x307ed851
- (void)dealloc;	// 0x307ed021
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x307ed721
- (void)drawSelectionLayer:(id)layer inContext:(CGContextRef)context;	// 0x307ed0e9
- (void)drawSelectionLayerBlockMode:(id)mode inContext:(CGContextRef)context;	// 0x307ed5f1
// declared property getter: - (CGColorRef)highlightColor;	// 0x307ecfc1
// declared property getter: - (id)owner;	// 0x307ed001
// declared property getter: - (unsigned)pageRotation;	// 0x307ecfe1
// declared property setter: - (void)setBox:(CGRect)box;	// 0x307ed061
// declared property setter: - (void)setHighlightColor:(CGColorRef)color;	// 0x307ecfd1
// declared property setter: - (void)setOwner:(id)owner;	// 0x307ed011
// declared property setter: - (void)setPageRotation:(unsigned)rotation;	// 0x307ecff1
// declared property setter: - (void)setView:(id)view;	// 0x307ecfb1
// declared property getter: - (CGAffineTransform)transform;	// 0x307ed0c5
// declared property getter: - (id)view;	// 0x307ecfa1
@end

