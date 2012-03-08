/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPChunk.h"
#import "CorePDF-Structs.h"

@class CPTextLine, CPParagraph;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk {
	unsigned clipIndex;	// 52 = 0x34
	CGRect renderedBounds;	// 56 = 0x38
	int wrapType;	// 72 = 0x48
	float margin;	// 76 = 0x4c
	float baselineOffset;	// 80 = 0x50
	BOOL canContainText;	// 84 = 0x54
	BOOL isInZoneBorder;	// 85 = 0x55
	int zoneGraphicType;	// 88 = 0x58
	CPTextLine *anchoringTextLine;	// 92 = 0x5c
	CPParagraph *anchoringParagraph;	// 96 = 0x60
	CPChunk<CPGraphicUser> *user;	// 100 = 0x64
}
@property(retain, nonatomic) CPParagraph *anchoringParagraph;	// G=0x349da339; S=0x349da3fd; @synthesize
@property(retain) CPTextLine *anchoringTextLine;	// G=0x349da319; S=0x349da309; converted property
@property(assign) float baselineOffset;	// G=0x349da291; S=0x349da281; converted property
@property(assign) BOOL canContainText;	// G=0x349da2a9; S=0x349da2b9; converted property
@property(assign, nonatomic) unsigned clipIndex;	// G=0x349da349; S=0x349da359; @synthesize
@property(assign) BOOL isInZoneBorder;	// G=0x349da2c9; S=0x349da2d9; converted property
@property(assign) float margin;	// G=0x349da271; S=0x349da261; converted property
@property(readonly, assign) CGRect renderedBounds;	// G=0x349da539; converted property
@property(retain) id user;	// G=0x349da329; S=0x349da425; converted property
@property(assign) int wrapType;	// G=0x349da251; S=0x349da23d; converted property
@property(assign) int zoneGraphicType;	// G=0x349da2e9; S=0x349da2f9; converted property
- (id)init;	// 0x349da369
// declared property getter: - (id)anchoringParagraph;	// 0x349da339
// converted property getter: - (id)anchoringTextLine;	// 0x349da319
// converted property getter: - (float)baselineOffset;	// 0x349da291
- (BOOL)canBeContainer;	// 0x349da45d
// converted property getter: - (BOOL)canContainText;	// 0x349da2a9
// declared property getter: - (unsigned)clipIndex;	// 0x349da349
// converted property getter: - (BOOL)isInZoneBorder;	// 0x349da2c9
- (BOOL)isIndivisible;	// 0x349da2a5
- (BOOL)isNarrow;	// 0x349da4a5
- (BOOL)isVisible;	// 0x349da2a1
// converted property getter: - (float)margin;	// 0x349da271
// converted property getter: - (CGRect)renderedBounds;	// 0x349da539
// declared property setter: - (void)setAnchoringParagraph:(id)paragraph;	// 0x349da3fd
// converted property setter: - (void)setAnchoringTextLine:(id)line;	// 0x349da309
// converted property setter: - (void)setBaselineOffset:(float)offset;	// 0x349da281
// converted property setter: - (void)setCanContainText:(BOOL)text;	// 0x349da2b9
// declared property setter: - (void)setClipIndex:(unsigned)index;	// 0x349da359
// converted property setter: - (void)setIsInZoneBorder:(BOOL)zoneBorder;	// 0x349da2d9
// converted property setter: - (void)setMargin:(float)margin;	// 0x349da261
// converted property setter: - (void)setUser:(id)user;	// 0x349da425
// converted property setter: - (void)setWrapType:(int)type;	// 0x349da23d
// converted property setter: - (void)setZoneGraphicType:(int)type;	// 0x349da2f9
- (unsigned short)unicode;	// 0x349da24d
// converted property getter: - (id)user;	// 0x349da329
// converted property getter: - (int)wrapType;	// 0x349da251
// converted property getter: - (int)zoneGraphicType;	// 0x349da2e9
@end
