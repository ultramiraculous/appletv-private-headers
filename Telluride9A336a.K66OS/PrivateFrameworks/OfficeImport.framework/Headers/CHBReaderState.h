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
@property(assign) int axisGroup;	// G=0x34ce71c5; S=0x34ce6c05; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x34cea5a5; S=0x34cea1e1; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x34cea915; S=0x34cea1d1; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x34cdfd29
// converted property getter: - (int)axisGroup;	// 0x34ce71c5
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x34ceb07d
- (id)ebReaderSheetState;	// 0x34ce051d
- (void)readAndCacheXlChartDataSeries;	// 0x34ce268d
- (id)resources;	// 0x34ce51fd
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x34ce6c05
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x34cea1e1
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x34cea1d1
- (id)workbook;	// 0x34ce996d
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x34ceb03d
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x34cea5a5
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x34cea915
- (int)xlPlotCount;	// 0x34ce9d45
- (XlChartBinaryReader *)xlReader;	// 0x34ce050d
@end

