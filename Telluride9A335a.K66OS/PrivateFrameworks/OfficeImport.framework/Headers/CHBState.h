/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class CHDChart;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHBState : NSObject {
@private
	CHDChart *mChart;	// 4 = 0x4
	CFArrayRef mXlChartDataSeriesCollection;	// 8 = 0x8
	int mXlSeriesCount;	// 12 = 0xc
	int mXlCurrentSeriesIndex;	// 16 = 0x10
	id<CHAutoStyling> mAutoStyling;	// 20 = 0x14
	bool mHasPrimaryMixedArea;	// 24 = 0x18
	bool mHasPrimaryMixedColumn;	// 25 = 0x19
	bool mHasPrimaryMixedLine;	// 26 = 0x1a
	bool mHasSecondaryMixedArea;	// 27 = 0x1b
	bool mHasSecondaryMixedColumn;	// 28 = 0x1c
	bool mHasSecondaryMixedLine;	// 29 = 0x1d
}
@property(retain) id chart;	// G=0x352884d9; S=0x35287e4d; converted property
@property(assign) bool hasPrimaryMixedArea;	// G=0x353844a5; S=0x353844b5; converted property
@property(assign) bool hasPrimaryMixedColumn;	// G=0x353844c5; S=0x353844d5; converted property
@property(assign) bool hasPrimaryMixedLine;	// G=0x353844e5; S=0x353844f5; converted property
@property(assign) bool hasSecondaryMixedArea;	// G=0x35384505; S=0x35384515; converted property
@property(assign) bool hasSecondaryMixedColumn;	// G=0x35384525; S=0x35384535; converted property
@property(assign) bool hasSecondaryMixedLine;	// G=0x35384545; S=0x35384555; converted property
- (id)init;	// 0x35287d9d
- (id)autoStyling;	// 0x35289ff9
// converted property getter: - (id)chart;	// 0x352884d9
- (unsigned)chartGroupIndexForType:(int)type isForPrimary:(bool)primary;	// 0x35384565
- (void)dealloc;	// 0x35296725
- (void)deleteXlChartDataSeriesCollection;	// 0x3528a751
// converted property getter: - (bool)hasPrimaryMixedArea;	// 0x353844a5
// converted property getter: - (bool)hasPrimaryMixedColumn;	// 0x353844c5
// converted property getter: - (bool)hasPrimaryMixedLine;	// 0x353844e5
// converted property getter: - (bool)hasSecondaryMixedArea;	// 0x35384505
// converted property getter: - (bool)hasSecondaryMixedColumn;	// 0x35384525
// converted property getter: - (bool)hasSecondaryMixedLine;	// 0x35384545
- (void)readAndCacheXlChartDataSeries;	// 0x353844a1
- (id)resources;	// 0x3538448d
// converted property setter: - (void)setChart:(id)chart;	// 0x35287e4d
// converted property setter: - (void)setHasPrimaryMixedArea:(bool)area;	// 0x353844b5
// converted property setter: - (void)setHasPrimaryMixedColumn:(bool)column;	// 0x353844d5
// converted property setter: - (void)setHasPrimaryMixedLine:(bool)line;	// 0x353844f5
// converted property setter: - (void)setHasSecondaryMixedArea:(bool)area;	// 0x35384515
// converted property setter: - (void)setHasSecondaryMixedColumn:(bool)column;	// 0x35384535
// converted property setter: - (void)setHasSecondaryMixedLine:(bool)line;	// 0x35384555
- (void)setXlCurrentSeriesIndex:(int)index;	// 0x35292929
- (id)workbook;	// 0x35384489
- (XlChartDataSeries *)xlChartDataSeriesAtIndex:(int)index;	// 0x352928d1
- (XlChartDataSeries *)xlCurrentChartDataSeries;	// 0x3538463d
- (int)xlCurrentChartDataSeriesIndex;	// 0x35384491
- (int)xlSeriesCount;	// 0x352928c1
@end

