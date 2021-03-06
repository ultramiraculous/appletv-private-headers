/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class CHDChart, EDString, CHDFormula, OADGraphicProperties;

@interface CHDTitle : NSObject {
	CHDChart *mChart;	// 4 = 0x4
	bool mIsAutoGenerated;	// 8 = 0x8
	bool mPositionAutoGenerated;	// 9 = 0x9
	bool mSizeAutoGenerated;	// 10 = 0xa
	CHDFormula *mName;	// 12 = 0xc
	EDString *mLastCachedName;	// 16 = 0x10
	OADGraphicProperties *mGraphicProperties;	// 20 = 0x14
	double mRotation;	// 24 = 0x18
}
@property(retain) id graphicProperties;	// G=0x317ffee5; S=0x317f589d; converted property
@property(assign) bool isAutoGenerated;	// G=0x3188449d; S=0x317f5791; converted property
@property(assign) bool isPositionAutoGenerated;	// G=0x318b1c4d; S=0x317f58e1; converted property
@property(assign) bool isSizeAutoGenerated;	// G=0x318b1c5d; S=0x3188448d; converted property
@property(retain) id lastCachedName;	// G=0x317ffec5; S=0x317f5859; converted property
@property(retain) id name;	// G=0x318b1c3d; S=0x317f56f5; converted property
@property(assign) double titleRotationAngle;	// G=0x318b1d75; S=0x317f58f1; converted property
- (id)initWithChart:(id)chart;	// 0x317f5639
- (void)dealloc;	// 0x31805951
// converted property getter: - (id)graphicProperties;	// 0x317ffee5
// converted property getter: - (bool)isAutoGenerated;	// 0x3188449d
- (bool)isCachedTitleEmpty;	// 0x317fa231
// converted property getter: - (bool)isPositionAutoGenerated;	// 0x318b1c4d
// converted property getter: - (bool)isSizeAutoGenerated;	// 0x318b1c5d
- (bool)isTitleVisible;	// 0x318b1c6d
// converted property getter: - (id)lastCachedName;	// 0x317ffec5
// converted property getter: - (id)name;	// 0x318b1c3d
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x317f589d
// converted property setter: - (void)setIsAutoGenerated:(bool)generated;	// 0x317f5791
// converted property setter: - (void)setIsPositionAutoGenerated:(bool)generated;	// 0x317f58e1
// converted property setter: - (void)setIsSizeAutoGenerated:(bool)generated;	// 0x3188448d
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x317f5859
// converted property setter: - (void)setName:(id)name;	// 0x317f56f5
// converted property setter: - (void)setTitleRotationAngle:(double)angle;	// 0x317f58f1
// converted property getter: - (double)titleRotationAngle;	// 0x318b1d75
@end

