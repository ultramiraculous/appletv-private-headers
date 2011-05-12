/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartTypeWithGrouping.h"


__attribute__((visibility("hidden")))
@interface CHDBar2DType : CHDChartTypeWithGrouping {
@private
	int mGapWidth;	// 28 = 0x1c
	bool mColumn;	// 32 = 0x20
	int mOverlap;	// 36 = 0x24
}
@property(assign, getter=isColumn) bool column;	// G=0x344ef489; S=0x344eafd1; converted property
@property(assign) int gapWidth;	// G=0x34574fed; S=0x344eafb9; converted property
@property(assign) int overlap;	// G=0x34574fdd; S=0x344eafa9; converted property
- (id)initWithChart:(id)chart;	// 0x344ead6d
- (int)defaultLabelPosition;	// 0x345c25b9
// converted property getter: - (int)gapWidth;	// 0x34574fed
// converted property getter: - (bool)isColumn;	// 0x344ef489
- (bool)isHorizontal;	// 0x344ed5dd
// converted property getter: - (int)overlap;	// 0x34574fdd
// converted property setter: - (void)setColumn:(bool)column;	// 0x344eafd1
// converted property setter: - (void)setGapWidth:(int)width;	// 0x344eafb9
// converted property setter: - (void)setOverlap:(int)overlap;	// 0x344eafa9
@end
