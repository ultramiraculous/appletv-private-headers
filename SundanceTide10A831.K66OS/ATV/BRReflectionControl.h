/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRReflectionControl : BRControl {
	float _reflectionAmount;	// 84 = 0x54
	float _reflectionOffset;	// 88 = 0x58
	BOOL _flipped;	// 92 = 0x5c
}
@property(assign) BOOL flipped;	// G=0x2f4d4d; S=0x2f4bd1; converted property
@property(assign) float reflectionAmount;	// G=0x2f4ba1; S=0x2f4b3d; converted property
@property(assign) float reflectionOffset;	// G=0x2f4bc1; S=0x2f4bb1; converted property
- (id)init;	// 0x2f4a85
- (id)_generateFiltersFrom:(float)from to:(float)to;	// 0x2f4d5d
- (id)_reflectionFilters;	// 0x2f4e89
- (id)_unflippedReflectionFilters;	// 0x2f4ec9
// converted property getter: - (BOOL)flipped;	// 0x2f4d4d
// converted property getter: - (float)reflectionAmount;	// 0x2f4ba1
// converted property getter: - (float)reflectionOffset;	// 0x2f4bc1
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x2f4bd1
- (void)setImage:(id)image;	// 0x2f4af9
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x2f4b3d
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x2f4bb1
@end
