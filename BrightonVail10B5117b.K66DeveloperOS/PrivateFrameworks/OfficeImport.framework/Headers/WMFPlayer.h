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
@property(readonly, assign) long records;	// G=0x34c3f281; converted property
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x34c3fbe5
+ (CGRect)boundsInPoints:(id)points;	// 0x34c3fced
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x34b7fecd
+ (CGRect)windowBounds:(id)bounds;	// 0x34c3fa55
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x34b2cc39
- (void)dealloc;	// 0x34b2ea05
- (void)done;	// 0x34b2e965
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x34bafe91
- (int)play:(unsigned)play :(const char *)arg2;	// 0x34b2d2b1
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x34c3f3d1
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x34c3f295
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x34c3f489
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34b2db41
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x34b9bafd
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34b2ea59
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x34b8fab9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x34c3f8a9
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34b2de35
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x34bafe45
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x34b2e571
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x34b9b9bd
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x34b2fe8d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x34b9ca8d
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x34b8f439
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x34b8f619
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x34c3f945
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x34c3f98d
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x34b2ced1
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x34b86f45
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x34c3f9ed
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x34b8f541
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x34b8f4d9
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x34c3f6a5
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x34c3f659
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x34c3fa21
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x34b9b799
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x34bafd11
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x34b86d65
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x34b2dfe9
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x34b2e71d
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x34b9b869
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x34b8f5ad
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x34c3f871
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x34b303bd
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x34c3f541
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x34b2eefd
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x34b9cb91
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x34c3f5f1
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x34ba0dad
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x34b2ddd1
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x34b8fcbd
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x34b2fda9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x34b2ee85
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x34b2fe4d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x34c3f78d
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x34b2df79
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x34b2df41
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x34b3074d
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x34b2fbfd
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x34b9caf9
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x34b2fd05
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x34b2fcb9
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x34c3f6f1
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x34c3f73d
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x34b2d9b9
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x34b2d959
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x34b3078d
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x34b95065
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x34c3f291
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x34b2ea55
// converted property getter: - (long)records;	// 0x34c3f281
@end
