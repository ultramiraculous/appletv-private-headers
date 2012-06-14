/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CHBState.h"

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface CHBReaderState : CHBState {
@private
	EBReaderSheetState *mEBReaderSheetState;	// 32 = 0x20
	XlChartBinaryReader *mXlReader;	// 36 = 0x24
	int mAxisGroup;	// 40 = 0x28
	XlChartPlot *mXlCurrentPlot;	// 44 = 0x2c
	int mXlCurrentPlotIndex;	// 48 = 0x30
}
@property(assign) int axisGroup;	// G=0x344dd1c5; S=0x344dcc05; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x344e05a5; S=0x344e01e1; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x344e0915; S=0x344e01d1; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x344d5d29
// converted property getter: - (int)axisGroup;	// 0x344dd1c5
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x344e107d
- (id)ebReaderSheetState;	// 0x344d651d
- (void)readAndCacheXlChartDataSeries;	// 0x344d868d
- (id)resources;	// 0x344db1fd
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x344dcc05
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x344e01e1
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x344e01d1
- (id)workbook;	// 0x344df96d
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x344e103d
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x344e05a5
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x344e0915
- (int)xlPlotCount;	// 0x344dfd45
- (XlChartBinaryReader *)xlReader;	// 0x344d650d
@end
