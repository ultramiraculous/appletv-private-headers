/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <UIView.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer, CAShapeLayer;

@interface UIPDFMagnifiedView : UIView {
	CGPoint _position;	// 48 = 0x30
	CGSize _imageSize;	// 56 = 0x38
	CALayer *_glassLayer;	// 64 = 0x40
	CAShapeLayer *_selectionLayer;	// 68 = 0x44
	CAShapeLayer *_leftBar;	// 72 = 0x48
	CALayer *_leftGrabber;	// 76 = 0x4c
	CGSize _controlPointSize;	// 80 = 0x50
	CAShapeLayer *_rightBar;	// 88 = 0x58
	CALayer *_rightGrabber;	// 92 = 0x5c
	CALayer *_imageLayer;	// 96 = 0x60
	CGPoint _touchPoint;	// 100 = 0x64
	unsigned _pageRotation;	// 108 = 0x6c
	CGImageRef _image;	// 112 = 0x70
}
@property(assign, nonatomic) CGImageRef image;	// G=0x34a24ef5; S=0x34a2549d; @synthesize=_image
@property(assign, nonatomic) unsigned pageRotation;	// G=0x34a24ebd; S=0x34a24ecd; @synthesize=_pageRotation
@property(assign, nonatomic) CGPoint touchPoint;	// G=0x34a24edd; S=0x34a253d5; @synthesize=_touchPoint
- (id)initWithFrame:(CGRect)frame loupe:(BOOL)loupe;	// 0x34a258e1
- (void)createGrabbers;	// 0x34a2518d
- (void)dealloc;	// 0x34a24f05
// declared property getter: - (CGImageRef)image;	// 0x34a24ef5
// declared property getter: - (unsigned)pageRotation;	// 0x34a24ebd
- (void)setGrabbersAt:(CGRect)at and:(CGRect)anAnd;	// 0x34a24fc9
// declared property setter: - (void)setImage:(CGImageRef)image;	// 0x34a2549d
// declared property setter: - (void)setPageRotation:(unsigned)rotation;	// 0x34a24ecd
- (void)setSelection:(CGPathRef)selection;	// 0x34a25399
// declared property setter: - (void)setTouchPoint:(CGPoint)point;	// 0x34a253d5
// declared property getter: - (CGPoint)touchPoint;	// 0x34a24edd
@end

