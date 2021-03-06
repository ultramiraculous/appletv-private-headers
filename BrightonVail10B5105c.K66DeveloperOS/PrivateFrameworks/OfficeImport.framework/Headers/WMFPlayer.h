/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFGraphicsDevice;

@interface WMFPlayer : NSObject {
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	long m_records;	// 8 = 0x8
	unsigned short m_windowsVersion;	// 12 = 0xc
	BOOL m_boundsSet;	// 14 = 0xe
	BOOL m_ignoreSetWindowOrg;	// 15 = 0xf
}
@property(readonly, assign) long records;	// G=0x37b08281; converted property
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x37b08be5
+ (CGRect)boundsInPoints:(id)points;	// 0x37b08ced
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x37a48ecd
+ (CGRect)windowBounds:(id)bounds;	// 0x37b08a55
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x379f5c39
- (void)dealloc;	// 0x379f7a05
- (void)done;	// 0x379f7965
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x37a78e91
- (int)play:(unsigned)play :(const char *)arg2;	// 0x379f62b1
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x37b083d1
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x37b08295
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x37b08489
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x379f6b41
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x37a64afd
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x379f7a59
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x37a58ab9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x37b088a9
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x379f6e35
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x37a78e45
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x379f7571
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x37a649bd
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x379f8e8d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x37a65a8d
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x37a58439
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x37a58619
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x37b08945
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x37b0898d
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x379f5ed1
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x37a4ff45
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x37b089ed
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x37a58541
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x37a584d9
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x37b086a5
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x37b08659
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x37b08a21
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x37a64799
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x37a78d11
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x37a4fd65
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x379f6fe9
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x379f771d
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x37a64869
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x37a585ad
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x37b08871
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x379f93bd
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x37b08541
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x379f7efd
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x37a65b91
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x37b085f1
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x37a69dad
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x379f6dd1
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x37a58cbd
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x379f8da9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x379f7e85
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x379f8e4d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x37b0878d
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x379f6f79
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x379f6f41
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x379f974d
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x379f8bfd
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x37a65af9
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x379f8d05
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x379f8cb9
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x37b086f1
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x37b0873d
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x379f69b9
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x379f6959
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x379f978d
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x37a5e065
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x37b08291
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x379f7a55
// converted property getter: - (long)records;	// 0x37b08281
@end

