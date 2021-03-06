/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"

@class CPTextLine, CPParagraph;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk {
	unsigned clipIndex;	// 52 = 0x34
	CGRect renderedBounds;	// 56 = 0x38
	BOOL isInZoneBorder;	// 72 = 0x48
	int zoneGraphicType;	// 76 = 0x4c
	CPTextLine *anchoringTextLine;	// 80 = 0x50
	CPParagraph *anchoringParagraph;	// 84 = 0x54
	CPChunk<CPGraphicUser> *user;	// 88 = 0x58
}
@property(retain, nonatomic) CPParagraph *anchoringParagraph;	// G=0x305cd049; S=0x305cd059; @synthesize
@property(retain) CPTextLine *anchoringTextLine;	// G=0x305ccfd1; S=0x305ccfc1; converted property
@property(assign, nonatomic) unsigned clipIndex;	// G=0x305cd029; S=0x305cd039; @synthesize
@property(assign) BOOL isInZoneBorder;	// G=0x305ccf81; S=0x305ccf91; converted property
@property(readonly, assign) CGRect renderedBounds;	// G=0x305cce11; converted property
@property(retain) id user;	// G=0x305cd019; S=0x305ccfe1; converted property
@property(assign) int zoneGraphicType;	// G=0x305ccfa1; S=0x305ccfb1; converted property
- (id)init;	// 0x305ccd4d
// declared property getter: - (id)anchoringParagraph;	// 0x305cd049
// converted property getter: - (id)anchoringTextLine;	// 0x305ccfd1
- (BOOL)canBeContainer;	// 0x305ccf21
// declared property getter: - (unsigned)clipIndex;	// 0x305cd029
- (void)dealloc;	// 0x305ccdc1
// converted property getter: - (BOOL)isInZoneBorder;	// 0x305ccf81
- (BOOL)isIndivisible;	// 0x305ccf7d
- (BOOL)isNarrow;	// 0x305cce79
- (BOOL)isVisible;	// 0x305ccf79
// converted property getter: - (CGRect)renderedBounds;	// 0x305cce11
// declared property setter: - (void)setAnchoringParagraph:(id)paragraph;	// 0x305cd059
// converted property setter: - (void)setAnchoringTextLine:(id)line;	// 0x305ccfc1
// declared property setter: - (void)setClipIndex:(unsigned)index;	// 0x305cd039
// converted property setter: - (void)setIsInZoneBorder:(BOOL)zoneBorder;	// 0x305ccf91
// converted property setter: - (void)setUser:(id)user;	// 0x305ccfe1
// converted property setter: - (void)setZoneGraphicType:(int)type;	// 0x305ccfb1
- (unsigned short)unicode;	// 0x305cce75
// converted property getter: - (id)user;	// 0x305cd019
// converted property getter: - (int)zoneGraphicType;	// 0x305ccfa1
@end

