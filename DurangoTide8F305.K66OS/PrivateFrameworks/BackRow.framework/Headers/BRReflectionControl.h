/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRReflectionControl : BRControl {
@private
	float _reflectionAmount;	// 44 = 0x2c
	float _reflectionOffset;	// 48 = 0x30
	BOOL _flipped;	// 52 = 0x34
}
@property(assign) BOOL flipped;	// G=0x3297ab39; S=0x3292376d; converted property
@property(assign) float reflectionAmount;	// G=0x329437e9; S=0x329236d5; converted property
@property(assign) float reflectionOffset;	// G=0x329437f9; S=0x3292375d; converted property
- (id)init;	// 0x3292366d
- (id)_generateFiltersFrom:(float)from to:(float)to;	// 0x329238b9
- (id)_reflectionFilters;	// 0x32923879
- (id)_unflippedReflectionFilters;	// 0x3297ab49
// converted property getter: - (BOOL)flipped;	// 0x3297ab39
// converted property getter: - (float)reflectionAmount;	// 0x329437e9
// converted property getter: - (float)reflectionOffset;	// 0x329437f9
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x3292376d
- (void)setImage:(id)image;	// 0x329394bd
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x329236d5
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x3292375d
@end
