/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPChunk.h"


@interface CPTableCell : CPChunk <CPDisposable> {
	CGRect cellBounds;	// 52 = 0x34
	XXStruct_ny2fMB rowSpan;	// 68 = 0x44
	XXStruct_ny2fMB columnSpan;	// 76 = 0x4c
	XXStruct_De2_4C *borders;	// 84 = 0x54
	CGColorRef backgroundColor;	// 88 = 0x58
	unsigned backgroundGraphicCount;	// 92 = 0x5c
	CPGraphicObject **backgroundGraphics;	// 96 = 0x60
}
@property(readonly, assign) CGColorRef backgroundColor;	// G=0x3108a58d; converted property
@property(readonly, assign, nonatomic) unsigned backgroundGraphicCount;	// G=0x31089fd1; @synthesize
@property(readonly, assign, nonatomic) CGRect cellBounds;	// G=0x3108a041; @synthesize
@property(assign, nonatomic) XXStruct_ny2fMB columnSpan;	// G=0x31089fe1; S=0x31089ffd; @synthesize
@property(assign, nonatomic) XXStruct_ny2fMB rowSpan;	// G=0x3108a011; S=0x3108a02d; @synthesize
- (id)initWithBounds:(CGRect)bounds;	// 0x3108a065
// converted property getter: - (CGColorRef)backgroundColor;	// 0x3108a58d
- (id)backgroundGraphicAtIndex:(unsigned)index;	// 0x31089f29
// declared property getter: - (unsigned)backgroundGraphicCount;	// 0x31089fd1
- (CGRect)boundsOfBorder:(int)border;	// 0x31089f55
// declared property getter: - (CGRect)cellBounds;	// 0x3108a041
- (CGColorRef)colorOfBorder:(int)border;	// 0x3108a1a1
// declared property getter: - (XXStruct_ny2fMB)columnSpan;	// 0x31089fe1
- (int)compareCellOrdinal:(id)ordinal;	// 0x3108a131
- (void)dealloc;	// 0x3108a671
- (void)dispose;	// 0x3108a6f1
- (void)finalize;	// 0x3108a6b1
- (unsigned)graphicCountOfBorder:(int)border;	// 0x31089f85
- (id)graphicObjectOfBorder:(int)border atIndex:(unsigned)index;	// 0x31089fa1
// declared property getter: - (XXStruct_ny2fMB)rowSpan;	// 0x3108a011
- (void)setBackgroundGraphics:(id)graphics;	// 0x3108a455
- (void)setBorder:(int)border bounds:(CGRect)bounds graphics:(id)graphics;	// 0x3108a301
// declared property setter: - (void)setColumnSpan:(XXStruct_ny2fMB)span;	// 0x31089ffd
// declared property setter: - (void)setRowSpan:(XXStruct_ny2fMB)span;	// 0x3108a02d
@end

