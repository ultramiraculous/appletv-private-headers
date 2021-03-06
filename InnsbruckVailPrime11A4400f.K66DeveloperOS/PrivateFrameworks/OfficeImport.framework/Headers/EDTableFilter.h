/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>


@interface EDTableFilter : NSObject {
	int mScale;	// 4 = 0x4
	int mOperator;	// 8 = 0x8
	double mValue;	// 12 = 0xc
	double mFilterValue;	// 20 = 0x14
}
@property(assign) double filterValue;	// G=0x319b0e19; S=0x319b0e31; converted property
@property(assign) int operatorType;	// G=0x319b0e65; S=0x319b0e75; converted property
@property(assign) int scale;	// G=0x319b0e45; S=0x319b0e55; converted property
@property(assign) double value;	// G=0x319b0ded; S=0x319b0e05; converted property
+ (id)edTableFilter;	// 0x319b0da9
// converted property getter: - (double)filterValue;	// 0x319b0e19
// converted property getter: - (int)operatorType;	// 0x319b0e65
// converted property getter: - (int)scale;	// 0x319b0e45
// converted property setter: - (void)setFilterValue:(double)value;	// 0x319b0e31
// converted property setter: - (void)setOperatorType:(int)type;	// 0x319b0e75
// converted property setter: - (void)setScale:(int)scale;	// 0x319b0e55
// converted property setter: - (void)setValue:(double)value;	// 0x319b0e05
// converted property getter: - (double)value;	// 0x319b0ded
@end

