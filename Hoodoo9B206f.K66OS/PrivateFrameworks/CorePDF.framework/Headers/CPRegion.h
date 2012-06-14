/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"


@interface CPRegion : CPChunk {
	BOOL isTextRegion;	// 52 = 0x34
	BOOL isImageRegion;	// 53 = 0x35
	BOOL isCompoundShape;	// 54 = 0x36
	CPRegion *nextRegion;	// 56 = 0x38
	int order;	// 60 = 0x3c
	id link;	// 64 = 0x40
}
@property(assign) BOOL isCompoundShape;	// G=0x3260d701; S=0x3260d711; converted property
@property(assign) BOOL isImageRegion;	// G=0x3260d6d9; S=0x3260d78d; converted property
@property(assign) BOOL isTextRegion;	// G=0x3260d6c5; S=0x3260d6f1; converted property
@property(retain) id link;	// G=0x3260d765; S=0x3260d755; converted property
@property(retain) CPRegion *nextRegion;	// G=0x3260d725; S=0x3260d8d9; converted property
@property(assign) int order;	// G=0x3260d735; S=0x3260d745; converted property
- (void)accept:(id)accept;	// 0x3260d775
- (id)copyWithZone:(NSZone *)zone;	// 0x3260da29
- (void)dealloc;	// 0x3260da7d
- (BOOL)isBodyZone;	// 0x3260d6ed
- (BOOL)isBoxRegion;	// 0x3260d6d5
// converted property getter: - (BOOL)isCompoundShape;	// 0x3260d701
- (BOOL)isGraphicalRegion;	// 0x3260d805
// converted property getter: - (BOOL)isImageRegion;	// 0x3260d6d9
- (BOOL)isIndivisible;	// 0x3260d921
- (BOOL)isListItemRegion;	// 0x3260d6e5
- (BOOL)isParagraphRegion;	// 0x3260d6e1
- (BOOL)isRotated;	// 0x3260d9c9
- (BOOL)isRowRegion;	// 0x3260d7c9
- (BOOL)isShapeRegion;	// 0x3260d6dd
- (BOOL)isTableCellRegion;	// 0x3260d6e9
// converted property getter: - (BOOL)isTextRegion;	// 0x3260d6c5
- (BOOL)isZone;	// 0x3260d721
// converted property getter: - (id)link;	// 0x3260d765
// converted property getter: - (id)nextRegion;	// 0x3260d725
// converted property getter: - (int)order;	// 0x3260d735
// converted property setter: - (void)setIsCompoundShape:(BOOL)shape;	// 0x3260d711
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x3260d78d
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x3260d6f1
// converted property setter: - (void)setLink:(id)link;	// 0x3260d755
// converted property setter: - (void)setNextRegion:(id)region;	// 0x3260d8d9
// converted property setter: - (void)setOrder:(int)order;	// 0x3260d745
@end
