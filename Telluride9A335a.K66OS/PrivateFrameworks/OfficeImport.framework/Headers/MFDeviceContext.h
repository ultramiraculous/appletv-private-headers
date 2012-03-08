/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class MFFont, MFBrush, MFPalette, MFPath, MFPen, MFTransform, NSColorStub;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject <NSCopying> {
@private
	NSObject<MFDeviceDriver> *m_driver;	// 4 = 0x4
	bool m_textUpdateCP;	// 8 = 0x8
	double m_miterLimit;	// 12 = 0xc
	int m_textHorizontalAlign;	// 20 = 0x14
	int m_textVerticalAlign;	// 24 = 0x18
	int m_textDirection;	// 28 = 0x1c
	MFFont *m_font;	// 32 = 0x20
	NSColorStub *m_textColour;	// 36 = 0x24
	int m_textBreakExtra;	// 40 = 0x28
	int m_textBreakCount;	// 44 = 0x2c
	int m_textCharExtra;	// 48 = 0x30
	NSColorStub *m_bkColour;	// 52 = 0x34
	int m_bkMode;	// 56 = 0x38
	CGPoint m_brushOrg;	// 60 = 0x3c
	CGPoint m_penPos;	// 68 = 0x44
	int m_arcDirection;	// 76 = 0x4c
	int m_polyFillMode;	// 80 = 0x50
	MFTransform *m_transform;	// 84 = 0x54
	MFPen *m_pen;	// 88 = 0x58
	MFBrush *m_brush;	// 92 = 0x5c
	MFPalette *m_selectedPalette;	// 96 = 0x60
	int m_rop2;	// 100 = 0x64
	int m_stretchMode;	// 104 = 0x68
	MFPath *m_path;	// 108 = 0x6c
}
+ (id)deviceContextWithDriver:(id)driver;	// 0x353ed6ad
- (id)initWithDriver:(id)driver;	// 0x351bc0bd
- (id)copyWithZone:(NSZone *)zone;	// 0x351c1e75
- (void)dealloc;	// 0x351b81f1
- (int)getArcDirection;	// 0x351c2439
- (id)getBkColour;	// 0x351c23ad
- (int)getBkMode;	// 0x351c23fd
- (id)getBrush;	// 0x351c0e4d
- (CGPoint)getBrushOrg;	// 0x351c240d
- (id)getCurrentTransform;	// 0x351bd759
- (id)getFont;	// 0x351bf755
- (double)getMiterLimit;	// 0x351c22d1
- (id)getPath;	// 0x351c0e25
- (id)getPen;	// 0x351c11e5
- (CGPoint)getPenPosition;	// 0x351c2295
- (int)getPolyFillMode;	// 0x351c0f11
- (int)getRop2;	// 0x351c1049
- (id)getSelectedPalette;	// 0x351c282d
- (int)getStretchBltMode;	// 0x351c2469
- (int)getTextBreakCount;	// 0x351c234d
- (int)getTextBreakExtra;	// 0x351c235d
- (int)getTextCharExtra;	// 0x351c238d
- (id)getTextColour;	// 0x351bfa79
- (int)getTextDirection;	// 0x351c232d
- (int)getTextHorizontalAlign;	// 0x351c22fd
- (bool)getTextUpdateCP;	// 0x351bfc6d
- (int)getTextVerticalAlign;	// 0x351bfa69
- (void)setArcDirection:(int)direction;	// 0x351c2449
- (void)setBkColour:(id)colour;	// 0x351c23bd
- (void)setBkMode:(int)mode;	// 0x351bf345
- (void)setBrush:(id)brush;	// 0x351bfe8d
- (void)setBrushOrg:(CGPoint)org;	// 0x351c2425
- (void)setCurrentTransform:(id)transform;	// 0x351c27ed
- (void)setFont:(id)font;	// 0x351bf291
- (void)setMiterLimit:(double)limit;	// 0x351c22e9
- (void)setPath:(id)path;	// 0x351c2b4d
- (void)setPen:(id)pen;	// 0x351bfffd
- (void)setPenPosition:(CGPoint)position;	// 0x351c22ad
- (void)setPolyFillMode:(int)mode;	// 0x351c2459
- (void)setRop2:(int)a2;	// 0x351c1abd
- (void)setSelectedPalette:(id)palette;	// 0x351c283d
- (void)setStretchBltMode:(int)mode;	// 0x351c2479
- (void)setTextCharExtra:(int)extra;	// 0x351c239d
- (void)setTextColour:(id)colour;	// 0x351bf459
- (void)setTextDirection:(int)direction;	// 0x351c233d
- (void)setTextHorizontalAlign:(int)align;	// 0x351c230d
- (void)setTextJustification:(int)justification :(int)arg2;	// 0x351c236d
- (void)setTextUpdateCP:(bool)cp;	// 0x351c22c1
- (void)setTextVerticalAlign:(int)align;	// 0x351c231d
@end
