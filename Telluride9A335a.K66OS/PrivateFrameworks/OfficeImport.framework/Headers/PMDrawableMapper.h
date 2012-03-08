/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"

@class OADShape, CMDrawingContext;

__attribute__((visibility("hidden")))
@interface PMDrawableMapper : CMDrawableMapper {
@private
	OADShape *mShape;	// 80 = 0x50
	CMDrawingContext *mDrawingContext;	// 84 = 0x54
	BOOL mTopLevelMapper;	// 88 = 0x58
}
@property(retain) id drawingContext;	// G=0x351f5195; S=0x351285a1; converted property
@property(assign, getter=isTopLevelMapper) BOOL topLevelMapper;	// G=0x3512777d; S=0x35128471; converted property
+ (id)orientedBoundsForDrawable:(id)drawable;	// 0x351281f1
- (void)dealloc;	// 0x3512778d
// converted property getter: - (id)drawingContext;	// 0x351f5195
// converted property getter: - (BOOL)isTopLevelMapper;	// 0x3512777d
- (void)mapAt:(id)at withState:(id)state;	// 0x35127a09
- (void)mapBounds;	// 0x35128051
- (void)mapChartAt:(id)at withState:(id)state;	// 0x3530cee5
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x352f0639
- (void)mapFreeForm:(id)form orientedBounds:(id)bounds transformedBounds:(CGRect *)bounds3 state:(id)state;	// 0x352700ad
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x351f4bd1
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x351ec325
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x351285e1
- (void)mapRectangularShapeAt:(id)at withState:(id)state;	// 0x35128bf5
- (void)mapShapeAsBackgroundAt:(id)at withState:(id)state;	// 0x351ee695
// converted property setter: - (void)setDrawingContext:(id)context;	// 0x351285a1
// converted property setter: - (void)setTopLevelMapper:(BOOL)mapper;	// 0x35128471
- (CGRect)shapeTextBoxWithState:(id)state;	// 0x351efc39
- (CGRect)slideRect;	// 0x3541dda5
- (CGRect)transformRectToPage:(CGRect)page;	// 0x35128fa5
@end
