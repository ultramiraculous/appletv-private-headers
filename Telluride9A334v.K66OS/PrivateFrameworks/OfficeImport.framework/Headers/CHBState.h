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
@property(retain) id chart;	// G=0x356434d9; S=0x35642e4d; converted property
@property(assign) bool hasPrimaryMixedArea;	// G=0x3573f4a5; S=0x3573f4b5; converted property
@property(assign) bool hasPrimaryMixedColumn;	// G=0x3573f4c5; S=0x3573f4d5; converted property
@property(assign) bool hasPrimaryMixedLine;	// G=0x3573f4e5; S=0x3573f4f5; converted property
@property(assign) bool hasSecondaryMixedArea;	// G=0x3573f505; S=0x3573f515; converted property
@property(assign) bool hasSecondaryMixedColumn;	// G=0x3573f525; S=0x3573f535; converted property
@property(assign) bool hasSecondaryMixedLine;	// G=0x3573f545; S=0x3573f555; converted property
- (id)init;	// 0x35642d9d
- (id)autoStyling;	// 0x35644ff9
// converted property getter: - (id)chart;	// 0x356434d9
- (unsigned)chartGroupIndexForType:(int)type isForPrimary:(bool)primary;	// 0x3573f565
- (void)dealloc;	// 0x35651725
- (void)deleteXlChartDataSeriesCollection;	// 0x35645751
// converted property getter: - (bool)hasPrimaryMixedArea;	// 0x3573f4a5
// converted property getter: - (bool)hasPrimaryMixedColumn;	// 0x3573f4c5
// converted property getter: - (bool)hasPrimaryMixedLine;	// 0x3573f4e5
// converted property getter: - (bool)hasSecondaryMixedArea;	// 0x3573f505
// converted property getter: - (bool)hasSecondaryMixedColumn;	// 0x3573f525
// converted property getter: - (bool)hasSecondaryMixedLine;	// 0x3573f545
- (void)readAndCacheXlChartDataSeries;	// 0x3573f4a1
- (id)resources;	// 0x3573f48d
// converted property setter: - (void)setChart:(id)chart;	// 0x35642e4d
// converted property setter: - (void)setHasPrimaryMixedArea:(bool)area;	// 0x3573f4b5
// converted property setter: - (void)setHasPrimaryMixedColumn:(bool)column;	// 0x3573f4d5
// converted property setter: - (void)setHasPrimaryMixedLine:(bool)line;	// 0x3573f4f5
// converted property setter: - (void)setHasSecondaryMixedArea:(bool)area;	// 0x3573f515
// converted property setter: - (void)setHasSecondaryMixedColumn:(bool)column;	// 0x3573f535
// converted property setter: - (void)setHasSecondaryMixedLine:(bool)line;	// 0x3573f555
- (void)setXlCurrentSeriesIndex:(int)index;	// 0x3564d929
- (id)workbook;	// 0x3573f489
- (XlChartDataSeries *)xlChartDataSeriesAtIndex:(int)index;	// 0x3564d8d1
- (XlChartDataSeries *)xlCurrentChartDataSeries;	// 0x3573f63d
- (int)xlCurrentChartDataSeriesIndex;	// 0x3573f491
- (int)xlSeriesCount;	// 0x3564d8c1
@end

