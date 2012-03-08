/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDAxesCollection, OADGraphicProperties, CHDChartTypesCollection;

__attribute__((visibility("hidden")))
@interface CHDPlotArea : NSObject {
@private
	CHDChartTypesCollection *mChartTypes;	// 4 = 0x4
	CHDAxesCollection *mAxes;	// 8 = 0x8
	OADGraphicProperties *mGraphicProperties;	// 12 = 0xc
	bool mCategoryAxesReversed;	// 16 = 0x10
	bool mCategoryAxesReversedOverridden;	// 17 = 0x11
	bool mContainsVolumeStockType;	// 18 = 0x12
}
@property(assign) bool containsVolumeStockType;	// G=0x3299a065; S=0x3299a075; converted property
@property(retain) id graphicProperties;	// G=0x328abcd5; S=0x3289c7f1; converted property
- (id)initWithChart:(id)chart;	// 0x328933f9
- (id)axes;	// 0x3289cc15
- (id)chartTypes;	// 0x3289fd35
// converted property getter: - (bool)containsVolumeStockType;	// 0x3299a065
- (void)dealloc;	// 0x328ae999
// converted property getter: - (id)graphicProperties;	// 0x328abcd5
- (bool)hasSecondaryAxis;	// 0x3299a255
- (bool)hasSecondaryYAxisDeleted;	// 0x3299a1b5
- (bool)isCategoryAxesReversed:(bool)reversed;	// 0x328a769d
- (void)markSecondaryAxes;	// 0x3299a085
// converted property setter: - (void)setContainsVolumeStockType:(bool)type;	// 0x3299a075
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x3289c7f1
@end
