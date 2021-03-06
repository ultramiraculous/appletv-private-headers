/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHAutoStyling.h"
#import "CHAutoStyling.h"


@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling> {
}
- (id)autoAxisStroke;	// 0x318ad36d
- (id)autoFill;	// 0x317ec035
- (id)autoSeriesBorderStroke;	// 0x317f9191
- (id)autoSeriesFill:(unsigned)fill;	// 0x317f915d
- (id)autoStroke;	// 0x317ec121
- (id)autoStrokeForSeriesIndex:(unsigned)seriesIndex;	// 0x31803f91
- (id)fillWithColorIndex:(unsigned)colorIndex;	// 0x317ec049
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x317f45e9
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x317ebfdd
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x317f53cd
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(unsigned)seriesIndex colorMap:(id)map colorScheme:(id)scheme;	// 0x318044fd
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(unsigned)seriesIndex colorMap:(id)map colorScheme:(id)scheme;	// 0x31856161
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(unsigned)seriesIndex isLine:(bool)line colorMap:(id)map colorScheme:(id)scheme;	// 0x317f90d5
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(unsigned)seriesIndex;	// 0x3187abd5
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x3184ca4d
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x317f48a1
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(unsigned)seriesIndex;	// 0x31803d51
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x317f4819
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x317f264d
- (void)resolveWallGraphicProperties:(id)properties;	// 0x317f4a09
- (void)resolvedGraphicProperties:(id)properties autoFill:(id)fill autoStroke:(id)stroke autoShadow:(BOOL)shadow nullFill:(id)fill5 nullStroke:(id)stroke6 nullShadow:(BOOL)shadow7;	// 0x317ec1b9
- (id)strokeWithColorIndex:(int)colorIndex;	// 0x317ec135
@end

