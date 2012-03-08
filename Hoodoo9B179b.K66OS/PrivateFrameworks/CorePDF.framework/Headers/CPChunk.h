/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPObject.h"


@interface CPChunk : CPObject {
	CGRect bounds;	// 24 = 0x18
	BOOL shrinksWithChildren;	// 40 = 0x28
	BOOL dirtyBounds;	// 41 = 0x29
	unsigned position;	// 44 = 0x2c
	long insertionOrder;	// 48 = 0x30
}
@property(assign) CGPoint anchor;	// G=0x3482e3d9; S=0x3482f395; converted property
@property(assign) CGRect bounds;	// G=0x3482f5c1; S=0x3482e3a1; converted property
@property(assign) unsigned chunkPosition;	// G=0x3482e49d; S=0x3482e4ad; converted property
@property(assign) long insertionOrder;	// G=0x3482e425; S=0x3482e3f5; converted property
@property(assign) BOOL shrinksWithChildren;	// G=0x3482e459; S=0x3482e469; converted property
+ (float)chooseReferenceFontSizeFrom:(float)from and:(float)anAnd;	// 0x3482e349
- (id)init;	// 0x3482e4bd
- (float)absoluteGapTo:(id)to;	// 0x3482f28d
- (void)accept:(id)accept;	// 0x3482f97d
- (void)add:(id)add;	// 0x3482f911
- (void)add:(id)add atIndex:(unsigned)index;	// 0x3482f8a5
- (void)addChildrenOf:(id)of;	// 0x3482f865
- (CGRect)adjustToPointBoundary:(CGRect)pointBoundary;	// 0x3482f555
- (CGSize)advance;	// 0x3482e439
- (float)advanceDeltaAfterSpace;	// 0x3482e3f1
// converted property getter: - (CGPoint)anchor;	// 0x3482e3d9
- (float)bottom;	// 0x3482e975
// converted property getter: - (CGRect)bounds;	// 0x3482f5c1
- (BOOL)boundsEqualsRect:(CGRect)rect accuracy:(float)accuracy;	// 0x3482e715
- (float)center;	// 0x3482e9d5
// converted property getter: - (unsigned)chunkPosition;	// 0x3482e49d
- (float)clusterGapTo:(id)to;	// 0x3482f31d
- (int)clusterLevelHint;	// 0x3482e455
- (int)compareAnchorX:(id)x;	// 0x3482ef11
- (int)compareAnchorY:(id)y;	// 0x3482ef69
- (int)compareAnchorYDescending:(id)descending;	// 0x3482eeb9
- (int)compareChunkPosition:(id)position;	// 0x3482ea6d
- (int)compareInsertionOrder:(id)order;	// 0x3482ee2d
- (int)compareLinearBounds:(id)bounds;	// 0x3482ecb5
- (int)compareTopDescending:(id)descending;	// 0x3482eb89
- (int)compareX:(id)x;	// 0x3482ee61
- (int)compareXBounds:(id)bounds;	// 0x3482ed69
- (int)compareY:(id)y;	// 0x3482ec45
- (int)compareYBounds:(id)bounds;	// 0x3482ebd5
- (int)compareYDescending:(id)descending;	// 0x3482eb31
- (int)compareYDescendingX:(id)x;	// 0x3482eaa1
- (int)compareZ:(id)z;	// 0x3482edf9
- (int)compareZDescending:(id)descending;	// 0x3482edc5
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x3482f995
- (id)copyWithZone:(NSZone *)zone;	// 0x3482fa39
- (id)describeBounds;	// 0x3482f41d
- (void)fitBoundsToChildren;	// 0x3482f10d
- (float)fontSize;	// 0x3482e435
- (BOOL)geometricallyContains:(id)contains;	// 0x3482e76d
// converted property getter: - (long)insertionOrder;	// 0x3482e425
- (BOOL)intersectsChild:(CGRect)child;	// 0x3482e5b1
- (float)left;	// 0x3482ea3d
- (float)opticalLeading;	// 0x3482e39d
- (void)orderedInsert:(id)insert usingSelector:(SEL)selector;	// 0x3482e8f9
- (BOOL)overlapsHorizontallyWith:(id)with;	// 0x3482e879
- (BOOL)overlapsVerticallyWith:(id)with;	// 0x3482e7e9
- (float)referenceAdvanceWidth;	// 0x3482f26d
- (void)remove:(id)remove;	// 0x3482f815
- (void)removeAll;	// 0x3482f7a5
- (CGRect)renderedBounds;	// 0x3482f439
- (void)resizeWith:(id)with;	// 0x3482efe5
- (float)right;	// 0x3482ea0d
- (float)rotationAngle;	// 0x3482e52d
// converted property setter: - (void)setAnchor:(CGPoint)anchor;	// 0x3482f395
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3482e3a1
- (void)setChildren:(id)children;	// 0x3482f609
// converted property setter: - (void)setChunkPosition:(unsigned)position;	// 0x3482e4ad
// converted property setter: - (void)setInsertionOrder:(long)order;	// 0x3482e3f5
// converted property setter: - (void)setShrinksWithChildren:(BOOL)children;	// 0x3482e469
// converted property getter: - (BOOL)shrinksWithChildren;	// 0x3482e459
- (void)sortUsingSelector:(SEL)selector;	// 0x3482efc1
- (id)takeChildren;	// 0x3482f735
- (id)takeChildrenAmong:(id)among;	// 0x3482f6cd
- (float)top;	// 0x3482e9a5
- (void)translateObjectYBy:(float)by;	// 0x3482e479
@end
