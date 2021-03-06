/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFDeviceDriver.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver> {
	CGRect m_canvas;	// 4 = 0x4
	CGRect m_viewBox;	// 20 = 0x14
	CGAffineTransform m_viewBoxTransform;	// 36 = 0x24
	CGAffineTransform m_worldToDeviceTransform;	// 60 = 0x3c
	CGAffineTransform m_combinedTransform;	// 84 = 0x54
}
+ (int)getROP:(id)rop;	// 0x34954349
- (id)initWithCanvas:(CGRect)canvas;	// 0x348cb859
- (id).cxx_construct;	// 0x348cb855
- (int)activateTransform:(CGAffineTransform)transform;	// 0x348cdfd1
- (int)angleArc:(id)arc :(int)arg2 :(int)arg3 :(unsigned long)arg4 :(double)arg5 :(double)arg6;	// 0x34af6fb1
- (int)arc:(id)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x34af6d49
- (int)arcTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x34af6e51
- (int)bezier:(id)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x349a7a11
- (int)bezierTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x349a6c79
- (int)bitBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned long)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x3498f341
- (int)chord:(id)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x34af710d
- (void)concatTransforms;	// 0x348cdaf5
- (id)createBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x34af74e9
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x34955ff9
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x348ce481
- (id)createFont:(int)font;	// 0x348cbcfd
- (id)createFont:(long)font :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x34954d29
- (id)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x34959781
- (id)createHatchBrush:(id)brush :(int)arg2;	// 0x34af74c9
- (id)createNullBrush;	// 0x348cfa69
- (id)createPath;	// 0x348cc431
- (id)createPatternBrush:(id)brush usePaletteForBilevel:(BOOL)bilevel;	// 0x349a7da5
- (id)createPen;	// 0x348cfabd
- (id)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4;	// 0x348cc169
- (id)createRegionWithPath:(id)path;	// 0x349a778d
- (id)createRegionWithRects:(id)rects :(id)arg2;	// 0x3498ecfd
- (id)createSolidBrush:(id)brush;	// 0x348cc335
- (void)dealloc;	// 0x348d0661
- (void)drawBezierPath:(CGPathRef)path dc:(id)dc fill:(BOOL)fill stroke:(BOOL)stroke;	// 0x34954149
- (int)ellipse:(id)ellipse :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x34990a49
- (int)excludeClipRect:(CGRect)rect;	// 0x3495b325
- (int)extTextOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int *)arg10 :(int)arg11;	// 0x3495a629
- (CGRect)getCanvas;	// 0x348cc8b5
- (int)intersectClipRect:(CGRect)rect;	// 0x349599ad
- (int)lineTo:(id)to :(double)arg2 :(double)arg3;	// 0x34959e89
- (int)maskBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned long)arg12 :(CGAffineTransform *)arg13 :(unsigned long)arg14;	// 0x34af7479
- (int)patBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned long)arg6;	// 0x34990b11
- (int)pie:(id)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x349c94d1
- (int)plgBlt:(id)blt :(CGPoint *)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x34af74c5
- (int)polyPolygon:(id)polygon :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x3498ec4d
- (int)polyPolyline:(id)polyline :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x349b5349
- (int)polygon:(id)polygon :(CGPoint *)arg2 :(int)arg3;	// 0x349540ed
- (int)polyline:(id)polyline :(CGPoint *)arg2 :(int)arg3;	// 0x34954825
- (int)rectangle:(id)rectangle :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x3495b4c9
- (int)removeClip;	// 0x348d00b1
- (int)roundRect:(id)rect :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;	// 0x34af7221
- (int)setMetaRgn;	// 0x3498b1e5
- (void)setTransform:(CGAffineTransform)transform;	// 0x3495669d
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x348cd901
- (int)stretchBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x348cebb9
- (int)textOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4;	// 0x349bb215
- (void)updateViewBoxTransform;	// 0x348cda65
@end

