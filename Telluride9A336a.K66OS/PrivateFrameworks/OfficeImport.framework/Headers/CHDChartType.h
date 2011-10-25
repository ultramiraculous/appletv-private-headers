/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDChart, CHDSeriesCollection, EDCollection, CHDDataLabel;

__attribute__((visibility("hidden")))
@interface CHDChartType : NSObject {
@private
	CHDChart *mChart;	// 4 = 0x4
	EDCollection *mAxisIds;	// 8 = 0x8
	CHDSeriesCollection *mSeries;	// 12 = 0xc
	CHDDataLabel *mDefaultDataLabel;	// 16 = 0x10
	bool mVaryColors;	// 20 = 0x14
}
@property(retain) id defaultDataLabel;	// G=0x34de2cd9; S=0x34ced951; converted property
@property(retain) id seriesCollection;	// G=0x34ceccf5; S=0x34d6ade9; converted property
@property(assign, getter=isVaryColors) bool varyColors;	// G=0x34d69a75; S=0x34cea8a1; converted property
+ (id)chartTypeWithChart:(id)chart;	// 0x34d604a5
+ (bool)is3DType;	// 0x34d7f311
- (id)initWithChart:(id)chart;	// 0x34cea791
- (id)axes;	// 0x34cf3931
- (id)axisForClass:(Class)aClass;	// 0x34de2d35
- (id)axisIds;	// 0x34cea8b1
- (id)chart;	// 0x34cee0c5
- (id)contentFormat;	// 0x34de2d15
- (void)dealloc;	// 0x34cf8a0d
// converted property getter: - (id)defaultDataLabel;	// 0x34de2cd9
- (int)defaultLabelPosition;	// 0x34de2ce9
- (id)defaultTitleWithResources:(id)resources;	// 0x34d80171
- (bool)isHorizontal;	// 0x34cee1a9
- (bool)isPlotedOnSecondaryAxis;	// 0x34de2e11
// converted property getter: - (bool)isVaryColors;	// 0x34d69a75
// converted property getter: - (id)seriesCollection;	// 0x34ceccf5
// converted property setter: - (void)setDefaultDataLabel:(id)label;	// 0x34ced951
// converted property setter: - (void)setSeriesCollection:(id)collection;	// 0x34d6ade9
// converted property setter: - (void)setVaryColors:(bool)colors;	// 0x34cea8a1
@end

