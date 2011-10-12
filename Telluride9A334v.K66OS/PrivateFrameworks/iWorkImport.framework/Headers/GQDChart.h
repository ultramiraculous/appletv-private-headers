/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDChartModel, GQDSStyle, GQDChartLegend;

__attribute__((visibility("hidden")))
@interface GQDChart : GQDGraphic {
@private
	GQDChartLegend *mLegend;	// 40 = 0x28
	BOOL mIsLegendRetained;	// 44 = 0x2c
	GQDChartModel *mModel;	// 48 = 0x30
	GQDSStyle *mStyle;	// 52 = 0x34
	long mType;	// 56 = 0x38
}
@property(retain) id legend;	// G=0x32bccdbd; S=0x32bcce41; converted property
+ (const StateSpec *)stateForReading;	// 0x32bccdb1
- (void)dealloc;	// 0x32bcd591
- (id)graphicStyle;	// 0x32bccded
// converted property getter: - (id)legend;	// 0x32bccdbd
- (id)model;	// 0x32bccdcd
// converted property setter: - (void)setLegend:(id)legend;	// 0x32bcce41
- (id)style;	// 0x32bccddd
- (long)type;	// 0x32bccdfd
@end

