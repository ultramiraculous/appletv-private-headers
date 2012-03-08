/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHAutoStyling.h"
#import "CHAutoStyling.h"


__attribute__((visibility("hidden")))
@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling> {
}
- (id)autoAxisStroke;	// 0x32991f11
- (id)autoFill;	// 0x32898061
- (id)autoSeriesBorderStroke;	// 0x328a35ad
- (id)autoSeriesFill:(int)fill;	// 0x328a2c89
- (id)autoStroke;	// 0x32898109
- (id)autoStrokeForSeriesIndex:(int)seriesIndex;	// 0x328a2b79
- (id)fillWithColorIndex:(int)colorIndex;	// 0x32898075
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x3289e855
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x32898009
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x3289f14d
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(int)seriesIndex;	// 0x328a356d
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex;	// 0x3291f389
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex isLine:(bool)line;	// 0x328a2c0d
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(int)seriesIndex;	// 0x32921a0d
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x32907db1
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x3289efdd
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(int)seriesIndex;	// 0x328a291d
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x3289eed1
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x3289c799
- (void)resolveWallGraphicProperties:(id)properties;	// 0x328a558d
- (void)resolvedGraphicProperties:(id)properties autoFill:(id)fill autoStroke:(id)stroke autoShadow:(BOOL)shadow nullFill:(id)fill5 nullStroke:(id)stroke6 nullShadow:(BOOL)shadow7;	// 0x3289819d
- (id)strokeWithColorIndex:(int)colorIndex;	// 0x3289811d
@end
