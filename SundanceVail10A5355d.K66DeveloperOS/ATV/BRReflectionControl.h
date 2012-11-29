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
	float _reflectionAmount;	// 80 = 0x50
	float _reflectionOffset;	// 84 = 0x54
	BOOL _flipped;	// 88 = 0x58
}
@property(assign) BOOL flipped;	// G=0x2dc9e5; S=0x2dc869; converted property
@property(assign) float reflectionAmount;	// G=0x2dc839; S=0x2dc7d5; converted property
@property(assign) float reflectionOffset;	// G=0x2dc859; S=0x2dc849; converted property
- (id)init;	// 0x2dc71d
- (id)_generateFiltersFrom:(float)from to:(float)to;	// 0x2dc9f5
- (id)_reflectionFilters;	// 0x2dcb21
- (id)_unflippedReflectionFilters;	// 0x2dcb61
// converted property getter: - (BOOL)flipped;	// 0x2dc9e5
// converted property getter: - (float)reflectionAmount;	// 0x2dc839
// converted property getter: - (float)reflectionOffset;	// 0x2dc859
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x2dc869
- (void)setImage:(id)image;	// 0x2dc791
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x2dc7d5
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x2dc849
@end
