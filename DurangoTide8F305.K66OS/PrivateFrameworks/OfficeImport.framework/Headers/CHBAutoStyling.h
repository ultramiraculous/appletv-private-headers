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
- (id)autoAxisStroke;	// 0x345ba9e9
- (id)autoFill;	// 0x344e2aad
- (id)autoSeriesBorderStroke;	// 0x344ec9f9
- (id)autoSeriesFill:(int)fill;	// 0x344ec9b9
- (id)autoStroke;	// 0x344e2b85
- (id)autoStrokeForSeriesIndex:(int)seriesIndex;	// 0x344fc9cd
- (id)fillWithColorIndex:(int)colorIndex;	// 0x344e2ac5
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x344e8fe9
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x344e2a59
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x344e9cd5
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(int)seriesIndex;	// 0x344fcedd
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex;	// 0x34547b81
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex isLine:(bool)line;	// 0x344ec93d
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(int)seriesIndex;	// 0x34563025
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x3453f535
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x344e92c9
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(int)seriesIndex;	// 0x344fc7a1
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x344e924d
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x344e73a5
- (void)resolveWallGraphicProperties:(id)properties;	// 0x344e9415
- (void)resolvedGraphicProperties:(id)properties autoFill:(id)fill autoStroke:(id)stroke autoShadow:(BOOL)shadow nullFill:(id)fill5 nullStroke:(id)stroke6 nullShadow:(BOOL)shadow7;	// 0x344e2c11
- (id)strokeWithColorIndex:(int)colorIndex;	// 0x344e2b9d
@end
