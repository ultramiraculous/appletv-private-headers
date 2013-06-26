/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import </libobjc.A.h>

@class CPZone, NSMutableArray;

@interface CPColumnMaker : NSObject {
	NSMutableArray *columns;	// 4 = 0x4
	CPZone *currentZone;	// 8 = 0x8
	NSMutableArray *allParagraphs;	// 12 = 0xc
	NSMutableArray *thinHorizontalShapes;	// 16 = 0x10
	NSMutableArray *otherShapes;	// 20 = 0x14
	NSMutableArray *images;	// 24 = 0x18
	NSMutableArray *paragraphWrappers;	// 28 = 0x1c
	CGRect pageBounds;	// 32 = 0x20
	float maxParagraphDistance;	// 48 = 0x30
}
@property(readonly, retain) NSMutableArray *columns;	// G=0x305f4a79; converted property
@property(assign) CGRect pageBounds;	// G=0x305f73ed; S=0x305f7411; @synthesize
- (id)init;	// 0x305f4979
- (void)anchorImages;	// 0x305f6981
- (float)averageSpacing:(id)spacing;	// 0x305f6545
- (void)callOuts;	// 0x305f5aa9
- (BOOL)canSafelyAdd:(id)add to:(id)to;	// 0x305f57d5
- (id)chunkAbove:(id)above in:(id)anIn;	// 0x305f5519
- (BOOL)closeImagesBetween:(id)between and:(id)anAnd bounds:(CGRect)bounds;	// 0x305f6131
- (BOOL)column:(id)column isLinkedBelowTo:(id)to;	// 0x305f5771
// converted property getter: - (id)columns;	// 0x305f4a79
- (BOOL)cuttingShapeBetween:(id)between and:(id)anAnd;	// 0x305f4d11
- (void)dealloc;	// 0x305f49d9
- (void)intersectionCallout:(id)callout;	// 0x305f57d9
- (BOOL)intervalOverlapLeft:(float)left right:(float)right paragraphs:(id)paragraphs;	// 0x305f4a89
- (void)makeColumnsFrom:(id)from zone:(id)zone;	// 0x305f6c19
// declared property getter: - (CGRect)pageBounds;	// 0x305f73ed
- (BOOL)paragraph:(id)paragraph isAbove:(id)above;	// 0x305f50e9
- (BOOL)paragraph:(id)paragraph isBelow:(id)below;	// 0x305f5185
- (BOOL)paragraph:(id)paragraph isLinkedBelowTo:(id)to;	// 0x305f56c1
- (BOOL)paragraph:(id)paragraph notOnSameShapeAs:(id)as;	// 0x305f4f81
- (id)paragraphAbove:(id)above in:(id)anIn;	// 0x305f53a1
- (id)paragraphBelow:(id)below in:(id)anIn;	// 0x305f5221
- (void)partitionShapes:(id)shapes;	// 0x305f4b79
// declared property setter: - (void)setPageBounds:(CGRect)bounds;	// 0x305f7411
- (void)splitColumns:(id)columns;	// 0x305f6629
@end
