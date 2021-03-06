/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"

@class OADShape, CMDrawingContext;

@interface PMDrawableMapper : CMDrawableMapper {
	OADShape *mShape;	// 80 = 0x50
	CMDrawingContext *mDrawingContext;	// 84 = 0x54
	BOOL mTopLevelMapper;	// 88 = 0x58
}
@property(retain) id drawingContext;	// G=0x34887c71; S=0x3487c449; converted property
@property(assign, getter=isTopLevelMapper) BOOL topLevelMapper;	// G=0x3487c199; S=0x3487c319; converted property
+ (id)orientedBoundsForDrawable:(id)drawable;	// 0x3487b1d9
- (void)dealloc;	// 0x3487c1a9
// converted property getter: - (id)drawingContext;	// 0x34887c71
// converted property getter: - (BOOL)isTopLevelMapper;	// 0x3487c199
- (void)mapAt:(id)at withState:(id)state;	// 0x3487aa4d
- (void)mapBounds;	// 0x3487b039
- (void)mapChartAt:(id)at withState:(id)state;	// 0x349a3f61
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x34962851
- (void)mapFreeForm:(id)form orientedBounds:(id)bounds transformedBounds:(CGRect *)bounds3 state:(id)state;	// 0x34942685
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x34887709
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x3487b25d
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x3487c485
- (void)mapRectangularShapeAt:(id)at withState:(id)state;	// 0x3487c9fd
- (void)mapShapeAsBackgroundAt:(id)at withState:(id)state;	// 0x34881145
// converted property setter: - (void)setDrawingContext:(id)context;	// 0x3487c449
// converted property setter: - (void)setTopLevelMapper:(BOOL)mapper;	// 0x3487c319
- (CGRect)shapeTextBoxWithState:(id)state;	// 0x3488218d
- (CGRect)slideRect;	// 0x349e98a1
- (CGRect)transformRectToPage:(CGRect)page;	// 0x3487b86d
@end

