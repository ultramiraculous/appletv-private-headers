/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPChunk.h"

@class NSMutableArray;

@interface CPPage : CPChunk <CPDisposable> {
	int pageNumber;	// 52 = 0x34
	CGRect pageCropBox;	// 56 = 0x38
	BOOL hasZones;	// 72 = 0x48
	BOOL hasTextLines;	// 73 = 0x49
	BOOL isDirty;	// 74 = 0x4a
	BOOL isStartOfSection;	// 75 = 0x4b
	long maxLayoutZOrder;	// 76 = 0x4c
	CPChunk *background;	// 80 = 0x50
	float complexity;	// 84 = 0x54
	int rotation;	// 88 = 0x58
	NSMutableArray *shapesOnPage;	// 92 = 0x5c
	NSMutableArray *imagesOnPage;	// 96 = 0x60
	NSMutableArray *graphicsOnPage;	// 100 = 0x64
	NSMutableArray *columnsOnPage;	// 104 = 0x68
	CPPDFContext *pdfContext;	// 108 = 0x6c
	BOOL contextOwner;	// 112 = 0x70
	CGPDFPageRef pdfPage;	// 116 = 0x74
	NSMutableArray *textLinesOnPage;	// 120 = 0x78
	void *_layout;	// 124 = 0x7c
	id hitTest;	// 128 = 0x80
	BOOL reconstructed;	// 132 = 0x84
	opaque_pthread_mutex_t mutex;	// 136 = 0x88
}
@property(assign) CPPDFContext *PDFContext;	// G=0x33a2e7c1; S=0x33a2e7a1; converted property
@property(retain) CPChunk *background;	// G=0x33a2ec2d; S=0x33a2ec3d; converted property
@property(readonly, retain) NSMutableArray *columnsOnPage;	// G=0x33a2fb19; converted property
@property(assign) float complexity;	// G=0x33a2e955; S=0x33a2e965; converted property
@property(readonly, retain) NSMutableArray *graphicsOnPage;	// G=0x33a2eacd; converted property
@property(assign) BOOL hasTextLines;	// G=0x33a2eb9d; S=0x33a2ebad; converted property
@property(assign) BOOL hasZones;	// G=0x33a2eaed; S=0x33a2eadd; converted property
@property(readonly, retain) id hitTest;	// G=0x33a46ca1; converted property
@property(readonly, retain) NSMutableArray *imagesOnPage;	// G=0x33a2eabd; converted property
@property(assign) BOOL isStartOfSection;	// G=0x33a2ebbd; S=0x33a2ebcd; converted property
@property(assign) CGRect pageCropBox;	// G=0x33a2e919; S=0x33a2e8fd; converted property
@property(assign) int pageNumber;	// G=0x33a2e975; S=0x33a2e985; converted property
@property(readonly, assign) CGPDFPageRef pdfPage;	// G=0x33a2e729; converted property
@property(assign) int rotation;	// G=0x33a2ebdd; S=0x33a2ebed; converted property
@property(readonly, retain) NSMutableArray *shapesOnPage;	// G=0x33a2ea69; converted property
@property(readonly, retain) NSMutableArray *textLinesOnPage;	// G=0x33a2fa95; converted property
+ (void)sortByReadingOrder:(id)order;	// 0x33a2f401
- (id)init;	// 0x33a2e3d1
- (id)initWithPDFPage:(CGPDFPageRef)pdfpage;	// 0x33a2e525
// converted property getter: - (CPPDFContext *)PDFContext;	// 0x33a2e7c1
- (void)accept:(id)accept;	// 0x33a2e93d
- (void)addColumns:(id)columns;	// 0x33a2fb29
- (void)addImage:(id)image;	// 0x33a2ea79
- (void)addShape:(id)shape;	// 0x33a2ea25
// converted property getter: - (id)background;	// 0x33a2ec2d
- (id)bodyZone;	// 0x33a2eafd
- (id)children;	// 0x33a2eca9
- (CPPDFClipBuffer *)clipBuffer;	// 0x33a46c89
// converted property getter: - (id)columnsOnPage;	// 0x33a2fb19
// converted property getter: - (float)complexity;	// 0x33a2e955
- (id)copyWithZone:(NSZone *)zone;	// 0x33a2e7d1
- (void)dealloc;	// 0x33a2e651
- (void)dispose;	// 0x33a2e585
- (void)finalize;	// 0x33a2e611
// converted property getter: - (id)graphicsOnPage;	// 0x33a2eacd
// converted property getter: - (BOOL)hasTextLines;	// 0x33a2eb9d
// converted property getter: - (BOOL)hasZones;	// 0x33a2eaed
// converted property getter: - (id)hitTest;	// 0x33a46ca1
// converted property getter: - (id)imagesOnPage;	// 0x33a2eabd
// converted property getter: - (BOOL)isStartOfSection;	// 0x33a2ebbd
- (void)layDownObjectsOnPage;	// 0x33a2f3cd
- (void)layDownObjectsOnPageOld;	// 0x33a2f529
- (CGPDFLayoutRef)layout;	// 0x33a47851
// converted property getter: - (CGRect)pageCropBox;	// 0x33a2e919
// converted property getter: - (int)pageNumber;	// 0x33a2e975
- (id)parent;	// 0x33a2e995
// converted property getter: - (CGPDFPageRef)pdfPage;	// 0x33a2e729
- (BOOL)populatePDFLayout:(CGPDFLayoutRef)layout;	// 0x33a46cf5
- (void)reconstruct;	// 0x33a2e739
- (void)restoreBackGroundObjectToPage;	// 0x33a2ec81
// converted property getter: - (int)rotation;	// 0x33a2ebdd
// converted property setter: - (void)setBackground:(id)background;	// 0x33a2ec3d
- (unsigned)setCellPositionsOf:(id)of from:(unsigned)from;	// 0x33a2edfd
// converted property setter: - (void)setComplexity:(float)complexity;	// 0x33a2e965
- (unsigned)setGraphicPositions:(id)positions from:(unsigned)from;	// 0x33a2ee85
// converted property setter: - (void)setHasTextLines:(BOOL)lines;	// 0x33a2ebad
// converted property setter: - (void)setHasZones:(BOOL)zones;	// 0x33a2eadd
// converted property setter: - (void)setIsStartOfSection:(BOOL)section;	// 0x33a2ebcd
// converted property setter: - (void)setPDFContext:(CPPDFContext *)context;	// 0x33a2e7a1
// converted property setter: - (void)setPageCropBox:(CGRect)box;	// 0x33a2e8fd
// converted property setter: - (void)setPageNumber:(int)number;	// 0x33a2e985
- (unsigned)setPositionsOf:(id)of from:(unsigned)from;	// 0x33a2ed49
- (unsigned)setReadingOrder:(id)order from:(unsigned)from;	// 0x33a2ef0d
// converted property setter: - (void)setRotation:(int)rotation;	// 0x33a2ebed
// converted property getter: - (id)shapesOnPage;	// 0x33a2ea69
- (void)sortByReadingOrder;	// 0x33a2f509
// converted property getter: - (id)textLinesOnPage;	// 0x33a2fa95
- (unsigned)traverse:(id)traverse ordinal:(unsigned)ordinal;	// 0x33a2ecbd
@end
