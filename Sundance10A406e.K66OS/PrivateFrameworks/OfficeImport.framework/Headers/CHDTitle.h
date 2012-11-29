/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, OADGraphicProperties, CHDChart, CHDFormula;

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
@property(retain) id graphicProperties;	// G=0x34fd66ed; S=0x34fcbad5; converted property
@property(assign) bool isAutoGenerated;	// G=0x3501bfad; S=0x34fcb9c9; converted property
@property(assign) bool isPositionAutoGenerated;	// G=0x3504dd75; S=0x34fcbb19; converted property
@property(assign) bool isSizeAutoGenerated;	// G=0x3504dd89; S=0x3501bf9d; converted property
@property(retain) id lastCachedName;	// G=0x34fd66cd; S=0x34fcba91; converted property
@property(retain) id name;	// G=0x3504dd65; S=0x34fcb92d; converted property
@property(assign) double titleRotationAngle;	// G=0x3504dead; S=0x34fcbb29; converted property
- (id)initWithChart:(id)chart;	// 0x34fcb811
- (void)dealloc;	// 0x34fdd5bd
// converted property getter: - (id)graphicProperties;	// 0x34fd66ed
// converted property getter: - (bool)isAutoGenerated;	// 0x3501bfad
- (bool)isCachedTitleEmpty;	// 0x34fd1085
// converted property getter: - (bool)isPositionAutoGenerated;	// 0x3504dd75
// converted property getter: - (bool)isSizeAutoGenerated;	// 0x3504dd89
- (bool)isTitleVisible;	// 0x3504dd9d
// converted property getter: - (id)lastCachedName;	// 0x34fd66cd
// converted property getter: - (id)name;	// 0x3504dd65
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x34fcbad5
// converted property setter: - (void)setIsAutoGenerated:(bool)generated;	// 0x34fcb9c9
// converted property setter: - (void)setIsPositionAutoGenerated:(bool)generated;	// 0x34fcbb19
// converted property setter: - (void)setIsSizeAutoGenerated:(bool)generated;	// 0x3501bf9d
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x34fcba91
// converted property setter: - (void)setName:(id)name;	// 0x34fcb92d
// converted property setter: - (void)setTitleRotationAngle:(double)angle;	// 0x34fcbb29
// converted property getter: - (double)titleRotationAngle;	// 0x3504dead
@end
