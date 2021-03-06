/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDDateAxis : CHDAxis {
@private
	bool mAutomatic;	// 128 = 0x80
	double mMajorUnitValue;	// 132 = 0x84
	double mMinorUnitValue;	// 140 = 0x8c
	int mMinorTimeUnit;	// 148 = 0x94
	int mMajorTimeUnit;	// 152 = 0x98
	int mBaseTimeUnit;	// 156 = 0x9c
}
@property(assign, getter=isAutomatic) bool automatic;	// G=0x32d0d41d; S=0x32ca5839; converted property
@property(assign) int baseTimeUnit;	// G=0x32d0d46d; S=0x32c9bc3d; converted property
@property(assign) int majorTimeUnit;	// G=0x32d0d44d; S=0x32c9bc2d; converted property
@property(assign) double majorUnitValue;	// G=0x32d0d42d; S=0x32c9bbe9; converted property
@property(assign) int minorTimeUnit;	// G=0x32d0d45d; S=0x32c9bc1d; converted property
@property(assign) double minorUnitValue;	// G=0x32d0d43d; S=0x32c9bc09; converted property
- (id)initWithResources:(id)resources;	// 0x32c9bb49
// converted property getter: - (int)baseTimeUnit;	// 0x32d0d46d
// converted property getter: - (bool)isAutomatic;	// 0x32d0d41d
- (bool)isDate;	// 0x32d0d419
// converted property getter: - (int)majorTimeUnit;	// 0x32d0d44d
// converted property getter: - (double)majorUnitValue;	// 0x32d0d42d
// converted property getter: - (int)minorTimeUnit;	// 0x32d0d45d
// converted property getter: - (double)minorUnitValue;	// 0x32d0d43d
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x32ca5839
// converted property setter: - (void)setBaseTimeUnit:(int)unit;	// 0x32c9bc3d
// converted property setter: - (void)setMajorTimeUnit:(int)unit;	// 0x32c9bc2d
// converted property setter: - (void)setMajorUnitValue:(double)value;	// 0x32c9bbe9
// converted property setter: - (void)setMinorTimeUnit:(int)unit;	// 0x32c9bc1d
// converted property setter: - (void)setMinorUnitValue:(double)value;	// 0x32c9bc09
@end

